#pragma once

namespace g_ui
{
	extern int submenu;
	extern int currentOption;

	extern void NULLVOID();
	extern void CloseMenu();
	extern void changeSubmenu(int newSubmenu);
	extern void addTitle(const char* title);
	extern void addHeader(const char* header);
	extern void addOption(const char* option, std::function<void()> func = [] {});
	extern bool addSubmenuOption(const char* option, int submenu);
	extern void addBoolOption(const char* option, bool* var, std::function<void()> func = [] {});
	extern void addIntOption(const char* option, int* var, int step = 1, bool fastPress = false, int min = -2147483647, int max = 2147483647);
	extern void addIntOption(const char* option, int* var, std::function<void()> func = [] {}, int step = 1, bool fastPress = false, int min = -2147483647, int max = 2147483647);
	extern void addFloatOption(const char* option, float* var, float step, std::function<void()> func = [] {}, bool fastPress = false, float min = -3.4028235e38, float max = 3.4028235e38);
	extern void addStringOption(const char* option, const char* var, int* intvar, int elementCount, std::function<void()> func = [] {}, bool fastPress = false);
	extern void displayOptionIndex();
	extern void resetVars();
	extern void ButtonMonitoring();
}