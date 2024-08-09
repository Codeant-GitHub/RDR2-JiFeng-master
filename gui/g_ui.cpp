#pragma once
#include "../main/main.hpp"
#include "g_ui.hpp"

#pragma execution_character_set("utf-8")

namespace g_ui
{
	int g_SelectedPlayer;

	bool invincible = false;
	bool autoRecovery = false;
	bool invisible = false;
	float scaleCharacter = 1.0;
	bool transformIntoFlameHorse = false;
	bool cannotFall = false;
	bool infiniteStamina = false;
	bool immuneToTying = false;
	bool vehicleHorseInvincible = false;
	bool horseInfiniteStamina = false;
	bool NPCIgnore = false;
	bool seeThroughPlayers = false;
	bool superJump = false;
	bool infiniteDeadEye = false;
	bool noWantedLevel = false;
	bool autoAim = false;
	bool infiniteAmmo = false;
	bool noReload = false;
	bool autoFire = false;
	bool oneHitKill = false;
	bool thunderGun = false;
	Vector3 CoordsPed = { 0.0f, 0.0f, 0.0f };
	bool cannotBeTargetedByPlayers = false;
	static int travelSpeed = 0;
	static float currentHeading;
	bool observePlayer = false;
	bool frozen = false;
	bool loopFlyUp = false;
	bool shakeCamera = false;

	float degToRad(float degs)
	{
		return degs * 3.141592653589793f / 180.f;
	}

	void FunctionTicks()
	{
		Player player = PLAYER::PLAYER_ID();
		Ped playerPed = PLAYER::PLAYER_PED_ID();
		Vehicle veh = PED::GET_VEHICLE_PED_IS_USING(playerPed);
		Ped horse = PED::GET_MOUNT(playerPed);
		Ped remotePed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);

		if (GetAsyncKeyState(99) & 0x1)
		{
			g_ui::MenuItemPlayerTeleport(CoordsPed.x, CoordsPed.y, CoordsPed.z);
		}

		if (GetAsyncKeyState(113) & 0x1)
		{
			if (autoFire)
			{
				autoFire = false;
			}
			else
			{
				autoFire = true;
			}
		}

		if (observePlayer)
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(true, remotePed);
		}
		if (frozen)
		{
			g_ui::FreezePlayerInPlaceFunction(remotePed);
		}
		if (loopFlyUp)
		{
			Vector3 Coords = ENTITY::GET_ENTITY_COORDS(remotePed, true, false);
			FIRE::ADD_OWNED_EXPLOSION(remotePed, Coords.x, Coords.y, Coords.z, 12, 100.0f, true, false, true);
		}
		if (shakeCamera)
		{
			Vector3 Coords = ENTITY::GET_ENTITY_COORDS(remotePed, false, false);
			FIRE::ADD_EXPLOSION(Coords.x, Coords.y, Coords.z, 0, 0.0f, true, false, 100000.f);
		}
		if (invincible)
		{
			PLAYER::SET_PLAYER_INVINCIBLE(player, true);
		}
		if (autoRecovery)
		{
			int currentHealth = ENTITY::GET_ENTITY_HEALTH(playerPed);
			int maxHealth = ENTITY::GET_ENTITY_MAX_HEALTH(playerPed, true);

			if (currentHealth < maxHealth / 2)
			{
				ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(playerPed, eAttributeCore::ATTRIBUTE_CORE_HEALTH, 100);
			}
		}
		if (invisible)
		{
			ENTITY::SET_ENTITY_VISIBLE(playerPed, false);
		}
		if (cannotFall)
		{
			g_ui::PreventFallFunction(veh, true);
			g_ui::PreventFallFunction(horse, true);
			g_ui::PreventFallFunction(playerPed, true);
		}
		if (infiniteStamina)
		{
			PLAYER::RESTORE_PLAYER_STAMINA(player, 100.0);
			ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(playerPed, eAttributeCore::ATTRIBUTE_CORE_STAMINA, 100);
		}
		if (immuneToTying)
		{
			PED::SET_PED_LASSO_HOGTIE_FLAG(playerPed, 0, false);
		}
		if (vehicleHorseInvincible)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(horse, true);
			ENTITY::SET_ENTITY_INVINCIBLE(veh, true);
		}
		if (horseInfiniteStamina)
		{
			if (PED::IS_PED_ON_MOUNT(playerPed))
			{
				PED::_RESTORE_PED_STAMINA(horse, 100.0);
				ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(horse, eAttributeCore::ATTRIBUTE_CORE_STAMINA, 100);
			}
		}
		if (NPCIgnore)
		{
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(player, true);
			PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(player, false);
		}
		if (seeThroughPlayers)
		{
			for (int index = 0; index < 32; index++)
			{
				Player playerOnline = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(index);
				BOOL bPlayerOnlineExists = ENTITY::DOES_ENTITY_EXIST(playerOnline);
				Vector3 playerOnlineCoords = ENTITY::GET_ENTITY_COORDS(playerOnline, FALSE, FALSE);
				Vector3 playerCoords = ENTITY::GET_ENTITY_COORDS(playerPed, FALSE, FALSE);
				if (playerOnline == playerPed) continue;
				int health = ENTITY::GET_ENTITY_HEALTH(playerOnline);
				float distance = MISC::GET_DISTANCE_BETWEEN_COORDS(playerCoords.x, playerCoords.y, playerCoords.z, playerOnlineCoords.x, playerOnlineCoords.y, playerOnlineCoords.z, TRUE);
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(playerPed, playerOnline, 17) && bPlayerOnlineExists)
				{
					if (distance < 1000.0f && bPlayerOnlineExists)
					{
						float xa;
						float ya;
						BOOL screenCoords = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(playerOnlineCoords.x, playerOnlineCoords.y, playerOnlineCoords.z, &xa, &ya);
						std::ostringstream Health;

						Health << PLAYER::GET_PLAYER_NAME(index) << "ح" << (int)distance << "m";

						//	extern void draw_Text(const char* text, float x, float y, int r, int g, int b, int a, bool centered = false, float sx = 0.342f, float sy = 0.342f);
						g_ui::draw_Text(Health.str().c_str(), xa, ya, 24.f, 162, 0, 124, 255, false);

					}
				}
				else
				{
					if (distance < 3000.0f && bPlayerOnlineExists)
					{
						float xa;
						float ya;
						BOOL screenCoords = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(playerOnlineCoords.x, playerOnlineCoords.y, playerOnlineCoords.z, &xa, &ya);
						std::ostringstream Health;

						Health << PLAYER::GET_PLAYER_NAME(index) << "ح" << (int)distance << "m";

						g_ui::draw_Text(Health.str().c_str(), xa, ya, 24.f, 162, 0, 124, 255, false);

					}
				}
			}
		}
		if (superJump)
		{
			MISC::SET_SUPER_JUMP_THIS_FRAME(player);
			if (PED::IS_PED_JUMPING(playerPed))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(playerPed, 1, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, true, true, true, false, true);
			}
		}
		if (infiniteDeadEye)
		{
			PLAYER::_SPECIAL_ABILITY_START_RESTORE(player, 0, false);
			ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(playerPed, eAttributeCore::ATTRIBUTE_CORE_DEADEYE, 100);
			PLAYER::_MODIFY_INFINITE_TRAIL_VISION(player, true);
		}
		if (noWantedLevel)
		{
			LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
			LAW::SET_BOUNTY(playerPed, 0);
			LAW::SET_WANTED_SCORE(playerPed, 0);
			LAW::SET_BOUNTY(player, 0);
			LAW::SET_WANTED_SCORE(player, 0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.0);
		}
		if (infiniteAmmo)
		{
			WEAPON::_SET_PED_INFINITE_AMMO_CLIP(playerPed, true);

			WEAPON::SET_PED_INFINITE_AMMO(playerPed, true, 0);
			for (int i = 0; i < ARRAYSIZE(Objects_Ammo_Types); i++)
			{
				Hash ammoTypeHash = g_ui::joaat(Objects_Ammo_Types[i]);
				WEAPON::SET_PED_AMMO_BY_TYPE(playerPed, ammoTypeHash, 9999);
			}
		}
		if (noReload)
		{
			Hash cur;
			if (WEAPON::GET_CURRENT_PED_WEAPON(playerPed, &cur, 0, 0, 0) && WEAPON::IS_WEAPON_VALID(cur))
			{
				int maxAmmo;
				if (WEAPON::GET_MAX_AMMO(playerPed, &maxAmmo, cur))
					WEAPON::SET_PED_AMMO(playerPed, cur, maxAmmo);
				maxAmmo = WEAPON::GET_MAX_AMMO_IN_CLIP(playerPed, cur, 1);
				if (maxAmmo > 0)
					WEAPON::SET_AMMO_IN_CLIP(playerPed, cur, maxAmmo);
			}
		}
		if (autoFire)
		{
			int Delay = GetTickCount();
			Entity AimingEntity;
			if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(player, &AimingEntity))
			{
				if (!PED::IS_PED_RELOADING(playerPed) && ENTITY::IS_ENTITY_A_PED(AimingEntity) && !ENTITY::IS_ENTITY_DEAD(AimingEntity))
				{
					if (ENTITY::GET_ENTITY_HEALTH(AimingEntity) != 0)
					{
						INPUT    Input = { 0 };
						Input.type = INPUT_MOUSE;
						Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
						::SendInput(1, &Input, sizeof(INPUT));

						if (GetTickCount() - Delay > 1) {
							::ZeroMemory(&Input, sizeof(INPUT));
							Input.type = INPUT_MOUSE;
							Input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
							::SendInput(1, &Input, sizeof(INPUT));
							Delay = GetTickCount();
						}
					}
				}
			}
		}
		if (oneHitKill)
		{
			PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(player, 100.0);
		}
		if (thunderGun)
		{
			Entity AimedEntityHandle;
			if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(player, &AimedEntityHandle))
			{
				Vector3 Coords = ENTITY::GET_ENTITY_COORDS(AimedEntityHandle, false, false);
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_dis_ligtn_trees");
				GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_crackpot_rc_lightening", Coords.x, Coords.y, Coords.z, 0.f, 0.f, 0.f, 1.f, false, false, false);

				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_crackpot");
				GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_crackpot_rc_lightening", Coords.x, Coords.y, Coords.z, 0.f, 0.f, 0.f, 1.f, false, false, false);
			}
		}

		if (cannotBeTargetedByPlayers)
		{
			PED::SET_PED_RESET_FLAG(playerPed, 25, true);
		}
	}


	void Menu_Loop()
	{
		FunctionTicks();
		ButtonMonitoring();

		switch (submenu)
		{
		case ��ģ��:
		{
			Ped remotePed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);

			addTitle("�������ģ��");
			addOption("������ͷ", [=]
				{
					g_ui::AttachModelFunction("p_stepstool01x", remotePed);
				});
			addOption("UFO", [=]
				{
					g_ui::AttachModelFunction("S_UFO01X", remotePed);
				});
			addOption("СUFO", [=]
				{
					g_ui::AttachModelFunction("S_UFO02X", remotePed);
				});
			addOption("��", [=]
				{
					g_ui::AttachModelFunction("p_bedindian02x", remotePed);
				});
			addOption("����", [=]
				{
					g_ui::AttachModelFunction("p_woodbench02x", remotePed);
				});
			addOption("����", [=]
				{
					g_ui::AttachModelFunction("p_treestump02x", remotePed);
				});
			addOption("�ո�", [=]
				{
					g_ui::AttachModelFunction("p_strawbundle01x", remotePed);
				});
			addOption("�Ű�", [=]
				{
					g_ui::AttachModelFunction("rf_door_start", remotePed);
				});
			addOption("����", [=]
				{
					g_ui::AttachModelFunction("p_suitcase01x", remotePed);
				});
			addOption("����", [=]
				{
					g_ui::AttachModelFunction("p_bulb_g_01x", remotePed);
				});
			addOption("·��", [=]
				{
					g_ui::AttachModelFunction("p_nbdstreetlamp01x", remotePed);
				});
		} break;
		case ˢ������NPC:
		{		
			Ped remotePed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);

			addTitle("�����ˢ������NPC");
			addOption("ɽʦ", [=]
				{
					g_ui::SpawnCharacterOrAnimalFunction(remotePed,g_ui::joaat("A_C_PANTHER_01"));
				});
			addOption("��", [=]
				{
					g_ui::SpawnCharacterOrAnimalFunction(remotePed,g_ui::joaat("A_C_BEAR_01"));
				});
			addOption("ɥʬ", [=]
				{
					g_ui::SpawnCharacterOrAnimalFunction(remotePed,0xE533D2B4);
				});
			addOption("������", [=]
				{
					g_ui::SpawnCharacterOrAnimalFunction(remotePed,0x9E00472E);
				});
			addOption("����", [=]
				{
					g_ui::SpawnCharacterOrAnimalFunction(remotePed,0x0D7B4617);
				});
			addOption("����2", [=]
				{
					g_ui::SpawnCharacterOrAnimalFunction(remotePed,0xDFEF070E);
				});
			addOption("С����", [=]
				{
					g_ui::SpawnCharacterOrAnimalFunction(remotePed,0x04B479C0);
				});
			addOption("Ů��", [=]
				{
					g_ui::SpawnCharacterOrAnimalFunction(remotePed,0xB4449A8A);
				});
			addOption("����", [=]
				{
					g_ui::SpawnCharacterOrAnimalFunction(remotePed,0x16681434);
				});
			addOption("ʨ��", [=]
				{
					g_ui::SpawnCharacterOrAnimalFunction(remotePed,g_ui::joaat("A_C_LIONMANGY_01"));
				});
			addOption("����", [=]
				{
					g_ui::SpawnCharacterOrAnimalFunction(remotePed,0x93B09465);
				});
			addOption("����", [=]
				{
					g_ui::SpawnCharacterOrAnimalFunction(remotePed,0x2E258627);
				});
			addOption("��ǹ��ͽ", [=]
				{
					g_ui::SpawnCharacterOrAnimalFunction(remotePed,0x58277E70);
				});
			addOption("��ǹ��ͽ2", [=]
				{
					g_ui::SpawnCharacterOrAnimalFunction(remotePed,0x93A369F1);
				});
			addOption("���˺�", [=]
				{
					g_ui::SpawnCharacterOrAnimalFunction(remotePed,0x3069C374);
				});
			addOption("ɵ���", [=]
				{
					g_ui::SpawnCharacterOrAnimalFunction(remotePed,0xD303ACD2);
				});
		} break;
		case ����б�:
		{
			Ped remotePed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);

			addTitle(PLAYER::GET_PLAYER_NAME(g_SelectedPlayer));
			addBoolOption("�۲����", &observePlayer, [=]
				{
					if (!observePlayer)
					{
						NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(false, remotePed);
					}
				});
			addBoolOption("����", &frozen);
			addOption("��������", [=]
				{
					Ped horse = PED::GET_MOUNT(remotePed);
					TASK::TASK_HORSE_ACTION(horse, 0, 0, 0);
				});
			addOption("�����ˢɽʦʬ��", [=]
				{
					g_ui::SpawnCharacterOrAnimalFunction(remotePed,g_ui::joaat("A_C_PANTHER_01"));
				});
			addOption("��������", [=]
				{
					g_ui::FreezePlayerInPlaceFunction(remotePed);
					g_ui::ImprisonFunction(0x99C0CFCF, remotePed, true, 1.0f);
				});
			addOption("��������������ͼ��Ե", [=]
				{		
					Vehicle veh = PED::GET_VEHICLE_PED_IS_USING(remotePed);
					g_ui::request_control_of_entity(veh);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(veh, 5000.0f, 5000.0f, 5000.0f, 0, 0, 0);
				});
			addSubmenuOption("��ģ��", ��ģ��);
			addSubmenuOption("ˢ������NPC", ˢ������NPC);
		} break;
		case �������:
		{
			addTitle("ս�����");
			for (int i = 0; i < 32; ++i)
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i)))
				{
					addSubmenuOption(PLAYER::GET_PLAYER_NAME(i), ����б�) ? g_SelectedPlayer = i : NULL;
				}
			}
		} break;
		case �ı�����:
		{
			addTitle("�ı�����");
			for (int i = 0; i < ARRAYSIZE(Object_Weather_Types); i++)
			{
				addOption(Object_Weather_Types[i].name, [=]
					{
						MISC::_SET_WEATHER_TYPE_FROZEN(true);
						g_ui::SetCurrentGameWeatherFunction(Object_Weather_Types[i].model);
					});
			}
		} break;
		case ����ѡ��:
		{
			addTitle("����ѡ��");
			addSubmenuOption("�ı�����", �ı�����);
			addOption("����ʱ��ǰ��һСʱ", []
				{
					NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(CLOCK::GET_CLOCK_HOURS() + 1, CLOCK::GET_CLOCK_MINUTES(), CLOCK::GET_CLOCK_SECONDS(), 0, true);
					CLOCK::ADD_TO_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS() + 1, CLOCK::GET_CLOCK_MINUTES(), CLOCK::GET_CLOCK_SECONDS());
				});
		} break;
		case ��Ʒѡ��:
		{
			addTitle("��Ʒѡ��");
			addSubmenuOption("Ӳ��", Ӳ��);
			addSubmenuOption("���ұ�", ���ұ�);
			addSubmenuOption("����", ����);
			addSubmenuOption("����", ����);
			addSubmenuOption("��ָ", ��ָ);
			addSubmenuOption("����", ����);
			addSubmenuOption("������", ������);
			addSubmenuOption("�Ŷ���", �Ŷ���);
			addSubmenuOption("ֲ��", ֲ��);
		} break;
		case �ؾ�ѡ��:
		{
			addTitle("�ؾ�ѡ��");
			for (int i = 0; i < ARRAYSIZE(Ped_Vehicles_Types); i++)
			{
				addOption(Ped_Vehicles_Types[i].name, [=]
					{				
						Ped playerPed = PLAYER::PLAYER_PED_ID();
						g_ui::SpawnEntityOrVehicleFunction(g_ui::joaat(Ped_Vehicles_Types[i].model), playerPed, 0.0, 5.0, -1.0, 90.0, false, false, false, false);
					});
			}
		} break;
		case ������ͨ����:
		{
			addTitle("���ö���");

			for (int i = 0; i < ARRAYSIZE(Ped_Animals_2_Types); i++)
			{
				addOption(Ped_Animals_2_Types[i].name, [=]
					{
						Ped playerPed = PLAYER::PLAYER_PED_ID();
						g_ui::SpawnCharacterOrAnimalFunction(playerPed, g_ui::joaat(Ped_Animals_2_Types[i].model));
					});
			}
		} break;
		case ������ͨ����:
		{
			addTitle("��������");

			for (int i = 0; i < ARRAYSIZE(Ped_Animals_Types); i++)
			{
				addOption(Ped_Animals_Types[i].name, [=]
					{
						Ped playerPed = PLAYER::PLAYER_PED_ID();
						g_ui::SpawnCharacterOrAnimalFunction(playerPed, g_ui::joaat(Ped_Animals_Types[i].model));
					});
			}
		} break;
		case ��ƥ:
		{
			addTitle("��ƥ����");

			for (int i = 0; i < ARRAYSIZE(Ped_Horses_Types); i++)
			{
				addOption(Ped_Horses_Types[i].name, [=]
					{
						Ped playerPed = PLAYER::PLAYER_PED_ID();
						g_ui::SpawnCharacterOrAnimalFunction(playerPed, g_ui::joaat(Ped_Horses_Types[i].model));
					});
			}
		} break;
		case ����ѡ��:
		{
			addTitle("����ѡ��");
			addSubmenuOption("��˵����", ��˵����);
			addSubmenuOption("������ͨ����", ������ͨ����);
			addSubmenuOption("������ͨ����", ������ͨ����);
			addSubmenuOption("��ƥ", ��ƥ);
		} break;
		case �̷�����:
		{
			addTitle("�̷�����");

			for (int i = 0; i < ARRAYSIZE(Ped_Teleport_Type); i++)
			{
				addOption(Ped_Teleport_Type[i].name, [=]
					{
						g_ui::MenuItemPlayerTeleport(Ped_Teleport_Type[i].x, Ped_Teleport_Type[i].y, Ped_Teleport_Type[i].z);
					});
			}
		} break;
		case ����ѡ��:
		{
			Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();

			addTitle("����ѡ��");
			addOption("���浱ǰ����", [=]
				{
					Vector3 Coords = ENTITY::GET_ENTITY_COORDS(playerPed, 0, 0);
					CoordsPed = Coords;
				});
			addOption("���͵����������㣨��ݼ�С����3��", []
				{
					g_ui::MenuItemPlayerTeleport(CoordsPed.x, CoordsPed.y, CoordsPed.z);
				});
			addSubmenuOption("�̷�����", �̷�����);
		} break;
		case ����ѡ��:
		{
			Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();

			addTitle("����ѡ��");
			addBoolOption("�����ӵ�", &infiniteAmmo, [=]
				{
					if (!infiniteAmmo)
					{
						WEAPON::SET_PED_INFINITE_AMMO(playerPed, true, 0);
					}
				});
			addBoolOption("���軻��", &noReload);
			addBoolOption("�Զ���ǹ", &autoFire);
			addBoolOption("һ����ɱ", &oneHitKill, [=]
				{
					if (!oneHitKill)
					{
						PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(player, 100.0);
					}
				});
			addBoolOption("�׵�ǹ", &thunderGun);
		} break;
		case ����ѡ��:
		{
			Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			Vehicle veh = PED::GET_VEHICLE_PED_IS_USING(playerPed);
			Ped horse = PED::GET_MOUNT(playerPed);

			addTitle("����ѡ��");
			addBoolOption("�޵�", &invincible, [=]
				{
					if (!invincible)
					{
						PLAYER::SET_PLAYER_INVINCIBLE(player, false);
					}
				});
			addBoolOption("�Զ��ظ�", &autoRecovery);
			addBoolOption("��������", &autoRecovery, [=]
				{
					if (!autoRecovery)
					{
						ENTITY::SET_ENTITY_VISIBLE(playerPed, true);
					}
				});
			addFloatOption("���(7��9��ֵ 5ȷ��)", &scaleCharacter, 0.1f, [=]
				{
					PED::_SET_PED_SCALE(playerPed, scaleCharacter);
				});
			addBoolOption("���������", &transformIntoFlameHorse);
			addBoolOption("����ˤ��", &cannotFall, [=]
				{
					if (!cannotFall)
					{
						g_ui::PreventFallFunction(veh, false);
						g_ui::PreventFallFunction(horse, false);
						g_ui::PreventFallFunction(playerPed, false);
					}
				});
			addBoolOption("��������", &infiniteStamina);
			addBoolOption("��������", &immuneToTying);
			addBoolOption("�ؾ���ƥ�޵�", &vehicleHorseInvincible, [=]
				{
					if (!vehicleHorseInvincible)
					{
						ENTITY::SET_ENTITY_INVINCIBLE(horse, false);
						ENTITY::SET_ENTITY_INVINCIBLE(veh, false);
					}
				});
			addBoolOption("��ƥ��������", &horseInfiniteStamina);
			addBoolOption("NPC����", &NPCIgnore, [=]
				{
					if (!NPCIgnore)
					{
						PLAYER::SET_EVERYONE_IGNORE_PLAYER(player, false);
						PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(player, true);
					}
				});
			addBoolOption("͸�����", &seeThroughPlayers);
			addBoolOption("������", &superJump);
			addBoolOption("��������", &infiniteDeadEye);
			addBoolOption("����ͨ��", &noWantedLevel);
			addBoolOption("�Զ��������NPC�����(F2��ݼ�)", &autoAim);
		} break;
		case Main_Menu:
		{
			addTitle("������v2.9.9");
			addHeader("����ʱ�䣺2024.07.30");
			addSubmenuOption("����ѡ��", ����ѡ��);
			addSubmenuOption("����ѡ��", ����ѡ��);
			addSubmenuOption("����ѡ��", ����ѡ��);
			addSubmenuOption("����ѡ��", ����ѡ��);
			addSubmenuOption("����ѡ��", ����ѡ��);
			addSubmenuOption("�ؾ�ѡ��", �ؾ�ѡ��);
			addSubmenuOption("��Ʒѡ��", ��Ʒѡ��);
			addSubmenuOption("����ѡ��", ����ѡ��);
			addSubmenuOption("�������", �������);
			addSubmenuOption("ս�ַ���", ս�ַ���);
		}break;
		}
		resetVars();
	}
}