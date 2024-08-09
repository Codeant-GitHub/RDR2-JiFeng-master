#pragma once
#include "../main/main.hpp"
#include "Game_Functions.hpp"
#pragma execution_character_set("utf-8")

namespace g_ui
{
	Hash joaat(const char* string)
	{
		return MISC::GET_HASH_KEY(string);
	}

	void DrawSprite(const char* category, const char* sprite, float x, float y, float scalex, float scaley, float rotation, int r, int g, int b, int a)
	{
		float fX = x + scalex / 2;
		float fY = y + scaley / 2;
		if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED(sprite))
			TXD::REQUEST_STREAMED_TEXTURE_DICT(sprite, 0);
		GRAPHICS::DRAW_SPRITE(category, sprite, fX, fY, scalex, scaley, rotation, r, g, b, a, 1);
		TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(category);
	}

	void draw_Text(const char* text, float x, float y, int r, int g, int b, int a, bool centered, float sx, float sy)
	{
		UIDEBUG::_BG_SET_TEXT_COLOR(r, g, b, a);
		UIDEBUG::_BG_SET_TEXT_SCALE(sx, sy);
		const char* literalString = MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", text);
		UIDEBUG::_BG_DISPLAY_TEXT(literalString, x, y);
	}

	void drawRect(float x, float y, float width, float height, int r, int g, int b, int a)
	{
		float fX = x + width / 2;
		float fY = y + height / 2;
		GRAPHICS::DRAW_RECT(fX, fY, width, height, r, g, b, a, true, false);
	}

	void PrintSubtitle(const char* text)
	{
		const char* literalString = MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", text);
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(literalString);
		UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
	}

	std::string get_clipboard_text()
	{
		if (!OpenClipboard(nullptr))
			return "";

		HANDLE data = GetClipboardData(CF_TEXT);
		if (data == nullptr)
			return "";

		char* pszText = static_cast<char*>(GlobalLock(data));
		if (pszText == nullptr)
			return "";

		std::string text(pszText);
		GlobalUnlock(data);
		CloseClipboard();

		return text;
	}

	void request_control_of_entity(Entity entity)
	{
		int tick = 0;
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(entity);
		while (tick <= 50) {
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(entity))
				Sleep(0);
			else
				return;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(entity);
			tick++;
		}
	}

	void request_control_of_network_id(Entity entity)
	{
		int netid = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(entity);
		int tick = 0;
		while (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(netid) && tick <= 50)
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(netid);
			tick++;
		}
	}

	void MenuItemPlayerTeleport(float x, float y, float z)
	{
		Entity e = PLAYER::PLAYER_PED_ID();
		if (PED::IS_PED_ON_MOUNT(e))
			e = PED::GET_MOUNT(e);
		else
			if (PED::IS_PED_IN_ANY_VEHICLE(e, false))
				e = PED::GET_VEHICLE_PED_IS_USING(e);
		ENTITY::SET_ENTITY_COORDS(e, x, y, z, 0, 0, 1, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_USING(e), 1.f);
	}

    void PreventFallFunction(Ped ped, bool p1)
    {
        if (!p1)
        {
            PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(ped, 1048575);
            PED::SET_RAGDOLL_BLOCKING_FLAGS(ped, 1);
        }
        PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(ped, !p1);
        PED::SET_PED_CAN_RAGDOLL(ped, !p1);
    }

    void SpawnCharacterOrAnimalFunction(Ped playerPed, Hash pedHash)
    {
        STREAMING::REQUEST_MODEL(pedHash, 0);
        if (STREAMING::HAS_MODEL_LOADED(pedHash))
        {
            Vector3 pos = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playerPed, 0.f, 5.f, 0.f);
            Ped ped = PED::CREATE_PED(pedHash, pos.x, pos.y, pos.z, 0.f, true, true, 0, 0);
            request_control_of_network_id(ped);
            PED::SET_PED_RANDOM_COMPONENT_VARIATION(ped, 6);
            PED::_SET_RANDOM_OUTFIT_VARIATION(ped, true);

            STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(pedHash);
        }
    }

    void SpawnEntityOrVehicleFunction(Hash model, Ped playerPed, float x, float y, float z, float heading, bool wrapInMenuItem, bool setProperlyInMenu, bool resetHeading, bool noPeds)
    {
        if (STREAMING::IS_MODEL_IN_CDIMAGE(model) && STREAMING::IS_MODEL_VALID(model))
        {
            STREAMING::REQUEST_MODEL(model, false);
            if (!STREAMING::HAS_MODEL_LOADED(model))
            {
                while (!STREAMING::HAS_MODEL_LOADED(model)) {
                    fiber::wait_for(0);
                }
            }

            float playerHeading = ENTITY::GET_ENTITY_HEADING(playerPed) + 5.0f;
            float finalHeading = playerHeading + heading;
            Vector3 coords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playerPed, x, y, z);
            Vehicle veh = VEHICLE::CREATE_VEHICLE(model, coords.x, coords.y, coords.z, finalHeading, 0, 0, noPeds, 0);
            DECORATOR::DECOR_SET_BOOL(veh, "wagon_block_honor", true);
            PED::SET_PED_RANDOM_COMPONENT_VARIATION(veh, false);

            if (setProperlyInMenu)
            {
                VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veh, 0);
                fiber::wait_for(100);
            }
            if (resetHeading || wrapInMenuItem)
                ENTITY::SET_ENTITY_HEADING(veh, wrapInMenuItem ? playerHeading : finalHeading);
            fiber::wait_for(0);
            if (ENTITY::DOES_ENTITY_EXIST(veh))
            {
                request_control_of_network_id(veh);
                if (ENTITY::IS_ENTITY_VISIBLE(veh))
                {
                }
                else {
                    ENTITY::SET_ENTITY_VISIBLE(veh, true);
                }
                ENTITY::SET_ENTITY_ALPHA(veh, 255, 0);

                if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veh))
                {
                }

                auto networkId = NETWORK::PED_TO_NET(veh);
                PED::SET_PED_RANDOM_COMPONENT_VARIATION(veh, false);
                NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(veh);
                if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(veh))
                    NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(networkId, true);

                fiber::wait_for(150);
                ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veh);
                STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
            }
        }
    }

    void SetCurrentGameWeatherFunction(const char* weatherName)
    {
        Hash weather = g_ui::joaat(weatherName);
        MISC::CLEAR_OVERRIDE_WEATHER();
        MISC::SET_WEATHER_TYPE(weather, true, true, true, 0.0, true);
        MISC::CLEAR_WEATHER_TYPE_PERSIST();
        MISC::_CLEAR_WEATHER_VARIATION(weatherName, true);
        MISC::_SET_WEATHER_TYPE_2(weather, 1, 1, 1, true);
        MISC::_SET_OVERRIDE_WEATHER(weather);
    }

    void FreezePlayerInPlaceFunction(Ped ped)
    {
        request_control_of_entity(ped);

        TASK::CLEAR_PED_TASKS_IMMEDIATELY(ped, false, false);
        TASK::CLEAR_PED_TASKS(ped, false, false);
        TASK::CLEAR_PED_SECONDARY_TASK(ped);

        Vehicle veh = PED::GET_VEHICLE_PED_IS_USING(ped);
        request_control_of_entity(veh);

        TASK::CLEAR_PED_TASKS_IMMEDIATELY(veh, false, false);
        TASK::CLEAR_PED_TASKS(veh, false, false);
        TASK::CLEAR_PED_SECONDARY_TASK(veh);

        Ped horse = PED::GET_MOUNT(ped);
        request_control_of_entity(horse);

        TASK::CLEAR_PED_TASKS_IMMEDIATELY(horse, false, false);
        TASK::CLEAR_PED_TASKS(horse, false, false);
        TASK::CLEAR_PED_SECONDARY_TASK(horse);
    }

    void ImprisonFunction(Hash chestHash, Ped playerPed, BOOL toggle, float height)
    {
        Vector3 coords = ENTITY::GET_ENTITY_COORDS(playerPed, 1, false);
        float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
        if (STREAMING::IS_MODEL_IN_CDIMAGE(chestHash) && STREAMING::IS_MODEL_VALID(chestHash)) {

            STREAMING::REQUEST_MODEL(chestHash, 0);

            float playerHeading = ENTITY::GET_ENTITY_HEADING(playerPed);
            auto gold_object = OBJECT::CREATE_OBJECT(chestHash, coords.x, coords.y, coords.z - height, 1, 1, 1, 0, 0);
            if (ENTITY::DOES_ENTITY_EXIST(gold_object)) {
                request_control_of_entity(gold_object);
                ENTITY::SET_ENTITY_HEADING(gold_object, heading);
                ENTITY::SET_ENTITY_ALPHA(gold_object, 255, 0);
                ENTITY::SET_ENTITY_VISIBLE(gold_object, toggle);
                NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(gold_object);
                auto netID = NETWORK::OBJ_TO_NET(gold_object);
                NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(netID, 1);
            }
            STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(chestHash);
        }
    }

    void AttachModelFunction(const char* object, Ped ped, float height, float forwardOffset, float rotationOffset, int boneId)
    {
        Vector3 pos = ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(ped, PED::GET_PED_BONE_INDEX(ped, boneId));
        Hash hash = g_ui::joaat(object);
        if (STREAMING::IS_MODEL_IN_CDIMAGE(hash) && STREAMING::IS_MODEL_VALID(hash))
        {
            STREAMING::REQUEST_MODEL(hash, 0);
            auto gold_object = OBJECT::CREATE_OBJECT(hash, pos.x, pos.y, pos.z, 1, 1, 0, 0, 0);
            if (ENTITY::DOES_ENTITY_EXIST(gold_object))
            {
                request_control_of_network_id(gold_object);
                ENTITY::ATTACH_ENTITY_TO_ENTITY(gold_object, ped, PED::GET_PED_BONE_INDEX(ped, boneId), height, forwardOffset, 0, 0.0f, 0.0f, rotationOffset, 1, 1, 0, 0, 2, 1, 0, 0);
            }
        }
    }

}
