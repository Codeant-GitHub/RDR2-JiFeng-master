#include "main.hpp"

namespace fiber {
    static HANDLE main_fiber = nullptr;
    static DWORD time_to_wake_up = 0;

    void wait_for(DWORD ms) {
        time_to_wake_up = timeGetTime() + ms;
        SwitchToFiber(main_fiber);
    }

    void __stdcall fiber_thread(LPVOID params) 
    {
        srand(GetTickCount64());

        printf("加载成功！见到游戏人物后 按insert或者F8呼出，祝您游戏愉快\n");

        printf("==============================================\n");

        printf("加载成功！此窗口不要关闭。祝您游戏愉快\n");

        printf("\n");

        printf("见到游戏人物后：F8或者insert键呼出菜单\n");

        printf("小键盘8 = 菜单上移\n");

        printf("小键盘2 = 菜单下移\n");

        printf("小键盘5 = 确定\n");

        printf("小键盘0 = 返回\n");

        printf("小键盘6 = 传送到目标点\n");

        printf("无小键盘使用方法：方向键上下控制，左返回，右确定\n");

        printf("===================================================\n");

        printf("刷金、经验、美元的方法在使用说明里，不许再问了，请自行查看。\n\n");

        while (true)
        {
            g_ui::Menu_Loop();
            wait_for(0);
        }
    }

    void on_tick() {
        if (!main_fiber)
            main_fiber = ConvertThreadToFiber(nullptr);

        if (time_to_wake_up > timeGetTime())
            return;

        static HANDLE fiber_handle = nullptr;
        if (fiber_handle) {
            SwitchToFiber(fiber_handle);
        }
        else {
            fiber_handle = CreateFiber(NULL, fiber_thread, nullptr);
        }
    }
}

namespace hooks
{
    namespace globals
    {
        uintptr_t base_address;
    }

    namespace original
    {
        is_dlc_present_fn o_does_cam_exist;
        NtQueryVirtualMemory_fn o_ntqvm;
    }

    __int64 __fastcall does_cam_exist_hook(__int64 a1, __int64 a2) {

        fiber::on_tick();
        return original::o_does_cam_exist(a1, a2);
    }

    NTSTATUS NTAPI NtQueryVirtualMemory_hook(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID Buffer,
        ULONG Length,
        PULONG ResultLength OPTIONAL)
    {
        return original::o_ntqvm(ProcessHandle, BaseAddress, MemoryInformationClass, Buffer, Length, ResultLength);
    }

    void initialize() {

        if (AllocConsole()) {
            freopen("CONIN$", "r", stdin);
            freopen("CONOUT$", "w", stdout);
            freopen("CONOUT$", "w", stderr);
        }

        globals::base_address = uintptr_t(GetModuleHandleA(0));
        auto hwnd_ = FindWindowA(0, "Red Dead Redemption 2");

        if (MH_Initialize() == MH_OK) {
            MH_CreateHookApi(L"ntdll.dll", "NtQueryVirtualMemory", NtQueryVirtualMemory_hook, reinterpret_cast<void**>(&original::o_ntqvm));
            auto does_cam_exist = memory::find_signature(0, "\x40\x53\x48\x83\xEC\x20\x33\xDB\x81\xF9", "xxxxxxxxxx");
            MH_CreateHook((PVOID)does_cam_exist, does_cam_exist_hook, reinterpret_cast<void**>(&original::o_does_cam_exist));
            MH_EnableHook(MH_ALL_HOOKS);
        }
    }
}
