#pragma once

namespace g_ui
{
	extern Hash joaat(const char* string);
	extern void DrawSprite(const char* category, const char* sprite, float x, float y, float scalex, float scaley, float rotation, int r, int g, int b, int a);
	extern void draw_Text(const char* text, float x, float y, int r, int g, int b, int a, bool centered = false, float sx = 0.342f, float sy = 0.342f);
	extern void drawRect(float x, float y, float width, float height, int r, int g, int b, int a);
	extern void PrintSubtitle(const char* text);

	extern void request_control_of_entity(Entity entity);
	extern void request_control_of_network_id(Entity entity);
	extern void MenuItemPlayerTeleport(float x, float y, float z);

	extern void PreventFallFunction(Ped ped, bool p1);
	extern void SpawnCharacterOrAnimalFunction(Ped playerPed, Hash pedHash);
	extern void SpawnEntityOrVehicleFunction(Hash model, Ped playerPed, float x, float y, float z, float heading, bool wrapInMenuItem, bool setProperlyInMenu, bool resetHeading, bool noPeds);
	extern void SetCurrentGameWeatherFunction(const char* weatherName);
	extern void FreezePlayerInPlaceFunction(Ped ped);
	extern void ImprisonFunction(Hash chestHash, Ped playerPed, BOOL toggle = true, float height = 0.0f);
	extern void AttachModelFunction(const char* object, Ped ped, float height = 0.0f, float forwardOffset = 0.0f, float rotationOffset = 0.0f, int boneId = 31086);
}