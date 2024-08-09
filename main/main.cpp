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

        printf("���سɹ���������Ϸ����� ��insert����F8������ף����Ϸ���\n");

        printf("==============================================\n");

        printf("���سɹ����˴��ڲ�Ҫ�رա�ף����Ϸ���\n");

        printf("\n");

        printf("������Ϸ�����F8����insert�������˵�\n");

        printf("С����8 = �˵�����\n");

        printf("С����2 = �˵�����\n");

        printf("С����5 = ȷ��\n");

        printf("С����0 = ����\n");

        printf("С����6 = ���͵�Ŀ���\n");

        printf("��С����ʹ�÷�������������¿��ƣ��󷵻أ���ȷ��\n");

        printf("===================================================\n");

        printf("ˢ�𡢾��顢��Ԫ�ķ�����ʹ��˵������������ˣ������в鿴��\n\n");

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

    BOOL __fastcall does_cam_exist_hook(__int64 a1, __int64 a2) {

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
            auto does_cam_exist = (void*)get_handler(0x153AD457764FD704);
            MH_CreateHook(does_cam_exist, does_cam_exist_hook, reinterpret_cast<void**>(&original::o_does_cam_exist));
            MH_EnableHook(MH_ALL_HOOKS);
        }
    }
}
