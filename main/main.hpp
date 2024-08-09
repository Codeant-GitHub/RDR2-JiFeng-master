#pragma once
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <stdio.h> 
#include <algorithm>
#include <vector>
#include <Psapi.h>
#include <map>
#include <time.h>
#include <DirectXMath.h>

#include <sstream>
#include <string>
#include <string_view>

#include <algorithm>
#include <functional>
#include <utility>

#pragma comment(lib, "winmm.lib")
#include "../invoker/invoker.hpp"
#include "../invoker/natives.hpp"
#include "../libs/Minhook/include/MinHook.h"
#include "../memory/memory.hpp"
#include "../gui/enums.h"
#include "../gui/Game_List.hpp"
#include "../gui/Game_Functions.hpp"
#include "../gui/Menu_Constructor.hpp"
#include "../gui/g_ui.hpp"

#define M_PI       3.14159265358979323846
#define DEG2RAD( x ) ( ( float )( x ) * ( float )( ( float )( M_PI ) / 180.0f ) )
#define RAD2DEG( x ) ( ( float )( x ) * ( float )( 180.0f / ( float )( M_PI ) ) )

typedef BOOL(__fastcall* is_dlc_present_fn)(__int64 a1, __int64 a2);

typedef enum _MEMORY_INFORMATION_CLASS {
	MemoryBasicInformation
} MEMORY_INFORMATION_CLASS;

typedef NTSTATUS(NTAPI* NtQueryVirtualMemory_fn)(HANDLE ProcessHandle,
	PVOID BaseAddress, MEMORY_INFORMATION_CLASS MemoryInformationClass,
	PVOID Buffer, ULONG Length, PULONG ResultLength);

namespace fiber
{
	extern void wait_for(DWORD ms);
}

namespace hooks
{
	namespace globals
	{
		extern uintptr_t  base_address;
	}

	namespace original
	{
		extern is_dlc_present_fn o_does_cam_exist;
		extern NtQueryVirtualMemory_fn o_ntqvm;
	}

	extern BOOL __fastcall does_cam_exist_hook(__int64 a1, __int64 a2);

	extern 	NTSTATUS NTAPI NtQueryVirtualMemory_hook(
		IN HANDLE ProcessHandle,
		IN PVOID BaseAddress,
		IN MEMORY_INFORMATION_CLASS MemoryInformationClass,
		OUT PVOID Buffer,
		IN ULONG Length,
		OUT PULONG ResultLength OPTIONAL);

	extern void initialize();
}