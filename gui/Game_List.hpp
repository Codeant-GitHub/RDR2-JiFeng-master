#pragma once

namespace g_ui
{
    extern const char* Objects_Ammo_Types[34];

    struct Ped_Animals_Info
    {
        const char* model;
        const char* name;
    };

    extern const Ped_Animals_Info Ped_Vehicles_Types[118];

    extern const Ped_Animals_Info Ped_Animals_2_Types[34];

    extern const Ped_Animals_Info Ped_Animals_Types[518];

    extern const Ped_Animals_Info Ped_Horses_Types[220];

    struct Ped_Teleport_Info
    {
        float x;
        float y;
        float z;
        const char* name;
    };

    extern const Ped_Teleport_Info Ped_Teleport_Type[69];

    struct Object_List_Info
    {
        const char* model;
        const char* name;
    };

    extern const Object_List_Info Object_Weather_Types[9];
}