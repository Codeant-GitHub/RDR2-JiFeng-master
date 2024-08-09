#pragma once
#include <Windows.h>
// 2024-05-09-00-41

namespace BUILTIN
{
	static void WAIT(int ms) { return invoke <void>(0x4EDE34FBADD967A6, ms); }
	static int TIMERA() { return invoke <int>(0x83666F9FB8FEBD4B); }
	static int TIMERB() { return invoke <int>(0xC9D9444186B5A374); }
	static void SETTIMERA(int value) { return invoke <void>(0xC1B1E9A034A63A62, value); }
	static void SETTIMERB(int value) { return invoke <void>(0x5AE11BC36633DE4E, value); }
	static float TIMESTEP() { return invoke <float>(0x50597EE2); }
	static float SIN(float value) { return invoke <float>(0xBADBFA3B172435F, value); }
	static float COS(float value) { return invoke <float>(0xD0FFB162F40A139C, value); }
	static float SQRT(float value) { return invoke <float>(0x71D93B57D07F9804, value); }
	static float POW(float base, float exponent) { return invoke <float>(0xE3621CC40F31FE2E, base, exponent); }
	static float LOG10(float value) { return invoke <float>(0xE816E655DE37FE20, value); }
	static float VMAG(float VecDirectionX, float VecDirectionY, float VecDirectionZ) { return invoke <float>(0x652D2EEEF1D3E62C, VecDirectionX, VecDirectionY, VecDirectionZ); }
	static float VMAG2(float VecDirectionX, float VecDirectionY, float VecDirectionZ) { return invoke <float>(0xA8CEACB4F35AE058, VecDirectionX, VecDirectionY, VecDirectionZ); }
	static float VDIST(float VecCoors1X, float VecCoors1Y, float VecCoors1Z, float VecCoors2X, float VecCoors2Y, float VecCoors2Z) { return invoke <float>(0x2A488C176D52CCA5, VecCoors1X, VecCoors1Y, VecCoors1Z, VecCoors2X, VecCoors2Y, VecCoors2Z); }
	static float VDIST2(float VecCoors1X, float VecCoors1Y, float VecCoors1Z, float VecCoors2X, float VecCoors2Y, float VecCoors2Z) { return invoke <float>(0xB7A628320EFF8E47, VecCoors1X, VecCoors1Y, VecCoors1Z, VecCoors2X, VecCoors2Y, VecCoors2Z); }
	static int SHIFT_LEFT(int value, int bitShift) { return invoke <int>(0xEDD95A39E5544DE8, value, bitShift); }
	static int SHIFT_RIGHT(int value, int bitShift) { return invoke <int>(0x97EF1E5BCE9DC075, value, bitShift); }
	static int FLOOR(float value) { return invoke <int>(0xF34EE736CF047844, value); }
	static int CEIL(float value) { return invoke <int>(0x11E019C8F43ACC8A, value); }
	static int ROUND(float value) { return invoke <int>(0xF2DB717A73826179, value); }
	static float TO_FLOAT(int value) { return invoke <float>(0xBBDA792448DB5A89, value); }
	static void SET_THIS_THREAD_PRIORITY(int priority) { return invoke <void>(0x42B65DEEF2EDF2A1, priority); }
}

namespace AICOVERPOINT
{
	static Entity _0x53E4D0C079CA6855(ScrHandle handle) { return invoke <Entity>(0x53E4D0C079CA6855, handle); }
	static bool _DOES_COVER_POINT_EXIST(ScrHandle handle) { return invoke <bool>(0xC276FE69DDA22BAD, handle); }
	static int _GET_COVER_POINT_STATE_FROM_PED(Ped ped) { return invoke <int>(0x5F5B1B7E8E8F94C6, ped); }
	static void TASK_ENTER_COVER(Ped ped) { return invoke <void>(0x4972A022AE6DAFA1, ped); }
	static void TASK_EXIT_COVER(Ped ped) { return invoke <void>(0x2BC4A6D92D140112, ped); }
	static int _0x957D7E750216D74B(Ped ped) { return invoke <int>(0x957D7E750216D74B, ped); }
	static void _TASK_AI_SEEK_COVER_TO_COVER_POINT(void* args) { return invoke <void>(0x89783FDDF079C88D, args); }
	static void _0x64340DC208D671D5(const char* coverLayer) { return invoke <void>(0x64340DC208D671D5, coverLayer); }
	static void _0x7A1FDCF35EAA140F(const char* coverLayer) { return invoke <void>(0x7A1FDCF35EAA140F, coverLayer); }
	static void _REQUEST_FLINCH_COVER_ANIM(Ped ped) { return invoke <void>(0x2A31D13C5F021D0D, ped); }
	static void _0x3C7A9C2C953128FE(Ped ped) { return invoke <void>(0x3C7A9C2C953128FE, ped); }
	static void _0xEBA51A294C73292E(void* args) { return invoke <void>(0xEBA51A294C73292E, args); }
	static void _0x140B3CB1D424A945(Ped ped, Hash weaponHash) { return invoke <void>(0x140B3CB1D424A945, ped, weaponHash); }
	static bool _ARE_LOAD_COVER_ANIMS_LOADED(Ped ped) { return invoke <bool>(0x8CBE916CFC64AD5C, ped); }
	static void _STOP_RUNNING_COVER_ANIMS(Ped ped) { return invoke <void>(0x1A7A802B2301EDC0, ped); }
	static void _0x733077295AB51304(void* args) { return invoke <void>(0x733077295AB51304, args); }
	static ScrHandle _ADD_SCRIPTED_COVER_POINT(void* data) { return invoke <ScrHandle>(0x975BD6351648935F, data); }
}

namespace AITRANSPORT
{
	static void TASK_ENTER_TRANSPORT(void* args) { return invoke <void>(0xAEE3ADD08829CB6F, args); }
	static void TASK_EXIT_TRANSPORT(void* args) { return invoke <void>(0xC273A5B8488F7838, args); }
	static void SET_PED_ON_TRANSPORT_SEAT(Ped ped, Entity transportEntity, int seat, int flags) { return invoke <void>(0xE588B5A8A005CB5E, ped, transportEntity, seat, flags); }
	static void SET_PED_OFF_TRANSPORT_SEAT(Ped ped, int flags) { return invoke <void>(0x8886D83A430537FD, ped, flags); }
	static void SET_TRANSPORT_CONFIG_FLAG(Entity transportEntity, int flagId, bool value) { return invoke <void>(0xBA8818212633500A, transportEntity, flagId, value); }
	static bool GET_TRANSPORT_CONFIG_FLAG(Entity transportEntity, int flagId, bool p2) { return invoke <bool>(0xF382C92CCC1CCDBC, transportEntity, flagId, p2); }
	static Any _GET_TRANSPORT_USAGE_FLAGS(Entity transportEntity, int* flags) { return invoke <Any>(0xE195C5A82156321D, transportEntity, flags); }
	static void _SET_TRANSPORT_USAGE_FLAGS(Entity transportEntity, int flags) { return invoke <void>(0xE2487779957FE897, transportEntity, flags); }
	static void SET_TRANSPORT_ACCESSIBLE_SEAT_FLAGS(Entity transportEntity, int flags) { return invoke <void>(0xDD0660C997DE94FD, transportEntity, flags); }
	static void _0x4B6C9A43F7D9109B(Any p0, Any p1) { return invoke <void>(0x4B6C9A43F7D9109B, p0, p1); }
	static bool _IS_PED_ON_TRANSPORT_ENTITY(Ped ped, Entity transportEntity) { return invoke <bool>(0x159EF5B6EDCE00E8, ped, transportEntity); }
	static bool _IS_PED_ON_TRANSPORT_SEAT(Ped ped, bool p1) { return invoke <bool>(0xDC44F405A6B98D03, ped, p1); }
	static bool _IS_TRANSPORT_SEAT_OCCUPIED(Entity transportEntity, int seatIndex) { return invoke <bool>(0x2E2E06023D07631E, transportEntity, seatIndex); }
	static bool _IS_TRANSPORT_SEAT_FREE(Entity transportEntity, int seatIndex) { return invoke <bool>(0x43FF27FC1829C202, transportEntity, seatIndex); }
	static Ped _GET_PED_IN_TRANSPORT_SEAT(Entity transportEntity, int seatIndex) { return invoke <Ped>(0xFFEC4B0A1A3ED515, transportEntity, seatIndex); }
	static bool IS_PED_ENTERING_TRANSPORT(Ped ped, Entity transportEntity, bool p2) { return invoke <bool>(0x619E63980BFC0096, ped, transportEntity, p2); }
	static bool IS_PED_EXITING_TRANSPORT(Ped ped, Entity transportEntity) { return invoke <bool>(0x660639BC60157048, ped, transportEntity); }
	static void _0x4248AB2EEB3C75AD(Entity transportEntity, Ped ped, bool p2) { return invoke <void>(0x4248AB2EEB3C75AD, transportEntity, ped, p2); }
	static void _SET_PED_USE_TRANSPORT_SEAT_PREFERENCE(Ped ped, Entity transportEntity, int preferenceSlot, int p3, int seatIndex) { return invoke <void>(0xB7079F4C72896756, ped, transportEntity, preferenceSlot, p3, seatIndex); }
	static void _0x5639FBEA922788DA(Entity transportEntity) { return invoke <void>(0x5639FBEA922788DA, transportEntity); }
	static void _SET_AI_CAN_USE_TRANSPORT(Entity transportEntity, bool state) { return invoke <void>(0x67F7CEAC2391E114, transportEntity, state); }
	static void _0x8C8371EDFAF014A0(Ped ped, float p1) { return invoke <void>(0x8C8371EDFAF014A0, ped, p1); }
	static void _0xF8C20282B237E3F7(Ped ped) { return invoke <void>(0xF8C20282B237E3F7, ped); }
	static void _SET_TRANSPORT_PRIORITY_SEAT(Entity transportEntity, int seatIndex) { return invoke <void>(0x13F138225C202F66, transportEntity, seatIndex); }
}

namespace ANIMSCENE
{
	static AnimScene _CREATE_ANIM_SCENE(const char* animDict, int flags, const char* playbackListName, bool p3, bool p4) { return invoke <AnimScene>(0x1FCA98E33C1437B3, animDict, flags, playbackListName, p3, p4); }
	static void _DELETE_ANIM_SCENE(AnimScene animScene) { return invoke <void>(0x84EEDB2C6E650000, animScene); }
	static void TRIGGER_ANIM_SCENE_SKIP(AnimScene animScene) { return invoke <void>(0x4B85B3CF9197AEDF, animScene); }
	static bool _0x4B85B3CF91972222(AnimScene animScene) { return invoke <bool>(0x4B85B3CF91972222, animScene); }
	static void _CLEAR_ANIM_SCENE_WAS_SKIPPED(AnimScene animScene) { return invoke <void>(0x8A8208AE92BF87A5, animScene); }
	static bool DOES_ANIM_SCENE_EXIST(AnimScene animScene) { return invoke <bool>(0x25557E324489393C, animScene); }
	static bool _DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(AnimScene animScene, const char* entityId) { return invoke <bool>(0x6F1F0B17109309DA, animScene, entityId); }
	static bool _DOES_ANIM_SCENE_OWNERSHIP_OF_ENTITY_EXIST(AnimScene animScene, const char* entityName) { return invoke <bool>(0x9D1ECA9337BE9FC3, animScene, entityName); }
	static void LOAD_ANIM_SCENE(AnimScene animScene) { return invoke <void>(0xAF068580194D9DC7, animScene); }
	static bool IS_ANIM_SCENE_LOADED(AnimScene animScene, bool p1, bool p2) { return invoke <bool>(0x477122B8D05E7968, animScene, p1, p2); }
	static bool _IS_ANIM_SCENE_LOADING(AnimScene animScene, bool p1) { return invoke <bool>(0x59606519FF9D3EC2, animScene, p1); }
	static bool _IS_ANIM_SCENE_METADATA_ASSET_IN_RANGE_LOADING(AnimScene animScene, bool p1) { return invoke <bool>(0xF8D1D2DAB6007EEF, animScene, p1); }
	static bool IS_ANIM_SCENE_METADATA_LOADED(AnimScene animScene, bool p1) { return invoke <bool>(0x95531A4A20CCE7BC, animScene, p1); }
	static int _GET_ANIM_SCENE_PLAYBACK_LIST_PHASE_AUDIO_LOAD_STRESS(AnimScene animScene, const char* phaseName) { return invoke <int>(0x9E036D5204FFBBC8, animScene, phaseName); }
	static void START_ANIM_SCENE(AnimScene animScene) { return invoke <void>(0xF4D94AF761768700, animScene); }
	static void RESET_ANIM_SCENE(AnimScene animScene, const char* playbackListName) { return invoke <void>(0x8FDF221F13537936, animScene, playbackListName); }
	static void ABORT_ANIM_SCENE(AnimScene animScene, bool p1) { return invoke <void>(0x718CF1328D20C2B3, animScene, p1); }
	static void RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT(AnimScene animScene) { return invoke <void>(0x8E1BA705F63C1925, animScene); }
	static bool IS_ANIM_SCENE_RUNNING(AnimScene animScene, bool p1) { return invoke <bool>(0xCBFC7725DE6CE2E0, animScene, p1); }
	static bool IS_ANIM_SCENE_FINISHED(AnimScene animScene, bool p1) { return invoke <bool>(0xD8254CB2C586412B, animScene, p1); }
	static bool IS_ANIM_SCENE_EXITING_THIS_FRAME(AnimScene animScene) { return invoke <bool>(0xCDC5512A407CF08D, animScene); }
	static bool HAS_ANIM_SCENE_EXITED(AnimScene animScene, bool p1) { return invoke <bool>(0xF94692EB9DC15D74, animScene, p1); }
	static bool _0x73616E64696C132E(AnimScene animScene, bool p1) { return invoke <bool>(0x73616E64696C132E, animScene, p1); }
	static bool IS_ANIM_SCENE_IN_SECTION(AnimScene animScene, const char* sectionName, bool p2) { return invoke <bool>(0x8D81E7824B7753F7, animScene, sectionName, p2); }
	static bool _IS_ANIM_SCENE_SKIPPABLE(AnimScene animScene) { return invoke <bool>(0x4CDFFE3189EBDBD0, animScene); }
	static bool _IS_ANIM_SCENE_ABORTED(AnimScene animScene) { return invoke <bool>(0x34A0671BE613D3D0, animScene); }
	static bool _0xD70C7A30412F8FA0(AnimScene animScene) { return invoke <bool>(0xD70C7A30412F8FA0, animScene); }
	static bool _0x9AAE3C1148A09BCA(AnimScene animScene) { return invoke <bool>(0x9AAE3C1148A09BCA, animScene); }
	static bool _0xA96619FE85159ED2(AnimScene animScene) { return invoke <bool>(0xA96619FE85159ED2, animScene); }
	static void FADE_ANIM_SCENE_AUDIO_IN(AnimScene animScene, float p1) { return invoke <void>(0xA41351EA2A18A0AD, animScene, p1); }
	static void FADE_ANIM_SCENE_AUDIO_OUT(AnimScene animScene, float p1) { return invoke <void>(0x323E3AD772BA5D57, animScene, p1); }
	static void BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(bool p0, bool p1) { return invoke <void>(0x1B70811D3BF75DB9, p0, p1); }
	static void SET_ANIM_SCENE_ORIGIN(AnimScene animScene, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int order) { return invoke <void>(0x20894BF17A02EF2, animScene, posX, posY, posZ, rotX, rotY, rotZ, order); }
	static void GET_ANIM_SCENE_ORIGIN(AnimScene animScene, Vector3* position, Vector3* rotation, int order) { return invoke <void>(0xADF1D53F3B1FE0A7, animScene, position, rotation, order); }
	static void SET_ANIM_SCENE_PAUSED(AnimScene animScene, bool toggle) { return invoke <void>(0xD6824B7D24DC0CE0, animScene, toggle); }
	static bool _IS_ANIM_SCENE_PAUSED(AnimScene animScene) { return invoke <bool>(0x4B4038796F0D6566, animScene); }
	static void SET_ANIM_SCENE_RATE(AnimScene animScene, float rate) { return invoke <void>(0x75820B801CFF262A, animScene, rate); }
	static float _GET_ANIM_SCENE_RATE(AnimScene animScene) { return invoke <float>(0x43C21623E42B821B, animScene); }
	static float GET_ANIM_SCENE_PHASE(AnimScene animScene) { return invoke <float>(0x3FBC3F51BF12DFBF, animScene); }
	static float _GET_ANIM_SCENE_TIME(AnimScene animScene) { return invoke <float>(0x61BE7D6186260002, animScene); }
	static float _GET_ANIM_SCENE_DURATION(AnimScene animScene) { return invoke <float>(0x49F1D143ADE32656, animScene); }
	static void SET_ANIM_SCENE_ENTITY(AnimScene animScene, const char* entityName, Entity entity, int flags) { return invoke <void>(0x8B720AD451CA2AB3, animScene, entityName, entity, flags); }
	static void REMOVE_ANIM_SCENE_ENTITY(AnimScene animScene, const char* entityName, Entity entity) { return invoke <void>(0x2BF96692C67F3E53, animScene, entityName, entity); }
	static bool IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(AnimScene animScene, const char* entityName) { return invoke <bool>(0x5E6F28DD7ED58D, animScene, entityName); }
	static bool COULD_ANIM_SCENE_ENTITY_REACH_EXIT_NEXT_FRAME(AnimScene animScene, const char* entityName, Any p2, Any p3) { return invoke <bool>(0x73616E64696C616E, animScene, entityName, p2, p3); }
	static bool HAS_ENTITY_EXITED_ANIM_SCENE(AnimScene animScene, const char* entityName) { return invoke <bool>(0xB89FCFF19DAFFF28, animScene, entityName); }
	static bool _HAS_ENTITY_ENTERED_ANIM_SCENE(AnimScene animScene, const char* entityName) { return invoke <bool>(0x337F1CC8EE895601, animScene, entityName); }
	static Ped _GET_ANIM_SCENE_PED(AnimScene animScene, const char* name, bool isNetwork) { return invoke <Ped>(0xE5822422197BBBA3, animScene, name, isNetwork); }
	static Object _GET_ANIM_SCENE_OBJECT(AnimScene animScene, const char* name, bool isNetwork) { return invoke <Object>(0xFB5674687A1B2814, animScene, name, isNetwork); }
	static Vehicle _GET_ANIM_SCENE_VEHICLE(AnimScene animScene, const char* name, bool isNetwork) { return invoke <Vehicle>(0x430EE0A19BC5A287, animScene, name, isNetwork); }
	static void SET_ANIM_SCENE_BOOL(AnimScene animScene, const char* name, bool value, bool p3) { return invoke <void>(0x519E96C2C68B404B, animScene, name, value, p3); }
	static bool GET_ANIM_SCENE_BOOL(AnimScene animScene, const char* name) { return invoke <bool>(0x7A6F6447ECA9B64, animScene, name); }
	static void SET_ANIM_SCENE_FLOAT(AnimScene animScene, const char* name, float value, bool p3, bool p4) { return invoke <void>(0x6BC5104E68CBEFE8, animScene, name, value, p3, p4); }
	static float GET_ANIM_SCENE_FLOAT(AnimScene animScene, const char* name) { return invoke <float>(0xCC24CB07F60B496E, animScene, name); }
	static void SET_ANIM_SCENE_INT(AnimScene animScene, const char* name, int value, bool p3) { return invoke <void>(0x3A379D2166CF5B92, animScene, name, value, p3); }
	static int GET_ANIM_SCENE_INT(AnimScene animScene, const char* name) { return invoke <int>(0x2B7277484CC095FD, animScene, name); }
	static bool GET_ANIM_SCENE_ENTITY_LOCATION_DATA(AnimScene animScene, const char* entityName, Vector3* matrix, bool p3, const char* playbackListName, int p5) { return invoke <bool>(0x8398438D8F14F56D, animScene, entityName, matrix, p3, playbackListName, p5); }
	static bool IS_ENTITY_PLAYING_ANIM_SCENE(Entity entity, AnimScene animScene) { return invoke <bool>(0x3AB6C7B0BB0DF4B1, entity, animScene); }
	static void ATTACH_ANIM_SCENE_TO_ENTITY(AnimScene animScene, Entity entity, int p2) { return invoke <void>(0xDC418495DBA327A1, animScene, entity, p2); }
	static void ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(AnimScene animScene, Entity entity, int p2) { return invoke <void>(0x1C0B105C3F30B88D, animScene, entity, p2); }
	static void DETACH_ANIM_SCENE(AnimScene animScene) { return invoke <void>(0x6843A1AA3A336DFF, animScene); }
	static void DETACH_ANIM_SCENE_PRESERVING_LOCATION(AnimScene animScene) { return invoke <void>(0xA2507C4948C83D2E, animScene); }
	static void TAKE_OWNERSHIP_OF_ANIM_SCENE(AnimScene animScene) { return invoke <void>(0xF7A4C571E572D237, animScene); }
	static bool CHECK_OWNERSHIP_OF_ANIM_SCENE(AnimScene animScene) { return invoke <bool>(0x661B8683611B9B97, animScene); }
	static void SET_ANIM_SCENE_PLAYBACK_LIST(AnimScene animScene, const char* playbackListName) { return invoke <void>(0xAB5E7CAB074D6B84, animScene, playbackListName); }
	static bool _0x1C5D33A4293E6DDE(AnimScene animScene, const char* phaseName) { return invoke <bool>(0x1C5D33A4293E6DDE, animScene, phaseName); }
	static bool _DOES_ANIM_SCENE_PLAY_LIST_EXIST(AnimScene animScene, const char* playbackListName) { return invoke <bool>(0xA9016536015DE29D, animScene, playbackListName); }
	static void SET_ANIM_SCENE_PLAY_LIST(AnimScene animScene, const char* playlistName, bool p2) { return invoke <void>(0x15598CFB25F3DC7E, animScene, playlistName, p2); }
	static bool _IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(AnimScene animScene, const char* phaseName) { return invoke <bool>(0x1F0E401031E20146, animScene, phaseName); }
	static bool REQUEST_ANIM_SCENE_PLAY_LIST(AnimScene animScene, const char* playlistName) { return invoke <bool>(0xDF7B5144E25CD3FE, animScene, playlistName); }
	static bool _RELEASE_ANIM_SCENE_PLAY_LIST(AnimScene animScene, const char* playlistName) { return invoke <bool>(0xAE6ADA8FE7E84ACC, animScene, playlistName); }
	static Hash _GET_ANIM_SCENE_DICT(AnimScene animScene) { return invoke <Hash>(0xAE5ADA4FE3E21ADC, animScene); }
	static bool _0x1407F5115FB9583E(AnimScene animScene, const char* p1) { return invoke <bool>(0x1407F5115FB9583E, animScene, p1); }
	static bool _IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(AnimScene animScene, const char* phaseName) { return invoke <bool>(0x23E33CB9F4A3F547, animScene, phaseName); }
	static bool _IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(AnimScene animScene, const char* phaseName) { return invoke <bool>(0xDF57F86FE71DBE5, animScene, phaseName); }
	static void _0x1AD896BF43619551() { return invoke <void>(0x1AD896BF43619551); }
	static int GET_ANIM_SCENE_CURRENT_ACTIVE_CAMERA_COUNT(AnimScene animScene) { return invoke <int>(0x4822A65D5AF64E69, animScene); }
	static bool _0x5D7BFDA2290B4E39(const char* p0) { return invoke <bool>(0x5D7BFDA2290B4E39, p0); }
	static bool _IS_MGM_SYSTEM_LOADED(const char* mgmFilename) { return invoke <bool>(0xFDFC14799373283F, mgmFilename); }
	static bool _LOAD_MGM_ASSETS(const char* mgmFilename) { return invoke <bool>(0xB727A847862CB00A, mgmFilename); }
	static int _CREATE_MGM_SYSTEM(const char* mgmFilename) { return invoke <int>(0xA1300DE03E5D1973, mgmFilename); }
	static void _DELETE_MGM_SYSTEM(int mgmHandle) { return invoke <void>(0x53CB3970BA02E3CC, mgmHandle); }
	static void _0xB1A196BAFE650402(int mgmHandle, Ped ped) { return invoke <void>(0xB1A196BAFE650402, mgmHandle, ped); }
	static void _0xAE6DE22DE0ED4554(int mgmHandle, Ped ped) { return invoke <void>(0xAE6DE22DE0ED4554, mgmHandle, ped); }
	static bool _0x61B2AAEF645DDAF0(int mgmEventHandle, const char* p1, int seatId, int p3, bool p4) { return invoke <bool>(0x61B2AAEF645DDAF0, mgmEventHandle, p1, seatId, p3, p4); }
	static void _SET_MGM_EVENT(int mgmEventHandle, const char* p1, Any seatId, int p3, float p4) { return invoke <void>(0x7706C4CC9C6CC9E, mgmEventHandle, p1, seatId, p3, p4); }
	static void _0x3641FCD53E59B335(int mgmHandle, Ped ped, const char* secondaryVoiceString) { return invoke <void>(0x3641FCD53E59B335, mgmHandle, ped, secondaryVoiceString); }
	static void _SET_BREAKOUT_ARCHETYPE(Ped ped, const char* archetype) { return invoke <void>(0x99B2A2E3655DEAF1, ped, archetype); }
	static void _CLEAR_BREAKOUT_ARCHETYPE(Ped ped) { return invoke <void>(0xBC781D24AA11F179, ped); }
	static bool _0x3B393716C3FD8237(Ped ped) { return invoke <bool>(0x3B393716C3FD8237, ped); }
	static void _0xE12D7B4B959644CD() { return invoke <void>(0xE12D7B4B959644CD); }
	static void _0xC1193521E3B9FADD(Entity entity, bool p1) { return invoke <void>(0xC1193521E3B9FADD, entity, p1); }
	static void _REQUEST_PHOTO_MODE_FREEZE() { return invoke <void>(0x7C709C01D43D94CD); }
	static void _REQUEST_PHOTO_MODE_DEFREEZE() { return invoke <void>(0x41AFA5F228B0B6B0); }
	static bool _0x2DB524750DC41ED4() { return invoke <bool>(0x2DB524750DC41ED4); }
	static bool _0xEA41D44A8D42057B() { return invoke <bool>(0xEA41D44A8D42057B); }
	static void _PAUSE_SCRIPT_THREADS(bool toggle) { return invoke <void>(0x37C1257849DEF24A, toggle); }
	static void _0xCDCD7B2D49AEE73A(bool p0) { return invoke <void>(0xCDCD7B2D49AEE73A, p0); }
	static bool WAS_ANIM_SCENE_SKIPPED(AnimScene animScene) { return invoke <bool>(0xEF324E9550A394D5, animScene); }
}

namespace _NAMESPACE4
{
	static void _REPORT_PLAYER_BAD_SPORT_BEHAVIOR(void* gamerHandle, int badSportBehaviorType) { return invoke <void>(0xC31C44C43B48FDE3, gamerHandle, badSportBehaviorType); }
}

namespace ATTRIBUTE
{
	static void SET_ATTRIBUTE_BASE_RANK(Ped ped, int attributeIndex, int newValue) { return invoke <void>(0x5DA12E025D47D4E5, ped, attributeIndex, newValue); }
	static int GET_ATTRIBUTE_RANK(Ped ped, int attributeIndex) { return invoke <int>(0xA4C8E23E29040DE0, ped, attributeIndex); }
	static int GET_ATTRIBUTE_BASE_RANK(Ped ped, int attributeIndex) { return invoke <int>(0x147149F2E909323C, ped, attributeIndex); }
	static int GET_ATTRIBUTE_BONUS_RANK(Ped ped, int coreIndex) { return invoke <int>(0xEFA71F4B4330E04, ped, coreIndex); }
	static int GET_MAX_ATTRIBUTE_RANK(Ped ped, int attributeIndex) { return invoke <int>(0x704674A0535A471D, ped, attributeIndex); }
	static void SET_ATTRIBUTE_BONUS_RANK(Ped ped, int attributeIndex, int newValue) { return invoke <void>(0x920F9488BD115EFB, ped, attributeIndex, newValue); }
	static int GET_DEFAULT_ATTRIBUTE_RANK(Ped ped, int attributeIndex) { return invoke <int>(0x958DD43D41F89A47, ped, attributeIndex); }
	static int GET_DEFAULT_MAX_ATTRIBUTE_RANK(Ped ped, int attributeIndex) { return invoke <int>(0x7C059C55AD940CB4, ped, attributeIndex); }
	static void ADD_ATTRIBUTE_POINTS(Ped ped, int attributeIndex, int p2) { return invoke <void>(0x75415EE0CB583760, ped, attributeIndex, p2); }
	static void SET_ATTRIBUTE_POINTS(Ped ped, int attributeIndex, int p2) { return invoke <void>(0x9A59688C26D88DF, ped, attributeIndex, p2); }
	static int GET_ATTRIBUTE_POINTS(Ped ped, int attributeIndex) { return invoke <int>(0x219DA04BAA9CB065, ped, attributeIndex); }
	static int GET_MAX_ATTRIBUTE_POINTS(Ped ped, int attributeIndex) { return invoke <int>(0x223BF310F854871C, ped, attributeIndex); }
	static void _SET_ATTRIBUTE_CORE_VALUE(Ped ped, int coreIndex, int value) { return invoke <void>(0xC6258F41D86676E0, ped, coreIndex, value); }
	static int _GET_ATTRIBUTE_CORE_VALUE(Ped ped, int coreIndex) { return invoke <int>(0x36731AC041289BB1, ped, coreIndex); }
	static int GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(Hash modelHash, int attributeIndex, int rank) { return invoke <int>(0x94A7F191DB49A44D, modelHash, attributeIndex, rank); }
	static void ENABLE_ATTRIBUTE_OVERPOWER(Ped ped, int attributeIndex, float value, bool makeSound) { return invoke <void>(0xF6A7C08DF2E28B28, ped, attributeIndex, value, makeSound); }
	static void _ENABLE_ATTRIBUTE_CORE_OVERPOWER(Ped ped, int coreIndex, float value, bool makeSound) { return invoke <void>(0x4AF5A4C7B9157D14, ped, coreIndex, value, makeSound); }
	static void DISABLE_ATTRIBUTE_OVERPOWER(Ped ped, int attributeIndex) { return invoke <void>(0xF8DAC3D85636C241, ped, attributeIndex); }
	static bool _IS_ATTRIBUTE_OVERPOWERED(Ped ped, int attributeIndex) { return invoke <bool>(0x103C2F885ABEB00B, ped, attributeIndex); }
	static bool _IS_ATTRIBUTE_CORE_OVERPOWERED(Ped ped, int coreIndex) { return invoke <bool>(0x200373A8DF081F22, ped, coreIndex); }
	static float _GET_ATTRIBUTE_OVERPOWER_SECONDS_LEFT(Ped ped, int attributeIndex) { return invoke <float>(0x4C9F782180712742, ped, attributeIndex); }
	static float _GET_ATTRIBUTE_CORE_OVERPOWER_SECONDS_LEFT(Ped ped, int coreIndex) { return invoke <float>(0xB429F58803D285B1, ped, coreIndex); }
	static void _START_ITEM_PREVIEW(Any p0, int p1) { return invoke <void>(0x7E2C766ADB2C5F1A, p0, p1); }
	static void STOP_ITEM_PREVIEW() { return invoke <void>(0xD962F8579D702DB5); }
	static void _SET_STATUS_EFFECT_CORE_ICON(int statusEffectType) { return invoke <void>(0xA4D3A1C008F250DF, statusEffectType); }
	static void _SET_STATUS_EFFECT_PERIODIC_ICON(int statusEffectType) { return invoke <void>(0xFB6E111908502871, statusEffectType); }
	static void _STOP_STATUS_EFFECT_PERIODIC_ICON(int statusEffectType) { return invoke <void>(0x3FC4C027FD0936F4, statusEffectType); }
}

namespace AUDIO
{
	static void _0x7455CD705F7E933E() { return invoke <void>(0x7455CD705F7E933E); }
	static void CLEAR_CONVERSATION_HISTORY() { return invoke <void>(0x33D51F801CB16E4F); }
	static void _CLEAR_CONVERSATION_HISTORY_FOR_SCRIPTED_CONVERSATION(const char* convoRoot) { return invoke <void>(0xEF51242E35242B47, convoRoot); }
	static bool CREATE_NEW_SCRIPTED_CONVERSATION(const char* convoRoot) { return invoke <bool>(0xD2C91A0B572AAE56, convoRoot); }
	static bool _0xDF947FE0D551684E(Ped ped, const char* p1) { return invoke <bool>(0xDF947FE0D551684E, ped, p1); }
	static void ADD_PED_TO_CONVERSATION(const char* convoRoot, Ped SpeakerPedIndex, const char* characterName) { return invoke <void>(0x95D9F4BC443956E7, convoRoot, SpeakerPedIndex, characterName); }
	static void _0xA2323A2EAE32A290(Ped listeningToPed, Ped ped, const char* listenerName) { return invoke <void>(0xA2323A2EAE32A290, listeningToPed, ped, listenerName); }
	static bool _0x79F9C57B8D0DFE90(const char* convoRoot, AnimScene animScene) { return invoke <bool>(0x79F9C57B8D0DFE90, convoRoot, animScene); }
	static void START_SCRIPT_CONVERSATION(const char* convoRoot, bool p1, bool p2, bool cloneConversation) { return invoke <void>(0x6B17C62C9635D2DC, convoRoot, p1, p2, cloneConversation); }
	static void PRELOAD_SCRIPT_CONVERSATION(const char* convoRoot, bool p1, bool p2, bool cloneConversation) { return invoke <void>(0x3B3CAD6166916D87, convoRoot, p1, p2, cloneConversation); }
	static void START_PRELOADED_CONVERSATION(const char* convoRoot) { return invoke <void>(0x23641AFE870AF385, convoRoot); }
	static bool _0x0CB3D1919E8D7CBA(const char* convoRoot) { return invoke <bool>(0xCB3D1919E8D7CBA, convoRoot); }
	static bool _0xFE5C6177064BD390(bool p0) { return invoke <bool>(0xFE5C6177064BD390, p0); }
	static bool _IS_SCRIPTED_CONVERSATION_CREATED(const char* convoRoot) { return invoke <bool>(0xD89504D9D7D5057D, convoRoot); }
	static bool _0x5A13586A9447931F(bool p0) { return invoke <bool>(0x5A13586A9447931F, p0); }
	static bool IS_SCRIPTED_CONVERSATION_LOADED(const char* convoRoot) { return invoke <bool>(0xDF0D54BE7A776737, convoRoot); }
	static bool _IS_ANY_CONVERSATION_PLAYING(bool p0) { return invoke <bool>(0xA2CAC9DEF0195E6F, p0); }
	static bool IS_SCRIPTED_CONVERSATION_PLAYING(const char* p0) { return invoke <bool>(0x1ECC76792F661CF5, p0); }
	static bool _IS_SCRIPTED_CONVERSION_ONGOING(const char* p0) { return invoke <bool>(0xF01C570E0A0A1E67, p0); }
	static bool _0x847748AE5D7B1071(bool p0) { return invoke <bool>(0x847748AE5D7B1071, p0); }
	static bool _0xD0730C1FA40348D9(const char* convoRoot) { return invoke <bool>(0xD0730C1FA40348D9, convoRoot); }
	static int GET_CURRENT_SCRIPTED_CONVERSATION_LINE(const char* p0) { return invoke <int>(0x480357EE890C295A, p0); }
	static void PAUSE_SCRIPTED_CONVERSATION(const char* p0, bool p1, bool p2, bool p3, bool p4) { return invoke <void>(0x8530AD776CD72B12, p0, p1, p2, p3, p4); }
	static void RESTART_SCRIPTED_CONVERSATION(const char* p0) { return invoke <void>(0x9AEB285D1818C9AC, p0); }
	static void _STOP_ALL_SCRIPTED_CONVERSIONS(bool p0, bool p1, bool p2) { return invoke <void>(0x36559148B78853B3, p0, p1, p2); }
	static int STOP_SCRIPTED_CONVERSATION(const char* p0, bool p1, bool p2) { return invoke <int>(0xD79DEEFB53455EBA, p0, p1, p2); }
	static void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(const char* p0) { return invoke <void>(0x9663FE6B7A61EB00, p0); }
	static int _0xF336E9F989B3518F(const char* p0) { return invoke <int>(0xF336E9F989B3518F, p0); }
	static Ped _0x254B0241E964B450(const char* p0, int currentScriptedConvoLine) { return invoke <Ped>(0x254B0241E964B450, p0, currentScriptedConvoLine); }
	static Ped _0x152ED1B56E8F1F50(const char* p0, int currentScriptedConvoLine) { return invoke <Ped>(0x152ED1B56E8F1F50, p0, currentScriptedConvoLine); }
	static int _0x935DBD96D4A3DA1F(const char* p0, int currentScriptedConvoLine) { return invoke <int>(0x935DBD96D4A3DA1F, p0, currentScriptedConvoLine); }
	static int _0x295859EB18F48D82(const char* p0) { return invoke <int>(0x295859EB18F48D82, p0); }
	static void _0x40CA665AB9D8D505(const char* convoRoot, int singleLineIndex) { return invoke <void>(0x40CA665AB9D8D505, convoRoot, singleLineIndex); }
	static void _0xF232C2C546AC16D0(const char* p0) { return invoke <void>(0xF232C2C546AC16D0, p0); }
	static void _0x1E6F9A9FE1A99F36(const char* audSpeechEvent) { return invoke <void>(0x1E6F9A9FE1A99F36, audSpeechEvent); }
	static void REGISTER_SCRIPT_WITH_AUDIO(bool InChargeOfAudio) { return invoke <void>(0xC6ED9D5092438D91, InChargeOfAudio); }
	static void UNREGISTER_SCRIPT_WITH_AUDIO() { return invoke <void>(0xA8638BE228D4751A); }
	static bool REQUEST_SCRIPT_AUDIO_BANK(const char* BankName) { return invoke <bool>(0x2F844A8B08D76685, BankName); }
	static void RELEASE_NAMED_SCRIPT_AUDIO_BANK(const char* BankName) { return invoke <void>(0x77ED170667F50170, BankName); }
	static void RELEASE_SCRIPT_AUDIO_BANK() { return invoke <void>(0x7A2D8AD0A9EB9C3F); }
	static int GET_SOUND_ID() { return invoke <int>(0x430386FE9BF80B45); }
	static void RELEASE_SOUND_ID(int SoundId) { return invoke <void>(0x353FC880830B88FA, SoundId); }
	static void PLAY_SOUND(const char* SoundName, const char* SetName, bool p2, Any p3, bool p4, Any p5) { return invoke <void>(0x7FF4944CC209192D, SoundName, SetName, p2, p3, p4, p5); }
	static void PLAY_SOUND_FRONTEND(const char* SoundName, const char* SetName, bool p2, Any p3) { return invoke <void>(0x67C540AA08E4A6F5, SoundName, SetName, p2, p3); }
	static void _PLAY_SOUND_FROM_ITEM(Hash item, Hash soundSet, Any p2) { return invoke <void>(0xE8EAFF7B41EDD291, item, soundSet, p2); }
	static void PLAY_SOUND_FROM_ENTITY(const char* audioName, Entity entity, const char* audioRef, bool isNetwork, Any p4, Any p5) { return invoke <void>(0x6FB1DA3CA9DA7D90, audioName, entity, audioRef, isNetwork, p4, p5); }
	static void _PLAY_SOUND_FROM_POSITION(const char* audioName, float x, float y, float z, const char* audioRef, bool isNetwork, Any p6, bool p7, Any p8) { return invoke <void>(0xCCE219C922737BFA, audioName, x, y, z, audioRef, isNetwork, p6, p7, p8); }
	static void _STOP_SOUND_WITH_NAME(const char* audioName, const char* audioRef) { return invoke <void>(0xF2A2175734926D8, audioName, audioRef); }
	static bool _0x580D71DFE0088E34(const char* audioName, const char* audioRef) { return invoke <bool>(0x580D71DFE0088E34, audioName, audioRef); }
	static bool _IS_SCRIPTED_AUDIO_CUSTOM(Hash item, Hash soundSet) { return invoke <bool>(0x6DF942C4179BE5AB, item, soundSet); }
	static void _SET_VARIABLE_ON_SOUND_WITH_NAME(const char* variableName, float variableValue, const char* audioName, const char* audioRef) { return invoke <void>(0x9821B68CD3E05F2B, variableName, variableValue, audioName, audioRef); }
	static void _SET_WHISTLE_CONFIG_FOR_PED(Ped ped, const char* whistleConfig, float value) { return invoke <void>(0x9963681A8BC69BF3, ped, whistleConfig, value); }
	static void _SET_SOUND_RELATIONSHIP_ON_PED(Ped ped, const char* p1, const char* p2) { return invoke <void>(0x2E31ACA7477CF00F, ped, p1, p2); }
	static void _PLAY_SOUND_FRONTEND_WITH_SOUND_ID(int soundId, const char* name, const char* soundSet, bool p3) { return invoke <void>(0xCE5D0FFE83939AF1, soundId, name, soundSet, p3); }
	static void _PLAY_SOUND_FROM_ENTITY_WITH_SET(int soundId, const char* soundName, Entity entity, const char* soundsetName, bool p4, Any p5) { return invoke <void>(0xF1C5310FEAA36B48, soundId, soundName, entity, soundsetName, p4, p5); }
	static void _PLAY_SOUND_FROM_POSITION_WITH_ID(int soundId, const char* soundName, float x, float y, float z, const char* soundsetName, bool p6, int p7, bool p8) { return invoke <void>(0xDCF5BA95BBF0FABA, soundId, soundName, x, y, z, soundsetName, p6, p7, p8); }
	static void _UPDATE_SOUND_POSITION(int soundId, float x, float y, float z) { return invoke <void>(0x286617C8FC50A53, soundId, x, y, z); }
	static void _STOP_SOUND_WITH_ID(int soundId) { return invoke <void>(0x3210BCB36AF7621B, soundId); }
	static void _SET_VARIABLE_ON_SOUND_WITH_ID(int soundId, const char* variableName, float variableValue) { return invoke <void>(0x503703EC1781B7D6, soundId, variableName, variableValue); }
	static bool PREPARE_SOUND(const char* soundName, const char* soundsetName, int soundId) { return invoke <bool>(0xE368E8422C860BA7, soundName, soundsetName, soundId); }
	static void _RELEASE_SHARD_SOUNDS(const char* soundName, const char* soundsetName) { return invoke <void>(0x9D746964E0CF2C5F, soundName, soundsetName); }
	static bool PREPARE_SOUNDSET(const char* soundsetName, bool p1) { return invoke <bool>(0xD9130842D7226045, soundsetName, p1); }
	static void _RELEASE_SOUNDSET(const char* soundsetName) { return invoke <void>(0x531A78D6BF27014B, soundsetName); }
	static bool PREPARE_SOUND_WITH_ENTITY(const char* soundName, Entity entity, const char* soundsetName, int soundId) { return invoke <bool>(0x4AD019591E94C064, soundName, entity, soundsetName, soundId); }
	static void _0x3E93DDDCBB6111E4(const char* p0, float p1) { return invoke <void>(0x3E93DDDCBB6111E4, p0, p1); }
	static bool _HAS_SOUND_AUDIO_NAME_FINISHED(const char* audioName, const char* soundsetName) { return invoke <bool>(0x714A0EA7DE1167BE, audioName, soundsetName); }
	static bool _HAS_SOUND_ID_FINISHED(int soundId) { return invoke <bool>(0x84848E1C0FC67DBB, soundId); }
	static bool PLAY_PED_AMBIENT_SPEECH_NATIVE(Ped PedIndex, void* params) { return invoke <bool>(0x8E04FEDD28D42462, PedIndex, params); }
	static bool PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE(float PositionX, float PositionY, float PositionZ, void* params) { return invoke <bool>(0xED640017ED337E45, PositionX, PositionY, PositionZ, params); }
	static Any _0x72E4D1C4639BC465(Entity p0, Any p1) { return invoke <Any>(0x72E4D1C4639BC465, p0, p1); }
	static Any _0xB18FEC133C7C6C69(Any p0) { return invoke <Any>(0xB18FEC133C7C6C69, p0); }
	static void _0xDC93F0948F2C28F4(Any p0) { return invoke <void>(0xDC93F0948F2C28F4, p0); }
	static void _0x0D7FD6A55FD63AEF(int speechEventType, int p1, bool p2) { return invoke <void>(0xD7FD6A55FD63AEF, speechEventType, p1, p2); }
	static void _0x660A8F876DF1D4F8(int speechEventType) { return invoke <void>(0x660A8F876DF1D4F8, speechEventType); }
	static void _0x380A2E353AD30917(Any p0, Any p1, Any p2) { return invoke <void>(0x380A2E353AD30917, p0, p1, p2); }
	static void _0x0FAF7171BF613B80(Any p0) { return invoke <void>(0xFAF7171BF613B80, p0); }
	static void PLAY_PAIN(Ped PedIndex, int DamageReason, float RawDamage, bool p3, bool SyncOverNetwork) { return invoke <void>(0xBC9AE166038A5CEC, PedIndex, DamageReason, RawDamage, p3, SyncOverNetwork); }
	static void _0x6652B0C8F3D414D0(Any p0) { return invoke <void>(0x6652B0C8F3D414D0, p0); }
	static void _0xF092B6030D6FD49C(int ropeId, const char* name) { return invoke <void>(0xF092B6030D6FD49C, ropeId, name); }
	static void _0x2651DDC0EA269073(int ropeId, float p1) { return invoke <void>(0x2651DDC0EA269073, ropeId, p1); }
	static void SET_AMBIENT_VOICE_NAME(Ped PedIndex, const char* VoiceName) { return invoke <void>(0x6C8065A3B780185B, PedIndex, VoiceName); }
	static void _SET_VOFX_PED_VOICE(Ped ped, Hash voice) { return invoke <void>(0x2703EFB583F0949A, ped, voice); }
	static void STOP_CURRENT_PLAYING_SPEECH(Ped PedIndex, Any p1) { return invoke <void>(0x79D2F0E66F81D90D, PedIndex, p1); }
	static void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Ped PedIndex, Any p1) { return invoke <void>(0xB8BEC0CA6F0EDB0F, PedIndex, p1); }
	static bool IS_AMBIENT_SPEECH_PLAYING(Ped PedIndex) { return invoke <bool>(0x9072C8B49907BFAD, PedIndex); }
	static bool IS_SCRIPTED_SPEECH_PLAYING(Ped PedIndex) { return invoke <bool>(0xCC9AA18DCC7084F4, PedIndex); }
	static bool IS_ANY_SPEECH_PLAYING(Ped PedIndex) { return invoke <bool>(0x729072355FA39EC9, PedIndex); }
	static Any _0x2B101AD9F651243A() { return invoke <Any>(0x2B101AD9F651243A); }
	static Any _0x4A98E228A936DBCC(Any p0) { return invoke <Any>(0x4A98E228A936DBCC, p0); }
	static Any _0x6BFFB7C276866996(Any p0) { return invoke <Any>(0x6BFFB7C276866996, p0); }
	static bool DOES_CONTEXT_EXIST_FOR_THIS_PED(Ped PedIndex, const char* context, bool allowBackupPVG) { return invoke <bool>(0x49B99BF3FDA89A7A, PedIndex, context, allowBackupPVG); }
	static Any _0xF0EE69F500952FA5(Any p0) { return invoke <Any>(0xF0EE69F500952FA5, p0); }
	static Any _0x9D6DEC9791A4E501(Any p0, Any p1, Any p2, Any p3) { return invoke <Any>(0x9D6DEC9791A4E501, p0, p1, p2, p3); }
	static void _0x864A842B86993851(Ped ped) { return invoke <void>(0x864A842B86993851, ped); }
	static bool IS_PED_IN_CURRENT_CONVERSATION(const char* p0, Ped PedIndex, Any p2) { return invoke <bool>(0x49E937F18F4020C, p0, PedIndex, p2); }
	static bool _IS_PED_IN_ANY_CONVERSATION(Ped ped, bool p1) { return invoke <bool>(0x54B187F111D9C6F8, ped, p1); }
	static void SET_PED_IS_DRUNK(Ped PedIndex, bool IsDrunk) { return invoke <void>(0x95D2D383D5396B8A, PedIndex, IsDrunk); }
	static void _0x3A00D87B20A2A5E4(Any p0, Any p1) { return invoke <void>(0x3A00D87B20A2A5E4, p0, p1); }
	static void _0xD47D47EFBF103FB8(Any p0, Any p1) { return invoke <void>(0xD47D47EFBF103FB8, p0, p1); }
	static void PLAY_ANIMAL_VOCALIZATION(Ped PedIndex, const char* vocalizationName, bool p2) { return invoke <void>(0xEE066C7006C49C0A, PedIndex, vocalizationName, p2); }
	static void _PLAY_ANIMAL_VOCALIZATION_PHEROMONE_VIAL_RESPONSE(Ped ped, Hash p1, bool p2) { return invoke <void>(0xE53530D9B2DB01D, ped, p1, p2); }
	static bool IS_ANIMAL_VOCALIZATION_PLAYING(Ped PedIndex) { return invoke <bool>(0xC265DF9FB44A9FBD, PedIndex); }
	static void SET_ANIMAL_MOOD(Ped PedIndex, int Mood) { return invoke <void>(0xCC97B29285B1DC3B, PedIndex, Mood); }
	static void _0xFCDEC42B1C78B7F8(Any p0, Any p1) { return invoke <void>(0xFCDEC42B1C78B7F8, p0, p1); }
	static void _0xEB4D592620B8C209(Any p0) { return invoke <void>(0xEB4D592620B8C209, p0); }
	static void _0xA6847BBA4FCDD13F(Any p0, Any p1) { return invoke <void>(0xA6847BBA4FCDD13F, p0, p1); }
	static void SET_STATIC_EMITTER_ENABLED(const char* EmitterName, bool enabled) { return invoke <void>(0x399D2D3B33F1B8EB, EmitterName, enabled); }
	static void PLAY_END_CREDITS_MUSIC(bool bActive) { return invoke <void>(0xCD536C4D33DCC900, bActive); }
	static Any _0x7678FE0455ED1145(Any p0, Any p1, Any p2) { return invoke <Any>(0x7678FE0455ED1145, p0, p1, p2); }
	static Any _0xFFE9C53DEEA3DB0B(Any p0, Any p1, float x, float y, float z, bool isSrlLoaded, Any p6) { return invoke <Any>(0xFFE9C53DEEA3DB0B, p0, p1, x, y, z, isSrlLoaded, p6); }
	static void _0x5E3CCF03995388B5(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x5E3CCF03995388B5, p0, p1, p2, p3); }
	static void _0x43037ABFE214A851() { return invoke <void>(0x43037ABFE214A851); }
	static void SET_AMBIENT_ZONE_STATE(const char* zoneName, bool enabled, bool forceUpdate) { return invoke <void>(0xBDA07E5950085E46, zoneName, enabled, forceUpdate); }
	static void CLEAR_AMBIENT_ZONE_STATE(const char* zoneName, bool forceUpdate) { return invoke <void>(0x218DD44AAAC964FF, zoneName, forceUpdate); }
	static void SET_AMBIENT_ZONE_LIST_STATE(const char* zoneListName, bool enabled, bool forceUpdate) { return invoke <void>(0x9748FA4DE50CCE3E, zoneListName, enabled, forceUpdate); }
	static void CLEAR_AMBIENT_ZONE_LIST_STATE(const char* zoneListName, bool forceUpdate) { return invoke <void>(0x120C48C614909FA4, zoneListName, forceUpdate); }
	static void SET_AMBIENT_ZONE_STATE_PERSISTENT(const char* zoneName, bool enabled, bool forceUpdate) { return invoke <void>(0x1D6650420CEC9D3B, zoneName, enabled, forceUpdate); }
	static void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(const char* zoneListName, bool enabled, bool forceUpdate) { return invoke <void>(0xF3638DAE8C4045E1, zoneListName, enabled, forceUpdate); }
	static void _SET_AMBIENT_ZONE_POSITION(const char* ambientZone, float x, float y, float z, float heading) { return invoke <void>(0x3743CE6948194349, ambientZone, x, y, z, heading); }
	static bool IS_HORN_ACTIVE(Vehicle VehIndex) { return invoke <bool>(0x9D6BFC12B05C6121, VehIndex); }
	static void _0xFD461D0ABA5559B1(Any p0, Any p1) { return invoke <void>(0xFD461D0ABA5559B1, p0, p1); }
	static bool IS_STREAM_PLAYING(int streamId) { return invoke <bool>(0xD11FA52EB849D978, streamId); }
	static bool LOAD_STREAM(const char* streamName, const char* SetName) { return invoke <bool>(0x1F1F957154EC51DF, streamName, SetName); }
	static void PLAY_STREAM_FROM_PED(Ped PedIndex, int streamId) { return invoke <void>(0x89049DD63C08B5D1, PedIndex, streamId); }
	static void PLAY_STREAM_FRONTEND(int streamId) { return invoke <void>(0x58FCE43488F9F5F4, streamId); }
	static void PLAY_STREAM_FROM_POSITION(float positionX, float positionY, float positionZ, int streamId) { return invoke <void>(0x21442F412E8DE56B, positionX, positionY, positionZ, streamId); }
	static void _0x3A3BE6B920525237(Any p0, Any p1) { return invoke <void>(0x3A3BE6B920525237, p0, p1); }
	static void STOP_STREAM(int streamId) { return invoke <void>(0xA4718A1419D18151, streamId); }
	static void STOP_PED_SPEAKING(Ped PedIndex, bool ShouldDisable) { return invoke <void>(0x9D64D7405520E3D3, PedIndex, ShouldDisable); }
	static void DISABLE_PED_PAIN_AUDIO(Ped PedIndex, bool ShouldDisable) { return invoke <void>(0xA9A41C1E940FB0E8, PedIndex, ShouldDisable); }
	static bool IS_AMBIENT_SPEECH_DISABLED(Ped PedIndex) { return invoke <bool>(0x932C2D096A2C3FFF, PedIndex); }
	static Any SET_IS_SCRIPTED_SPEECH_DISABLED(Ped ped, bool disabled) { return invoke <Any>(0xB2DE3AEBE31150E2, ped, disabled); }
	static void _BLOCK_SPEECH_CONTEXT(const char* context, bool block) { return invoke <void>(0x6378A235374B852F, context, block); }
	static void _UNLOAD_SPEECH_CONTEXT(const char* speechContext) { return invoke <void>(0x87E6302FC61208CC, speechContext); }
	static void SET_HORN_ENABLED(Vehicle VehicleIndex, bool Enable) { return invoke <void>(0x76D683C108594D0E, VehicleIndex, Enable); }
	static void SET_AUDIO_VEHICLE_PRIORITY(Vehicle VehicleIndex, int priority) { return invoke <void>(0xE5564483E407F914, VehicleIndex, priority); }
	static void _0x259ACC5B52A2B2D9(Any p0, Any p1) { return invoke <void>(0x259ACC5B52A2B2D9, p0, p1); }
	static void FORCE_USE_AUDIO_GAME_OBJECT(Vehicle VehicleIndex, const char* GameObjectName) { return invoke <void>(0x4F0C413926060B38, VehicleIndex, GameObjectName); }
	static void SET_GPS_ACTIVE(bool DisableGps) { return invoke <void>(0x3BD3F52BA9B1E4E8, DisableGps); }
	static bool _START_AUDIO_SCENESET(const char* audioName, const char* sceneset) { return invoke <bool>(0x6339C1EA3979B5F7, audioName, sceneset); }
	static void _STOP_AUDIO_SCENESET(const char* sceneset) { return invoke <void>(0x9428447DED71FC7E, sceneset); }
	static bool _SET_AUDIO_SCENESET(const char* audioName, const char* sceneset) { return invoke <bool>(0xAC84686C06184B0D, audioName, sceneset); }
	static bool START_AUDIO_SCENE(const char* SceneName) { return invoke <bool>(0x13A80FC08F6E4F2, SceneName); }
	static Any _0xDC2F83A0612CA34D(Any p0) { return invoke <Any>(0xDC2F83A0612CA34D, p0); }
	static void STOP_AUDIO_SCENE(const char* SceneName) { return invoke <void>(0xDFE8422B3B94E688, SceneName); }
	static void _0x6AB944DF68B512D3(Any p0) { return invoke <void>(0x6AB944DF68B512D3, p0); }
	static void STOP_AUDIO_SCENES() { return invoke <void>(0xBAC7FC81A75EC1A1); }
	static bool IS_AUDIO_SCENE_ACTIVE(const char* SceneName) { return invoke <bool>(0xB65B60556E2A9225, SceneName); }
	static void SET_AUDIO_SCENE_VARIABLE(const char* SceneName, const char* VariableName, float Value) { return invoke <void>(0xEF21A9EF089A2668, SceneName, VariableName, Value); }
	static Hash _GET_ENTITY_AUDIO_MIX_GROUP(Entity entity) { return invoke <Hash>(0x8B25A18E390F75BF, entity); }
	static void ADD_ENTITY_TO_AUDIO_MIX_GROUP(Entity EntityIndex, const char* groupName, float fadeIn) { return invoke <void>(0x153973AB99FE8980, EntityIndex, groupName, fadeIn); }
	static Any _0x131EC9247E7A2903(Any p0) { return invoke <Any>(0x131EC9247E7A2903, p0); }
	static void REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Entity EntityIndex, float fadeOut) { return invoke <void>(0x18EB48CFC41F2EA0, EntityIndex, fadeOut); }
	static Any _0xE600F61F54A444A6() { return invoke <Any>(0xE600F61F54A444A6); }
	static bool AUDIO_IS_MUSIC_PLAYING() { return invoke <bool>(0x845FFC3A4FEEFA3E); }
	static Hash _0xBE28DB99556FF8D9(Entity entity) { return invoke <Hash>(0xBE28DB99556FF8D9, entity); }
	static void _0x8E901B65206C2D3E(Ped ped) { return invoke <void>(0x8E901B65206C2D3E, ped); }
	static void _0xC4CFCE4C656EF480(Ped ped) { return invoke <void>(0xC4CFCE4C656EF480, ped); }
	static void _0xABDB4863D3D72021(Entity entity, Any p1, Any p2, float p3, Any p4) { return invoke <void>(0xABDB4863D3D72021, entity, p1, p2, p3, p4); }
	static void _0xB93A769B8B726950(Ped ped, Hash p1) { return invoke <void>(0xB93A769B8B726950, ped, p1); }
	static void _0xE891504B2F0E2DBA(Any p0, Any p1) { return invoke <void>(0xE891504B2F0E2DBA, p0, p1); }
	static void _0x9EB779765E68C52E(Any p0, Any p1) { return invoke <void>(0x9EB779765E68C52E, p0, p1); }
	static void _0xE9694B2D6CB87B06(Entity entity, Any p1) { return invoke <void>(0xE9694B2D6CB87B06, entity, p1); }
	static Any _0x886657C5B3D8EDE3(Entity entity) { return invoke <Any>(0x886657C5B3D8EDE3, entity); }
	static Any _0xC68C02DE259C927C(Any p0) { return invoke <Any>(0xC68C02DE259C927C, p0); }
	static Any _0x2FFF4A78384AFFDF(Entity entity) { return invoke <Any>(0x2FFF4A78384AFFDF, entity); }
	static AnimScene _0x62377977E4F08668(Entity entity) { return invoke <AnimScene>(0x62377977E4F08668, entity); }
	static Any _GET_PED_SONG_INDEX_HOST(Ped ped) { return invoke <Any>(0x2DBBF0C5E19383EE, ped); }
	static Any _0xD05A460328560477(Any p0) { return invoke <Any>(0xD05A460328560477, p0); }
	static void _0x8D29FDF565DED9AE(Any p0, Any p1, Any p2) { return invoke <void>(0x8D29FDF565DED9AE, p0, p1, p2); }
	static void _0x448F2647DD6F2E27(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x448F2647DD6F2E27, p0, p1, p2, p3, p4); }
	static void _0x139A4B9DF2D26CBF(Any p0, Any p1) { return invoke <void>(0x139A4B9DF2D26CBF, p0, p1); }
	static void _0x018ABE833CA64D2A(Any p0, Any p1) { return invoke <void>(0x18ABE833CA64D2A, p0, p1); }
	static void _0xBC07CA8FD710E7FD(Any p0, Any p1) { return invoke <void>(0xBC07CA8FD710E7FD, p0, p1); }
	static bool PREPARE_MUSIC_EVENT(const char* eventName) { return invoke <bool>(0x1E5185B72EF5158A, eventName); }
	static bool CANCEL_MUSIC_EVENT(const char* eventName) { return invoke <bool>(0x5B17A90291133DA5, eventName); }
	static bool TRIGGER_MUSIC_EVENT(const char* eventName) { return invoke <bool>(0x706D57B0F50DA710, eventName); }
	static Any _TRIGGER_MUSIC_EVENT_WITH_HASH(Hash eventName) { return invoke <Any>(0x5D6195FB4D428F4, eventName); }
	static int GET_MUSIC_PLAYTIME() { return invoke <int>(0xE7A0D23DC414507B); }
	static void _0xF64034D533CE8AAC(Any p0, Any p1, Any p2) { return invoke <void>(0xF64034D533CE8AAC, p0, p1, p2); }
	static void SET_PED_WALLA_DENSITY(float density, float applyValue) { return invoke <void>(0x149AEE66F0CB3A99, density, applyValue); }
	static void _0xDAD6CD07CAA4F382() { return invoke <void>(0xDAD6CD07CAA4F382); }
	static void SET_PED_INTERIOR_WALLA_DENSITY(float density, float applyValue) { return invoke <void>(0x8BF907833BE275DE, density, applyValue); }
	static void FORCE_PED_PANIC_WALLA() { return invoke <void>(0x62D5EAD4DA2FA6A); }
	static void _0x138ADB94F8B90616() { return invoke <void>(0x138ADB94F8B90616); }
	static void USE_FOOTSTEP_SCRIPT_SWEETENERS(Ped PedIndex, bool use, Hash soundSetHash) { return invoke <void>(0xBF4DC1784BE94DFA, PedIndex, use, soundSetHash); }
	static void SET_AUDIO_FLAG(const char* flagName, bool enabled) { return invoke <void>(0xB9EFD5C25018725A, flagName, enabled); }
	static void _0x6DA15746D5CC1A92(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <void>(0x6DA15746D5CC1A92, p0, p1, p2, p3, p4, p5); }
	static void _0x078F77FD1A43EAB3(Any p0, Any p1) { return invoke <void>(0x78F77FD1A43EAB3, p0, p1); }
	static void _0x3D0BBCCF401B5FDB() { return invoke <void>(0x3D0BBCCF401B5FDB); }
	static void SET_PORTAL_SETTINGS_OVERRIDE(const char* OldPortalSettingsName, const char* NewPortalSettingsName) { return invoke <void>(0x44DBAD7A7FA2BE5, OldPortalSettingsName, NewPortalSettingsName); }
	static void REMOVE_PORTAL_SETTINGS_OVERRIDE(const char* PortalSettingsName) { return invoke <void>(0xB4BBFD9CD8B3922B, PortalSettingsName); }
	static void _0xEA546C31FD45F8CD(Any p0) { return invoke <void>(0xEA546C31FD45F8CD, p0); }
	static Any _0x44A5EEF54F62E823(Any p0) { return invoke <Any>(0x44A5EEF54F62E823, p0); }
	static void _0x017492B2201E3428(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x17492B2201E3428, p0, p1, p2, p3); }
	static void _0xC886CD666ADD42E1(Any p0, Any p1) { return invoke <void>(0xC886CD666ADD42E1, p0, p1); }
	static void _0x5AE0CB5F35F034FD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke <void>(0x5AE0CB5F35F034FD, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0x821C32C728B24477(Any p0, Any p1, Any p2) { return invoke <void>(0x821C32C728B24477, p0, p1, p2); }
	static void _0x06C5DF5EE444BC6B(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x6C5DF5EE444BC6B, p0, p1, p2, p3, p4); }
	static void _0x341CDD17EFC2472E(Any p0, Any p1) { return invoke <void>(0x341CDD17EFC2472E, p0, p1); }
	static void _0x7E176C676F8652A9(Any p0) { return invoke <void>(0x7E176C676F8652A9, p0); }
	static Any _0x2B9C37C01BF25EDB(Any p0) { return invoke <Any>(0x2B9C37C01BF25EDB, p0); }
	static Any _0xA6A3A3F96B8B030E() { return invoke <Any>(0xA6A3A3F96B8B030E); }
	static int _GET_LOADED_STREAM_ID_FROM_CREATION(const char* streamName, const char* soundSet) { return invoke <int>(0x556C784FA056628, streamName, soundSet); }
	static Any _0xC369E2234E34A0CA(Any p0, Any p1) { return invoke <Any>(0xC369E2234E34A0CA, p0, p1); }
	static void _0x35B8C070E0C16E2F(Any p0, Any p1) { return invoke <void>(0x35B8C070E0C16E2F, p0, p1); }
	static void _0xE7E6CB8B713ED190() { return invoke <void>(0xE7E6CB8B713ED190); }
	static void _0x569ABC36E28DDEAA() { return invoke <void>(0x569ABC36E28DDEAA); }
	static void _0x839C9F124BE74D94(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x839C9F124BE74D94, p0, p1, p2, p3, p4); }
	static void AUDIO_TRIGGER_EXPLOSION(const char* name, float x, float y, float z) { return invoke <void>(0x374F0E716BFCDE82, name, x, y, z); }
	static void _0x3E98AC9D8C56C62C(Any p0) { return invoke <void>(0x3E98AC9D8C56C62C, p0); }
	static void _0xCBF2BEBB468A34F3(Any p0) { return invoke <void>(0xCBF2BEBB468A34F3, p0); }
	static void _0xA2B851605748AD0E() { return invoke <void>(0xA2B851605748AD0E); }
	static void _0xCFAD2C8CD1054523(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xCFAD2C8CD1054523, p0, p1, p2, p3); }
	static void _0xD733528B6C35647A(Any p0, Any p1) { return invoke <void>(0xD733528B6C35647A, p0, p1); }
	static void _0x5BC885EBD75FAA7D(Any p0, Any p1) { return invoke <void>(0x5BC885EBD75FAA7D, p0, p1); }
	static void _0x6B7A88A61B41E589(Any p0) { return invoke <void>(0x6B7A88A61B41E589, p0); }
	static void _0x4BE3EC91C01F0FE8() { return invoke <void>(0x4BE3EC91C01F0FE8); }
	static void SET_AUDIO_ONLINE_TRANSITION_STAGE(const char* p0) { return invoke <void>(0x9B1FC259187C97C0, p0); }
	static void _STOP_ALL_SCRIPTED_AUDIO_SOUNDS() { return invoke <void>(0x2E399EAFBEEA74D5); }
	static void _0x64B956F4E761DF5C(Any p0) { return invoke <void>(0x64B956F4E761DF5C, p0); }
}

namespace BOUNTY
{
	static bool _BOUNTY_REQUEST_PAY_OFF_BOUNTY(void* outRpcGuid) { return invoke <bool>(0x537CE992BD2D7BCB, outRpcGuid); }
	static bool _BOUNTY_REQUEST_PAY_OFF_BOUNTY_EX(void* outRpcGuid, Hash p1, Hash costType) { return invoke <bool>(0x587BCEC31D64F382, outRpcGuid, p1, costType); }
	static bool _BOUNTY_REQUEST_SELF_REPORT_CRIME(void* outRpcGuid, Hash crimeType, bool p2) { return invoke <bool>(0x188B748861B5BA17, outRpcGuid, crimeType, p2); }
	static bool _BOUNTY_REQUEST_SELF_REPORT_KILLED_BY_BOUNTY_HUNTER(void* outRpcGuid) { return invoke <bool>(0xB462D69D406A2602, outRpcGuid); }
	static bool BOUNTY_GET_BOUNTY_ON_PLAYER(void* gamerHandle, void* bountyData) { return invoke <bool>(0x4EF23E04A0C8FF51, gamerHandle, bountyData); }
	static bool _BOUNTY_IS_REQUEST_PENDING(void* rpcGuid) { return invoke <bool>(0x3B61CD51097DE60, rpcGuid); }
	static bool _BOUNTY_REQUEST_BEGIN_WANTED_POSTER(void* outRpcGuid, int p1) { return invoke <bool>(0xFFA13742E43507E3, outRpcGuid, p1); }
	static bool _0x81847C2134039BDC(void* p0) { return invoke <bool>(0x81847C2134039BDC, p0); }
	static bool _BOUNTY_REQUEST_COMPLETE_WANTED_POSTER(void* outRpcGuid, void* p1) { return invoke <bool>(0x727AB6F008BB9F29, outRpcGuid, p1); }
	static bool _BOUNTY_REQUEST_COMPLETE_SPLIT_WANTED_POSTER(void* outRpcGuid, void* p1) { return invoke <bool>(0xFBD137BF0EC50FC9, outRpcGuid, p1); }
	static void _BOUNTY_CANCEL_WANTED_POSTER() { return invoke <void>(0x6A9DF0FCD0C87FF9); }
	static bool BOUNTY_REQUEST_BEGIN_LEGENDARY_MISSION(void* outRpcGuid, int p1, int p2) { return invoke <bool>(0xFC81D7C7A151CFAA, outRpcGuid, p1, p2); }
	static bool BOUNTY_REQUEST_BEGIN_LEGENDARY_MISSION_FOR_POSSE(void* outRpcGuid, int p1, int p2) { return invoke <bool>(0x48E4E23F1739E197, outRpcGuid, p1, p2); }
	static bool _BOUNTY_REQUEST_COMPLETE_LEGENDARY_MISSION(void* outRpcGuid, void* p1) { return invoke <bool>(0xA7309AC0DCF6D950, outRpcGuid, p1); }
	static void _BOUNTY_CANCEL_LEGENDARY_MISSION() { return invoke <void>(0x2BA1BCC99826CDA2); }
	static bool BOUNTY_GET_WANTED_POSTER_SLOT(Hash p0, Hash p1, void* p2) { return invoke <bool>(0xB395A44A0C7CA615, p0, p1, p2); }
	static bool BOUNTY_GET_LEGENDARY_TARGET(Any p0, void* p1) { return invoke <bool>(0x85E4D7B225A30ED1, p0, p1); }
	static bool _0x86EC5F83867C4B70(void* p0) { return invoke <bool>(0x86EC5F83867C4B70, p0); }
	static bool BOUNTY_GET_COOLDOWN_COLLECTION(void* p0) { return invoke <bool>(0x8FAF4D262FABA99C, p0); }
	static bool _BOUNTY_REQUEST_BECOME_TARGET_OF_CHARACTER_BOUNTY_HUNT(void* outRpcGuid) { return invoke <bool>(0xB096547D61868254, outRpcGuid); }
	static bool _0x27D3A0E1FE090A43(void* p0) { return invoke <bool>(0x27D3A0E1FE090A43, p0); }
	static bool _BOUNTY_REQUEST_CLAIM_CHARACTER_BOUNTY(void* outRpcGuid, int p1, void* p2) { return invoke <bool>(0xA9C3B0F746375162, outRpcGuid, p1, p2); }
	static bool _BOUNTY_REQUEST_POSSE_LEADER_CLAIM_CHARACTER_BOUNTY(void* outRpcGuid, int p1, void* p2) { return invoke <bool>(0x5B53CA0E2AC3FF45, outRpcGuid, p1, p2); }
	static bool _BOUNTY_REQUEST_POSSE_MEMBER_CLAIM_CHARACTER_BOUNTY_SHARE(void* outRpcGuid, void* p1) { return invoke <bool>(0x22D3A61CE053270C, outRpcGuid, p1); }
	static void _BOUNTY_CLEAR_BEING_BOUNTY_HUNTER() { return invoke <void>(0xA59D1997ECD99F0A); }
	static bool _BOUNTY_REQUEST_ESCAPED_CHARACTER_BOUNTY_HUNT(void* outRpcGuid) { return invoke <bool>(0x12E981D53B07BF48, outRpcGuid); }
	static bool _BOUNTY_REQUEST_POSSE_LEADER_ESCAPED_CHARACTER_BOUNTY_HUNT(void* outRpcGuid) { return invoke <bool>(0x2D874BA20E8E1F20, outRpcGuid); }
	static bool _BOUNTY_REQUEST_POSSE_MEMBER_ESCAPED_CHARACTER_BOUNTY_HUNT(void* outRpcGuid) { return invoke <bool>(0x8521C2E235558278, outRpcGuid); }
	static void _BOUNTY_CLEAR_BEING_TARGET() { return invoke <void>(0x932DB3C05A7465D1); }
	static bool _BOUNTY_REQUEST_SERVED_FULL_JAIL_SENTENCE(void* outRpcGuid) { return invoke <bool>(0x3F73AED12A5EF0FF, outRpcGuid); }
	static bool _BOUNTY_REQUEST_BRIBE_JAIL_GUARD(void* outRpcGuid, int p1) { return invoke <bool>(0x28717806D3BDD0D0, outRpcGuid, p1); }
	static int _0xF8BCC5ECA33AC9C1() { return invoke <int>(0xF8BCC5ECA33AC9C1); }
	static int _0xD6A67E2FF373D0E3(int p0) { return invoke <int>(0xD6A67E2FF373D0E3, p0); }
}

namespace BRAIN
{
	static void REGISTER_OBJECT_SCRIPT_BRAIN(const char* pScriptName, Hash ObjectModelHashKey, int PercentageChance, float fActivationRange, int ObjectGroupingID, int SetToWhichThisBrainBelongs) { return invoke <void>(0x16AF9B4EEAC3B305, pScriptName, ObjectModelHashKey, PercentageChance, fActivationRange, ObjectGroupingID, SetToWhichThisBrainBelongs); }
	static int _START_PRELOADED_SCRIPT_BRAIN(Entity entity, const char* scriptName, int scriptStackSize, bool p3) { return invoke <int>(0x4E4507CC5E4DB869, entity, scriptName, scriptStackSize, p3); }
	static int _START_SCRIPT_BRAIN(Entity entity, const char* scriptName, int p2, void* p3, int p4, bool p5) { return invoke <int>(0x6F62FAE266DCFC81, entity, scriptName, p2, p3, p4, p5); }
	static void _REMOVE_SCRIPT_BRAIN_ENTITY(Entity entity) { return invoke <void>(0x38F1E09224EECA09, entity); }
	static Entity _GET_SCRIPT_BRAIN_ENTITY() { return invoke <Entity>(0x6818D1A194E29983); }
	static void _0xA6AC35DB4A7957A8(int flag) { return invoke <void>(0xA6AC35DB4A7957A8, flag); }
	static void _0x4AA5EA1EDFB25786(int flag) { return invoke <void>(0x4AA5EA1EDFB25786, flag); }
	static void ENABLE_SCRIPT_BRAIN_SET(int set) { return invoke <void>(0x1CF6E5C6750EADBD, set); }
	static void DISABLE_SCRIPT_BRAIN_SET(int set) { return invoke <void>(0x3F44EA613A5B2676, set); }
	static void REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE() { return invoke <void>(0xA32B0B05EFF75730); }
	static void REACTIVATE_NAMED_OBJECT_BRAINS_WAITING_TILL_OUT_OF_RANGE(const char* pScriptName) { return invoke <void>(0x74C333E34DF74E8A, pScriptName); }
}

namespace CAM
{
	static void RENDER_SCRIPT_CAMS(bool bSetActive, bool DoGameCamInterp, int Duration, bool bShouldLockInterpolationSourceFrame, bool bShouldApplyAcrossAllThreads, int RenderingOptions) { return invoke <void>(0x33281167E4942E4F, bSetActive, DoGameCamInterp, Duration, bShouldLockInterpolationSourceFrame, bShouldApplyAcrossAllThreads, RenderingOptions); }
	static void STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(bool bShouldApplyAcrossAllThreads, float DistanceToBlend, int BlendType, bool p3, bool p4, bool p5) { return invoke <void>(0x8C7C7FF7CF0E5153, bShouldApplyAcrossAllThreads, DistanceToBlend, BlendType, p3, p4, p5); }
	static Cam CREATE_CAM(const char* CameraName, bool StartActivated) { return invoke <Cam>(0xE72CDBA7F0A02DD6, CameraName, StartActivated); }
	static Cam CREATE_CAM_WITH_PARAMS(const char* CameraName, float vecPosX, float vecPosY, float vecPosZ, float vecRotX, float vecRotY, float vecRotZ, float FOV, bool StartActivated, int RotOrder) { return invoke <Cam>(0x40C23491CE83708E, CameraName, vecPosX, vecPosY, vecPosZ, vecRotX, vecRotY, vecRotZ, FOV, StartActivated, RotOrder); }
	static Cam CREATE_CAMERA(Hash Camera, bool StartActivated) { return invoke <Cam>(0x57CDF879EA466C46, Camera, StartActivated); }
	static Cam CREATE_CAMERA_WITH_PARAMS(Hash Camera, float vecPosX, float vecPosY, float vecPosZ, float vecRotX, float vecRotY, float vecRotZ, float FOV, bool StartActivated, int RotOrder) { return invoke <Cam>(0x98B99B9F27E2D60B, Camera, vecPosX, vecPosY, vecPosZ, vecRotX, vecRotY, vecRotZ, FOV, StartActivated, RotOrder); }
	static void DESTROY_CAM(Cam CameraIndex, bool bShouldApplyAcrossAllThreads) { return invoke <void>(0x4E67E0B6D7FD5145, CameraIndex, bShouldApplyAcrossAllThreads); }
	static void DESTROY_ALL_CAMS(bool bShouldApplyAcrossAllThreads) { return invoke <void>(0x163600D6E136C9F8, bShouldApplyAcrossAllThreads); }
	static bool DOES_CAM_EXIST(Cam CameraIndex) { return invoke <bool>(0x153AD457764FD704, CameraIndex); }
	static void SET_CAM_ACTIVE(Cam CameraIndex, bool bActiveState) { return invoke <void>(0x87295BCA613800C8, CameraIndex, bActiveState); }
	static bool IS_CAM_ACTIVE(Cam CameraIndex) { return invoke <bool>(0x63EFCC7E1810B8E6, CameraIndex); }
	static bool IS_CAM_RENDERING(Cam CamIndex) { return invoke <bool>(0x4415F8A6C536D39F, CamIndex); }
	static Cam GET_RENDERING_CAM() { return invoke <Cam>(0x3A8931ECC8015D6); }
	static Vector3 GET_CAM_COORD(Cam CameraIndex) { return invoke <Vector3>(0x6B12F11C2A9F0344, CameraIndex); }
	static Vector3 GET_CAM_ROT(Cam CameraIndex, int RotOrder) { return invoke <Vector3>(0x9BF96B57254E7889, CameraIndex, RotOrder); }
	static float GET_CAM_FOV(Cam CameraIndex) { return invoke <float>(0x8101D32A0A6B0F60, CameraIndex); }
	static void SET_CAM_PARAMS(Cam CameraIndex, float vPosX, float vPosY, float vPosZ, float vRotX, float vRotY, float vRotZ, float FOV, int Duration, int GraphTypePos, int GraphTypeRot, int RotOrder, bool p12, bool p13) { return invoke <void>(0xA47BBFFFB83D4D0A, CameraIndex, vPosX, vPosY, vPosZ, vRotX, vRotY, vRotZ, FOV, Duration, GraphTypePos, GraphTypeRot, RotOrder, p12, p13); }
	static void SET_CAM_COORD(Cam CameraIndex, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ) { return invoke <void>(0xF9EE7D419EE49DE6, CameraIndex, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ); }
	static void SET_CAM_ROT(Cam CameraIndex, float VecNewRotX, float VecNewRotY, float VecNewRotZ, int RotOrder) { return invoke <void>(0x63DFA6810AD78719, CameraIndex, VecNewRotX, VecNewRotY, VecNewRotZ, RotOrder); }
	static void SET_CAM_FOV(Cam CameraIndex, float FOV) { return invoke <void>(0x27666E5988D9D429, CameraIndex, FOV); }
	static void SET_CAM_NEAR_CLIP(Cam CameraIndex, float NearClip) { return invoke <void>(0xA924028272A61364, CameraIndex, NearClip); }
	static void SET_CAM_FAR_CLIP(Cam CameraIndex, float FarClip) { return invoke <void>(0x5E32817BF6302111, CameraIndex, FarClip); }
	static void SET_CAM_MOTION_BLUR_STRENGTH(Cam CameraIndex, float Strength) { return invoke <void>(0x45FD891364181F9E, CameraIndex, Strength); }
	static void _0xFC3F638BE2B6BB02() { return invoke <void>(0xFC3F638BE2B6BB02); }
	static void _0xE4B7945EF4F1BFB2(Cam cam, void* args) { return invoke <void>(0xE4B7945EF4F1BFB2, cam, args); }
	static void _0x1FC6C727D30FFDDE(Any p0) { return invoke <void>(0x1FC6C727D30FFDDE, p0); }
	static void ATTACH_CAM_TO_ENTITY(Cam CameraIndex, Entity EntityIndex, float vecOffsetX, float vecOffsetY, float vecOffsetZ, bool bOffsetIsRelative) { return invoke <void>(0xFDC0DF7F6FB0A592, CameraIndex, EntityIndex, vecOffsetX, vecOffsetY, vecOffsetZ, bOffsetIsRelative); }
	static void ATTACH_CAM_TO_PED_BONE(Cam CameraIndex, Ped PedIndex, int BoneTag, float vecOffsetX, float vecOffsetY, float vecOffsetZ, bool bOffsetIsRelative) { return invoke <void>(0xDFC1E4A44C0324CA, CameraIndex, PedIndex, BoneTag, vecOffsetX, vecOffsetY, vecOffsetZ, bOffsetIsRelative); }
	static void DETACH_CAM(Cam CameraIndex) { return invoke <void>(0x5B41DDBEB559556, CameraIndex); }
	static void POINT_CAM_AT_COORD(Cam CameraIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ) { return invoke <void>(0x948B39341C3A40C2, CameraIndex, VecCoorsX, VecCoorsY, VecCoorsZ); }
	static void POINT_CAM_AT_ENTITY(Cam CameraIndex, Entity EntityIndex, float vecOffsetX, float vecOffsetY, float vecOffsetZ, bool bOffsetIsRelative) { return invoke <void>(0xFC2867E6074D3A61, CameraIndex, EntityIndex, vecOffsetX, vecOffsetY, vecOffsetZ, bOffsetIsRelative); }
	static void STOP_CAM_POINTING(Cam CameraIndex) { return invoke <void>(0xCA1B30A3357C71F1, CameraIndex); }
	static void _SET_CAM_FOCUS_DISTANCE(Cam cam, float distance) { return invoke <void>(0x11F32BB61B756732, cam, distance); }
	static void _PAUSE_CAMERA_FOCUS(Cam cam, bool pause) { return invoke <void>(0x9F97E85EC142255E, cam, pause); }
	static void SET_CAM_AFFECTS_AIMING(Cam CameraIndex, bool bState) { return invoke <void>(0x3CB9E8BDE5E76F33, CameraIndex, bState); }
	static void SET_CAM_CONTROLS_MINI_MAP_HEADING(Cam CameraIndex, bool bState) { return invoke <void>(0x1B8F3CE5A6001298, CameraIndex, bState); }
	static void ALLOW_MOTION_BLUR_DECAY(Cam CameraIndex, bool enable) { return invoke <void>(0x42ED56B02E05D109, CameraIndex, enable); }
	static void ADD_CAM_SPLINE_NODE(Cam CameraIndex, float vPosX, float vPosY, float vPosZ, float vRotX, float vRotY, float vRotZ, int iDuration, int Flags, int RotOrder) { return invoke <void>(0xF1F57F9D230F9CD1, CameraIndex, vPosX, vPosY, vPosZ, vRotX, vRotY, vRotZ, iDuration, Flags, RotOrder); }
	static void SET_CAM_SPLINE_PHASE(Cam CameraIndex, float phase) { return invoke <void>(0xF1898A68E7C15636, CameraIndex, phase); }
	static float GET_CAM_SPLINE_PHASE(Cam CameraIndex) { return invoke <float>(0x95EDCD24D90033A, CameraIndex); }
	static void SET_CAM_SPLINE_DURATION(Cam CameraIndex, int Duration) { return invoke <void>(0xFF6311652CA91015, CameraIndex, Duration); }
	static void SET_CAM_SPLINE_SMOOTHING_STYLE(Cam CameraIndex, int SmoothingStyle) { return invoke <void>(0x84B3645618E726B0, CameraIndex, SmoothingStyle); }
	static void SET_CAM_ACTIVE_WITH_INTERP(Cam DestinationCam, Cam OriginCam, int Duration, int GraphTypePos, int GraphTypeRot) { return invoke <void>(0x8B15AE2987C1AC8F, DestinationCam, OriginCam, Duration, GraphTypePos, GraphTypeRot); }
	static bool IS_CAM_INTERPOLATING(Cam CameraIndex) { return invoke <bool>(0x578F8F1CAA17BD2B, CameraIndex); }
	static void SHAKE_CAM(Cam CameraIndex, const char* ShakeName, float fAmplitudeScalar) { return invoke <void>(0xF9A7BCF5D050D4E7, CameraIndex, ShakeName, fAmplitudeScalar); }
	static bool IS_CAM_SHAKING(Cam CameraIndex) { return invoke <bool>(0x2EEB402BD7320159, CameraIndex); }
	static void STOP_CAM_SHAKING(Cam CameraIndex, bool bStopImmediately) { return invoke <void>(0xB78CC4B4706614B0, CameraIndex, bStopImmediately); }
	static bool PLAY_CAM_ANIM(Cam CameraIndex, const char* AnimName, const char* AnimDictName, float vOriginPositionX, float vOriginPositionY, float vOriginPositionZ, float vOriginRotationX, float vOriginRotationY, float vOriginRotationZ, int AnimFlags, int RotOrder) { return invoke <bool>(0xA263DDF694D563F6, CameraIndex, AnimName, AnimDictName, vOriginPositionX, vOriginPositionY, vOriginPositionZ, vOriginRotationX, vOriginRotationY, vOriginRotationZ, AnimFlags, RotOrder); }
	static void _0xCF69EA05CD9C33C9() { return invoke <void>(0xCF69EA05CD9C33C9); }
	static bool _IS_ANIM_SCENE_CAM_ACTIVE() { return invoke <bool>(0x20389408F0E93B9A); }
	static bool IS_SCREEN_FADED_OUT() { return invoke <bool>(0xF5472C80DF2FF847); }
	static bool IS_SCREEN_FADED_IN() { return invoke <bool>(0x37F9A426FBCF4AF2); }
	static bool IS_SCREEN_FADING_OUT() { return invoke <bool>(0x2F39BEFE7B88D00); }
	static bool IS_SCREEN_FADING_IN() { return invoke <bool>(0xCECCC63FFA2EF24); }
	static void DO_SCREEN_FADE_IN(int time) { return invoke <void>(0x6A053CF596F67DF7, time); }
	static void DO_SCREEN_FADE_OUT(int time) { return invoke <void>(0x40C719A5E410B9E4, time); }
	static bool HAS_LETTER_BOX() { return invoke <bool>(0x81DCFD13CF39920E); }
	static void _REQUEST_LETTER_BOX_NOW(bool p0, bool p1) { return invoke <void>(0x69D65E89FFD72313, p0, p1); }
	static void _REQUEST_LETTER_BOX_OVERTIME(int p0, int p1, bool p2, int p3, bool p4, bool p5) { return invoke <void>(0xE296208C273BD7F0, p0, p1, p2, p3, p4, p5); }
	static void _FORCE_LETTER_BOX_THIS_UPDATE() { return invoke <void>(0xC64ABC0676AF262B); }
	static float GET_LETTER_BOX_RATIO() { return invoke <float>(0xA2B1C7EF759A63CE); }
	static Any _0x73FF6BE63DC18819() { return invoke <Any>(0x73FF6BE63DC18819); }
	static Any _0x450769C833D58844() { return invoke <Any>(0x450769C833D58844); }
	static void SET_WIDESCREEN_BORDERS(bool bSet, int Duration) { return invoke <void>(0xD7F4D54CF80AFA34, bSet, Duration); }
	static Vector3 GET_GAMEPLAY_CAM_COORD() { return invoke <Vector3>(0x595320200B98596E); }
	static Vector3 GET_GAMEPLAY_CAM_ROT(int RotOrder) { return invoke <Vector3>(0x252D2B5582957A6, RotOrder); }
	static float GET_GAMEPLAY_CAM_FOV() { return invoke <float>(0xF6A96E5ACEEC6E50); }
	static void SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(float maxStrength) { return invoke <void>(0x8459B3E64257B21D, maxStrength); }
	static float GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return invoke <float>(0xC4ABF536048998AA); }
	static void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float heading, float p1) { return invoke <void>(0x5D1EB123EAC5D071, heading, p1); }
	static float GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return invoke <float>(0x99AADEBBA803F827); }
	static void SET_GAMEPLAY_CAM_RELATIVE_PITCH(float pitch, float smoothRate) { return invoke <void>(0xFB760AF4F537B8BF, pitch, smoothRate); }
	static void _0x0961B089947BA6D0(Any p0) { return invoke <void>(0x961B089947BA6D0, p0); }
	static void _0x04084490CC302CFB() { return invoke <void>(0x4084490CC302CFB); }
	static void SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(bool isFirstPersonThisFrame) { return invoke <void>(0x1DD95A8D6B24A0C9, isFirstPersonThisFrame); }
	static bool _IS_IN_FULL_FIRST_PERSON_MODE() { return invoke <bool>(0xD1BA66940E94C547); }
	static void SHAKE_GAMEPLAY_CAM(const char* ShakeName, float fAmplitudeScalar) { return invoke <void>(0xD9B31B4650520529, ShakeName, fAmplitudeScalar); }
	static void _0xC3E9E5D4F413B773(const char* shakeName, float intensity) { return invoke <void>(0xC3E9E5D4F413B773, shakeName, intensity); }
	static bool IS_GAMEPLAY_CAM_SHAKING() { return invoke <bool>(0xEA4C5F4AA0A4DBEF); }
	static bool _0x0060B31968E60E41(const char* shakeName) { return invoke <bool>(0x60B31968E60E41, shakeName); }
	static void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(float fAmplitudeScalar) { return invoke <void>(0x570E35F5C4A44838, fAmplitudeScalar); }
	static void _0xFEFDDC6E8FDF8A75(const char* shakeName, float intensity) { return invoke <void>(0xFEFDDC6E8FDF8A75, shakeName, intensity); }
	static void STOP_GAMEPLAY_CAM_SHAKING(bool bStopImmediately) { return invoke <void>(0xE0DE43D290FB65F9, bStopImmediately); }
	static void _STOP_GAMEPLAY_CAM_SHAKING_WITH_NAME(const char* shakeName, bool p1) { return invoke <void>(0x4285804FD65D8066, shakeName, p1); }
	static void SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(Ped PedIndex) { return invoke <void>(0x82E41D6ADE924FCA, PedIndex); }
	static bool IS_GAMEPLAY_CAM_RENDERING() { return invoke <bool>(0x8660EA714834E412); }
	static bool IS_INTERPOLATING_FROM_SCRIPT_CAMS() { return invoke <bool>(0x251241CAEC707106); }
	static bool IS_INTERPOLATING_TO_SCRIPT_CAMS() { return invoke <bool>(0x43AB9D5A7D415478); }
	static bool IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return invoke <bool>(0x8FE0D24FFD04D5A2); }
	static void SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(Entity Index) { return invoke <void>(0xD904F75DBD7AB865, Index); }
	static void DISABLE_CAM_COLLISION_FOR_OBJECT(Object object) { return invoke <void>(0x7E3F546ACFE6C8D9, object); }
	static void _0x39073DA4EDDBC91D(Any p0) { return invoke <void>(0x39073DA4EDDBC91D, p0); }
	static void _0x70A6658D476C6187() { return invoke <void>(0x70A6658D476C6187); }
	static void _0x18C3DFAC458783BB() { return invoke <void>(0x18C3DFAC458783BB); }
	static void _0xF1A6FEEDF3776EF9() { return invoke <void>(0xF1A6FEEDF3776EF9); }
	static void _0xE6F364DE6C2FDEFE() { return invoke <void>(0xE6F364DE6C2FDEFE); }
	static void _0x0F1FFEF5D54AE832() { return invoke <void>(0xF1FFEF5D54AE832); }
	static void _0x3C8F74E8FE751614() { return invoke <void>(0x3C8F74E8FE751614); }
	static void _0x06557F6D96C86881() { return invoke <void>(0x6557F6D96C86881); }
	static bool IS_SPHERE_VISIBLE(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float radius) { return invoke <bool>(0x2E941B5FFA2989C6, VecCoorsX, VecCoorsY, VecCoorsZ, radius); }
	static Any _0x190F7DA1AC09A8EF() { return invoke <Any>(0x190F7DA1AC09A8EF); }
	static void _SET_GAMEPLAY_CAM_INITIAL_ZOOM(float camInitialZoom) { return invoke <void>(0xBCDA0BA8762FACB9, camInitialZoom); }
	static void _SET_GAMEPLAY_CAM_INITIAL_HEADING(float camInitialHeading) { return invoke <void>(0x6C1053C433A573CF, camInitialHeading); }
	static void _SET_GAMEPLAY_CAM_INITIAL_PITCH(float camInitialPitch) { return invoke <void>(0x449995EA846D3FC2, camInitialPitch); }
	static void SET_THIRD_PERSON_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(float minRelativeHeading, float maxRelativeHeading) { return invoke <void>(0x14F3947318CA8AD2, minRelativeHeading, maxRelativeHeading); }
	static void SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(float minRelativePitch, float maxRelativePitch) { return invoke <void>(0x326C7AA308F3DF6A, minRelativePitch, maxRelativePitch); }
	static void SET_THIRD_PERSON_CAM_ORBIT_DISTANCE_LIMITS_THIS_UPDATE(float minDistance, float maxDistance) { return invoke <void>(0x2126C740A4AC370B, minDistance, maxDistance); }
	static void SET_IN_VEHICLE_CAM_STATE_THIS_UPDATE(Vehicle Vehicle, int InVehicleState) { return invoke <void>(0xFA1D5E8D1C3CCD67, Vehicle, InVehicleState); }
	static void DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE() { return invoke <void>(0x9C473089A934C930); }
	static void DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE() { return invoke <void>(0x77D65669A05D1A1A); }
	static void _DISABLE_CINEMATIC_MODE_THIS_FRAME() { return invoke <void>(0x8910C24B7E0046EC); }
	static bool _IS_IN_CINEMATIC_MODE() { return invoke <bool>(0x74F1D22EFA71FAB8); }
	static void _0x718C6ECF5E8CBDD4() { return invoke <void>(0x718C6ECF5E8CBDD4); }
	static void _FORCE_THIRD_PERSON_CAM_THIS_FRAME() { return invoke <void>(0x8370D34BD2E60B73); }
	static void _FORCE_THIRD_PERSON_CAM_FAR_THIS_FRAME() { return invoke <void>(0x1CFB749AD4317BDE); }
	static bool _FORCE_FIRST_PERSON_CAM_THIS_FRAME() { return invoke <bool>(0x90DA5BA5C2635416); }
	static void _DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE_2() { return invoke <void>(0x5AB44D906738426); }
	static void _0x632BE8D84846FA56() { return invoke <void>(0x632BE8D84846FA56); }
	static void _0x71D71E08A7ED5BD7(Any p0) { return invoke <void>(0x71D71E08A7ED5BD7, p0); }
	static bool IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return invoke <bool>(0xA40C2F51FB589E9A); }
	static void _0x7E40A01B11398FCB() { return invoke <void>(0x7E40A01B11398FCB); }
	static bool IS_AIM_CAM_ACTIVE() { return invoke <bool>(0x698F456FB909E077); }
	static bool IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return invoke <bool>(0xF63134C54B6EC212); }
	static bool IS_FIRST_PERSON_CAMERA_ACTIVE(Any p0, Any p1, Any p2) { return invoke <bool>(0xA24C1D341C6E0D53, p0, p1, p2); }
	static Any _0xDC62CD70658E7A02() { return invoke <Any>(0xDC62CD70658E7A02); }
	static Any _0x796085220ADCC847() { return invoke <Any>(0x796085220ADCC847); }
	static Any _0xB6A80E1E3A5444F1() { return invoke <Any>(0xB6A80E1E3A5444F1); }
	static Any _0x8B1A5FE7E41E52B2() { return invoke <Any>(0x8B1A5FE7E41E52B2); }
	static float GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR() { return invoke <float>(0xB4132CA1B0EE1365); }
	static void SET_FIRST_PERSON_AIM_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(float MinRelativeHeading, float MaxRelativeHeading) { return invoke <void>(0x5BD5E4088B30A66, MinRelativeHeading, MaxRelativeHeading); }
	static void SET_FIRST_PERSON_AIM_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(float MinRelativePitch, float MaxRelativePitch) { return invoke <void>(0x715B7F5E8BED32A2, MinRelativePitch, MaxRelativePitch); }
	static void _0xC205B3C54C6A4E37(Any p0) { return invoke <void>(0xC205B3C54C6A4E37, p0); }
	static Vector3 GET_FINAL_RENDERED_CAM_COORD() { return invoke <Vector3>(0x5352E025EC2B416F); }
	static Vector3 GET_FINAL_RENDERED_CAM_ROT(int RotOrder) { return invoke <Vector3>(0x602685BD85DD26CA, RotOrder); }
	static float GET_FINAL_RENDERED_CAM_FOV() { return invoke <float>(0x4AF77971E508F6A); }
	static void SET_GAMEPLAY_COORD_HINT(float vCoordX, float vCoordY, float vCoordZ, int iDwellTime, int iInterpTo, int iInterpFrom, Hash Type) { return invoke <void>(0xFA33B8C69A4A6A0F, vCoordX, vCoordY, vCoordZ, iDwellTime, iInterpTo, iInterpFrom, Type); }
	static void SET_GAMEPLAY_PED_HINT(Ped Ped, float OffsetX, float OffsetY, float OffsetZ, bool RelativeOffset, int iDwellTime, int iInterpTo, int iInterpFrom) { return invoke <void>(0x90FB951648851733, Ped, OffsetX, OffsetY, OffsetZ, RelativeOffset, iDwellTime, iInterpTo, iInterpFrom); }
	static void SET_GAMEPLAY_VEHICLE_HINT(Vehicle Vehicle, float OffsetX, float OffsetY, float OffsetZ, bool RelativeOffset, int iDwellTime, int iInterpTo, int iInterpFrom) { return invoke <void>(0xE2B2BB7DAC280515, Vehicle, OffsetX, OffsetY, OffsetZ, RelativeOffset, iDwellTime, iInterpTo, iInterpFrom); }
	static void SET_GAMEPLAY_OBJECT_HINT(Object Obejct, float OffsetX, float OffsetY, float OffsetZ, bool RelativeOffset, int iDwellTime, int iInterpTo, int iInterpFrom) { return invoke <void>(0xC40551D65F2BF297, Obejct, OffsetX, OffsetY, OffsetZ, RelativeOffset, iDwellTime, iInterpTo, iInterpFrom); }
	static void SET_GAMEPLAY_ENTITY_HINT(Entity Enttity, float OffsetX, float OffsetY, float OffsetZ, bool RelativeOffset, int iDwellTime, int iInterpTo, int iInterpFrom, Hash Type) { return invoke <void>(0xD1F7F32640ADFD12, Enttity, OffsetX, OffsetY, OffsetZ, RelativeOffset, iDwellTime, iInterpTo, iInterpFrom, Type); }
	static bool IS_GAMEPLAY_HINT_ACTIVE() { return invoke <bool>(0x2E04AB5FEE042D4A); }
	static void STOP_GAMEPLAY_HINT(bool bStopImmediately) { return invoke <void>(0x1BCEC33D54CFCA8A, bStopImmediately); }
	static void STOP_CODE_GAMEPLAY_HINT(bool StopImmediately) { return invoke <void>(0x93759A83D0D844E7, StopImmediately); }
	static void _0x88544C0E3291DCAE(bool p0) { return invoke <void>(0x88544C0E3291DCAE, p0); }
	static void SET_GAMEPLAY_HINT_FOV(float fov) { return invoke <void>(0x661E58BC6F00A49A, fov); }
	static void SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(float DistanceScalar) { return invoke <void>(0xDDDC54181868F81F, DistanceScalar); }
	static void SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(float BasePitchOffset) { return invoke <void>(0x421192A2DA48FD01, BasePitchOffset); }
	static void SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(float SideOffset) { return invoke <void>(0xF86B6F93727C59C9, SideOffset); }
	static void SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(float VerticalOffset) { return invoke <void>(0x29E74F819150CC32, VerticalOffset); }
	static void _0xF48664E9C83825E3(Any p0, Any p1) { return invoke <void>(0xF48664E9C83825E3, p0, p1); }
	static void _0x1F6EBD94680252CE(Any p0, Any p1) { return invoke <void>(0x1F6EBD94680252CE, p0, p1); }
	static void _0xE28F73212A813E82(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xE28F73212A813E82, p0, p1, p2, p3); }
	static void _0x4D2F46D1B28D90FB(Any p0, Any p1) { return invoke <void>(0x4D2F46D1B28D90FB, p0, p1); }
	static void _START_CAMERA_ORBIT(void* p0) { return invoke <void>(0x65B205BF30C13DDB, p0); }
	static void _0x641092322A8852AB() { return invoke <void>(0x641092322A8852AB); }
	static void _0xDB382FE20C2DA222(Any p0) { return invoke <void>(0xDB382FE20C2DA222, p0); }
	static void _0x2DD3149DC34A3F4C(Any p0) { return invoke <void>(0x2DD3149DC34A3F4C, p0); }
	static void _FREEZE_GAMEPLAY_CAM_THIS_FRAME() { return invoke <void>(0x27CAB2C3AF27010); }
	static void _0x3C486E334520579D() { return invoke <void>(0x3C486E334520579D); }
	static void _0x41E452A3C580D1A7() { return invoke <void>(0x41E452A3C580D1A7); }
	static void SET_CINEMATIC_BUTTON_ACTIVE(bool bEnable) { return invoke <void>(0xB90411F480457A6C, bEnable); }
	static bool IS_CINEMATIC_CAM_RENDERING() { return invoke <bool>(0xBF7C780731AADBF8); }
	static void DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE() { return invoke <void>(0xA5929C2E57AC90D1); }
	static void INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE() { return invoke <void>(0x634F4A0562CF19B8); }
	static void FORCE_CINEMATIC_RENDERING_THIS_UPDATE(bool ActiveThisFrame) { return invoke <void>(0x702B75DC9D3EDE56, ActiveThisFrame); }
	static void _0x9AC65A36D3C0C189(Any p0) { return invoke <void>(0x9AC65A36D3C0C189, p0); }
	static bool _0x975F6EBB62632FE3() { return invoke <bool>(0x975F6EBB62632FE3); }
	static void SET_CINEMATIC_MODE_ACTIVE(bool Active) { return invoke <void>(0xCE7A90B160F75046, Active); }
	static bool _0x1811A02277A9E49D() { return invoke <bool>(0x1811A02277A9E49D); }
	static void _FORCE_CINEMATIC_DEATH_CAM_ON_PED(Ped targetPed) { return invoke <void>(0xE3639DB78B3B5400, targetPed); }
	static void _REACTIVATE_PED_HEADSHOT_EXECUTE_SLOWCAM(Ped ped, int p1) { return invoke <void>(0x986F7A51EE3E1F92, ped, p1); }
	static void _0x5B637D6F3B67716A(Any p0) { return invoke <void>(0x5B637D6F3B67716A, p0); }
	static void _0xC252C0CC969AF79A(Any p0) { return invoke <void>(0xC252C0CC969AF79A, p0); }
	static void _0xE2BB2D6A9FE2ECDE(Any p0) { return invoke <void>(0xE2BB2D6A9FE2ECDE, p0); }
	static void _SET_START_CINEMATIC_DEATH_CAM(bool p0) { return invoke <void>(0x6E969927CF632608, p0); }
	static Any _0x6072B7420A83A03F() { return invoke <Any>(0x6072B7420A83A03F); }
	static bool _0x1204EB53A5FBC63D() { return invoke <bool>(0x1204EB53A5FBC63D); }
	static void _0x6519238858AF5479(Any p0) { return invoke <void>(0x6519238858AF5479, p0); }
	static void _CREATE_KILL_CAM(Ped ped) { return invoke <void>(0x2F994CC29CAA9D22, ped); }
	static bool _IS_CAM_PHOTOFX_RUNNING() { return invoke <bool>(0xA14D5FE82BCB1D9E); }
	static Any _0x6DFD37E586D4F44F() { return invoke <Any>(0x6DFD37E586D4F44F); }
	static Any _0x80D7A3E39B120BC4() { return invoke <Any>(0x80D7A3E39B120BC4); }
	static void _0x63E5841A9264D016(bool toggle) { return invoke <void>(0x63E5841A9264D016, toggle); }
	static void _TRIGGER_MISSION_FAILED_CAM() { return invoke <void>(0x9A92C06ACBAF9731); }
	static void _0x16E9ABDD34DDD931() { return invoke <void>(0x16E9ABDD34DDD931); }
	static bool IS_DEATH_FAIL_CAMERA_RUNNING() { return invoke <bool>(0x139EFB0A71DD9011); }
	static Any _0x7CE9DC58E3E4755F() { return invoke <Any>(0x7CE9DC58E3E4755F); }
	static void _0x3B8E3AD9677CE12B(Any p0, Any p1, Any p2) { return invoke <void>(0x3B8E3AD9677CE12B, p0, p1, p2); }
	static void _0xDF7F5BE9150E47E4(Any p0) { return invoke <void>(0xDF7F5BE9150E47E4, p0); }
	static void _0xB85C13E0BF1F2A1C(Any p0) { return invoke <void>(0xB85C13E0BF1F2A1C, p0); }
	static void _0x066167C63111D8CF(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x66167C63111D8CF, p0, p1, p2, p3, p4); }
	static void _0xA8BA2E0204D8486F() { return invoke <void>(0xA8BA2E0204D8486F); }
	static void _0xC3742F1FDF0A6824() { return invoke <void>(0xC3742F1FDF0A6824); }
	static void _0x0FF7125F07DEB84F(Any p0, Any p1) { return invoke <void>(0xFF7125F07DEB84F, p0, p1); }
	static void _0x6CAB0BA160B168D2() { return invoke <void>(0x6CAB0BA160B168D2); }
	static void _LOAD_CINEMATIC_CAM_LOCATION(const char* locationDictName) { return invoke <void>(0x1B3C2D961F5FC0E1, locationDictName); }
	static void _UNLOAD_CINEMATIC_CAMERA_LOCATION(const char* dictionaryName) { return invoke <void>(0x2412216FCC7B4E3E, dictionaryName); }
	static bool _IS_CINEMATIC_CAM_LOCATION_LOADED(const char* sLocationDictName) { return invoke <bool>(0xAA235E2F2C09E952, sLocationDictName); }
	static bool _IS_CINEMATIC_CAM_LOCATION_LOADED_2(const char* locationDictName) { return invoke <bool>(0x595550376B7EA230, locationDictName); }
	static Any _0x465F04F68AD38197(const char* dictionary, const char* shotName, int duration) { return invoke <Any>(0x465F04F68AD38197, dictionary, shotName, duration); }
	static Any _0xEA113BF9B0C0C5D7(const char* dictionary, const char* shotName, int duration) { return invoke <Any>(0xEA113BF9B0C0C5D7, dictionary, shotName, duration); }
	static void _CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT_2(const char* dictionary, const char* shotName, int duration) { return invoke <void>(0xBC016635D6A73B31, dictionary, shotName, duration); }
	static void CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT(const char* dictionary, const char* shotName, const char* cameraName, Any p3) { return invoke <void>(0x2389579A53C3276, dictionary, shotName, cameraName, p3); }
	static void _0xA54D643D0773EB65(const char* dictionary, const char* shotName, int duration) { return invoke <void>(0xA54D643D0773EB65, dictionary, shotName, duration); }
	static void CINEMATIC_LOCATION_STOP_SCRIPTED_SHOT_EVENT(Any p0, Any p1, Any p2) { return invoke <void>(0x6D4D25C2137FF511, p0, p1, p2); }
	static bool _0xC3AEBB276825A359(const char* dictionary, const char* shotName, int duration) { return invoke <bool>(0xC3AEBB276825A359, dictionary, shotName, duration); }
	static bool _0x1D931B7CC0EE3956(const char* dictionary, const char* shotName, const char* cameraName) { return invoke <bool>(0x1D931B7CC0EE3956, dictionary, shotName, cameraName); }
	static void _CINEMATIC_LOCATION_SET_LOCATION_AND_ROTATION(const char* name, float x, float y, float z, float rotX, float rotY, float rotZ) { return invoke <void>(0xE94C95EC3185FA9, name, x, y, z, rotX, rotY, rotZ); }
	static void CINEMATIC_LOCATION_OVERRIDE_TARGET_ENTITY_THIS_UPDATE(const char* name, Entity entity) { return invoke <void>(0xB0F914459731F60, name, entity); }
	static void _LOAD_CAMERA_DATA_DICT(const char* cameraDictionary) { return invoke <void>(0x6A4D224FC7643941, cameraDictionary); }
	static void _UNLOAD_CAMERA_DATA_DICT(const char* cameraDictionary) { return invoke <void>(0x798BE43C9393632B, cameraDictionary); }
	static bool _IS_CAM_DATA_DICT_LOADED(const char* cameraDictionary) { return invoke <bool>(0xDD0B7C5AE58F721D, cameraDictionary); }
	static bool _0xC285FD21294A1C49(const char* cameraDictionary) { return invoke <bool>(0xC285FD21294A1C49, cameraDictionary); }
	static void _CAM_CREATE(const char* cameraDictionary) { return invoke <void>(0xB8B207C34285E978, cameraDictionary); }
	static void _CAM_DESTROY(const char* cameraDictionary) { return invoke <void>(0xA5A4F1979ABB40E, cameraDictionary); }
	static bool _IS_CAMERA_AVAILABLE(const char* cameraDictionary) { return invoke <bool>(0x927B810E43E99932, cameraDictionary); }
	static Any _0x4138EE36BC3DC0A7(Any p0, Any p1) { return invoke <Any>(0x4138EE36BC3DC0A7, p0, p1); }
	static void _0xFEB8646818294C75(Any p0, Any p1) { return invoke <void>(0xFEB8646818294C75, p0, p1); }
	static void _0x29E6655DF3590B0D(Any p0) { return invoke <void>(0x29E6655DF3590B0D, p0); }
	static void _0xAC77757C05DE9E5A(const char* cameraDictionary) { return invoke <void>(0xAC77757C05DE9E5A, cameraDictionary); }
	static void _0x8E036B41C37D0E5F(Any p0) { return invoke <void>(0x8E036B41C37D0E5F, p0); }
	static void _0x1D9F72DD4FD9A9D7(Any p0) { return invoke <void>(0x1D9F72DD4FD9A9D7, p0); }
	static void _CAM_CREATE_2(const char* cameraDictionary) { return invoke <void>(0x7B0279170961A73F, cameraDictionary); }
	static void _0x728491FB3DFFEF99(Any p0) { return invoke <void>(0x728491FB3DFFEF99, p0); }
	static Any _0x14C4A49E36C29E49() { return invoke <Any>(0x14C4A49E36C29E49); }
	static Any _0xF824530B612FE0CE() { return invoke <Any>(0xF824530B612FE0CE); }
	static Any _0xEF9A3132A0AA6B19() { return invoke <Any>(0xEF9A3132A0AA6B19); }
	static Any _0x5060FA977CEA4455() { return invoke <Any>(0x5060FA977CEA4455); }
	static float _GET_PHOTO_MODE_FOCAL_LENGTH() { return invoke <float>(0x2533BAFFBE737E54); }
	static float _GET_PHOTO_MODE_FOCUS_DISTANCE() { return invoke <float>(0x18FC740FFDCD7454); }
	static float _GET_PHOTO_MODE_DOF() { return invoke <float>(0x4653A741D17F2CD0); }
	static Any _0x2AB7C81B3F70570C() { return invoke <Any>(0x2AB7C81B3F70570C); }
	static void _0x8505E05FC8822843(Any p0) { return invoke <void>(0x8505E05FC8822843, p0); }
}

namespace CLOCK
{
	static void SET_CLOCK_TIME(int h, int m, int s) { return invoke <void>(0x3A52C59FFB2DEED8, h, m, s); }
	static void PAUSE_CLOCK(bool pause, Any unused) { return invoke <void>(0x4D1A590C92BF377E, pause, unused); }
	static void _PAUSE_CLOCK_THIS_FRAME(bool toggle) { return invoke <void>(0x568D998A9FF96774, toggle); }
	static void ADVANCE_CLOCK_TIME_TO(int h, int m, int s) { return invoke <void>(0x184750AE88D0B1D, h, m, s); }
	static void ADD_TO_CLOCK_TIME(int h, int m, int s) { return invoke <void>(0xAB7C251C7701D336, h, m, s); }
	static int GET_CLOCK_HOURS() { return invoke <int>(0xC82CF208C2B19199); }
	static int GET_CLOCK_MINUTES() { return invoke <int>(0x4E162231B823DBBF); }
	static int GET_CLOCK_SECONDS() { return invoke <int>(0xB6101ABE62B5F080); }
	static void _SET_MILLISECONDS_PER_GAME_MINUTE(int ms) { return invoke <void>(0x4EEDB3848DACF68, ms); }
	static int _GET_SECONDS_SINCE_BASE_YEAR() { return invoke <int>(0x78FD8BE812E436B2); }
	static void SET_CLOCK_DATE(int d, int m, int y) { return invoke <void>(0x2AD3092562941E2, d, m, y); }
	static int GET_CLOCK_DAY_OF_WEEK() { return invoke <int>(0x4DD02D4C7FB30076); }
	static int GET_CLOCK_DAY_OF_MONTH() { return invoke <int>(0xDF2FD796C54480A5); }
	static int GET_CLOCK_MONTH() { return invoke <int>(0x2D44E8FC79EAB1AC); }
	static int GET_CLOCK_YEAR() { return invoke <int>(0xE136DCA28C4A48BA); }
	static int GET_MILLISECONDS_PER_GAME_MINUTE() { return invoke <int>(0xE4CB8D126501EC52); }
	static void GET_POSIX_TIME(int* year, int* month, int* day, int* hour, int* min, int* sec) { return invoke <void>(0x90338AD4A784E455, year, month, day, hour, min, sec); }
	static void _GET_POSIX_TIME_STRUCT(void* outTime) { return invoke <void>(0x86A68E84E5884951, outTime); }
	static void _ADD_TIME_TO_DATE_TIME(void* inDateTime, void* timeToAdd, void* outDateTime) { return invoke <void>(0x28EEACE9B43D9597, inDateTime, timeToAdd, outDateTime); }
}

namespace COLLECTION
{
	static Hash _COLLECTABLE_GET_CATEGORY(Hash collectableItem) { return invoke <Hash>(0x725D52F21A5E9EF6, collectableItem); }
	static Hash _COLLECTABLE_GET_SUBCATEGORY(Hash collectableItem) { return invoke <Hash>(0x6052B4DE6657684F, collectableItem); }
	static Hash _COLLECTABLE_GET_IPL(Hash collectableItem) { return invoke <Hash>(0x922A79CD4A033B8B, collectableItem); }
	static Vector3 _COLLECTABLE_GET_PLACEMENT_LOCATION(Hash collectableItem) { return invoke <Vector3>(0x1F1DD794908C2BFA, collectableItem); }
	static int _COLLECTABLE_GET_NUM_FOUND(Hash collectableItem) { return invoke <int>(0xF83D3DDA4D3C8169, collectableItem); }
	static int _COLLECTABLE_GET_NUM_TURNED_IN(Hash collectableItem) { return invoke <int>(0x9A03F22AD446EEAC, collectableItem); }
	static void _COLLECTABLE_INCREMENT_NUM_FOUND(Hash collectableItem, int amount) { return invoke <void>(0x3EA62E56F386C997, collectableItem, amount); }
	static void _COLLECTABLE_INCREMENT_NUM_TURNED_IN(Hash collectableItem, int amount) { return invoke <void>(0x398FAB9C96A81924, collectableItem, amount); }
	static int _COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(Hash collectableCategory, Hash collectableSubcategory) { return invoke <int>(0x62CAB7DB62EAD434, collectableCategory, collectableSubcategory); }
	static Hash _COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(int index, Hash collectableCategory, Hash collectableSubcategory) { return invoke <Hash>(0x126CBEBBA46693CF, index, collectableCategory, collectableSubcategory); }
	static int _COLLECTABLE_CATEGORY_GET_NUM_FOUND(Hash collectableCategory, Hash collectableSubcategory) { return invoke <int>(0x5461C821D00FE15A, collectableCategory, collectableSubcategory); }
	static int _COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(Hash collectableCategory, Hash collectableSubcategory) { return invoke <int>(0x3A65F4844913A047, collectableCategory, collectableSubcategory); }
	static int _0x33825A7388A6B9F6(Hash collectableCategory, int p1) { return invoke <int>(0x33825A7388A6B9F6, collectableCategory, p1); }
	static int _0x755901C7598B97BC(Hash collectableCategory, int p1) { return invoke <int>(0x755901C7598B97BC, collectableCategory, p1); }
	static Any _0xB9020EC89C07DF04(Hash collectableCategory, int p1, int index) { return invoke <Any>(0xB9020EC89C07DF04, collectableCategory, p1, index); }
	static bool _0xFC832B06127D8E99(Hash collectableCategory, int p1) { return invoke <bool>(0xFC832B06127D8E99, collectableCategory, p1); }
	static void COLLECTABLE_CATEGORY_SET_HAS_RECEIVED_LIST(Any p0, Any p1, Any p2) { return invoke <void>(0xB6D275D2F242E17, p0, p1, p2); }
	static bool _0x6BAB7ACED1017204(Hash collectableCategory, int p1) { return invoke <bool>(0x6BAB7ACED1017204, collectableCategory, p1); }
	static bool _0x61BEFBA3CE7A3BC8(Hash collectableCategory, int p1) { return invoke <bool>(0x61BEFBA3CE7A3BC8, collectableCategory, p1); }
	static Any _0xC4AC39719C1BB559(Hash collectableCategory, Any p1) { return invoke <Any>(0xC4AC39719C1BB559, collectableCategory, p1); }
	static Any _0x93F2E7B5DB85657B(Any p0, Any p1) { return invoke <Any>(0x93F2E7B5DB85657B, p0, p1); }
	static Hash COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(Hash collectableCategory, Hash p1) { return invoke <Hash>(0xCC644BC1DD655269, collectableCategory, p1); }
	static Hash _0x9ADEE485726025D4(Hash collectableCategory) { return invoke <Hash>(0x9ADEE485726025D4, collectableCategory); }
	static Any _0xD1806FB3EDED6D11(Hash collectableCategory, int p1) { return invoke <Any>(0xD1806FB3EDED6D11, collectableCategory, p1); }
	static Any _0x3FD91F1A148A0468(Hash collectableCategory, int p1) { return invoke <Any>(0x3FD91F1A148A0468, collectableCategory, p1); }
	static Any _0xC3CA424E1F12ED0C(Hash collectableCategory, int p1) { return invoke <Any>(0xC3CA424E1F12ED0C, collectableCategory, p1); }
	static Hash _COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(Hash collectableCategory, Hash collectableSubcategory) { return invoke <Hash>(0xD52D20B0C76BB26D, collectableCategory, collectableSubcategory); }
	static Hash _COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(Hash collectableCategory, Hash collectableSubcategory) { return invoke <Hash>(0x13AAECDA43318BFE, collectableCategory, collectableSubcategory); }
	static Any _0xD297F68928A58130(Hash collectableCategory, int p1) { return invoke <Any>(0xD297F68928A58130, collectableCategory, p1); }
	static Any _0x775FA1FC87666847(Hash collectableCategory, int p1) { return invoke <Any>(0x775FA1FC87666847, collectableCategory, p1); }
	static Any _0xEC3959E9950BF56B(int p0) { return invoke <Any>(0xEC3959E9950BF56B, p0); }
}

namespace COMPANION
{
	static void _0xD730281E496621FB(Ped ped, Hash p1) { return invoke <void>(0xD730281E496621FB, ped, p1); }
	static void _0xBF6583E926D13890(Any p0, Any p1) { return invoke <void>(0xBF6583E926D13890, p0, p1); }
	static void _0x0A8FD91EDE7B328A(Any p0, Any p1) { return invoke <void>(0xA8FD91EDE7B328A, p0, p1); }
	static void _0x991E3346D788F20F(Any p0, Any p1) { return invoke <void>(0x991E3346D788F20F, p0, p1); }
	static void _0xCE27824B5968B79A(Any p0, Any p1) { return invoke <void>(0xCE27824B5968B79A, p0, p1); }
	static void _0xF06CBB8CCCA823C0(Any p0, Any p1) { return invoke <void>(0xF06CBB8CCCA823C0, p0, p1); }
	static void _0x2917E634206B9E17(Ped ped, int p1) { return invoke <void>(0x2917E634206B9E17, ped, p1); }
	static void _0xD428C3F92FC3F6F8(Ped ped, const char* p1) { return invoke <void>(0xD428C3F92FC3F6F8, ped, p1); }
	static void _ADD_COMPANION_FLAG(Ped ped, int p1) { return invoke <void>(0xDEB369F6AD168C58, ped, p1); }
	static void _REMOVE_COMPANION_FLAG(Ped ped, int p1) { return invoke <void>(0x1740E3DEE0AE4D27, ped, p1); }
	static void _0x0DE02DA3C0F66955(Ped ped, Hash p1) { return invoke <void>(0xDE02DA3C0F66955, ped, p1); }
	static void _SET_COMPANION_ACTIVITY(int groupId, Hash activity) { return invoke <void>(0xF1CD8CA9E65D5F6, groupId, activity); }
	static Hash _GET_COMPANION_ACTIVITY(int groupId) { return invoke <Hash>(0xB7E0590C86E1711F, groupId); }
	static void _0xA079FF7CFB9AC8BD(Any p0, Any p1) { return invoke <void>(0xA079FF7CFB9AC8BD, p0, p1); }
	static void _0x61BDA07407754A5C(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x61BDA07407754A5C, p0, p1, p2, p3); }
	static void _0xD55A871E1CE3481B(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xD55A871E1CE3481B, p0, p1, p2, p3); }
	static void _0x0C6A00DAE896614C(Any p0, Any p1) { return invoke <void>(0xC6A00DAE896614C, p0, p1); }
	static void _0x8FB98B719AA0075A(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x8FB98B719AA0075A, p0, p1, p2, p3, p4); }
	static void _0x9C902084F48D2E6C(Any p0) { return invoke <void>(0x9C902084F48D2E6C, p0); }
	static void _0xD747979C053EFA7A(Any p0) { return invoke <void>(0xD747979C053EFA7A, p0); }
	static void _0x3CAAD93FA5B9579A(Volume volume, int p1, int p2) { return invoke <void>(0x3CAAD93FA5B9579A, volume, p1, p2); }
	static void _0x7274F84B1501B523(Any p0) { return invoke <void>(0x7274F84B1501B523, p0); }
	static Any _0x722FBE08EF5B87BD(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <Any>(0x722FBE08EF5B87BD, p0, p1, p2, p3, p4); }
	static void _ACTIVATE_COMPANION_ANALYSIS(int groupId) { return invoke <void>(0xCBD9EC60495C728C, groupId); }
	static void _DEACTIVATE_COMPANION_ANALYSIS(int groupId) { return invoke <void>(0x72B7F65F11FC8896, groupId); }
}

namespace COMPENDIUM
{
	static float _0x725D52F21A5E9E22(Hash category) { return invoke <float>(0x725D52F21A5E9E22, category); }
	static int _COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(Hash category) { return invoke <int>(0x729D52F61A5A9E22, category); }
	static int _0x729D52461AEA9E22(Hash category) { return invoke <int>(0x729D52461AEA9E22, category); }
	static Hash COMPENDIUM_GET_SHORT_DESCRIPTION_FROM_PED(Ped ped) { return invoke <Hash>(0x6C5E5D48E48B4C65, ped); }
	static Hash COMPENDIUM_GET_SUBCATEGORY_PED_IS_IN(Hash category, Ped ped) { return invoke <Hash>(0x9B657550DF55EC96, category, ped); }
	static Hash _COMPENDIUM_GET_SUBCATEGORY_HASH_FROM_ANIMAL_TYPE(Hash category, Hash animalType) { return invoke <Hash>(0xCD278B6BFBDBDC22, category, animalType); }
	static int COMPENDIUM_GET_NUM_ENTRIES_IN_SUBCATEGORY(Hash category, Hash subcategory) { return invoke <int>(0xF58A0C0E086E8E36, category, subcategory); }
	static int COMPENDIUM_GET_ENTRY_BY_INDEX_IN_SUBCATEGORY(Hash category, Hash subcategory, int count) { return invoke <int>(0x5CEB63B2E3D9895F, category, subcategory, count); }
	static int COMPENDIUM_GET_ENTRY_BY_PED_INDEX(Hash category, Ped ped) { return invoke <int>(0x1CFA0219D8E1CF25, category, ped); }
	static int COMPENDIUM_GET_ENTRY_BY_STAT_ITEM(Hash category, Hash animalType) { return invoke <int>(0x66EC938394D76C85, category, animalType); }
	static Any COMPENDIUM_GET_SUBCATEGORY_TOAST_APP_ID(Hash category, Hash subcategory) { return invoke <Any>(0x2BF30D9D4D680112, category, subcategory); }
	static Hash COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM(Hash animalStatItem, float x, float y, float z) { return invoke <Hash>(0x729D54121A5E9E20, animalStatItem, x, y, z); }
	static void COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME(Hash animalType, bool disableCompendiumToast) { return invoke <void>(0x725D52F26A5E9E10, animalType, disableCompendiumToast); }
	static bool COMPENDIUM_WAS_ANIMAL_OBSERVED(Ped ped) { return invoke <bool>(0x23B5E9C5160BC04F, ped); }
	static void COMPENDIUM_ANIMAL_SET_DISCOVERED(int compendiumEntry) { return invoke <void>(0x67F35C7C9F2BDCFE, compendiumEntry); }
	static Any COMPENDIUM_GET_STUDY_AWARD_ID(Ped ped) { return invoke <Any>(0x9F678782720349E4, ped); }
	static Any COMPENDIUM_ANIMAL_GET_SAMPLE_INVENTORY_ITEM(int compendiumEntry) { return invoke <Any>(0x4E4ACAE1C671A9DA, compendiumEntry); }
	static bool COMPENDIUM_ANIMAL_HAS_SAMPLE(int compendiumEntry) { return invoke <bool>(0x6FC24625E4FCAC27, compendiumEntry); }
	static bool COMPENDIUM_ANIMAL_HAS_STAMP(int compendiumEntry) { return invoke <bool>(0xBCF569FC32FFF456, compendiumEntry); }
	static const char* COMPENDIUM_GET_SUBCATEGORY_SAMPLE_TOAST_TITLE(Hash category, Hash subcategory) { return invoke <const char*>(0x5E50C67EB60951E6, category, subcategory); }
	static const char* COMPENDIUM_GET_SUBCATEGORY_SAMPLE_TOAST_DESC_PROGRESS(Hash category, Hash subcategory) { return invoke <const char*>(0x82BFB5B367957699, category, subcategory); }
	static const char* COMPENDIUM_GET_SUBCATEGORY_SAMPLE_TOAST_DESC_COMPLETE(Hash category, Hash subcategory) { return invoke <const char*>(0x59D4D68CDB82427C, category, subcategory); }
	static void COMPENDIUM_FISH_CAUGHT(Ped ped, Hash category) { return invoke <void>(0x725D52F21A5E9E00, ped, category); }
	static int COMPENDIUM_FISH_GET_LURE_SUITABILITY_BY_STAT_ITEM(Hash animalType, Hash baitType) { return invoke <int>(0x725D52F21A5E9E81, animalType, baitType); }
	static void COMPENDIUM_GANG_CAMP_FOUND(Any p0, Any p1) { return invoke <void>(0x725D52F21A5E9E03, p0, p1); }
	static void COMPENDIUM_GANG_AMBUSH_SURVIVED(Any p0) { return invoke <void>(0x725D52F21A5E9E04, p0); }
	static void COMPENDIUM_GANG_ENCOUNTERED(Any p0) { return invoke <void>(0x725D52F21A5E9E05, p0); }
	static void COMPENDIUM_GANG_BOUNTY_CAPTURED(Any p0) { return invoke <void>(0x725D52F21A5E9E06, p0); }
	static void COMPENDIUM_GANG_MEMBER_KILLED(Any p0) { return invoke <void>(0x725D52F21A5E9E07, p0); }
	static void COMPENDIUM_GANG_HIDEOUT_FOUND(Any p0, Any p1) { return invoke <void>(0x725D52F21A5E9E08, p0, p1); }
	static void COMPENDIUM_HERB_PICKED(Hash herbType, float x, float y, float z) { return invoke <void>(0x725D52F21A5E9E09, herbType, x, y, z); }
	static void COMPENDIUM_HORSE_BONDING(Ped ped, int bondingLevel) { return invoke <void>(0x725D52F21A5E9E50, ped, bondingLevel); }
	static void COMPENDIUM_HORSE_WILD_BROKEN(Ped ped) { return invoke <void>(0x725852D21A2E9E50, ped); }
	static void COMPENDIUM_HORSE_OBSERVED(Ped ped, bool disableCompendiumToast) { return invoke <void>(0x725D58F2125E5E50, ped, disableCompendiumToast); }
}

namespace CRASHLOG
{
	static void _0x0FD3ECF9D0C8655F(const char* p0) { return invoke <void>(0xFD3ECF9D0C8655F, p0); }
	static void _0xCA0BAC376C541978(const char* p0) { return invoke <void>(0xCA0BAC376C541978, p0); }
	static bool _0x3A66F1963B223F61(const char* p0) { return invoke <bool>(0x3A66F1963B223F61, p0); }
	static bool _0x7C680FF55617F82F() { return invoke <bool>(0x7C680FF55617F82F); }
	static bool _0xD8E3D22AA4F0E0A5(const char* p0) { return invoke <bool>(0xD8E3D22AA4F0E0A5, p0); }
	static bool _0xA67F0B039D9CD513(bool p0) { return invoke <bool>(0xA67F0B039D9CD513, p0); }
	static bool _0xE72E234B30DA7B7A(int p0) { return invoke <bool>(0xE72E234B30DA7B7A, p0); }
	static bool _0x87F005C969EF1563(float p0) { return invoke <bool>(0x87F005C969EF1563, p0); }
	static bool _0x23CCAB8F40B9CBEE(float x, float y, float z) { return invoke <bool>(0x23CCAB8F40B9CBEE, x, y, z); }
	static bool _0xF0D545C1EEAD614A() { return invoke <bool>(0xF0D545C1EEAD614A); }
	static bool _0x33C1D63E55FA4284(const char* p0) { return invoke <bool>(0x33C1D63E55FA4284, p0); }
	static void _0x4E42CA5BCD45444A() { return invoke <void>(0x4E42CA5BCD45444A); }
	static void _0xDA05310EA94DC8C6(const char* p0, const char* p1) { return invoke <void>(0xDA05310EA94DC8C6, p0, p1); }
}

namespace CREW
{
	static bool NETWORK_FIND_GAMERS_IN_CREW(int crewId) { return invoke <bool>(0xE532D6811B3A4D2A, crewId); }
	static bool NETWORK_CLAN_SERVICE_IS_VALID() { return invoke <bool>(0x579CCED0265D4896); }
	static bool NETWORK_CLAN_PLAYER_IS_ACTIVE(void* gamerHandle) { return invoke <bool>(0xB124B57F571D8F18, gamerHandle); }
	static bool NETWORK_CLAN_PLAYER_GET_DESC(void* memberInfo, int sizeOfData, void* gamerHandle) { return invoke <bool>(0xEEE6EACBE8874FBA, memberInfo, sizeOfData, gamerHandle); }
	static int NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT() { return invoke <int>(0x1F471B79ACC90BEF); }
	static bool NETWORK_CLAN_GET_MEMBERSHIP_DESC(void* memberInfo, int membershipIndex) { return invoke <bool>(0x48DE78AF2C8885B8, memberInfo, membershipIndex); }
	static bool _0x58D378AF2C8765B7(Any p0) { return invoke <bool>(0x58D378AF2C8765B7, p0); }
	static bool _NETWORK_CLAN_INVITE_PLAYER(Any p0) { return invoke <bool>(0xC685B014CE3D988B, p0); }
	static bool _NETWORK_ACCEPT_CLAN_INVITE(int crewInviteIndex) { return invoke <bool>(0x8E2143144B8E188D, crewInviteIndex); }
	static bool NETWORK_CLAN_REQUEST_EMBLEM(int clanId) { return invoke <bool>(0x13518FF1C6B28938, clanId); }
	static bool NETWORK_CLAN_IS_EMBLEM_READY(int clanId, void* outTXDName) { return invoke <bool>(0xA134777FF7F33331, clanId, outTXDName); }
	static void NETWORK_CLAN_RELEASE_EMBLEM(int clanId) { return invoke <void>(0x113E6E3E50E286B0, clanId); }
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR() { return invoke <Any>(0x9AA46BADAD0E27ED); }
	static bool NETWORK_GET_PRIMARY_CLAN_DATA_START(void* gamerHandleData, int nGamerHandles) { return invoke <bool>(0xCE86D8191B762107, gamerHandleData, nGamerHandles); }
	static bool NETWORK_GET_PRIMARY_CLAN_DATA_PENDING() { return invoke <bool>(0xB5074DB804E28CE7); }
	static bool NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS() { return invoke <bool>(0x5B4F04F19376A0BA); }
	static bool NETWORK_GET_PRIMARY_CLAN_DATA_NEW(void* hGamer, void* memberInfo) { return invoke <bool>(0xC080FF658B2E41DA, hGamer, memberInfo); }
	static Any _NETWORK_CLAN_SET_ACTIVE(Any p0) { return invoke <Any>(0xC080FF658B2E51DA, p0); }
}

namespace DATABINDING
{
	static Any _DATABINDING_GET_DATA_CONTAINER_FROM_PATH(const char* p0) { return invoke <Any>(0xC827D175F1292F2, p0); }
	static Any _DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Hash entryId, int p1) { return invoke <Any>(0xC827D175F1292F3, entryId, p1); }
	static Any _0xD7DB94AB78E8EBE4(const char* p0, Hash p1) { return invoke <Any>(0xD7DB94AB78E8EBE4, p0, p1); }
	static Any _DATABINDING_ADD_DATA_CONTAINER_FROM_PATH(const char* p0, const char* p1) { return invoke <Any>(0xC827D175F1292F4, p0, p1); }
	static Any _DATABINDING_ADD_DATA_CONTAINER_BY_HASH(Any p0, Hash p1) { return invoke <Any>(0x98BB14345BB68257, p0, p1); }
	static Hash _DATABINDING_ADD_DATA_CONTAINER(Hash entryId, const char* p1) { return invoke <Hash>(0xEB4F9A3537EEABCD, entryId, p1); }
	static Any _DATABINDING_ADD_DATA_BOOL_FROM_PATH(const char* p0, const char* p1, bool p2) { return invoke <Any>(0x37BB86A751148A6A, p0, p1, p2); }
	static Any _DATABINDING_ADD_DATA_BOOL_BY_HASH(Any p0, Hash p1, bool p2) { return invoke <Any>(0xBC95D3AE2ECA70D6, p0, p1, p2); }
	static Any _DATABINDING_ADD_DATA_BOOL(Any p0, const char* p1, bool p2) { return invoke <Any>(0x58BAA5F635DA2FF4, p0, p1, p2); }
	static Any _DATABINDING_ADD_DATA_INT_BY_HASH(Any p0, Hash p1, int p2) { return invoke <Any>(0x267F9527F4350ADE, p0, p1, p2); }
	static Any _DATABINDING_ADD_DATA_INT(Any p0, const char* p1, Hash p2) { return invoke <Any>(0x307A3247C5457BDE, p0, p1, p2); }
	static Any _DATABINDING_ADD_DATA_FLOAT(Any p0, const char* p1, float p2) { return invoke <Any>(0x5154228273ADB9A6, p0, p1, p2); }
	static Any _DATABINDING_ADD_DATA_HASH_BY_HASH(Any p0, Hash p1, Hash p2) { return invoke <Any>(0x8E173DFB041993C6, p0, p1, p2); }
	static Any _DATABINDING_ADD_DATA_HASH(Any p0, const char* p1, Hash p2) { return invoke <Any>(0x8538F1205D60ECA6, p0, p1, p2); }
	static Any _DATABINDING_ADD_DATA_STRING_FROM_PATH(const char* p0, const char* p1, const char* p2) { return invoke <Any>(0xA381DE86EE170C4A, p0, p1, p2); }
	static Any _DATABINDING_ADD_DATA_STRING_BY_HASH(Any p0, Hash p1, const char* p2) { return invoke <Any>(0xEAD09E76E22630C3, p0, p1, p2); }
	static Any _DATABINDING_ADD_DATA_STRING(Any p0, const char* p1, const char* p2) { return invoke <Any>(0x617FCA1C5652BBAD, p0, p1, p2); }
	static Any _DATABINDING_ADD_DATA_GANG_ID(Any p0, const char* p1, Any gangId) { return invoke <Any>(0x7D0F2014DB28DD00, p0, p1, gangId); }
	static Any _DATABINDING_ADD_DATA_POSSE_ID(Any p0, const char* p1, Any posseId) { return invoke <Any>(0x7D0F2014DB28DD01, p0, p1, posseId); }
	static Any _0x294AF5323F44B053(Any p0, const char* p1, Any p2) { return invoke <Any>(0x294AF5323F44B053, p0, p1, p2); }
	static Any _DATABINDING_ADD_UI_ITEM_LIST_FROM_PATH(const char* p0, const char* p1) { return invoke <Any>(0xDB5B9A474148F699, p0, p1); }
	static Any _DATABINDING_ADD_UI_ITEM_LIST_BY_HASH(Any p0, Hash p1) { return invoke <Any>(0x3C7799283325181B, p0, p1); }
	static Any _DATABINDING_ADD_UI_ITEM_LIST(Any p0, const char* p1) { return invoke <Any>(0xFE74FA57E0CE6824, p0, p1); }
	static void _DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Any p0, int index, const char* p2, Any p3) { return invoke <void>(0x5859E970794D92F3, p0, index, p2, p3); }
	static void _DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(Any p0, int index, Hash p2, Any p3) { return invoke <void>(0xEE97A05C05F16E41, p0, index, p2, p3); }
	static void _DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_PATH_STRING_ALIAS(Any p0, Any p1, const char* p2, Any p3) { return invoke <void>(0x5740774F608E4FC8, p0, p1, p2, p3); }
	static void _0x6318FB3BE37E11B3(Hash entryId, int index) { return invoke <void>(0x6318FB3BE37E11B3, entryId, index); }
	static void _DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Any p0, Hash entryId) { return invoke <void>(0xF68B1726EAF7B285, p0, entryId); }
	static void _DATABINDING_CLEAR_BINDING_ARRAY(Hash entryId) { return invoke <void>(0xA1F15C1D03DF802D, entryId); }
	static Any _DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Any p0, int index) { return invoke <Any>(0xE96D7F9FEFCC105F, p0, index); }
	static void _DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Any p0, int p1) { return invoke <void>(0xFE74FA57E0CE6825, p0, p1); }
	static void _DATABINDING_SET_TEMPLATED_UI_ITEM_HASH_ALIAS(Any p0, int p1, Hash p2) { return invoke <void>(0xAE7138D0541F2DE, p0, p1, p2); }
	static Any _0xD48993A61938C64D(Any p0, const char* p1) { return invoke <Any>(0xD48993A61938C64D, p0, p1); }
	static Any _DATABINDING_ADD_HASH_ARRAY(Any p0, const char* p1) { return invoke <Any>(0x52F5F08278EA5D75, p0, p1); }
	static Any _DATABINDING_ADD_STRING_ARRAY(Any p0, const char* p1) { return invoke <Any>(0x1B23E0627BDBFE85, p0, p1); }
	static void _0x1919D59E60FD516E(Any p0, int p1, int p2) { return invoke <void>(0x1919D59E60FD516E, p0, p1, p2); }
	static void _0x7FC60C94C83C5CD7(Any p0, Hash p1, int p2) { return invoke <void>(0x7FC60C94C83C5CD7, p0, p1, p2); }
	static void _0xC900CEC8A172375B(Any p0, const char* p1, int p2) { return invoke <void>(0xC900CEC8A172375B, p0, p1, p2); }
	static Any _0x02B21B6BEEDD83CC(Hash entryId, int p1) { return invoke <Any>(0x2B21B6BEEDD83CC, entryId, p1); }
	static Any _0xF47E33F8D2523825(Any p0, int p1) { return invoke <Any>(0xF47E33F8D2523825, p0, p1); }
	static void _0x3BF0767CF33FCC88(Hash entryId) { return invoke <void>(0x3BF0767CF33FCC88, entryId); }
	static Any _DATABINDING_GET_ARRAY_COUNT(Hash entryId) { return invoke <Any>(0xD23F5DE04FE717E2, entryId); }
	static void _DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(int p0, int p1, void* varargs) { return invoke <void>(0xAB888B4B91046771, p0, p1, varargs); }
	static void _DATABINDING_WRITE_DATA_BOOL(Any p0, bool p1) { return invoke <void>(0xAB888B4B91046770, p0, p1); }
	static void _DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Any p0, const char* p1, bool p2) { return invoke <void>(0xBDFE546E4C2D0E21, p0, p1, p2); }
	static void _0xBFC83DA249BEFCC9(Any p0, Hash p1, Any p2) { return invoke <void>(0xBFC83DA249BEFCC9, p0, p1, p2); }
	static void _DATABINDING_WRITE_DATA_INT(Any p0, int p1) { return invoke <void>(0x335C3F6B3766B8D9, p0, p1); }
	static void _DATABINDING_WRITE_DATA_INT_FROM_PARENT(Any p0, const char* p1, int p2) { return invoke <void>(0x9EFA98238BA08FC4, p0, p1, p2); }
	static void _DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(Any p0, Hash p1, Any p2) { return invoke <void>(0x9D6E10A41D6ED6EC, p0, p1, p2); }
	static void _DATABINDING_WRITE_DATA_FLOAT(Any p0, float p1) { return invoke <void>(0xDF504BECEB15DA93, p0, p1); }
	static void _0x05AC9E1E02975AFB(Any p0, const char* p1, float p2) { return invoke <void>(0x5AC9E1E02975AFB, p0, p1, p2); }
	static void _DATABINDING_WRITE_DATA_HASH_STRING(Any p0, Hash p1) { return invoke <void>(0xACDEF586BD71B1FD, p0, p1); }
	static void _DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Any p0, const char* p1, Hash p2) { return invoke <void>(0x971F04E1EAA7AE8, p0, p1, p2); }
	static void _DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(Any p0, Hash p1, Any p2) { return invoke <void>(0x20209529689E0953, p0, p1, p2); }
	static void _DATABINDING_WRITE_DATA_STRING(Any p0, const char* p1) { return invoke <void>(0xE1BD342F2872AEE9, p0, p1); }
	static void DATABINDING_WRITE_STRING_FROM_PARENT(Any p0, const char* p1, const char* p2) { return invoke <void>(0x4FF713B2F17A391E, p0, p1, p2); }
	static void _DATABINDING_WRITE_STRING_FROM_HASH(Any p0, Hash p1, const char* p2) { return invoke <void>(0xA3BD6FF95E713EE5, p0, p1, p2); }
	static void _DATABINDING_WRITE_DATA_GANG_ID(Any p0, const char* p1, Any gangId) { return invoke <void>(0xC70041408E16BE2D, p0, p1, gangId); }
	static void _DATABINDING_WRITE_DATA_POSSE_ID(Any p0, const char* p1, Any posseId) { return invoke <void>(0xC70041408E16BE2E, p0, p1, posseId); }
	static void _0x422179C7F6AD9304(Any p0, void* gamerHandle) { return invoke <void>(0x422179C7F6AD9304, p0, gamerHandle); }
	static Any _DATABINDING_READ_DATA_BOOL(Any p0) { return invoke <Any>(0x5EEFBD4B6D7CD6EB, p0); }
	static Any _DATABINDING_READ_DATA_BOOL_FROM_PARENT(Any p0, const char* p1) { return invoke <Any>(0xA8EDE09FE07BD77F, p0, p1); }
	static Any _DATABINDING_READ_DATA_BOOL_FROM_PARENT_BY_HASH(Any p0, Hash p1) { return invoke <Any>(0x4CDC3FDDFAE07EB3, p0, p1); }
	static int DATABINDING_READ_INT(Any p0) { return invoke <int>(0x570784D782597512, p0); }
	static Any _DATABINDING_READ_DATA_INT_FROM_PARENT(Any p0, const char* p1) { return invoke <Any>(0xFFC566A4801F6B40, p0, p1); }
	static Any _DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(Any p0, Hash p1) { return invoke <Any>(0xB5F668B648EC0970, p0, p1); }
	static float _DATABINDING_READ_FLOAT(Hash entryId) { return invoke <float>(0x5FE444EB67C70AD4, entryId); }
	static Hash _DATABINDING_READ_HASH(Hash entryId) { return invoke <Hash>(0x81D7183E7A8ECA72, entryId); }
	static Any _DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Any p0, const char* p1) { return invoke <Any>(0x9B535990B01B62DE, p0, p1); }
	static Any _DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(Any p0, Hash p1) { return invoke <Any>(0x1F43BC25A119B252, p0, p1); }
	static Any _DATABINDING_READ_DATA_STRING(Any p0) { return invoke <Any>(0x3D290B5FFA7C5151, p0); }
	static Any _DATABINDING_READ_DATA_STRING_FROM_PARENT(Any p0, const char* p1) { return invoke <Any>(0x6323AD277C4A2AFB, p0, p1); }
	static Any _0x6329C34BEE5BFF4B(Any p0, Hash p1) { return invoke <Any>(0x6329C34BEE5BFF4B, p0, p1); }
	static Any _0xE6AAB897120492D6(Any p0, const char* p1) { return invoke <Any>(0xE6AAB897120492D6, p0, p1); }
	static void _0xE6AAB897120492D7(Any p0, const char* p1, Any p2) { return invoke <void>(0xE6AAB897120492D7, p0, p1, p2); }
	static void _0xB138CA787F3DD858(Any p0, const char* p1, Any p2) { return invoke <void>(0xB138CA787F3DD858, p0, p1, p2); }
	static bool DATABINDING_IS_ENTRY_VALID(Hash entryId) { return invoke <bool>(0x1E7130793AAAAB8D, entryId); }
	static void _DATABINDING_REMOVE_DATA_ENTRY(Hash entryId) { return invoke <void>(0xAE9938D0541F2DA, entryId); }
	static void _VIRTUAL_COLLECTION_SET_SIZE(Any p0, int size) { return invoke <void>(0x9DCE9B01A93B58BC, p0, size); }
	static void _VIRTUAL_COLLECTION_SET_INTEREST_INDEX(Any p0, int interestIndex) { return invoke <void>(0x49A8447533308BCF, p0, interestIndex); }
	static void _VIRTUAL_COLLECTION_ITEM_ADD(Any p0, int index, Hash p2, Any p3) { return invoke <void>(0x6DCBF187221CF73D, p0, index, p2, p3); }
	static void _VIRTUAL_COLLECTION_RESET(Any p0) { return invoke <void>(0x9D95666ED2B5F60, p0); }
	static Any _VIRTUAL_COLLECTION_EXISTS(Any p0) { return invoke <Any>(0x37963B56755BFB35, p0); }
}

namespace DATAFILE
{
	static void DATAFILE_WATCH_REQUEST_ID(int nCloudRequestID) { return invoke <void>(0xA5834834CA8FD7FC, nCloudRequestID); }
	static bool DATAFILE_HAS_LOADED_FILE_DATA(int nCloudRequestID) { return invoke <bool>(0x17279C820464CEE0, nCloudRequestID); }
	static bool DATAFILE_HAS_VALID_FILE_DATA(int nCloudRequestID) { return invoke <bool>(0xE60100389E50EADE, nCloudRequestID); }
	static bool DATAFILE_SELECT_ACTIVE_FILE(int nCloudRequestID, int datafileIndex) { return invoke <bool>(0x46102A0989AD80B5, nCloudRequestID, datafileIndex); }
	static bool DATAFILE_DELETE_REQUESTED_FILE(int nCloudRequestID) { return invoke <bool>(0x604B8ED1A482F9DF, nCloudRequestID); }
	static Any UGC2_SET_PLAYER_DATA(Any p0, Any p1, Any p2, Any p3) { return invoke <Any>(0xE79C70E77E0973C7, p0, p1, p2, p3); }
	static Any DATAFILE_UGC_SELECT_DATA(Any ugcRequestId, int index, Any p2) { return invoke <Any>(0x790EC421078F5C4E, ugcRequestId, index, p2); }
	static void DATAFILE_CREATE(int datafileIndex) { return invoke <void>(0x56B7291FB953DD51, datafileIndex); }
	static void DATAFILE_DELETE(int datafileIndex) { return invoke <void>(0x9FB90EEDEA9F2D5C, datafileIndex); }
	static void* DATAFILE_GET_FILE_DICT(int datafileIndex) { return invoke <void*>(0xBBD8CF823CAE557C, datafileIndex); }
	static bool DATADICT_IS_DICT_VALID(void* fileDict) { return invoke <bool>(0x4607D57C5F7D332A, fileDict); }
	static bool DATADICT_IS_ARRAY_VALID(void* fileDict) { return invoke <bool>(0xB04B69CF277D15C0, fileDict); }
	static void DATADICT_SET_INT(void* dict, const char* name, int value) { return invoke <void>(0x26FDF5E99AA2F3E9, dict, name, value); }
	static bool DATADICT_GET_BOOL(void* dict, const char* name) { return invoke <bool>(0x175E915A486EE548, dict, name); }
	static int DATADICT_GET_INT(void* dict, const char* name) { return invoke <int>(0x9D896A3B87D96E2B, dict, name); }
	static float DATADICT_GET_FLOAT(void* dict, const char* name) { return invoke <float>(0x814643ECA258ADF5, dict, name); }
	static const char* DATADICT_GET_STRING(void* dict, const char* name) { return invoke <const char*>(0xE37B38C0B4E95DFA, dict, name); }
	static Vector3 DATADICT_GET_VECTOR(void* dict, const char* name) { return invoke <Vector3>(0xE459C941431E0FFA, dict, name); }
	static void* DATADICT_GET_DICT(void* parent, const char* name) { return invoke <void*>(0x4D7A30130F46AC9C, parent, name); }
	static void* DATADICT_GET_ARRAY(void* parent, const char* name) { return invoke <void*>(0x1B5447CF18544B18, parent, name); }
	static int DATADICT_GET_TYPE(void* dict, const char* name) { return invoke <int>(0x92E11E3CA4C7CDF0, dict, name); }
	static void _0xBC0DF006A4952C68(Any p0, Any p1, Any p2) { return invoke <void>(0xBC0DF006A4952C68, p0, p1, p2); }
	static void _0x9F130129EBC31B34(Any p0, Any p1, Any p2) { return invoke <void>(0x9F130129EBC31B34, p0, p1, p2); }
	static void _0x277251C161B4C3F4(Any p0, Any p1, Any p2) { return invoke <void>(0x277251C161B4C3F4, p0, p1, p2); }
	static void _0x1C65CC931C0F946F(Any p0, Any p1, Any p2) { return invoke <void>(0x1C65CC931C0F946F, p0, p1, p2); }
	static void _0x7681B677400C7071(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x7681B677400C7071, p0, p1, p2, p3, p4); }
	static bool DATAARRAY_GET_BOOL(void* arr, int index) { return invoke <bool>(0xAB1231D2DE52F2D3, arr, index); }
	static int DATAARRAY_GET_INT(void* arr, int index) { return invoke <int>(0x96DEA500B6EBBE53, arr, index); }
	static float DATAARRAY_GET_FLOAT(void* arr, int index) { return invoke <float>(0xA9D003CF419CB81E, arr, index); }
	static const char* DATAARRAY_GET_STRING(void* arr, int index) { return invoke <const char*>(0xB6790A8FF80F889F, arr, index); }
	static Vector3 DATAARRAY_GET_VECTOR(void* arr, int index) { return invoke <Vector3>(0x850DA2750DA14E9A, arr, index); }
	static void* DATAARRAY_GET_DICT(void* parent, int index) { return invoke <void*>(0xA010655985853485, parent, index); }
	static int DATAARRAY_GET_COUNT(void* arr) { return invoke <int>(0x6A885BF69239E539, arr); }
	static int DATAARRAY_GET_TYPE(void* arr, int index) { return invoke <int>(0x151DAFE6B3B9888F, arr, index); }
	static Any _0x4F9E3ED7617123AC(Any p0) { return invoke <Any>(0x4F9E3ED7617123AC, p0); }
	static Any _0xCA56DD6AB7A39F64(Any p0) { return invoke <Any>(0xCA56DD6AB7A39F64, p0); }
	static int _PARSEDDATA_LOAD_FILE_HASH(Hash p0) { return invoke <int>(0xD97D8D905F1562F2, p0); }
	static void _PARSEDDATA_UNLOAD_FILE(int fileHandle) { return invoke <void>(0x129567F0C05F81B9, fileHandle); }
	static bool PARSEDDATA_IS_FILE_VALID(int fileHandle) { return invoke <bool>(0x7907969497EA92F5, fileHandle); }
	static bool PARSEDDATA_IS_FILE_LOADED(int fileHandle) { return invoke <bool>(0x603AC35FD4602C76, fileHandle); }
	static void _0x3168BA5D6DECE323() { return invoke <void>(0x3168BA5D6DECE323); }
	static Any _PARSEDDATA_REGISTER_QUERY(Any p0, Any p1, Any p2) { return invoke <Any>(0xAE156A747C39A741, p0, p1, p2); }
	static bool PARSEDDATA_RQ_FILLOUT_NODE(int* p0, void* p1) { return invoke <bool>(0x83C3ED532B6E5D07, p0, p1); }
	static Any _PARSEDDATA_RQ_GET_NUM_NODES(Any p0) { return invoke <Any>(0xDF01B1F7A886B42D, p0); }
	static int _0xE13634BB6BAF0734(int p0, int p1) { return invoke <int>(0xE13634BB6BAF0734, p0, p1); }
	static Any _PARSEDDATA_GET_NUM_CHILDREN(Any p0, Any p1) { return invoke <Any>(0x6BEB168D5195E7AB, p0, p1); }
	static bool PARSEDDATA_RQ_FILLOUT_HASH(Hash* p0, void* p1) { return invoke <bool>(0xFBFF3FF2F5E80C0B, p0, p1); }
	static bool _PARSEDDATA_RQ_FILLOUT_STRING_63(char* p0, void* p1) { return invoke <bool>(0x8EAF8E9F2EB7B2E, p0, p1); }
	static bool PARSEDDATA_RQ_FILLOUT_STRING_127(char* p0, void* p1) { return invoke <bool>(0x951327435DC5164B, p0, p1); }
	static bool _PARSEDDATA_RQ_FILLOUT_VECTOR(Vector3* p0, void* p1) { return invoke <bool>(0x6FBF89B12DA279C, p0, p1); }
	static bool _PARSEDDATA_RQ_FILLOUT_FLOAT(float* p0, void* p1) { return invoke <bool>(0x7F034FC3E891B57A, p0, p1); }
	static bool _PARSEDDATA_RQ_FILLOUT_INT(int* p0, void* p1) { return invoke <bool>(0xEF44ACC657352A35, p0, p1); }
	static bool _PARSEDDATA_RQ_FILLOUT_BOOL(bool* p0, void* p1) { return invoke <bool>(0xD9138F3F8261DF7, p0, p1); }
	static void _PARSEDDATA_GET_FILE(void* p0) { return invoke <void>(0x91DED5DD64BB2691, p0); }
	static bool _PARSEDDATA_GET_ENTRIES(void* p0) { return invoke <bool>(0xED4413CEE1BF142C, p0); }
	static bool _PARSEDDATA_GET_FLOAT(void* p0, void* p1, Hash p2) { return invoke <bool>(0xB2B42607F7867576, p0, p1, p2); }
	static bool _PARSEDDATA_GET_INT(void* p0, void* p1, Hash p2) { return invoke <bool>(0x52FC26D2D2FC2987, p0, p1, p2); }
	static bool _PARSEDDATA_GET_SECTION(void* p0, void* p1, Hash section) { return invoke <bool>(0x44B3A36933AC009C, p0, p1, section); }
	static bool _PARSEDDATA_GET_BOOL(bool* p0, void* p1, Hash p2) { return invoke <bool>(0xA63CD20F19B961AB, p0, p1, p2); }
}

namespace DEBUG
{
	static Any _0xACF9CB705BEFA8CB() { return invoke <Any>(0xACF9CB705BEFA8CB); }
	static Any _0xA8D970D8A72640A6() { return invoke <Any>(0xA8D970D8A72640A6); }
	static const char* GET_GAME_VERSION_NAME() { return invoke <const char*>(0x5A5F662AD35C573); }
}

namespace DECORATOR
{
	static bool DECOR_SET_BOOL(ScrHandle guid, const char* decoratorName, bool value) { return invoke <bool>(0xFE26E4609B1C3772, guid, decoratorName, value); }
	static bool DECOR_SET_FLOAT(ScrHandle guid, const char* decoratorName, float value) { return invoke <bool>(0x238F8B0C1C7FE834, guid, decoratorName, value); }
	static bool DECOR_SET_INT(ScrHandle guid, const char* decoratorName, int value) { return invoke <bool>(0xE88F4D7F52A6090F, guid, decoratorName, value); }
	static bool _DECOR_SET_UINT8(Entity entity, const char* propertyName, int value) { return invoke <bool>(0x4BDC83150D43772D, entity, propertyName, value); }
	static bool DECOR_SET_STRING(Entity entity, const char* propertyName, const char* value) { return invoke <bool>(0x671C1A3FF7AFDFC, entity, propertyName, value); }
	static bool DECOR_GET_BOOL(ScrHandle guid, const char* decoratorName) { return invoke <bool>(0xDEF3F1B071ABB197, guid, decoratorName); }
	static float DECOR_GET_FLOAT(ScrHandle guid, const char* decoratorName) { return invoke <float>(0xE5FF70CD842CA9D4, guid, decoratorName); }
	static int DECOR_GET_INT(ScrHandle guid, const char* decoratorName) { return invoke <int>(0x44DB62727762FD9B, guid, decoratorName); }
	static int _DECOR_GET_UINT8(Entity entity, const char* propertyName) { return invoke <int>(0xB1682B2443F0540B, entity, propertyName); }
	static bool DECOR_EXIST_ON(ScrHandle guid, const char* decoratorName) { return invoke <bool>(0xD9D1CDBF3464DCDF, guid, decoratorName); }
	static bool DECOR_REMOVE(ScrHandle guid, const char* decoratorName) { return invoke <bool>(0x2BA7F5877A088A1D, guid, decoratorName); }
	static bool DECOR_REMOVE_ALL(Entity entity) { return invoke <bool>(0x88942780E0ADEA42, entity); }
	static void DECOR_REGISTER(const char* decoratorName, int type) { return invoke <void>(0xB253D644E3C36B3, decoratorName, type); }
	static void _DECOR_REGISTER_2(const char* propertyName, int type, bool p2) { return invoke <void>(0x4587374F88B7F6C2, propertyName, type, p2); }
	static bool DECOR_IS_REGISTERED_AS_TYPE(const char* decoratorName, int type) { return invoke <bool>(0x72355278C069F272, decoratorName, type); }
}

namespace DLC
{
	static bool IS_DLC_PRESENT(Hash NameHash) { return invoke <bool>(0x2763DC12BBE2BB6F, NameHash); }
	static bool GET_IS_LOADING_SCREEN_ACTIVE() { return invoke <bool>(0x71D4BF5890659B0C); }
	static bool _GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED() { return invoke <bool>(0xA16B4FBA7887D7BA); }
	static bool _GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED() { return invoke <bool>(0x1DB9D61E505AE3FC); }
}

namespace ENTITY
{
	static bool DOES_ENTITY_EXIST(Entity EntityIndex) { return invoke <bool>(0xD42BD6EB2E0F1677, EntityIndex); }
	static bool DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Entity EntityIndex, bool bDeadCheck) { return invoke <bool>(0x622B1980CBE13332, EntityIndex, bDeadCheck); }
	static bool DOES_ENTITY_HAVE_DRAWABLE(Entity EntityIndex) { return invoke <bool>(0x20487F0DA9AF164A, EntityIndex); }
	static bool DOES_ENTITY_HAVE_PHYSICS(Entity EntityIndex) { return invoke <bool>(0xA512B3F1B2A0B51C, EntityIndex); }
	static bool HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Entity EntityIndex) { return invoke <bool>(0x73BB763880CD23A6, EntityIndex); }
	static bool HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Entity EntityIndex) { return invoke <bool>(0x9934E9C42D52D87E, EntityIndex); }
	static bool HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Entity EntityIndex) { return invoke <bool>(0x695D7C26DE65C423, EntityIndex); }
	static bool HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Entity EntityIndex, Entity DamagerIndex, bool p2, bool p3) { return invoke <bool>(0x7B6E7BEC1143AC86, EntityIndex, DamagerIndex, p2, p3); }
	static bool _0x3EC28DA1FFAC9DDD(Entity entity1, Entity entity2, Any p2, Any p3) { return invoke <bool>(0x3EC28DA1FFAC9DDD, entity1, entity2, p2, p3); }
	static Entity _0xAF72EC7E1B54539B(Entity entity) { return invoke <Entity>(0xAF72EC7E1B54539B, entity); }
	static bool HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Entity FirstEntityIndex, Entity SecondEntityIndex, int LOSFlags) { return invoke <bool>(0xFCDFF7B72D23A1AC, FirstEntityIndex, SecondEntityIndex, LOSFlags); }
	static bool HAS_ENTITY_CLEAR_LOS_TO_COORD(Entity entity, float x, float y, float z, int flags) { return invoke <bool>(0xC9DBF48C6BA6E4C, entity, x, y, z, flags); }
	static bool HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Entity FirstEntityIndex, Entity SecondEntityIndex, int traceType) { return invoke <bool>(0xE88F19660651D566, FirstEntityIndex, SecondEntityIndex, traceType); }
	static bool HAS_ENTITY_COLLIDED_WITH_ANYTHING(Entity EntityIndex) { return invoke <bool>(0xDF18751EC74F90FF, EntityIndex); }
	static float _0x6D58167F62238284(Vehicle vehicle) { return invoke <float>(0x6D58167F62238284, vehicle); }
	static float _0xDFC2B226D56D85F6(Any p0, Any p1) { return invoke <float>(0xDFC2B226D56D85F6, p0, p1); }
	static float GET_ANIM_DURATION(const char* pAnimDictName, const char* pAnimName) { return invoke <float>(0x9FFAF4940A54CC09, pAnimDictName, pAnimName); }
	static Entity GET_ENTITY_ATTACHED_TO(Entity EntityIndex) { return invoke <Entity>(0x56D713888A566481, EntityIndex); }
	static Vector3 GET_ENTITY_COORDS(Entity EntityIndex, bool DoDeadCheck, bool realCoords) { return invoke <Vector3>(0xA86D5F069399F44D, EntityIndex, DoDeadCheck, realCoords); }
	static Vector3 GET_ENTITY_FORWARD_VECTOR(Entity EntityIndex) { return invoke <Vector3>(0x2412D9C05BB09B97, EntityIndex); }
	static float GET_ENTITY_FORWARD_X(Entity EntityIndex) { return invoke <float>(0xDB0954E9960F6457, EntityIndex); }
	static float GET_ENTITY_FORWARD_Y(Entity EntityIndex) { return invoke <float>(0x9A5C073ECBDA7EE7, EntityIndex); }
	static Vector3 _GET_ENTITY_FORWARD_VECTOR_YX(Entity entity) { return invoke <Vector3>(0x935A30AA88FB1014, entity); }
	static float GET_ENTITY_HEADING(Entity EntityIndex) { return invoke <float>(0xC230DD956E2F5507, EntityIndex); }
	static int GET_ENTITY_HEALTH(Entity EntityIndex) { return invoke <int>(0x82368787EA73C0F7, EntityIndex); }
	static float _GET_ENTITY_HEALTH_FLOAT(Entity entity) { return invoke <float>(0x96C638784DB4C815, entity); }
	static bool _CHANGE_ENTITY_HEALTH(Entity entity, float amount, Entity entity2, Hash weaponHash) { return invoke <bool>(0x835F131E7DC8F97A, entity, amount, entity2, weaponHash); }
	static int GET_ENTITY_MAX_HEALTH(Entity EntityIndex, bool p1) { return invoke <int>(0x15D757606D170C3C, EntityIndex, p1); }
	static void SET_ENTITY_MAX_HEALTH(Entity EntityIndex, int Health) { return invoke <void>(0x166E7CF68597D8B5, EntityIndex, Health); }
	static float GET_ENTITY_HEIGHT(Entity EntityIndex, float PositionX, float PositionY, float PositionZ, bool IsWorldPos, bool WantWorldResult) { return invoke <float>(0x296DEBC84474B375, EntityIndex, PositionX, PositionY, PositionZ, IsWorldPos, WantWorldResult); }
	static float GET_ENTITY_HEIGHT_ABOVE_GROUND(Entity EntityIndex) { return invoke <float>(0xD3B5BAEA08F63E9, EntityIndex); }
	static void _GET_ENTITY_WORLD_POSITION_OF_DIMENSIONS(Entity entity, Vector3* minimum, Vector3* maximum) { return invoke <void>(0xF3FDA9A617A15145, entity, minimum, maximum); }
	static void GET_ENTITY_MATRIX(Entity EntityIndex, Vector3* vFront, Vector3* vSide, Vector3* vUp, Vector3* vPos) { return invoke <void>(0x3A9B1120AF13FBF2, EntityIndex, vFront, vSide, vUp, vPos); }
	static Hash GET_ENTITY_MODEL(Entity EntityIndex) { return invoke <Hash>(0xDA76A9F39210D365, EntityIndex); }
	static Hash _GET_PED_ANIMAL_TYPE(Ped ped) { return invoke <Hash>(0x964000D355219FC0, ped); }
	static bool GET_IS_ANIMAL(Entity entity) { return invoke <bool>(0x9A100F1CF4546629, entity); }
	static bool _GET_IS_BIRD(Entity entity) { return invoke <bool>(0xC346A546612C49A9, entity); }
	static bool _GET_IS_PREDATOR(Entity entity) { return invoke <bool>(0x5594AFE9DE0C01B7, entity); }
	static Vector3 GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Entity EntityIndex, float VecWorldCoorsX, float VecWorldCoorsY, float VecWorldCoorsZ) { return invoke <Vector3>(0x497C6B1A2C9AE69C, EntityIndex, VecWorldCoorsX, VecWorldCoorsY, VecWorldCoorsZ); }
	static Vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Entity EntityIndex, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ) { return invoke <Vector3>(0x1899F328B0E12848, EntityIndex, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ); }
	static float GET_ENTITY_PITCH(Entity EntityIndex) { return invoke <float>(0xEF355ABEFF7F5005, EntityIndex); }
	static float GET_ENTITY_ROLL(Entity EntityIndex) { return invoke <float>(0xBF966536FA8B6879, EntityIndex); }
	static Vector3 GET_ENTITY_ROTATION(Entity EntityIndex, int RotOrder) { return invoke <Vector3>(0xE09CAF86C32CB48F, EntityIndex, RotOrder); }
	static Hash _GET_ENTITY_SCRIPT(Entity entity, void* argStruct) { return invoke <Hash>(0x2A08A32B6D49906F, entity, argStruct); }
	static float GET_ENTITY_SPEED(Entity EntityIndex) { return invoke <float>(0xFB6BA510A533DF81, EntityIndex); }
	static Vector3 GET_ENTITY_SPEED_VECTOR(Entity EntityIndex, bool bLocalResult) { return invoke <Vector3>(0xF2DB09816A419DC5, EntityIndex, bLocalResult); }
	static float GET_ENTITY_UPRIGHT_VALUE(Entity EntityIndex) { return invoke <float>(0x56398BE65160C3BE, EntityIndex); }
	static Vector3 GET_ENTITY_VELOCITY(Entity EntityIndex, int p1) { return invoke <Vector3>(0x4805D2B1D8CF94A9, EntityIndex, p1); }
	static Object GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Entity EntityIndex) { return invoke <Object>(0x280BBE5601EAA983, EntityIndex); }
	static Ped GET_PED_INDEX_FROM_ENTITY_INDEX(Entity EntityIndex) { return invoke <Ped>(0xF16D042BD640EA3, EntityIndex); }
	static Vehicle GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Entity EntityIndex) { return invoke <Vehicle>(0xDF1E5AAC561AFC59, EntityIndex); }
	static Vector3 GET_WORLD_POSITION_OF_ENTITY_BONE(Entity EntityIndex, int iBoneIdx) { return invoke <Vector3>(0x82CFA50E34681CA5, EntityIndex, iBoneIdx); }
	static Vector3 _0x5E214112806591EA(Entity entity, int boneIndex) { return invoke <Vector3>(0x5E214112806591EA, entity, boneIndex); }
	static Vector3 _0x3AB3A77672F6473F(Any p0, Any p1, Any p2, Any p3) { return invoke <Vector3>(0x3AB3A77672F6473F, p0, p1, p2, p3); }
	static int GET_NEAREST_PLAYER_TO_ENTITY(Entity entityIndex, Ped playerPedToIgnore, int flags) { return invoke <int>(0x990E294FC387FB88, entityIndex, playerPedToIgnore, flags); }
	static int GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(Entity entityIndex, int team, Ped playerPedToIgnore, int flags) { return invoke <int>(0xB2C30C3B4AFF718C, entityIndex, team, playerPedToIgnore, flags); }
	static Player GET_NEAREST_PARTICIPANT_TO_ENTITY(Entity entity) { return invoke <Player>(0x6888A43C35A5F630, entity); }
	static bool PLACE_ENTITY_ON_GROUND_PROPERLY(Entity entity, bool p1) { return invoke <bool>(0x9587913B9E772D29, entity, p1); }
	static int GET_ENTITY_TYPE(Entity EntityIndex) { return invoke <int>(0x97F696ACA466B4E0, EntityIndex); }
	static int GET_ENTITY_POPULATION_TYPE(Entity EntityIndex) { return invoke <int>(0xADE28862B6D7B85B, EntityIndex); }
	static bool IS_AN_ENTITY(ScrHandle obj) { return invoke <bool>(0x27CFF3E5A286D3DF, obj); }
	static bool IS_ENTITY_A_PED(Entity EntityIndex) { return invoke <bool>(0xCF8176912DDA4EA5, EntityIndex); }
	static bool IS_ENTITY_A_MISSION_ENTITY(Entity EntityIndex) { return invoke <bool>(0x138190F64DB4BBD1, EntityIndex); }
	static bool IS_ENTITY_A_VEHICLE(Entity EntityIndex) { return invoke <bool>(0xC3D96AF45FCCEC4C, EntityIndex); }
	static bool IS_ENTITY_AN_OBJECT(Entity EntityIndex) { return invoke <bool>(0xA27A546A375FDEF, EntityIndex); }
	static bool IS_ENTITY_AT_COORD(Entity EntityIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float VecLocDimensionsX, float VecLocDimensionsY, float VecLocDimensionsZ, bool HighlightArea, bool Do3dCheck, int TM_MODE) { return invoke <bool>(0x5E58342602E94718, EntityIndex, VecCoorsX, VecCoorsY, VecCoorsZ, VecLocDimensionsX, VecLocDimensionsY, VecLocDimensionsZ, HighlightArea, Do3dCheck, TM_MODE); }
	static bool IS_ENTITY_AT_ENTITY(Entity EntityIndex, Entity TargetEntityIndex, float VecLocDimensionsX, float VecLocDimensionsY, float VecLocDimensionsZ, bool HighlightArea, bool Do3dCheck, int TM_MODE) { return invoke <bool>(0xC057F02B837A27F6, EntityIndex, TargetEntityIndex, VecLocDimensionsX, VecLocDimensionsY, VecLocDimensionsZ, HighlightArea, Do3dCheck, TM_MODE); }
	static bool IS_ENTITY_ATTACHED(Entity EntityIndex) { return invoke <bool>(0xEE6AD63ABF59C0B7, EntityIndex); }
	static bool IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Entity EntityIndex) { return invoke <bool>(0x306C1F6178F01AB3, EntityIndex); }
	static bool IS_ENTITY_ATTACHED_TO_ANY_PED(Entity EntityIndex) { return invoke <bool>(0xC841153DED2CA89A, EntityIndex); }
	static bool IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Entity EntityIndex) { return invoke <bool>(0x12DF6E0D2E736749, EntityIndex); }
	static bool IS_ENTITY_ATTACHED_TO_ENTITY(Entity EntityIndex1, Entity EntityIndex2) { return invoke <bool>(0x154A3C529497053E, EntityIndex1, EntityIndex2); }
	static bool _IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(Entity entity) { return invoke <bool>(0xA7E51B53309EAC97, entity); }
	static bool IS_ENTITY_DEAD(Entity EntityIndex) { return invoke <bool>(0x7D5B1F88E7504BBA, EntityIndex); }
	static bool IS_ENTITY_IN_AIR(Entity EntityIndex, Any p1) { return invoke <bool>(0x886E37EC497200B6, EntityIndex, p1); }
	static bool IS_ENTITY_IN_ANGLED_AREA(Entity EntityIndex, float VecCoors1X, float VecCoors1Y, float VecCoors1Z, float VecCoors2X, float VecCoors2Y, float VecCoors2Z, float AreaWidth, bool HighlightArea, bool Do3dCheck, int TM_MODE) { return invoke <bool>(0xD3151E53134595E5, EntityIndex, VecCoors1X, VecCoors1Y, VecCoors1Z, VecCoors2X, VecCoors2Y, VecCoors2Z, AreaWidth, HighlightArea, Do3dCheck, TM_MODE); }
	static bool IS_ENTITY_IN_AREA(Entity EntityIndex, float VecCoors1X, float VecCoors1Y, float VecCoors1Z, float VecCoors2X, float VecCoors2Y, float VecCoors2Z, bool HighlightArea, bool Do3dCheck, int TM_MODE) { return invoke <bool>(0xC2634C40A16193E, EntityIndex, VecCoors1X, VecCoors1Y, VecCoors1Z, VecCoors2X, VecCoors2Y, VecCoors2Z, HighlightArea, Do3dCheck, TM_MODE); }
	static bool IS_ENTITY_IN_VOLUME(Entity entity, ScrHandle volume, bool p2, int p3) { return invoke <bool>(0x5A5526BC09C06623, entity, volume, p2, p3); }
	static bool IS_ENTITY_IN_WATER(Entity EntityIndex) { return invoke <bool>(0xDDE5C125AC446723, EntityIndex); }
	static bool _IS_ENTITY_UNDERWATER(Entity entity, bool p1) { return invoke <bool>(0xD4E5C1E93C466127, entity, p1); }
	static float GET_ENTITY_SUBMERGED_LEVEL(Entity EntityIndex) { return invoke <float>(0x4A77C3F73FD9E831, EntityIndex); }
	static void SET_ENTITY_REQUIRES_MORE_EXPENSIVE_RIVER_CHECK(Entity EntityIndex, bool FlagValue) { return invoke <void>(0x850C940EE3E7B8B5, EntityIndex, FlagValue); }
	static void _0x7A49D40DE437BC8D(Any p0, Any p1) { return invoke <void>(0x7A49D40DE437BC8D, p0, p1); }
	static void _0x978AA2323ED32209(Any p0, Any p1) { return invoke <void>(0x978AA2323ED32209, p0, p1); }
	static void _0x002AAC783ED323ED(Any p0, Any p1) { return invoke <void>(0x2AAC783ED323ED, p0, p1); }
	static void _0x007AAC783ED323ED(Any p0, Any p1, Any p2) { return invoke <void>(0x7AAC783ED323ED, p0, p1, p2); }
	static bool IS_ENTITY_ON_SCREEN(Entity EntityIndex) { return invoke <bool>(0x613C15D5D8DB781F, EntityIndex); }
	static bool IS_ENTITY_PLAYING_ANIM(Entity EntityIndex, const char* AnimDictName, const char* AnimName, int type) { return invoke <bool>(0xDEE49D5CA6C49148, EntityIndex, AnimDictName, AnimName, type); }
	static bool _IS_ENTITY_PLAYING_ANY_ANIM(Entity entity, int p1) { return invoke <bool>(0xB7CB1300CBFE19C, entity, p1); }
	static bool IS_ENTITY_STATIC(Entity EntityIndex) { return invoke <bool>(0x86468ADFA0F6B861, EntityIndex); }
	static bool IS_ENTITY_TOUCHING_ENTITY(Entity FirstEntityIndex, Entity SecondEntityIndex) { return invoke <bool>(0x9A2304A64C3C8423, FirstEntityIndex, SecondEntityIndex); }
	static bool IS_ENTITY_TOUCHING_MODEL(Entity EntityIndex, Hash ModelHashKey) { return invoke <bool>(0x2AE3EBC8DEB9768B, EntityIndex, ModelHashKey); }
	static bool IS_ENTITY_UPRIGHT(Entity EntityIndex, float fAngleToVerticalLimit) { return invoke <bool>(0xF6F6AFD8D4FB2658, EntityIndex, fAngleToVerticalLimit); }
	static bool IS_ENTITY_UPSIDEDOWN(Entity EntityIndex) { return invoke <bool>(0x109DE3DA41AAD94A, EntityIndex); }
	static bool IS_ENTITY_VISIBLE(Entity EntityIndex) { return invoke <bool>(0xFFC96ECB7FA404CA, EntityIndex); }
	static void _0xFF9965C47FA404DA(Entity entity, bool toggle) { return invoke <void>(0xFF9965C47FA404DA, entity, toggle); }
	static bool IS_ENTITY_VISIBLE_TO_SCRIPT(Entity EntityIndex) { return invoke <bool>(0xF213C724E77F321A, EntityIndex); }
	static void _0x3F08C6163A4AB1D6(Any p0) { return invoke <void>(0x3F08C6163A4AB1D6, p0); }
	static void _0x0DB41D59E0F1502B(Any p0) { return invoke <void>(0xDB41D59E0F1502B, p0); }
	static bool _IS_TRACKED_ENTITY_VISIBLE(Entity entity) { return invoke <bool>(0xC8CCDB712FBCBA92, entity); }
	static bool IS_ENTITY_OCCLUDED(Entity EntityIndex) { return invoke <bool>(0x140188E884645624, EntityIndex); }
	static bool WOULD_ENTITY_BE_OCCLUDED(Hash ModelHashKey, float CoordsX, float CoordsY, float CoordsZ, bool bAssertIfModelIsntLoaded) { return invoke <bool>(0x3546FAB293FF2981, ModelHashKey, CoordsX, CoordsY, CoordsZ, bAssertIfModelIsntLoaded); }
	static bool IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Entity EntityIndex) { return invoke <bool>(0x5E1CC2E8DC3111DD, EntityIndex); }
	static bool _IS_ENTITY_ON_TRAIN_TRACK(Entity entity) { return invoke <bool>(0x857ACB0AB4BD0D55, entity); }
	static void _0xCDB682BB47C02F0A(Entity entity, Hash p1) { return invoke <void>(0xCDB682BB47C02F0A, entity, p1); }
	static void _0xE19035EB65AB2932(Any p0, Any p1) { return invoke <void>(0xE19035EB65AB2932, p0, p1); }
	static bool SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT(Entity entity, Hash lootTable) { return invoke <bool>(0x8C03CD6B5E0E85E8, entity, lootTable); }
	static bool _GET_SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT(Entity entity, Hash* lootTable) { return invoke <bool>(0x1E804EA9B12030A4, entity, lootTable); }
	static bool _REQUEST_ENTITY_LOOT_LIST(Ped mount, void* argStruct, Hash visiblelootslotrequestType, int flag, int p4, bool p5) { return invoke <bool>(0xA88E215CEB0435C0, mount, argStruct, visiblelootslotrequestType, flag, p4, p5); }
	static Any _0xE31FC20319874CB3(Any p0, Any p1, Any p2) { return invoke <Any>(0xE31FC20319874CB3, p0, p1, p2); }
	static Any _0x582F73ACFE969571(Any p0, Any p1, Any p2) { return invoke <Any>(0x582F73ACFE969571, p0, p1, p2); }
	static Any _0xBA2A089E60ED1163(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <Any>(0xBA2A089E60ED1163, p0, p1, p2, p3, p4); }
	static int GET_CARRIABLE_ENTITY_STATE(Entity entity) { return invoke <int>(0x61914209C36EFDDB, entity); }
	static Any _0xD46BF94C4C66FAB0(Any p0, Any p1, Any p2, Any p3) { return invoke <Any>(0xD46BF94C4C66FAB0, p0, p1, p2, p3); }
	static Hash _GET_OPTIMAL_CARRY_CONFIG(Entity entity, int index) { return invoke <Hash>(0x34F008A7E48C496B, entity, index); }
	static Any _0xD21C7418C590BB40(Any p0) { return invoke <Any>(0xD21C7418C590BB40, p0); }
	static Hash _GET_ENTITY_CARRY_CONFIG(Entity entity) { return invoke <Hash>(0xFD25587BB306C86, entity); }
	static bool _IS_CARRIABLE_MODEL(Hash model) { return invoke <bool>(0x5AFFA9DDC87846F8, model); }
	static Hash _GET_CARRIABLE_FROM_ENTITY(Entity entity) { return invoke <Hash>(0x31FEF6A20F00B963, entity); }
	static void _SET_ENTITY_CARCASS_TYPE(Entity entity, Hash type) { return invoke <void>(0x399657ED871B3A6C, entity, type); }
	static Any _0x2A77EF9BEC8518F4(Any p0) { return invoke <Any>(0x2A77EF9BEC8518F4, p0); }
	static void _DELETE_CARRIABLE(Entity* entity) { return invoke <void>(0xD0DB2B6AF19A987, entity); }
	static bool _IS_ENTITY_FULLY_LOOTED(Entity entity) { return invoke <bool>(0x8DE41E9902E85756, entity); }
	static void _SET_ENTITY_FULLY_LOOTED(Entity entity, bool looted) { return invoke <void>(0x6BCF5F3D8FFE988D, entity, looted); }
	static Ped _0xEF2D9ED7CE684F08(Ped ped) { return invoke <Ped>(0xEF2D9ED7CE684F08, ped); }
	static Any _0x0CCEFC6C2C95DA2A(Any p0, Any p1, Any p2, Any p3) { return invoke <Any>(0xCCEFC6C2C95DA2A, p0, p1, p2, p3); }
	static bool _0x383F64263F946E45(int* p0, Entity entity, int p2, Ped ped, Any p4, int p5) { return invoke <bool>(0x383F64263F946E45, p0, entity, p2, ped, p4, p5); }
	static Any _0x8E10DF0FFA63FB65(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <Any>(0x8E10DF0FFA63FB65, p0, p1, p2, p3, p4); }
	static bool _GET_ENTITY_CARRYING_FLAG(Entity entity, int flagId) { return invoke <bool>(0x808077647856DE62, entity, flagId); }
	static void _SET_ENTITY_CARRYING_FLAG(Entity entity, int flagId, bool value) { return invoke <void>(0x18FF3110CF47115D, entity, flagId, value); }
	static void _0xC3ABCFBC7D74AFA5(Ped ped, int p1, bool p2) { return invoke <void>(0xC3ABCFBC7D74AFA5, ped, p1, p2); }
	static void _0x371D179701D9C082(Entity entity) { return invoke <void>(0x371D179701D9C082, entity); }
	static void _0xA48E4801DEBDF7E4(Entity entity, bool p1) { return invoke <void>(0xA48E4801DEBDF7E4, entity, p1); }
	static bool _GET_IS_CARRIABLE_PELT(Entity entity) { return invoke <bool>(0x255B6DB4E3AD3C3E, entity); }
	static Any _0xF59FDE7B4D31A630(Any p0) { return invoke <Any>(0xF59FDE7B4D31A630, p0); }
	static Any _0x120376C23F019C6C(Any p0, Any p1) { return invoke <Any>(0x120376C23F019C6C, p0, p1); }
	static Any _0x5744562E973E33CD(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <Any>(0x5744562E973E33CD, p0, p1, p2, p3, p4); }
	static void _0xDD03FC2089AD093C(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xDD03FC2089AD093C, p0, p1, p2, p3); }
	static Any _0xB16C780C51E51E2B(Any p0) { return invoke <Any>(0xB16C780C51E51E2B, p0); }
	static void _0xEF259AA1E097E0AD(Entity entity, Any p1) { return invoke <void>(0xEF259AA1E097E0AD, entity, p1); }
	static void _0xBD94CECFB2D65119(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <void>(0xBD94CECFB2D65119, p0, p1, p2, p3, p4, p5); }
	static void _SET_ENTITY_CUSTOM_PICKUP_RADIUS(Entity entity, float radius) { return invoke <void>(0x482D17E45665DA44, entity, radius); }
	static void _0xE75EEA8DB59A9F39(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <void>(0xE75EEA8DB59A9F39, p0, p1, p2, p3, p4, p5); }
	static Any _0x188736456D1DEDE6(Any p0, Any p1) { return invoke <Any>(0x188736456D1DEDE6, p0, p1); }
	static void _0xC6A1A3D63F122DE7(Any p0, Any p1) { return invoke <void>(0xC6A1A3D63F122DE7, p0, p1); }
	static void APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Entity EntityIndex, int ApplyType, float vForceX, float vForceY, float vForceZ, int Component, bool LocalForce, bool ScaleByMass, bool applyToChildren) { return invoke <void>(0x31DA7CEC5334DB37, EntityIndex, ApplyType, vForceX, vForceY, vForceZ, Component, LocalForce, ScaleByMass, applyToChildren); }
	static void APPLY_FORCE_TO_ENTITY(Entity EntityIndex, int ApplyType, float vForceX, float vForceY, float vForceZ, float vOffsetX, float vOffsetY, float vOffsetZ, int Component, bool LocalForce, bool LocalOffset, bool ScaleByMass, bool triggerAudio, bool ScaleByTimeWarp) { return invoke <void>(0xF15E8F5D333F09C4, EntityIndex, ApplyType, vForceX, vForceY, vForceZ, vOffsetX, vOffsetY, vOffsetZ, Component, LocalForce, LocalOffset, ScaleByMass, triggerAudio, ScaleByTimeWarp); }
	static void ATTACH_ENTITY_TO_ENTITY(Entity FirstEntityIndex, Entity SecondEntityIndex, int SecondEntityBoneIndex, float vecOffsetX, float vecOffsetY, float vecOffsetZ, float vecRotationX, float vecRotationY, float vecRotationZ, bool p9, bool useSoftPinning, bool collision, bool isPed, int RotOrder, bool bAttachOffsetIsRelative, bool p15, bool p16) { return invoke <void>(0x6B9BBD38AB0796DF, FirstEntityIndex, SecondEntityIndex, SecondEntityBoneIndex, vecOffsetX, vecOffsetY, vecOffsetZ, vecRotationX, vecRotationY, vecRotationZ, p9, useSoftPinning, collision, isPed, RotOrder, bAttachOffsetIsRelative, p15, p16); }
	static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Entity FirstEntityIndex, Entity SecondEntityIndex, int FirstEntityBoneIndex, int SecondEntityBoneIndex, float SecondEntityOffsetX, float SecondEntityOffsetY, float SecondEntityOffsetZ, float FirstEntityOffsetX, float FirstEntityOffsetY, float FirstEntityOffsetZ, float vecRotationX, float vecRotationY, float vecRotationZ, float PhysicalStrength, bool p14, bool p15, bool p16, bool p17, int RotOrder, bool p19, float p20, float p21) { return invoke <void>(0xB629A43CA1643481, FirstEntityIndex, SecondEntityIndex, FirstEntityBoneIndex, SecondEntityBoneIndex, SecondEntityOffsetX, SecondEntityOffsetY, SecondEntityOffsetZ, FirstEntityOffsetX, FirstEntityOffsetY, FirstEntityOffsetZ, vecRotationX, vecRotationY, vecRotationZ, PhysicalStrength, p14, p15, p16, p17, RotOrder, p19, p20, p21); }
	static void _0x445D7D8EA66E373E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15) { return invoke <void>(0x445D7D8EA66E373E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); }
	static void _0x16908E859C3AB698(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x16908E859C3AB698, p0, p1, p2, p3, p4); }
	static int GET_ENTITY_BONE_INDEX_BY_NAME(Entity EntityIndex, const char* BoneName) { return invoke <int>(0xBACA8FE9C76C124E, EntityIndex, BoneName); }
	static void CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Entity EntityIndex) { return invoke <void>(0xBB19AC7D4DCEFD0F, EntityIndex); }
	static void DELETE_ENTITY(Entity* EntityIndex) { return invoke <void>(0x4CD38C78BD19A497, EntityIndex); }
	static void _DELETE_ENTITY_2(Entity* entity) { return invoke <void>(0x5E94EA09E7207C16, entity); }
	static void DETACH_ENTITY(Entity EntityIndex, bool ApplyVelocity, bool bNoCollisionUntilClear) { return invoke <void>(0x64CDE9D6BF8ECAD3, EntityIndex, ApplyVelocity, bNoCollisionUntilClear); }
	static bool _IS_ENTITY_FROZEN(Entity entity) { return invoke <bool>(0x83D497D57B7400F, entity); }
	static void FREEZE_ENTITY_POSITION(Entity EntityIndex, bool FrozenByScriptFlag) { return invoke <void>(0x7D9EFB7AD6B19754, EntityIndex, FrozenByScriptFlag); }
	static void SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Entity EntityIndex, bool ShouldFreeze) { return invoke <void>(0x740CB4F3F602C9F4, EntityIndex, ShouldFreeze); }
	static void SET_ENTITY_AS_MISSION_ENTITY(Entity EntityIndex, bool ScriptHostObject, bool GrabFromOtherScript) { return invoke <void>(0xDC19C288082E586E, EntityIndex, ScriptHostObject, GrabFromOtherScript); }
	static void SET_ENTITY_AS_NO_LONGER_NEEDED(Entity* EntityIndex) { return invoke <void>(0x4971D2F8162B9674, EntityIndex); }
	static void SET_PED_AS_NO_LONGER_NEEDED(Ped* PedIndex) { return invoke <void>(0x2595DD4236549CE3, PedIndex); }
	static void SET_VEHICLE_AS_NO_LONGER_NEEDED(Vehicle* VehicleIndex) { return invoke <void>(0x629BFA74418D6239, VehicleIndex); }
	static void SET_OBJECT_AS_NO_LONGER_NEEDED(Object* ObjectIndex) { return invoke <void>(0x3AE22DEB5BA5A3E6, ObjectIndex); }
	static void _0x20FAEE47427A4497() { return invoke <void>(0x20FAEE47427A4497); }
	static bool _DOES_THREAD_OWN_THIS_ENTITY(Entity entity) { return invoke <bool>(0x88AD6CC10D8D35B2, entity); }
	static void _0x56E0735D6273B227(Any p0, Any p1) { return invoke <void>(0x56E0735D6273B227, p0, p1); }
	static void _0xC0EDEF16D90661EE(Entity entity, float p1) { return invoke <void>(0xC0EDEF16D90661EE, entity, p1); }
	static void _0x0FD7D7C232876E72(Any p0) { return invoke <void>(0xFD7D7C232876E72, p0); }
	static void _0x0939E773925C4719() { return invoke <void>(0x939E773925C4719); }
	static void SET_ENTITY_CAN_BE_DAMAGED(Entity EntityIndex, bool CanBeDamagedFlag) { return invoke <void>(0xD06D522B90E861F, EntityIndex, CanBeDamagedFlag); }
	static bool _GET_ENTITY_CAN_BE_DAMAGED(Entity entity) { return invoke <bool>(0x75DF9E73F2F005FD, entity); }
	static void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Entity EntityIndex, bool AllowDamagedByRelGroup, Hash relGroup) { return invoke <void>(0xEF1AFB18649E015, EntityIndex, AllowDamagedByRelGroup, relGroup); }
	static void _0xFF83AF534156B399(Any p0, Any p1) { return invoke <void>(0xFF83AF534156B399, p0, p1); }
	static void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(Entity EntityIndex, bool TargettableWithNoLos) { return invoke <void>(0x6D09F32E284D0FB7, EntityIndex, TargettableWithNoLos); }
	static bool GET_ENTITY_COLLISION_DISABLED(Entity EntityIndex) { return invoke <bool>(0xAA2FADD30F45A9DA, EntityIndex); }
	static void SET_ENTITY_COLLISION(Entity EntityIndex, bool UsesCollisionsFlag, bool KeepDisabledSimulatingFlag) { return invoke <void>(0xF66F820909453B8C, EntityIndex, UsesCollisionsFlag, KeepDisabledSimulatingFlag); }
	static void SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Entity EntityIndex, bool UsesCollisionsFlag, bool KeepDisabledSimulatingFlag) { return invoke <void>(0xE0580EC84813875A, EntityIndex, UsesCollisionsFlag, KeepDisabledSimulatingFlag); }
	static void SET_ENTITY_COORDS(Entity EntityIndex, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, bool DoDeadCheck, bool KeepTasks, bool KeepIK, bool DoWarp) { return invoke <void>(0x6843DA7060A026B, EntityIndex, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, DoDeadCheck, KeepTasks, KeepIK, DoWarp); }
	static void SET_ENTITY_COORDS_NO_OFFSET(Entity EntityIndex, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, bool KeepTasks, bool KeepIK, bool DoWarp) { return invoke <void>(0x239A3351AC1DA385, EntityIndex, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, KeepTasks, KeepIK, DoWarp); }
	static void SET_ENTITY_DYNAMIC(Entity EntityIndex, bool IsDynamic) { return invoke <void>(0xFBFC4473F66CE344, EntityIndex, IsDynamic); }
	static void SET_ENTITY_HEADING(Entity EntityIndex, float NewHeading) { return invoke <void>(0xCF2B9C0645C4651B, EntityIndex, NewHeading); }
	static void _SET_ENTITY_COORDS_AND_HEADING(Entity entity, float xPos, float yPos, float zPos, float heading, bool xAxis, bool yAxis, bool zAxis) { return invoke <void>(0x203BEFFDBE12E96A, entity, xPos, yPos, zPos, heading, xAxis, yAxis, zAxis); }
	static void _SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Entity entity, float xPos, float yPos, float zPos, float heading, bool p5, bool p6) { return invoke <void>(0x918E3565C20F03C, entity, xPos, yPos, zPos, heading, p5, p6); }
	static void SET_ENTITY_HEALTH(Entity entity, int healthAmount, Entity entityKilledBy) { return invoke <void>(0xAC2767ED8BDFAB15, entity, healthAmount, entityKilledBy); }
	static void SET_ENTITY_INVINCIBLE(Entity EntityIndex, bool bInvincible) { return invoke <void>(0xA5C38736C426FCB8, EntityIndex, bInvincible); }
	static void _0xAF7F3099B9FEB535(Entity entity, float p1, float p2, float p3) { return invoke <void>(0xAF7F3099B9FEB535, entity, p1, p2, p3); }
	static void SET_ENTITY_IS_TARGET_PRIORITY(Entity EntityIndex, bool bHighPriority, float fTargetableDistance) { return invoke <void>(0xA5D170C44CB2189, EntityIndex, bHighPriority, fTargetableDistance); }
	static void _0xB38A29CCD5447783(Any p0, Any p1, Any p2) { return invoke <void>(0xB38A29CCD5447783, p0, p1, p2); }
	static void _SET_ENTITY_THREAT_TIER(Entity entity, int tier, bool p2) { return invoke <void>(0x4B436BAC8CBE9B07, entity, tier, p2); }
	static int _GET_ENTITY_THREAT_TIER(Entity entity) { return invoke <int>(0xE12F56CB25D9CE23, entity); }
	static void _0x2D40BCBFE9305DEA(Any p0, Any p1) { return invoke <void>(0x2D40BCBFE9305DEA, p0, p1); }
	static void _SET_ENTITY_LIGHTS_ENABLED(Entity entity, bool enabled) { return invoke <void>(0xEBDC12861D079ABA, entity, enabled); }
	static void SET_ENTITY_LOAD_COLLISION_FLAG(Entity EntityIndex, bool LoadCollisionFlag) { return invoke <void>(0x9B9EE31AED48072E, EntityIndex, LoadCollisionFlag); }
	static bool HAS_COLLISION_LOADED_AROUND_ENTITY(Entity EntityIndex) { return invoke <bool>(0xBEB1600952B9CF5C, EntityIndex); }
	static bool HAS_COLLISION_LOADED_AROUND_POSITION(float xPos, float yPos, float zPos) { return invoke <bool>(0x6BFBDC46139C45AB, xPos, yPos, zPos); }
	static void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Entity EntityIndex, bool OnlyDamagedByPlayer) { return invoke <void>(0x473598683095D430, EntityIndex, OnlyDamagedByPlayer); }
	static void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Entity EntityIndex, bool OnlyDamagedByRelGroup, Hash relGroup) { return invoke <void>(0x6C1F6AA2F0ADD104, EntityIndex, OnlyDamagedByRelGroup, relGroup); }
	static void SET_ENTITY_PROOFS(Entity EntityIndex, int proofsBitset, bool specialFlag) { return invoke <void>(0xFAEE099C6F890BB8, EntityIndex, proofsBitset, specialFlag); }
	static int _GET_ENTITY_PROOFS(Entity entity) { return invoke <int>(0x6CF0DAD7FA1088EA, entity); }
	static void SET_ENTITY_QUATERNION(Entity EntityIndex, float NewX, float NewY, float NewZ, float NewW) { return invoke <void>(0x100E7007D13E3687, EntityIndex, NewX, NewY, NewZ, NewW); }
	static void SET_ENTITY_ROTATION(Entity EntityIndex, float VecNewRotationX, float VecNewRotationY, float VecNewRotationZ, int RotOrder, bool DoDeadCheck) { return invoke <void>(0x9CC8314DFEDE441E, EntityIndex, VecNewRotationX, VecNewRotationY, VecNewRotationZ, RotOrder, DoDeadCheck); }
	static void _0xD45BB89B53FC0CFD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke <void>(0xD45BB89B53FC0CFD, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void SET_ENTITY_VISIBLE(Entity EntityIndex, bool VisibleFlag) { return invoke <void>(0x1794B4FCC84D812F, EntityIndex, VisibleFlag); }
	static void _0x80FDEB3A9E9AA578(Entity entity, bool p1) { return invoke <void>(0x80FDEB3A9E9AA578, entity, p1); }
	static void _0x9C6906EF8CB20C5F(Entity entity) { return invoke <void>(0x9C6906EF8CB20C5F, entity); }
	static void SET_ENTITY_VELOCITY(Entity EntityIndex, float VecVelocityComponenttX, float VecVelocityComponenttY, float VecVelocityComponenttZ) { return invoke <void>(0x1C99BB7B6E96D16F, EntityIndex, VecVelocityComponenttX, VecVelocityComponenttY, VecVelocityComponenttZ); }
	static void SET_ENTITY_HAS_GRAVITY(Entity EntityIndex, bool bHasGravity) { return invoke <void>(0xCEDB728A1083FA7, EntityIndex, bHasGravity); }
	static void SET_ENTITY_LOD_DIST(Entity entityIndex, int lodDist) { return invoke <void>(0x5FB407F0A7C877BF, entityIndex, lodDist); }
	static int GET_ENTITY_LOD_DIST(Entity entityIndex) { return invoke <int>(0xDF240D0C2A948683, entityIndex); }
	static void SET_ENTITY_ALPHA(Entity entityIndex, int alpha_param, bool bUseSmoothAlpha) { return invoke <void>(0xDF7692B1D9E7BA7, entityIndex, alpha_param, bUseSmoothAlpha); }
	static int GET_ENTITY_ALPHA(Entity entityIndex) { return invoke <int>(0x1BB501624FAF2BEA, entityIndex); }
	static void RESET_ENTITY_ALPHA(Entity entityIndex) { return invoke <void>(0x744B9EF44779D9AB, entityIndex); }
	static void _SET_ENTITY_FADE_IN(Entity entity) { return invoke <void>(0xA91E6CF94404E8C9, entity); }
	static void SET_ENTITY_ALWAYS_PRERENDER(Entity entityIndex, bool bAlwaysPreRender) { return invoke <void>(0xACAD101E1FB66689, entityIndex, bAlwaysPreRender); }
	static void SET_ENTITY_RENDER_SCORCHED(Entity entityIndex, bool bRenderScorched) { return invoke <void>(0x85B8A7534E44BC23, entityIndex, bRenderScorched); }
	static Any _0x37B01666BAE8F7EF(Entity entity) { return invoke <Any>(0x37B01666BAE8F7EF, entity); }
	static void _0xA9E6D8F2DDFC4DB9(Any p0, Any p1) { return invoke <void>(0xA9E6D8F2DDFC4DB9, p0, p1); }
	static void CREATE_MODEL_SWAP(float posX, float posY, float posZ, float radius, Hash oldModelHash, Hash newModelHash, bool bSurviveMapReload) { return invoke <void>(0x10B2218320B6F5AC, posX, posY, posZ, radius, oldModelHash, newModelHash, bSurviveMapReload); }
	static void REMOVE_MODEL_SWAP(float posX, float posY, float posZ, float radius, Hash oldModelHash, Hash newModelHash, bool bLazy) { return invoke <void>(0x824E1C26A14CB817, posX, posY, posZ, radius, oldModelHash, newModelHash, bLazy); }
	static void CREATE_MODEL_HIDE(float posX, float posY, float posZ, float radius, Hash modelHash, bool bSurviveMapReload) { return invoke <void>(0x69848B3FB3C4426, posX, posY, posZ, radius, modelHash, bSurviveMapReload); }
	static void CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(float posX, float posY, float posZ, float radius, Hash modelHash, bool bSurviveMapReload) { return invoke <void>(0xD136090A9AAAB17D, posX, posY, posZ, radius, modelHash, bSurviveMapReload); }
	static void REMOVE_MODEL_HIDE(float posX, float posY, float posZ, float radius, Hash modelHash, bool bLazy) { return invoke <void>(0x3F38A98576F6213A, posX, posY, posZ, radius, modelHash, bLazy); }
	static Any _0xD4636C2EDB0DEA8A(Any p0) { return invoke <Any>(0xD4636C2EDB0DEA8A, p0); }
	static void CREATE_FORCED_OBJECT(float posX, float posY, float posZ, float radius, Hash modelHash, bool bSurviveMapReload) { return invoke <void>(0x961A905AFBC34C7, posX, posY, posZ, radius, modelHash, bSurviveMapReload); }
	static void REMOVE_FORCED_OBJECT(float posX, float posY, float posZ, float radius, Hash modelHash) { return invoke <void>(0x553FA683F2BCD814, posX, posY, posZ, radius, modelHash); }
	static void SET_ENTITY_NO_COLLISION_ENTITY(Entity entityIndex, Entity secondEntityIndex, bool bReactivateWhenNoCollision) { return invoke <void>(0xE037BF068223C38D, entityIndex, secondEntityIndex, bReactivateWhenNoCollision); }
	static void SET_ENTITY_MOTION_BLUR(Entity entityIndex, bool bEnableMotionBlur) { return invoke <void>(0x516C6ABD18322B63, entityIndex, bEnableMotionBlur); }
	static void SET_CAN_AUTO_VAULT_ON_ENTITY(Entity entityIndex, bool bCanAutoVault) { return invoke <void>(0x80646744FA88F9D7, entityIndex, bCanAutoVault); }
	static void SET_CAN_CLIMB_ON_ENTITY(Entity entityIndex, bool bCanClimb) { return invoke <void>(0x24AED2A608F93C4C, entityIndex, bCanClimb); }
	static void SET_ENTITY_NOWEAPONDECALS(Entity entityIndex, bool bNoWeaponDecals) { return invoke <void>(0xC64E597783BE9A1D, entityIndex, bNoWeaponDecals); }
	static int _GET_ENTITIES_NEAR_POINT(float x, float y, float z, float radius, ItemSet itemSet, int p5) { return invoke <int>(0x59B57C4B06531E1E, x, y, z, radius, itemSet, p5); }
	static int GET_MATCHING_ENTITIES(Volume volume, ItemSet itemSet, int entityType, Any p3, Hash p4, const char* p5) { return invoke <int>(0x84CCF9A12942C83D, volume, itemSet, entityType, p3, p4, p5); }
	static int _GET_ENTITIES_IN_VOLUME(Volume volume, ItemSet itemSet, int entityType) { return invoke <int>(0x886171A12F400B89, volume, itemSet, entityType); }
	static Entity _SEARCH_BUILDING_POOL_FOR_ENTITY_WITH_THIS_MODEL(Hash modelHash) { return invoke <Entity>(0x66B2B83B94B22458, modelHash); }
	static Any _0xC2E71D7E0A7B4C89(Any p0) { return invoke <Any>(0xC2E71D7E0A7B4C89, p0); }
	static void _0x6C31B06E91518269(Any p0, Any p1) { return invoke <void>(0x6C31B06E91518269, p0, p1); }
	static void _0x119A5714578F4E05(Any p0, Any p1) { return invoke <void>(0x119A5714578F4E05, p0, p1); }
	static Entity _GET_ENTITY_BY_DOORHASH(Hash doorHash, int p1) { return invoke <Entity>(0xF7424890E4A094C0, doorHash, p1); }
	static bool FIND_ANIM_EVENT_PHASE(const char* pAnimDictName, const char* pAnimName, const char* pEventName, float* ReturnStartPhase, float* ReturnEndPhase) { return invoke <bool>(0x42718CC559BD7776, pAnimDictName, pAnimName, pEventName, ReturnStartPhase, ReturnEndPhase); }
	static void FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Entity EntityIndex, bool p1) { return invoke <void>(0x4C9E96473D4F1A88, EntityIndex, p1); }
	static float _GET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDict, const char* animName) { return invoke <float>(0x627520389E288A73, entity, animDict, animName); }
	static float _0x8E46E18AA828334F(Entity entity, const char* animDict, const char* animClip) { return invoke <float>(0x8E46E18AA828334F, entity, animDict, animClip); }
	static Any _0xDF8E49EA89A01DB1(Any p0, Any p1, Any p2) { return invoke <Any>(0xDF8E49EA89A01DB1, p0, p1, p2); }
	static bool HAS_ANIM_EVENT_FIRED(Entity EntityIndex, Hash EventHash) { return invoke <bool>(0x5851CC48405F4A07, EntityIndex, EventHash); }
	static bool HAS_ENTITY_ANIM_FINISHED(Entity EntityIndex, const char* pAnimDictName, const char* pAnimName, int animType) { return invoke <bool>(0xAEB40615337EF1E3, EntityIndex, pAnimDictName, pAnimName, animType); }
	static bool PLAY_ENTITY_ANIM(Entity EntityIndex, const char* AnimName, const char* AnimDictName, float BlendDelta, bool Loop, bool HoldLastFrame, bool DriveToPose, float StartPhase, int AnimFlags) { return invoke <bool>(0xDC6D22FAB76D4874, EntityIndex, AnimName, AnimDictName, BlendDelta, Loop, HoldLastFrame, DriveToPose, StartPhase, AnimFlags); }
	static void _SET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDict, const char* animName, float time) { return invoke <void>(0x11CDABDC7783B2BC, entity, animDict, animName, time); }
	static void _SET_ENTITY_ANIM_SPEED(Entity entity, const char* animDict, const char* animName, float speedMultiplier) { return invoke <void>(0xEAA885BA3CEA4E4A, entity, animDict, animName, speedMultiplier); }
	static bool STOP_ENTITY_ANIM(Entity EntityIndex, const char* AnimName, const char* AnimDictName, float BlendDelta) { return invoke <bool>(0x786591D986DE9159, EntityIndex, AnimName, AnimDictName, BlendDelta); }
	static void _0x669655FFB29EF1A9(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x669655FFB29EF1A9, p0, p1, p2, p3); }
	static void _ADD_ENTITY_TRACKING_TRAILS(Entity entity) { return invoke <void>(0x1AD922AB5038DEF3, entity); }
	static void _0x5826EFD6D73C4DE5(Entity entity) { return invoke <void>(0x5826EFD6D73C4DE5, entity); }
	static void _PAUSE_ENTITY_TRACKING(Entity entity, bool pause) { return invoke <void>(0x36EB4D34D4A092C5, entity, pause); }
	static Any _CREATE_FOOTPATH_TRAIL(Any p0, const char* waypointRecord, bool bUseSnowOffset, float p3, float p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, bool bInit) { return invoke <Any>(0x29BA9F78321E5A6C, p0, waypointRecord, bUseSnowOffset, p3, p4, p5, p6, p7, p8, p9, p10, bInit); }
	static void _0xC76E94A78127412B(Any p0, Any p1, Any p2) { return invoke <void>(0xC76E94A78127412B, p0, p1, p2); }
	static void _0x7F20092547B4DDEA(Any p0) { return invoke <void>(0x7F20092547B4DDEA, p0); }
	static void _0xF41E2979D5BC5370(Any p0) { return invoke <void>(0xF41E2979D5BC5370, p0); }
	static Any _0xAAACB74442C1BED3(Any p0) { return invoke <Any>(0xAAACB74442C1BED3, p0); }
	static Any PIN_CLOSEST_MAP_ENTITY(Hash modelHash, float x, float y, float z, int flags) { return invoke <Any>(0x6F3068258A499E52, modelHash, x, y, z, flags); }
	static void _UNPIN_MAP_ENTITY(Entity entity) { return invoke <void>(0xD2B9C78537ED5759, entity); }
	static bool IS_MAP_ENTITY_PINNED(Any p0) { return invoke <bool>(0x1FF441D7954F8709, p0); }
	static Entity _GET_PINNED_MAP_ENTITY(Any p0) { return invoke <Entity>(0x4735E2A4BB83D9DA, p0); }
	static void _0xEAB3D91D30A344F1(Any p0) { return invoke <void>(0xEAB3D91D30A344F1, p0); }
	static void _0x37CEB637BA3B1A47(Any p0) { return invoke <void>(0x37CEB637BA3B1A47, p0); }
	static Any _0x350E9211074955AF(Any p0, Any p1) { return invoke <Any>(0x350E9211074955AF, p0, p1); }
	static void _0x898586729DB5221D(Ped ped) { return invoke <void>(0x898586729DB5221D, ped); }
	static void _0xE9E7A0BAC7F57746(Any p0, Any p1) { return invoke <void>(0xE9E7A0BAC7F57746, p0, p1); }
}

namespace EVENT
{
	static void SET_DECISION_MAKER(Ped PedIndex, Hash DecisionMakerId) { return invoke <void>(0x8AE2F981CDDB8FA4, PedIndex, DecisionMakerId); }
	static void SET_DECISION_MAKER_TO_DEFAULT(Ped ped) { return invoke <void>(0x6B9C5C38838FB6E6, ped); }
	static ScrHandle _CREATE_SHOCKING_EVENT(void* args) { return invoke <ScrHandle>(0xCA1315C33B9A2847, args); }
	static int ADD_SHOCKING_EVENT_AT_POSITION(Hash eventType, float posX, float posY, float posZ, float p4, float p5, float p6, float p7, float p8, int p9, int p10) { return invoke <int>(0xD9F8455409B525E9, eventType, posX, posY, posZ, p4, p5, p6, p7, p8, p9, p10); }
	static int ADD_SHOCKING_EVENT_FOR_ENTITY(Hash eventType, Entity ent, float p2, float p3, float p4, float p5, float p6, float p7, bool p8, bool p9, int p10, int p11) { return invoke <int>(0x7FD8F3BE76F89422, eventType, ent, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	static bool IS_SHOCKING_EVENT_IN_SPHERE(Hash eventType, float posX, float posY, float posZ, float radius) { return invoke <bool>(0x9DB47E16060D6354, eventType, posX, posY, posZ, radius); }
	static bool REMOVE_SHOCKING_EVENT(int shockingEventId) { return invoke <bool>(0xE8BB3CC253A34559, shockingEventId); }
	static void REMOVE_ALL_SHOCKING_EVENTS(bool scriptCreatedOnly) { return invoke <void>(0xD47A168C2AB90DC4, scriptCreatedOnly); }
	static void _REMOVE_ALL_SHOCKING_EVENTS_IN_AREA(float x, float y, float z, float radius, bool p4) { return invoke <void>(0xB4C71BA9CAB097BD, x, y, z, radius, p4); }
	static void _REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE_IN_AREA(Hash eventType, float x, float y, float z, float radius, bool p5) { return invoke <void>(0x6A648D42BF271DC7, eventType, x, y, z, radius, p5); }
	static void REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE(Hash eventType, bool p1) { return invoke <void>(0x118873DD538490B4, eventType, p1); }
	static void REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS() { return invoke <void>(0xDB249021652420C5); }
	static Any _0x36D0F2BA2C0D9BDE(Entity entity, int p1) { return invoke <Any>(0x36D0F2BA2C0D9BDE, entity, p1); }
	static void _0x7C511E91738A0828(Ped ped1, Ped ped2, int p2, Hash p3) { return invoke <void>(0x7C511E91738A0828, ped1, ped2, p2, p3); }
	static void SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME() { return invoke <void>(0x84994FAD4E4E4E69); }
	static void _0xB6F4825153920582() { return invoke <void>(0xB6F4825153920582); }
	static void _0x4B2B1A891D437CA7(float p0) { return invoke <void>(0x4B2B1A891D437CA7, p0); }
	static void _0x9520175B35E2268D(Ped ped, bool p1) { return invoke <void>(0x9520175B35E2268D, ped, p1); }
	static Any _0x18E93EBFC1FCFA48(Volume volume, bool p1, bool p2) { return invoke <Any>(0x18E93EBFC1FCFA48, volume, p1, p2); }
	static void _0x56B3410626A473E7(Any p0) { return invoke <void>(0x56B3410626A473E7, p0); }
	static void _ADD_MODEL_TO_EVENT_MONITOR(Hash model, bool p1, bool p2) { return invoke <void>(0x608AD36A644A97FE, model, p1, p2); }
	static void _0x4465C3D1475BD3FD(Hash model) { return invoke <void>(0x4465C3D1475BD3FD, model); }
	static Any _0x2DD42FAD06E6F19E(Object object, bool p1, bool p2) { return invoke <Any>(0x2DD42FAD06E6F19E, object, p1, p2); }
	static void _0xA86B0EE9B39D15D6(Object object) { return invoke <void>(0xA86B0EE9B39D15D6, object); }
	static bool _0x26054EB81AC0893B(Object object) { return invoke <bool>(0x26054EB81AC0893B, object); }
	static void _SET_EVENT_TRACKER_FOR_PED(Ped ped, const char* eventName, int p2) { return invoke <void>(0xBB1E41DD3D3C6250, ped, eventName, p2); }
	static int _0xAD17A18215DD23D6(Entity entity, int p1, int p2) { return invoke <int>(0xAD17A18215DD23D6, entity, p1, p2); }
	static int _EVENT_GET_TIME_SINCE_EVENT(Entity entity, Hash eventType, int p2, int p3) { return invoke <int>(0xC6A7DC546E94FED5, entity, eventType, p2, p3); }
	static Hash _EVENT_GET_RECENT_EVENT(Entity entity, int p1, int p2) { return invoke <Hash>(0x796EECFF0C6D39BE, entity, p1, p2); }
	static bool _IS_EVENT_TRACKER_ACTIVE(const char* eventName, Hash shockingEvent) { return invoke <bool>(0x797B3D4D92E56094, eventName, shockingEvent); }
	static Entity _EVENT_GET_SOURCE_ENTITY_FROM_EVENT(Entity entity, Hash eventType, int p2, int p3) { return invoke <Entity>(0x822A001BCEA5BD81, entity, eventType, p2, p3); }
	static Entity _EVENT_GET_TARGET_ENTITY_FROM_EVENT(Entity entity, Hash eventType, int p2, int p3) { return invoke <Entity>(0x38497F139981C5C9, entity, eventType, p2, p3); }
	static Any _0x1D1B448D719415AB(Ped ped) { return invoke <Any>(0x1D1B448D719415AB, ped); }
	static Any _0x83D43F0FD5276E4D(Entity entity, int p1) { return invoke <Any>(0x83D43F0FD5276E4D, entity, p1); }
	static void _0xE28D7FC9FD32ABEB(Entity entity, Hash eventType, int p2) { return invoke <void>(0xE28D7FC9FD32ABEB, entity, eventType, p2); }
	static void _0x1A5C5D350068A673(Ped ped, int p1) { return invoke <void>(0x1A5C5D350068A673, ped, p1); }
	static void _EVENT_FLUSH_ALL_EVENT_TRACKERS(Ped ped) { return invoke <void>(0xAD8F2424C6E1E3A8, ped); }
	static void _0xE2C2FBB7825FFC66() { return invoke <void>(0xE2C2FBB7825FFC66); }
}

namespace FIRE
{
	static FireId START_SCRIPT_FIRE(float VecPosX, float VecPosY, float VecPosZ, int GenerationsAllowed, float p4, bool p5, const char* soundsetName, float p7, int p8) { return invoke <FireId>(0x6B83617E04503888, VecPosX, VecPosY, VecPosZ, GenerationsAllowed, p4, p5, soundsetName, p7, p8); }
	static void REMOVE_SCRIPT_FIRE(FireId FireIndex) { return invoke <void>(0x790125C36E194069, FireIndex); }
	static void START_ENTITY_FIRE(Entity EntityIndex, Any p1, Any p2, Any p3) { return invoke <void>(0xC4DC7418A44D6822, EntityIndex, p1, p2, p3); }
	static void STOP_ENTITY_FIRE(Entity EntityIndex, Any p1) { return invoke <void>(0x8390751DC40C1E98, EntityIndex, p1); }
	static bool IS_ENTITY_ON_FIRE(Entity EntityIndex) { return invoke <bool>(0x1BD7C371CE257C3E, EntityIndex); }
	static void _0x754937C28271BC65(Any p0) { return invoke <void>(0x754937C28271BC65, p0); }
	static int GET_NUMBER_OF_FIRES_IN_RANGE(float VecPosX, float VecPosY, float VecPosZ, float Radius) { return invoke <int>(0xF9617BC6FAE61E08, VecPosX, VecPosY, VecPosZ, Radius); }
	static void STOP_FIRE_IN_RANGE(float VecPosX, float VecPosY, float VecPosZ, float fRadius) { return invoke <void>(0xDB38F247BD421708, VecPosX, VecPosY, VecPosZ, fRadius); }
	static void _STOP_FIRE_IN_BOX(float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ) { return invoke <void>(0xB7C7BDC375AEA9A4, posX, posY, posZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ); }
	static bool GET_CLOSEST_FIRE_POS(Vector3* VecClosestFirePos, float VecTestPosX, float VecTestPosY, float VecTestPosZ) { return invoke <bool>(0xB646FB657F448261, VecClosestFirePos, VecTestPosX, VecTestPosY, VecTestPosZ); }
	static Any _0x559FC1D310813031(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke <Any>(0x559FC1D310813031, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static Any _0x41B87A6495EE13DD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke <Any>(0x41B87A6495EE13DD, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static Any _0xA4454592DCF7C992(Any p0) { return invoke <Any>(0xA4454592DCF7C992, p0); }
	static bool _IS_ENTITY_CONSUMED_BY_FIRE(Entity entity) { return invoke <bool>(0xCDC25355C0D65963, entity); }
	static void ADD_EXPLOSION(float VecExplosionPosX, float VecExplosionPosY, float VecExplosionPosZ, int ExplosionTag, float SizeScale, bool bMakeSound, bool bNoFx, float CamShakeMultiplier) { return invoke <void>(0x7D6F58F69DA92530, VecExplosionPosX, VecExplosionPosY, VecExplosionPosZ, ExplosionTag, SizeScale, bMakeSound, bNoFx, CamShakeMultiplier); }
	static void ADD_OWNED_EXPLOSION(Entity ExplosionOwner, float VecExplosionPosX, float VecExplosionPosY, float VecExplosionPosZ, int ExplosionTag, float SizeScale, bool bMakeSound, bool bNoFx, float CamShakeMultiplier) { return invoke <void>(0xD84A917A64D4D016, ExplosionOwner, VecExplosionPosX, VecExplosionPosY, VecExplosionPosZ, ExplosionTag, SizeScale, bMakeSound, bNoFx, CamShakeMultiplier); }
	static void _0xB7DF150605EEDC9B(Entity entity, int p1, float x, float y, float z, int explosionType, float damageScale, bool isAudible, bool isInvisible, float cameraShake) { return invoke <void>(0xB7DF150605EEDC9B, entity, p1, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); }
	static void ADD_EXPLOSION_WITH_USER_VFX(float VecExplosionPosX, float VecExplosionPosY, float VecExplosionPosZ, int ExplosionTag, Hash VfxTagHash, float SizeScale, bool bMakeSound, bool bNoFx, float CamShakeMultiplier) { return invoke <void>(0x53BA259F3A67A99E, VecExplosionPosX, VecExplosionPosY, VecExplosionPosZ, ExplosionTag, VfxTagHash, SizeScale, bMakeSound, bNoFx, CamShakeMultiplier); }
	static void _0x34AE85C7CA4857AA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoke <void>(0x34AE85C7CA4857AA, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static bool IS_EXPLOSION_IN_AREA(int ExplosionTag, float VecPosMinX, float VecPosMinY, float VecPosMinZ, float VecPosMaxX, float VecPosMaxY, float VecPosMaxZ) { return invoke <bool>(0x8391BA4313A25AD3, ExplosionTag, VecPosMinX, VecPosMinY, VecPosMinZ, VecPosMaxX, VecPosMaxY, VecPosMaxZ); }
	static bool IS_EXPLOSION_ACTIVE_IN_AREA(int ExplosionTag, float VecPosMinX, float VecPosMinY, float VecPosMinZ, float VecPosMaxX, float VecPosMaxY, float VecPosMaxZ) { return invoke <bool>(0xD96E82AEBFFAAFF0, ExplosionTag, VecPosMinX, VecPosMinY, VecPosMinZ, VecPosMaxX, VecPosMaxY, VecPosMaxZ); }
	static bool IS_EXPLOSION_IN_SPHERE(int ExplosionTag, float VecCentrePosX, float VecCentrePosY, float VecCentrePosZ, float Radius) { return invoke <bool>(0xD62DD846D82CBB90, ExplosionTag, VecCentrePosX, VecCentrePosY, VecCentrePosZ, Radius); }
	static bool IS_EXPLOSION_IN_ANGLED_AREA(int ExplosionTag, float VecPos1X, float VecPos1Y, float VecPos1Z, float VecPos2X, float VecPos2Y, float VecPos2Z, float AreaWidth) { return invoke <bool>(0x5AE661ECD18524C9, ExplosionTag, VecPos1X, VecPos1Y, VecPos1Z, VecPos2X, VecPos2Y, VecPos2Z, AreaWidth); }
	static bool _IS_EXPLOSION_IN_VOLUME(int explosionType, Volume volume) { return invoke <bool>(0xE24822A4CFC9107A, explosionType, volume); }
	static Entity GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(int ExplosionTag, float VecPos1X, float VecPos1Y, float VecPos1Z, float VecPos2X, float VecPos2Y, float VecPos2Z, float AreaWidth) { return invoke <Entity>(0x8002DDAB58594D78, ExplosionTag, VecPos1X, VecPos1Y, VecPos1Z, VecPos2X, VecPos2Y, VecPos2Z, AreaWidth); }
	static void _0x68F6A75FDF5A70D6(float x, float y, float z, float p3) { return invoke <void>(0x68F6A75FDF5A70D6, x, y, z, p3); }
	static void _0x24DB6B9F2B719043(float p0) { return invoke <void>(0x24DB6B9F2B719043, p0); }
	static bool _IS_PED_SHOCKING_EVENT_ACTIVE(Ped ped, int p1) { return invoke <bool>(0xAB7993BA61A4674F, ped, p1); }
}

namespace FLOCK
{
	static float GET_SPECIES_TUNING_FLOAT_PARAM(Hash p0, int p1, int p2) { return invoke <float>(0xE108489621422F91, p0, p1, p2); }
	static void SET_SPECIES_TUNING_FLOAT_PARAM(Hash p0, int p1, int p2, float p3) { return invoke <void>(0x963240B6C252BA49, p0, p1, p2, p3); }
	static void SET_SPECIES_TUNING_BOOL_PARAM(Hash p0, int p1, int p2, bool p3) { return invoke <void>(0x6D1D94C2459B42EE, p0, p1, p2, p3); }
	static float GET_ANIMAL_TUNING_FLOAT_PARAM(Ped animal, int index) { return invoke <float>(0x4BC3ECFDA0297E27, animal, index); }
	static void SET_ANIMAL_TUNING_FLOAT_PARAM(Ped animal, int index, float value) { return invoke <void>(0xCBDA22C87977244F, animal, index, value); }
	static void RESET_ANIMAL_TUNING_FLOAT_PARAM(Ped animal, int index) { return invoke <void>(0xE776A195488FC520, animal, index); }
	static bool GET_ANIMAL_TUNING_BOOL_PARAM(Ped animal, int index) { return invoke <bool>(0x1C1993824A396603, animal, index); }
	static void SET_ANIMAL_TUNING_BOOL_PARAM(Ped animal, int index, bool value) { return invoke <void>(0x9FF1E042FA597187, animal, index, value); }
	static void RESET_ANIMAL_TUNING_BOOL_PARAM(Ped animal, int index) { return invoke <void>(0x96AA1304D30E6BC3, animal, index); }
	static Any _0x8049B17BEC937662(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <Any>(0x8049B17BEC937662, p0, p1, p2, p3, p4, p5, p6); }
	static Any _0xE93415B3307208E5(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke <Any>(0xE93415B3307208E5, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static Any _0x19870C40C7EE15BE(Any p0, Any p1) { return invoke <Any>(0x19870C40C7EE15BE, p0, p1); }
	static void _0x0816C31480764AB0(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x816C31480764AB0, p0, p1, p2, p3); }
	static void _0xC3D581A34BC0A1F0(Any p0, Any p1) { return invoke <void>(0xC3D581A34BC0A1F0, p0, p1); }
	static void _0xF2CCA7B68CFAB2B9(Hash species, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float p10, float p11, float p12, float p13) { return invoke <void>(0xF2CCA7B68CFAB2B9, species, x1, y1, z1, x2, y2, z2, x3, y3, z3, p10, p11, p12, p13); }
	static void _0xFB16F08F47B83B4C(Any p0) { return invoke <void>(0xFB16F08F47B83B4C, p0); }
	static bool _GET_ANIMAL_IS_WILD(Ped ped) { return invoke <bool>(0x3B005FF0538ED2A9, ped); }
	static void _SET_ANIMAL_IS_WILD(Ped ped, bool toggle) { return invoke <void>(0xAEB97D84CDF3C00B, ped, toggle); }
	static int _GET_ANIMAL_RARITY(Ped ped) { return invoke <int>(0xF8B48A361DC388AE, ped); }
	static void _SET_ANIMAL_RARITY(Ped ped, int rarityLevel) { return invoke <void>(0x8B6F0F59B1B99801, ped, rarityLevel); }
	static void _0xFF1E339CE40EAAAF(Any p0, Any p1) { return invoke <void>(0xFF1E339CE40EAAAF, p0, p1); }
	static bool _IS_HERD_VALID(ScrHandle herdHandle) { return invoke <bool>(0x8D913E493BAFE0A3, herdHandle); }
	static ScrHandle _CREATE_HERD() { return invoke <ScrHandle>(0xCB4EF7EDAE2E16F1); }
	static void _0xE0961AED72642B80(Any p0) { return invoke <void>(0xE0961AED72642B80, p0); }
	static void _ADD_PED_TO_FLOCK(Any p0, Ped ped) { return invoke <void>(0x933E5D31A7D13069, p0, ped); }
	static void _0x408D1149C5E39C1E(Any p0, Any p1) { return invoke <void>(0x408D1149C5E39C1E, p0, p1); }
	static Any _0x9E13ACC38BA8F9C3(Any p0, Any p1) { return invoke <Any>(0x9E13ACC38BA8F9C3, p0, p1); }
	static Any _0x34B9C4D86DF2C2F3(Any p0) { return invoke <Any>(0x34B9C4D86DF2C2F3, p0); }
	static Vector3 _0x1DA6CB02071055D5(Any p0) { return invoke <Vector3>(0x1DA6CB02071055D5, p0); }
	static void _0xC95611869E14F8AF(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xC95611869E14F8AF, p0, p1, p2, p3); }
	static Any _0x09EE00B8F858E0BE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <Any>(0x9EE00B8F858E0BE, p0, p1, p2, p3, p4, p5, p6); }
	static void _0xE36D2CB540597EF7(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke <void>(0xE36D2CB540597EF7, p0, p1, p2, p3, p4, p5, p6, p7); }
	static Any _0xD95F04A4E73BE85E(Any p0, Any p1) { return invoke <Any>(0xD95F04A4E73BE85E, p0, p1); }
	static void _0x17E3E5C46ECCD308(Any p0, Any p1, Any p2) { return invoke <void>(0x17E3E5C46ECCD308, p0, p1, p2); }
	static void _0xC72CE37081DAE625(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xC72CE37081DAE625, p0, p1, p2, p3); }
	static void _0x67A43EA3F6FE0076(Any p0) { return invoke <void>(0x67A43EA3F6FE0076, p0); }
	static Any _0x36486AF7DA93A464(Any p0) { return invoke <Any>(0x36486AF7DA93A464, p0); }
	static void _0x6C57BEA886A20C6B(Any p0, Any p1) { return invoke <void>(0x6C57BEA886A20C6B, p0, p1); }
	static void _0x1520626FFAFFFA8F(Any p0, Any p1) { return invoke <void>(0x1520626FFAFFFA8F, p0, p1); }
	static void _0xFA821997794F48E7(Any p0, Any p1, Any p2) { return invoke <void>(0xFA821997794F48E7, p0, p1, p2); }
	static void _0xCC6B5AAFC87BFC7B(Any p0, Any p1, Any p2) { return invoke <void>(0xCC6B5AAFC87BFC7B, p0, p1, p2); }
	static void _0xFDB008B3BCF5992F(Any p0, Any p1, Any p2) { return invoke <void>(0xFDB008B3BCF5992F, p0, p1, p2); }
	static void _0x2DF3D457D86F8E57(Any p0, Any p1) { return invoke <void>(0x2DF3D457D86F8E57, p0, p1); }
	static void _0x706B434FEFAD6A24(Any p0) { return invoke <void>(0x706B434FEFAD6A24, p0); }
	static void _0xA881F5C77A560906(Any p0) { return invoke <void>(0xA881F5C77A560906, p0); }
	static Any _0x53187E563F938E76(Any p0) { return invoke <Any>(0x53187E563F938E76, p0); }
}

namespace GRAPHICS
{
	static void FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO() { return invoke <void>(0x7DFF8F94937D2659); }
	static bool LOAD_MISSION_CREATOR_PHOTO(const char* szContentID, int nFileID, int nFileVersion, int nLanguage) { return invoke <bool>(0x84F0BA7462FF8D58, szContentID, nFileID, nFileVersion, nLanguage); }
	static int GET_STATUS_OF_LOAD_MISSION_CREATOR_PHOTO(const char* szContentID) { return invoke <int>(0xC71B50AE58D07369, szContentID); }
	static bool BEGIN_TAKE_HIGH_QUALITY_PHOTO() { return invoke <bool>(0xA15BFFC0A01B34E1); }
	static int GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO() { return invoke <int>(0x4A3DA74C3CCB1725); }
	static void FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO() { return invoke <void>(0xD45547D8396F002A); }
	static void _SET_PHOTO_SELF_STAT(bool p0) { return invoke <void>(0x2705D18C11B61046, p0); }
	static void _SET_PHOTO_STUDIO_STAT(int p0) { return invoke <void>(0x8E6AFF353C09652E, p0); }
	static void _SET_POSSE_ID_FOR_PHOTO(Any posseId) { return invoke <void>(0x564837D4A9EDE296, posseId); }
	static void _0x9F6D859C80708B26(bool p0, bool p1) { return invoke <void>(0x9F6D859C80708B26, p0, p1); }
	static bool IS_PHOTO_FRAME() { return invoke <bool>(0x86076AE35CBBE55F); }
	static void _SET_PHOTO_IN_PHOTOMODE_STAT(bool p0) { return invoke <void>(0xFA91736933AB3D93, p0); }
	static void _SET_PHOTO_OVERLAY_EFFECT_STAT(int p0) { return invoke <void>(0x8B3296278328B5EB, p0); }
	static void _0x0D5B19C34068FEE7(Any p0) { return invoke <void>(0xD5B19C34068FEE7, p0); }
	static void _SET_PLAYER_APPEAR_IN_PHOTO(Player player) { return invoke <void>(0x75D568607909333E, player); }
	static void _SET_REGION_PHOTO_TAKEN_STAT(const char* p0) { return invoke <void>(0xD1031B83AC093BC7, p0); }
	static void _SET_DISTRICT_PHOTO_TAKEN_STAT(const char* p0) { return invoke <void>(0x9937FACBBF267244, p0); }
	static void _SET_STATE_PHOTO_TAKEN_STAT(const char* p0) { return invoke <void>(0x8952E857696B8A79, p0); }
	static bool SAVE_HIGH_QUALITY_PHOTO(int PhotoSlotIndex) { return invoke <bool>(0x57639FD876B68A91, PhotoSlotIndex); }
	static int GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO() { return invoke <int>(0xD6663EC374092383); }
	static bool BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(int qualitySetting) { return invoke <bool>(0x494A9874F17A7D50, qualitySetting); }
	static int GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(int qualitySetting) { return invoke <int>(0x13430D3D5A45F14B, qualitySetting); }
	static void FREE_MEMORY_FOR_LOW_QUALITY_PHOTO() { return invoke <void>(0x614682E715ADBAAC); }
	static void DRAW_LOW_QUALITY_PHOTO_TO_PHONE(bool bDraw, int PhotoRotation) { return invoke <void>(0xF1142E5D64B47802, bDraw, PhotoRotation); }
	static int _GET_MAX_NUMBER_OF_LOCAL_PHOTOS() { return invoke <int>(0x8E587FCD30E05592); }
	static int _GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS() { return invoke <int>(0x78C56B8A7B1D000C); }
	static bool QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS() { return invoke <bool>(0xA42EDF1E88734A7E); }
	static int GET_STATUS_OF_SORTED_LIST_OPERATION() { return invoke <int>(0xB28894CD7408BD0C); }
	static void DRAW_LIGHT_WITH_RANGE(float VecCoorsX, float VecCoorsY, float VecCoorsZ, int R, int G, int B, float Range, float Intensity) { return invoke <void>(0xD2D9E04C0DF927F4, VecCoorsX, VecCoorsY, VecCoorsZ, R, G, B, Range, Intensity); }
	static void UPDATE_LIGHTS_ON_ENTITY(Entity EntityIndex) { return invoke <void>(0xBDBACB52A03CC760, EntityIndex); }
	static void _SET_LIGHTS_COLOR_FOR_ENTITY(Entity entity, int red, int green, int blue) { return invoke <void>(0x6EC2A67962296F49, entity, red, green, blue); }
	static void _SET_LIGHTS_INTENSITY_FOR_ENTITY(Entity entity, float intensity) { return invoke <void>(0x7C0F87AAC57F2E4, entity, intensity); }
	static void _SET_LIGHTS_TYPE_FOR_ENTITY(Entity entity, int type) { return invoke <void>(0xAB72C67163DC4DB4, entity, type); }
	static void _DRAW_MARKER(Hash type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, bool bobUpAndDown, bool faceCamera, int p19, bool rotate, const char* textureDict, const char* textureName, bool drawOnEnts) { return invoke <void>(0x2A32FAA57B937173, type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, red, green, blue, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts); }
	static int CREATE_CHECKPOINT_WITH_NAMEHASH(Hash typeHash, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, float radius, int red, int green, int blue, int alpha, int reserved) { return invoke <int>(0x175668836B44CBB0, typeHash, posX1, posY1, posZ1, posX2, posY2, posZ2, radius, red, green, blue, alpha, reserved); }
	static bool _DOES_CHECKPOINT_HAVE_FX(int checkpoint) { return invoke <bool>(0x4C11CCACB7C02B6E, checkpoint); }
	static void SET_CHECKPOINT_RGBA(int UniqueCheckpointIndex, int colR, int colG, int colB, int colA) { return invoke <void>(0xCAAFC225E33B1D15, UniqueCheckpointIndex, colR, colG, colB, colA); }
	static void SET_CHECKPOINT_RGBA2(int UniqueCheckpointIndex, int colR, int colG, int colB, int colA) { return invoke <void>(0x99AFF17222D4DEB4, UniqueCheckpointIndex, colR, colG, colB, colA); }
	static void _0xCC3B787E73E64160(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0xCC3B787E73E64160, p0, p1, p2, p3, p4); }
	static void _0x171C18E994C1A395(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x171C18E994C1A395, p0, p1, p2, p3, p4); }
	static void DELETE_CHECKPOINT(int UniqueCheckpointIndex) { return invoke <void>(0xDED5B0C8EBAAE12, UniqueCheckpointIndex); }
	static void DRAW_RECT(float CentreX, float CentreY, float Width, float Height, int R, int G, int B, int A, bool bStereo, bool p9) { return invoke <void>(0x405224591DF02025, CentreX, CentreY, Width, Height, R, G, B, A, bStereo, p9); }
	static void SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(bool bValue) { return invoke <void>(0x906B86E6D7896B9E, bValue); }
	static void SET_SCRIPT_GFX_DRAW_ORDER(int iDrawOrder) { return invoke <void>(0xCFCC78391C8B3814, iDrawOrder); }
	static void DRAW_SPRITE(const char* pTextureDictionaryName, const char* pTextureName, float CentreX, float CentreY, float Width, float Height, float Rotation, int R, int G, int B, int A, bool DoStereorize) { return invoke <void>(0xC9884ECADE94CB34, pTextureDictionaryName, pTextureName, CentreX, CentreY, Width, Height, Rotation, R, G, B, A, DoStereorize); }
	static void ATTACH_TV_AUDIO_TO_ENTITY(Entity entity) { return invoke <void>(0x40866A418EB8EFDE, entity); }
	static void SET_TV_AUDIO_FRONTEND(bool frontend) { return invoke <void>(0x64437C98FCC5F291, frontend); }
	static void GET_SCREEN_RESOLUTION(int* X, int* Y) { return invoke <void>(0x66773C92835D0909, X, Y); }
	static void _0xA04EF43030593ABC(Any p0, Any p1) { return invoke <void>(0xA04EF43030593ABC, p0, p1); }
	static void _0xA21AF60C9F99CCC5() { return invoke <void>(0xA21AF60C9F99CCC5); }
	static Any _0xC28F62AC9774FC1B() { return invoke <Any>(0xC28F62AC9774FC1B); }
	static void _0xEB48CE48EEC41FD4(Any p0) { return invoke <void>(0xEB48CE48EEC41FD4, p0); }
	static bool GET_SCREEN_COORD_FROM_WORLD_COORD(float vWorldPosX, float vWorldPosY, float vWorldPosZ, float* fXpos, float* Ypos) { return invoke <bool>(0xCB50D7AFCC8B0EC6, vWorldPosX, vWorldPosY, vWorldPosZ, fXpos, Ypos); }
	static bool _IS_TEXTURE_IN_DICT(Hash txdHash, Hash dict) { return invoke <bool>(0xA2A51869BDED733B, txdHash, dict); }
	static void SET_ARTIFICIAL_LIGHTS_STATE(bool bState) { return invoke <void>(0xB2797619A7C7747B, bState); }
	static void DISABLE_HDTEX_THIS_FRAME() { return invoke <void>(0x98A7CD5EA379A854); }
	static void _0x1A9F09AB458D49C6(bool p0) { return invoke <void>(0x1A9F09AB458D49C6, p0); }
	static int CREATE_TRACKED_POINT() { return invoke <int>(0xFB405CB357C69CB9); }
	static void SET_TRACKED_POINT_INFO(int queryIdx, float centerX, float centerY, float centerZ, float radius) { return invoke <void>(0xF6FDA3D4404D4F2C, queryIdx, centerX, centerY, centerZ, radius); }
	static bool IS_TRACKED_POINT_VISIBLE(int queryIdx) { return invoke <bool>(0xCBB056BA159FB48D, queryIdx); }
	static int _0xDFE332A5DA6FE7C9(int iTrackedPoint) { return invoke <int>(0xDFE332A5DA6FE7C9, iTrackedPoint); }
	static void DESTROY_TRACKED_POINT(int queryIdx) { return invoke <void>(0x37A59922109F8F1C, queryIdx); }
	static bool _IS_TRACKED_POINT_VALID(int point) { return invoke <bool>(0xF2FDDCC8C6BAE1B3, point); }
	static int SET_GRASS_CULL_SPHERE(float centerX, float centerY, float centerZ, float radius, int p4) { return invoke <int>(0x27219300C36A8D40, centerX, centerY, centerZ, radius, p4); }
	static void REMOVE_GRASS_CULL_SPHERE(int handle) { return invoke <void>(0xAE7BF7CA9E4BA48D, handle); }
	static int _ADD_VEG_MODIFIER_ZONE(Volume volume, int p1, int flags, int p3) { return invoke <int>(0xBD3324281E8B9933, volume, p1, flags, p3); }
	static int ADD_VEG_MODIFIER_SPHERE(float x, float y, float z, float radius, int modType, int flags, int p6) { return invoke <int>(0xFA50F79257745E74, x, y, z, radius, modType, flags, p6); }
	static void REMOVE_VEG_MODIFIER_SPHERE(int vegModifierHandle, int p1) { return invoke <void>(0x9CF1836C03FB67A2, vegModifierHandle, p1); }
	static void _ENABLE_STATIC_VEG_MODIFIER(Hash p0) { return invoke <void>(0xDFEA23EC90113657, p0); }
	static void _DISABLE_STATIC_VEG_MODIFIER(Hash p0) { return invoke <void>(0xDD0BC0EDCB2162F6, p0); }
	static bool _IS_STATIC_VEG_MODIFIER_ENABLED(Hash p0) { return invoke <bool>(0xDE9BAD3292AA6D5E, p0); }
	static void _0xEC3F7F24EEEB3BA3() { return invoke <void>(0xEC3F7F24EEEB3BA3); }
	static void _0x9F158A49B0D84C3C(Any p0) { return invoke <void>(0x9F158A49B0D84C3C, p0); }
	static void _0x910E260AEAD855DE() { return invoke <void>(0x910E260AEAD855DE); }
	static bool _CREATE_SWATCH_TEXTURE_DICT(int slots) { return invoke <bool>(0x3D084D5568FB4028, slots); }
	static void _DESTROY_SWATCH_TEXTURE_DICT() { return invoke <void>(0xDAD7FB8402651654); }
	static void _GENERATE_SWATCH_TEXTURE_DIRECTLY(int slot, Any p1) { return invoke <void>(0x646ED1A1D28487DF, slot, p1); }
	static void _GENERATE_SWATCH_TEXTURE(int slotId, Hash componentHash, int metapedType, bool p3) { return invoke <void>(0x160921255327C591, slotId, componentHash, metapedType, p3); }
	static void CASCADE_SHADOWS_SET_CASCADE_BOUNDS(int cascadeIndex, bool bEnabled, float x, float y, float z, float radiusScale, bool interpolateToDisabled, float interpolationTime) { return invoke <void>(0xD9EDB2E4512D563E, cascadeIndex, bEnabled, x, y, z, radiusScale, interpolateToDisabled, interpolationTime); }
	static void CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(bool scale) { return invoke <void>(0x8FBFD2AEB196B369, scale); }
	static void CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE(const char* typeStr) { return invoke <void>(0xCE4774E0F9AD48D1, typeStr); }
	static void CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE() { return invoke <void>(0xF7C29D7C12C36F03); }
	static void _0x503941F65DBA24EC(Any p0) { return invoke <void>(0x503941F65DBA24EC, p0); }
	static void _0x815653A42C5ABE76() { return invoke <void>(0x815653A42C5ABE76); }
	static void _0xFF8018C778349234(Any p0) { return invoke <void>(0xFF8018C778349234, p0); }
	static void RESET_ADAPTATION(int numFrames) { return invoke <void>(0x297B72E2AF094742, numFrames); }
	static void TOGGLE_PAUSED_RENDERPHASES(bool on) { return invoke <void>(0xEF9E1C45732F55FA, on); }
	static bool GET_TOGGLE_PAUSED_RENDERPHASES_STATUS() { return invoke <bool>(0x86ED21BDB2791CE8); }
	static void RESET_PAUSED_RENDERPHASES() { return invoke <void>(0xCCD9AAD85E1B559E); }
	static void SET_HIDOF_OVERRIDE(bool enableOverride, bool enableDOF, float dofNearStart, float dofNearEnd, float dofFarStart, float dofFarEnd) { return invoke <void>(0xCC23AA1A7CBFE840, enableOverride, enableDOF, dofNearStart, dofNearEnd, dofFarStart, dofFarEnd); }
	static void _0x21F00E08CBB5F37B(const char* component) { return invoke <void>(0x21F00E08CBB5F37B, component); }
	static void _0x5AC6E0FA028369DE() { return invoke <void>(0x5AC6E0FA028369DE); }
	static bool _0xEC3D8C228FE553D7(bool p0) { return invoke <bool>(0xEC3D8C228FE553D7, p0); }
	static void _0xF5793BB386E1FF9C(Any p0) { return invoke <void>(0xF5793BB386E1FF9C, p0); }
	static void _0x5CD6A2CCE5087161(Any p0) { return invoke <void>(0x5CD6A2CCE5087161, p0); }
	static void _0xC8D0611D9A0CF5D3(Any p0) { return invoke <void>(0xC8D0611D9A0CF5D3, p0); }
	static float _GET_PHOTO_MODE_EXPOSURE() { return invoke <float>(0x6C0D8BB6B04A709); }
	static void _0x62B9F9A1272AED80(Any p0) { return invoke <void>(0x62B9F9A1272AED80, p0); }
	static float _GET_PHOTO_MODE_CONTRAST() { return invoke <float>(0x98F4154989B81EC6); }
	static void _0x9229ED770975BD9E() { return invoke <void>(0x9229ED770975BD9E); }
	static bool START_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* fxName, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ) { return invoke <bool>(0x2E80BF72EF7C87AC, fxName, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ); }
	static bool START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* fxName, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ) { return invoke <bool>(0xFB97618457994A62, fxName, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ); }
	static bool START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(const char* fxName, Ped pedIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, int boneTag, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ) { return invoke <bool>(0x3FAA72BD940C3AC0, fxName, pedIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, boneTag, scale, invertAxisX, invertAxisY, invertAxisZ); }
	static bool START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char* fxName, Entity entityIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ) { return invoke <bool>(0xFF4C64C513388C12, fxName, entityIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ); }
	static bool START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char* fxName, Entity entityIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ) { return invoke <bool>(0xE6CFE43937061143, fxName, entityIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ); }
	static bool _START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, bool axisX, bool axisY, bool axisZ) { return invoke <bool>(0xC695870B8A149B96, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); }
	static void SET_PARTICLE_FX_NON_LOOPED_COLOUR(float colR, float colG, float colB) { return invoke <void>(0x60B85BED6577A35B, colR, colG, colB); }
	static void SET_PARTICLE_FX_NON_LOOPED_ALPHA(float colA) { return invoke <void>(0xE8A35938A7026CEA, colA); }
	static void _SET_PARTICLE_FX_NON_LOOPED_EMITTER_SCALE(float p0, float p1, float p2) { return invoke <void>(0x56C392C2BD78B024, p0, p1, p2); }
	static int START_PARTICLE_FX_LOOPED_AT_COORD(const char* fxName, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ, bool localOnly) { return invoke <int>(0xBA32867E86125D3A, fxName, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ, localOnly); }
	static int START_PARTICLE_FX_LOOPED_ON_PED_BONE(const char* fxName, Ped pedIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, int boneTag, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ) { return invoke <int>(0xE689C1B1432BB8AF, fxName, pedIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, boneTag, scale, invertAxisX, invertAxisY, invertAxisZ); }
	static int START_PARTICLE_FX_LOOPED_ON_ENTITY(const char* fxName, Entity entityIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ) { return invoke <int>(0xBD41E1440CE39800, fxName, entityIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ); }
	static int START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(const char* fxName, Entity entityIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, int boneIndex, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ) { return invoke <int>(0xD3BA6EC7F2FBD5E9, fxName, entityIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, boneIndex, scale, invertAxisX, invertAxisY, invertAxisZ); }
	static int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(const char* fxName, Entity entityIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ) { return invoke <int>(0x8F90AB32E1944BDE, fxName, entityIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ); }
	static int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(const char* fxName, Entity entityIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, int boneIndex, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ) { return invoke <int>(0x9C56621462FFE7A6, fxName, entityIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, boneIndex, scale, invertAxisX, invertAxisY, invertAxisZ); }
	static void STOP_PARTICLE_FX_LOOPED(int ptfxId, bool localOnly) { return invoke <void>(0x22970F3A088B133B, ptfxId, localOnly); }
	static bool DOES_PARTICLE_FX_LOOPED_EXIST(int ptfxId) { return invoke <bool>(0x9DD5AFF561E88F2A, ptfxId); }
	static void SET_PARTICLE_FX_LOOPED_OFFSETS(int ptfxId, float positionX, float positionY, float positionZ, float vecRotationX, float vecRotationY, float vecRotationZ) { return invoke <void>(0xD3A4A95FC94FE83B, ptfxId, positionX, positionY, positionZ, vecRotationX, vecRotationY, vecRotationZ); }
	static void SET_PARTICLE_FX_LOOPED_EVOLUTION(int ptfxId, const char* evoName, float evoVal, bool localOnly) { return invoke <void>(0x3674F389B0FACD80, ptfxId, evoName, evoVal, localOnly); }
	static void SET_PARTICLE_FX_LOOPED_COLOUR(int ptfxId, float colR, float colG, float colB, bool localOnly) { return invoke <void>(0x239879FC61C610CC, ptfxId, colR, colG, colB, localOnly); }
	static void SET_PARTICLE_FX_LOOPED_ALPHA(int ptfxId, float colA) { return invoke <void>(0x88786E76234F7054, ptfxId, colA); }
	static void SET_PARTICLE_FX_LOOPED_SCALE(int ptfxId, float scale) { return invoke <void>(0x1A9E1C0D98D093B7, ptfxId, scale); }
	static void SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(int ptfxId, float farClipDist) { return invoke <void>(0x9B04D471DA0AD7AA, ptfxId, farClipDist); }
	static void _SET_PARTICLE_FX_LOOPED_UPDATE_DISTANT_SMOKE(int ptfxHandle, float scalar) { return invoke <void>(0x9DDC222D85D5AF2A, ptfxHandle, scalar); }
	static void REMOVE_PARTICLE_FX(int ptfxId, bool localOnly) { return invoke <void>(0x459598F579C98929, ptfxId, localOnly); }
	static void REMOVE_PARTICLE_FX_FROM_ENTITY(Entity entityIndex) { return invoke <void>(0x92884B4A49D81325, entityIndex); }
	static void REMOVE_PARTICLE_FX_IN_RANGE(float posX, float posY, float posZ, float range) { return invoke <void>(0x87B5905ECA623B68, posX, posY, posZ, range); }
	static void USE_PARTICLE_FX_ASSET(const char* ptFxAssetName) { return invoke <void>(0xA10DB07FC234DD12, ptFxAssetName); }
	static void SET_PARTICLE_FX_OVERRIDE(const char* ptFxToOverride, const char* ptFxToUseInstead) { return invoke <void>(0xBE711A169E9C7E95, ptFxToOverride, ptFxToUseInstead); }
	static void RESET_PARTICLE_FX_OVERRIDE(const char* ptFxToOverride) { return invoke <void>(0x274B3DABF7E72DEF, ptFxToOverride); }
	static void _0x4FB67D172C4476F3(Entity entity, const char* p1, const char* p2, float p3) { return invoke <void>(0x4FB67D172C4476F3, entity, p1, p2, p3); }
	static void SET_PARTICLE_FX_AMBIENT_COLOUR(Entity entity, const char* p1, float r, float g, float b) { return invoke <void>(0x3C61B52B00848C26, entity, p1, r, g, b); }
	static void _0xD1472AFF30C103D6(float p0) { return invoke <void>(0xD1472AFF30C103D6, p0); }
	static void SET_PARTICLE_FX_BULLET_IMPACT_SCALE(float scale) { return invoke <void>(0xA53C8D7D0F8C74D0, scale); }
	static void SET_PARTICLE_FX_BULLET_IMPACT_LODRANGE_SCALE(float scale) { return invoke <void>(0x8DCCC98DC0DBF9E4, scale); }
	static void _SET_SNIPER_GLINTS_ENABLED(bool enabled) { return invoke <void>(0x6E8EB45A4F4460EB, enabled); }
	static void SET_PARTICLE_FX_FOOT_LODRANGE_SCALE(float scale) { return invoke <void>(0x2A1625858887D4E6, scale); }
	static void _0x4046493D2EEACA0E() { return invoke <void>(0x4046493D2EEACA0E); }
	static void SET_PICKUP_LIGHT(Object object, bool toggle) { return invoke <void>(0x7DFB49BCDB73089A, object, toggle); }
	static void _BLOCK_PICKUP_OBJECT_LIGHT(Object pickupObject, bool toggle) { return invoke <void>(0x50C14328119E1DD1, pickupObject, toggle); }
	static void BLOCK_PICKUP_PLACEMENT_LIGHT(Pickup pickup, bool toggle) { return invoke <void>(0x552AA3FFC5B87AA, pickup, toggle); }
	static void ALLOW_PICKUP_LIGHT_SYNC(Object pickupObject, bool allow) { return invoke <void>(0x7C348310A6E2FB91, pickupObject, allow); }
	static void _SET_PEARLESCENT_FX_ENABLED(Object object, bool toggle) { return invoke <void>(0x72E30372E7CC4415, object, toggle); }
	static void REMOVE_DECALS_IN_RANGE(float posX, float posY, float posZ, float range) { return invoke <void>(0x86DE59FA02902B40, posX, posY, posZ, range); }
	static void REMOVE_DECALS_FROM_OBJECT(Object ObjectIndex) { return invoke <void>(0xFB8972BAE0013140, ObjectIndex); }
	static int ADD_DECAL(Any p0, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float sideX, float sideY, float sideZ, Any p10, float width, float height, float colR, float colG, float colB, float colA, float life, bool isLongRange, bool isDynamic, bool useComplexColn, Any p21) { return invoke <int>(0x57CB267624EF85C0, p0, posX, posY, posZ, dirX, dirY, dirZ, sideX, sideY, sideZ, p10, width, height, colR, colG, colB, colA, life, isLongRange, isDynamic, useComplexColn, p21); }
	static void _ADD_BLOOD_POOL(float x, float y, float z, bool unused) { return invoke <void>(0xFA2ECC78A6014D4F, x, y, z, unused); }
	static void _ADD_BLOOD_POOL_2(float x, float y, float z, float p3, float size, float p5, bool permanent, float p7, bool p8) { return invoke <void>(0xF708298675ABDC6A, x, y, z, p3, size, p5, permanent, p7, p8); }
	static void _ADD_BLOOD_POOLS_FOR_PED(Ped ped) { return invoke <void>(0xDFCE8CE9F3EBE93F, ped); }
	static void _ADD_BLOOD_POOLS_FOR_PED_WITH_PARAMS(Ped ped, float p1, float size, float p3) { return invoke <void>(0xC349EE1E6EFA494B, ped, p1, size, p3); }
	static void START_PETROL_TRAIL_DECALS(Any p0, float width) { return invoke <void>(0x46F246D6504F0031, p0, width); }
	static void ADD_PETROL_TRAIL_DECAL_INFO(float posX, float posY, float posZ, float alphaMult) { return invoke <void>(0x73354FB6D03D2E8A, posX, posY, posZ, alphaMult); }
	static void END_PETROL_TRAIL_DECALS() { return invoke <void>(0xE126AAE933F3B56); }
	static Any _0xE63D68F455CA0B47(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <Any>(0xE63D68F455CA0B47, p0, p1, p2, p3, p4, p5, p6); }
	static void REMOVE_DECAL(int decalId) { return invoke <void>(0x49A720552EB0BB88, decalId); }
	static bool IS_DECAL_ALIVE(int decalId) { return invoke <bool>(0x3E4B4E5CF5D3EEB5, decalId); }
	static void SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME() { return invoke <void>(0x53ED07BF368EDA59); }
	static void _0xB032C085D9A03907() { return invoke <void>(0xB032C085D9A03907); }
	static void _0xFB680A9B33D0EDBE(bool p0) { return invoke <void>(0xFB680A9B33D0EDBE, p0); }
	static void _0x41F88A85A579A61D(float p0) { return invoke <void>(0x41F88A85A579A61D, p0); }
	static void _BLOOD_TRAIL_FOR_WAYPOINT(const char* waypointRecording, float p1) { return invoke <void>(0xB9C92616929CC25D, waypointRecording, p1); }
	static void _ADD_BLOOD_TRAIL_POINT(float x, float y, float z) { return invoke <void>(0xDD9DC1AB63D513CE, x, y, z); }
	static void _0x812C1563185C6FB2() { return invoke <void>(0x812C1563185C6FB2); }
	static void _0x4BD66B4E3427689B(const char* p0) { return invoke <void>(0x4BD66B4E3427689B, p0); }
	static void _ADD_BLOOD_TRAIL_SPLAT(float x, float y, float z) { return invoke <void>(0xF5E45CB1CF965D2D, x, y, z); }
	static void _0xF2F543D48F319A3A() { return invoke <void>(0xF2F543D48F319A3A); }
	static void _0x1460B644397453EB() { return invoke <void>(0x1460B644397453EB); }
	static void _DISABLE_FAR_ARTIFICIAL_LIGHTS(bool disable) { return invoke <void>(0xCD284E2F6AC27EE9, disable); }
	static void _0x453D16D41FC51D3E(bool p0) { return invoke <void>(0x453D16D41FC51D3E, p0); }
	static void _0xC06F2F45A73EABCD(Entity entity) { return invoke <void>(0xC06F2F45A73EABCD, entity); }
	static void SET_TIMECYCLE_MODIFIER(const char* ModifierName) { return invoke <void>(0xFA08722A5EA82DA7, ModifierName); }
	static void SET_TIMECYCLE_MODIFIER_STRENGTH(float strength) { return invoke <void>(0xFDB74C9CC54C3F37, strength); }
	static void SET_TRANSITION_TIMECYCLE_MODIFIER(const char* ModifierName, float time) { return invoke <void>(0xFF927A09F481D80C, ModifierName, time); }
	static void SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(float time) { return invoke <void>(0xBB6C707F20D955D4, time); }
	static void CLEAR_TIMECYCLE_MODIFIER() { return invoke <void>(0xE3F4AF2D63491FB); }
	static int GET_TIMECYCLE_MODIFIER_INDEX() { return invoke <int>(0xA705394293E2B3D3); }
	static int GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() { return invoke <int>(0x2DA67BA3C8A6755D); }
	static void _0x67B0778C62E74423(Any p0) { return invoke <void>(0x67B0778C62E74423, p0); }
	static void _0x6C03118E9E5C1A14(Any p0) { return invoke <void>(0x6C03118E9E5C1A14, p0); }
	static float _GET_MODIFIED_VISIBILITY_DISTANCE() { return invoke <float>(0x25CA89B2A39DCC69); }
	static void ENABLE_MOON_CYCLE_OVERRIDE(float value) { return invoke <void>(0x6FE93BCC7BF12B63, value); }
	static void SET_TV_CHANNEL(int iChannel) { return invoke <void>(0x593FAF7FC9401A56, iChannel); }
	static int GET_TV_CHANNEL() { return invoke <int>(0xF90FBFD68F3C59AE); }
	static void SET_TV_VOLUME(float vol) { return invoke <void>(0x73A97068787D7231, vol); }
	static void DRAW_TV_CHANNEL(float CentreX, float CentreY, float Width, float Height, float Rotation, int R, int G, int B, int A) { return invoke <void>(0xC0A145540254A840, CentreX, CentreY, Width, Height, Rotation, R, G, B, A); }
	static void SET_TV_CHANNEL_PLAYLIST(int iChannel, const char* playlistName, bool startFromNow) { return invoke <void>(0xDEC6B25F5DC8925B, iChannel, playlistName, startFromNow); }
	static bool IS_TVSHOW_CURRENTLY_PLAYING(Hash nameHash) { return invoke <bool>(0x4D562223E0EB65F3, nameHash); }
	static Any _0x5C674EB487891F6B() { return invoke <Any>(0x5C674EB487891F6B); }
	static void ENABLE_MOVIE_SUBTITLES(bool bOnOff) { return invoke <void>(0x6FC9B065229C0787, bOnOff); }
	static void _0x32DE2BFFDA43E62A() { return invoke <void>(0x32DE2BFFDA43E62A); }
	static void _0xD543487A1F12828F(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xD543487A1F12828F, p0, p1, p2, p3); }
	static void _0xD9BC98B55BCFAA9B(Any p0) { return invoke <void>(0xD9BC98B55BCFAA9B, p0); }
	static void _0x48FE0DB54045B975(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0x48FE0DB54045B975, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x735762E8D7573E42(Any p0, Any p1, Any p2) { return invoke <void>(0x735762E8D7573E42, p0, p1, p2); }
	static void _0x981C7D863980FA51() { return invoke <void>(0x981C7D863980FA51); }
	static void _ANIMPOSTFX_PRELOAD_POSTFX(const char* effectName) { return invoke <void>(0x5199405EABFBD7F0, effectName); }
	static bool _ANIMPOSTFX_HAS_LOADED(const char* effectName) { return invoke <bool>(0xBF2DD155B2ADCD0A, effectName); }
	static void _ANIMPOSTFX_SET_TO_UNLOAD(const char* effectName) { return invoke <void>(0x37D7BDBA89F13959, effectName); }
	static void ANIMPOSTFX_PLAY(const char* effectName) { return invoke <void>(0x4102732DF6B4005F, effectName); }
	static void _ANIMPOSTFX_PLAY_TIMED(const char* effectName, int duration) { return invoke <void>(0x3A9A281FF71249E9, effectName, duration); }
	static void ANIMPOSTFX_STOP(const char* effectName) { return invoke <void>(0xB4FD7446BAB2F394, effectName); }
	static void _0x26DD2FB0A88CC412(const char* effectName, const char* effectName2, Any p2, Any p3) { return invoke <void>(0x26DD2FB0A88CC412, effectName, effectName2, p2, p3); }
	static void _ANIMPOSTFX_CLEAR_EFFECT(const char* effectName) { return invoke <void>(0xC5CB91D65852ED7E, effectName); }
	static bool ANIMPOSTFX_IS_RUNNING(const char* effectName) { return invoke <bool>(0x4A123E85D7C4CA0B, effectName); }
	static bool _ANIMPOSTFX_IS_TAG_PLAYING(const char* effectName) { return invoke <bool>(0x2D4F9C852CE8A253, effectName); }
	static void ANIMPOSTFX_STOP_ALL() { return invoke <void>(0x66560A0D4C64FD21); }
	static void _ANIMPOSTFX_STOP_TAG(const char* effectName) { return invoke <void>(0xAD74C22A541AB987, effectName); }
	static void _ANIMPOSTFX_SET_STRENGTH(const char* effectName, float strength) { return invoke <void>(0xCAB4DD2D5B2B7246, effectName, strength); }
	static void _ANIMPOSTFX_SET_POTENCY(const char* effectName, int p1, float potency) { return invoke <void>(0xF972F0AB16DC5260, effectName, p1, potency); }
	static void _ANIMPOSTFX_SET_POSTFX_COLOR(const char* effectName, int p1, int red, int green, int blue, int alpha) { return invoke <void>(0x63011D0C7C6519E0, effectName, p1, red, green, blue, alpha); }
	static bool _0xB958D97A0DFAA0C2(const char* effectName) { return invoke <bool>(0xB958D97A0DFAA0C2, effectName); }
	static void _0xA201A3D0AC087C37(const char* effectName) { return invoke <void>(0xA201A3D0AC087C37, effectName); }
	static bool _0xFBF161FCFEC8589E(const char* effectName, int p1, bool p2, bool* p3) { return invoke <bool>(0xFBF161FCFEC8589E, effectName, p1, p2, p3); }
	static Hash _ANIMPOSTFX_GET_STACKHASH(const char* effectName) { return invoke <Hash>(0x842CCC9491FFCD9B, effectName); }
	static void _ANIMPOSTFX_PRELOAD_POSTFX_BY_STACKHASH(Hash effectNameHash) { return invoke <void>(0xF3E039322BFBD4D8, effectNameHash); }
	static bool ANIMPOSTFX_IS_PRELOADING_BY_STACKHASH(Hash effectNameHash) { return invoke <bool>(0x59EA80079B86D8C7, effectNameHash); }
	static void _0x38D9D50F2085E9B3(Hash effectNameHash) { return invoke <void>(0x38D9D50F2085E9B3, effectNameHash); }
	static void _ANIMPOSTFX_PLAY_TAG(Hash effectNameHash) { return invoke <void>(0x9B8D5D4CB8AF58B3, effectNameHash); }
	static void _0xC76FC4C2FC5F4405(Hash effectNameHash) { return invoke <void>(0xC76FC4C2FC5F4405, effectNameHash); }
	static void _ANIMPOSTFX_STOP_STACKHASH_POSTFX(Hash effectNameHash) { return invoke <void>(0xEDA5CBECF56E1386, effectNameHash); }
	static bool _ANIMPOSTFX_IS_STACKHASH_PLAYING(Hash effectNameHash) { return invoke <bool>(0xEEF83A759AE06A27, effectNameHash); }
	static bool _0xE75CDDEBF618C8FF(Hash effectNameHash) { return invoke <bool>(0xE75CDDEBF618C8FF, effectNameHash); }
	static void _0x71845905BCCDE781(Hash effectNameHash) { return invoke <void>(0x71845905BCCDE781, effectNameHash); }
	static bool ANIMPOSTFX_HAS_EVENT_TRIGGERED_BY_STACKHASH(Hash effectNameHash, int p1, bool p2, bool* p3) { return invoke <bool>(0x9AB192A9EF980EED, effectNameHash, p1, p2, p3); }
	static bool _0xFF584F097C17FA8F() { return invoke <bool>(0xFF584F097C17FA8F); }
	static bool _0x3DA7A10583A4BEC0() { return invoke <bool>(0x3DA7A10583A4BEC0); }
	static Any _0xC37792A3F9C90771() { return invoke <Any>(0xC37792A3F9C90771); }
	static void _0xA0F4D12D6042F6D5(Any p0, Any p1) { return invoke <void>(0xA0F4D12D6042F6D5, p0, p1); }
	static void _0x8996FA6AD9FE4E90(Any p0) { return invoke <void>(0x8996FA6AD9FE4E90, p0); }
	static void _SET_ENTITY_RENDER_GUARMA_SHIP(Vehicle vehicle, bool toggle) { return invoke <void>(0xC38B4952B728397A, vehicle, toggle); }
	static bool PEDSHOT_IS_AVAILABLE() { return invoke <bool>(0xAF6E67D073D2DCE2); }
	static bool _0xFD05B1DDE83749FA(const char* p0) { return invoke <bool>(0xFD05B1DDE83749FA, p0); }
	static void _PEDSHOT_FINISH_CLEANUP_DATA() { return invoke <void>(0xC2B8164C3BE871A4); }
	static void _PEDSHOT_PREVIOUS_PERSONA_PHOTO_DATA_CLEANUP() { return invoke <void>(0x3E2FDDBE435A8787); }
	static void _PEDSHOT_INIT_CLEANUP_DATA() { return invoke <void>(0x55285F885F662169); }
	static bool _PEDSHOT_GENERATE_PERSONA_PHOTO(const char* texture, Ped ped, int playerSlot) { return invoke <bool>(0xD9C24F53631F2372, texture, ped, playerSlot); }
	static void _PEDSHOT_SET_PERSONA_PHOTO_TYPE(int personaPhotoLocalCacheType) { return invoke <void>(0x196D3ACBEBA4A44B, personaPhotoLocalCacheType); }
	static void _0xA1A86055792FB249(int personaPhotoLocalCacheType) { return invoke <void>(0xA1A86055792FB249, personaPhotoLocalCacheType); }
	static bool _0x402E1A61D2587FCD(Any p0, float x, float y, float z, float p4, float p5, float heading) { return invoke <bool>(0x402E1A61D2587FCD, p0, x, y, z, p4, p5, heading); }
	static Any _0x5C9C3A466B3296A8(Any p0) { return invoke <Any>(0x5C9C3A466B3296A8, p0); }
	static Any _0xA15CCAB8AD038291(Any p0, Any p1, Any p2, Any p3) { return invoke <Any>(0xA15CCAB8AD038291, p0, p1, p2, p3); }
	static Any _0x285438C26C732F9D() { return invoke <Any>(0x285438C26C732F9D); }
	static void _SET_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_STATE(int proxyInteriorIndex, bool state) { return invoke <void>(0xBFCB17895BB99E4E, proxyInteriorIndex, state); }
	static bool _IS_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_ENABLED(int proxyInteriorIndex) { return invoke <bool>(0x113857D66A9CABE6, proxyInteriorIndex); }
	static int _GET_PROXY_INTERIOR_INDEX(int interiorId) { return invoke <int>(0x5D1C5D8E62E8EE1C, interiorId); }
	static void _0x9D1B0B5066205692() { return invoke <void>(0x9D1B0B5066205692); }
	static void _0xC489FE31AC726512(Any p0, Any p1) { return invoke <void>(0xC489FE31AC726512, p0, p1); }
	static void _SET_CLOUD_LAYER(float x, float y, int p2) { return invoke <void>(0xB8C984C0D47F4F07, x, y, p2); }
	static void _SET_CLOUD_NOISE(float x, float y, float z) { return invoke <void>(0xFE7966DF01452F32, x, y, z); }
	static void _SET_CLOUD_POSITION(float x, float y, float z) { return invoke <void>(0x10C1767B93257480, x, y, z); }
	static void _SET_CLOUD_HEIGHT(float height) { return invoke <void>(0xC332C91388F5580B, height); }
	static void _0x085C5B61A0114F32(Any p0, Any p1) { return invoke <void>(0x85C5B61A0114F32, p0, p1); }
	static void _0x1FF8731BE1DFC0C0(Any p0, Any p1) { return invoke <void>(0x1FF8731BE1DFC0C0, p0, p1); }
	static Any _0xFC9B53C072F418E0() { return invoke <Any>(0xFC9B53C072F418E0); }
	static void _0x94B261F1F35293E1(Any p0) { return invoke <void>(0x94B261F1F35293E1, p0); }
	static void ENABLE_ENTITYMASK() { return invoke <void>(0xFAAD23DE7A54FC14); }
	static void DISABLE_ENTITYMASK() { return invoke <void>(0x5C9978A2A3DC3D0D); }
	static void _ADD_ENTITY_TO_ENTITY_MASK(Entity entity, int mask) { return invoke <void>(0xC6F81FCD15350323, entity, mask); }
	static void _ADD_ENTITY_TO_ENTITY_MASK_WITH_INTENSITY(Entity entity, int mask, float intensity) { return invoke <void>(0x958DEBD9353C0935, entity, mask, intensity); }
	static void _REMOVE_ENTITY_FROM_ENTITY_MASK(Entity entity) { return invoke <void>(0x56A786E87FF53478, entity); }
	static bool _GET_ENTITY_MASK_LAYERS(Entity entity, float* layer0, float* layer1, float* layer2, float* layer3) { return invoke <bool>(0xE8A8378BF651079C, entity, layer0, layer1, layer2, layer3); }
	static void _SET_ENTITY_MASK_LAYERS(Entity entity, float* layer0, float* layer1, float* layer2, float* layer3) { return invoke <void>(0xE92012611461A42A, entity, layer0, layer1, layer2, layer3); }
	static void _SET_ENTITY_AURA(float p0, float p1, float p2) { return invoke <void>(0x249CD6B7285536F2, p0, p1, p2); }
	static void _RESET_ENTITY_AURA() { return invoke <void>(0xAF4D239B8903FCBE); }
	static void _SET_SNOW_COVERAGE_TYPE(int type) { return invoke <void>(0xF02A9C330BBFC5C7, type); }
	static void _0x519928DF02EB5101(Any p0) { return invoke <void>(0x519928DF02EB5101, p0); }
	static void _0x1C6306E5BC25C29C() { return invoke <void>(0x1C6306E5BC25C29C); }
}

namespace GANG
{
	static bool NETWORK_IS_GANG_ID_VALID(Any gangId) { return invoke <bool>(0xD6F6ACF4392187FB, gangId); }
	static bool NETWORK_IS_GANG_IN_SESSION(Any gangId) { return invoke <bool>(0x93A91A351A07360E, gangId); }
	static bool NETWORK_IS_GANG_ACTIVE(Any gangId) { return invoke <bool>(0xF99F6436528A089, gangId); }
	static bool _NETWORK_IS_GANG_OPEN(Any gangId) { return invoke <bool>(0xFCF96CCBD81B24C8, gangId); }
	static int _NETWORK_GET_GANG_PRIVACY() { return invoke <int>(0x9970AE8C3D706139); }
	static void _NETWORK_START_GANG(bool openStatus, int campSize) { return invoke <void>(0xD1A226F2E05E58FC, openStatus, campSize); }
	static bool _NETWORK_SET_GANG_PRIVACY(int privacyType) { return invoke <bool>(0xC5BF29F4035277C2, privacyType); }
	static void _NETWORK_LEAVE_GANG(bool disband) { return invoke <void>(0xA04A07BC3074EDB, disband); }
	static void _NETWORK_KICK_GANG_MEMBER(Player player, int banTimeSeconds) { return invoke <void>(0xCD9E2D9BC52FD80F, player, banTimeSeconds); }
	static bool _NETWORK_REQUEST_GANG_JOIN(Any gangId) { return invoke <bool>(0xC0474C8BCF6787AD, gangId); }
	static bool NETWORK_IS_GANG_LEADER(Player player) { return invoke <bool>(0x424B17A7DC5C90BC, player); }
	static bool _NETWORK_IS_GANG_MEMBER(Any gangId, Player player) { return invoke <bool>(0x9BE7DCB22D32CCBE, gangId, player); }
	static bool NETWORK_IS_IN_SAME_GANG(Player player1, Player player2) { return invoke <bool>(0x3F59FE6F37869576, player1, player2); }
	static bool _NETWORK_IS_IN_MY_GANG(Player player) { return invoke <bool>(0x81FB74C83C2ED69F, player); }
	static int NETWORK_GET_NUM_GANG_MEMBERS(Any gangId) { return invoke <int>(0x149A2751AB66AC02, gangId); }
	static int _NETWORK_GET_GANG_SIZE(Any gangId) { return invoke <int>(0x853B0FA4D8732C57, gangId); }
	static bool _NETWORK_SET_GANG_SIZE(int size) { return invoke <bool>(0x833D8268D51B4522, size); }
	static Any NETWORK_GET_GANG_ID(Player player) { return invoke <Any>(0x901E0DC25080C8B9, player); }
	static int _NETWORK_GET_GANG_MEMBERS(Any gangId, void* memberHandles) { return invoke <int>(0xD1BF325C8252A982, gangId, memberHandles); }
	static bool _0xDA801F7F6A5278D3(Player player) { return invoke <bool>(0xDA801F7F6A5278D3, player); }
	static Any _0x2F7EB8B6F6AFE79C(Any p0) { return invoke <Any>(0x2F7EB8B6F6AFE79C, p0); }
	static Any _0x53A94294FDDCF98C(Any p0, Any p1) { return invoke <Any>(0x53A94294FDDCF98C, p0, p1); }
	static Player NETWORK_GET_GANG_LEADER(Any gangId) { return invoke <Player>(0x4BE6C13A45CCA8EC, gangId); }
	static bool _NETWORK_GET_GANG_LEADER_HANDLE(Any gangId, void* gamerHandle) { return invoke <bool>(0xCE88A261DCBBA0D9, gangId, gamerHandle); }
	static bool _0x6102830F764B3DE1(Player player) { return invoke <bool>(0x6102830F764B3DE1, player); }
	static void _0xB38C256498748413() { return invoke <void>(0xB38C256498748413); }
	static Any _0xE4C64CD37CB176AA(int p0) { return invoke <Any>(0xE4C64CD37CB176AA, p0); }
	static Any _0x7BAA30C9BBE8AEE7(Any p0, Any p1) { return invoke <Any>(0x7BAA30C9BBE8AEE7, p0, p1); }
	static Any _0x0E5C9FB9ED5DFF1C(Any p0) { return invoke <Any>(0xE5C9FB9ED5DFF1C, p0); }
	static void _0xB22B1D9F74095382(Any p0) { return invoke <void>(0xB22B1D9F74095382, p0); }
	static void _0xEE4F20004D0288B7() { return invoke <void>(0xEE4F20004D0288B7); }
	static void _0xAD22AB64FA428DF3(Any p0) { return invoke <void>(0xAD22AB64FA428DF3, p0); }
	static Any _0x48D82C83987E18E4(Any p0) { return invoke <Any>(0x48D82C83987E18E4, p0); }
	static void _0xA9CEAE8D6637FBAD(Any p0) { return invoke <void>(0xA9CEAE8D6637FBAD, p0); }
	static Any _0x51C5EF47086AA0D7() { return invoke <Any>(0x51C5EF47086AA0D7); }
	static Any _0x644E02F24F9D4E98(Any p0, Any p1) { return invoke <Any>(0x644E02F24F9D4E98, p0, p1); }
	static Any _0x3ADC71A66356D706() { return invoke <Any>(0x3ADC71A66356D706); }
	static Any _0xFA7C5B7E087A4CEB() { return invoke <Any>(0xFA7C5B7E087A4CEB); }
	static Any _0x1F11702DDBD915C6(Any p0, Any p1) { return invoke <Any>(0x1F11702DDBD915C6, p0, p1); }
	static Any _0x7933754F260B428A(Player player) { return invoke <Any>(0x7933754F260B428A, player); }
	static Any _0xAFD3599A3CC5637D() { return invoke <Any>(0xAFD3599A3CC5637D); }
	static void _0xC81A9E2C8EFD28D5(Any p0) { return invoke <void>(0xC81A9E2C8EFD28D5, p0); }
}

namespace GOOGLE_ANALYTICS
{
	static void _GOOGLE_ANALYTICS_PUSH_PAGE(const char* pageName) { return invoke <void>(0xD43A616AE3AC4EF6, pageName); }
	static void _GOOGLE_ANALYTICS_POP_PAGE(const char* pageName) { return invoke <void>(0xC6DE040378364798, pageName); }
	static bool _GOOGLE_ANALYTICS_START_EVENT(const char* eventCategory, const char* eventAction, const char* eventLabel, int eventValue) { return invoke <bool>(0x1C54F031D7C0F7AC, eventCategory, eventAction, eventLabel, eventValue); }
	static bool _GOOGLE_ANALYTICS_END_EVENT() { return invoke <bool>(0x87BBCC4360A9BDE3); }
}

namespace HUD
{
	static void _ENABLE_REDUCED_MENU_TIME_SCALE() { return invoke <void>(0x26F6BBEA2CE3E3DC); }
	static void _DISABLE_REDUCED_MENU_TIME_SCALE() { return invoke <void>(0xC5C7A2F6567FCCBC); }
	static void _ENABLE_HUD_CONTEXT_THIS_FRAME(Hash component) { return invoke <void>(0xC9CAEAEEC1256E54, component); }
	static void _ENABLE_HUD_CONTEXT(Hash component) { return invoke <void>(0x4CC5F2FC1332577F, component); }
	static void _DISABLE_HUD_CONTEXT(Hash component) { return invoke <void>(0x8BC7C1F929D07BF3, component); }
	static int _0x7EC0D68233E391AC(int p0) { return invoke <int>(0x7EC0D68233E391AC, p0); }
	static void _BUSYSPINNER_SET_TEXT(const char* text) { return invoke <void>(0x7F78CD75CC4539E4, text); }
	static void BUSYSPINNER_OFF() { return invoke <void>(0x58F441B90EA84D06); }
	static bool BUSYSPINNER_IS_ON() { return invoke <bool>(0x823BF7B1DF613A21); }
	static const char* GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(const char* pText, int startPoint, int endPoint) { return invoke <const char*>(0x9D7E12EC6A1EE4E5, pText, startPoint, endPoint); }
	static const char* GET_FILENAME_FOR_AUDIO_CONVERSATION(const char* pTextLabelOfAudioConversation) { return invoke <const char*>(0xCFEDCCAD3C5BA90D, pTextLabelOfAudioConversation); }
	static void CLEAR_ALL_HELP_MESSAGES() { return invoke <void>(0x916ED8321F087059); }
	static bool TEXT_BLOCK_IS_LOADED(const char* textBlock) { return invoke <bool>(0xD0976CC34002DB57, textBlock); }
	static bool _TEXT_BLOCK_IS_STREAMED(const char* textBlock) { return invoke <bool>(0x3CF96E16265B7DC8, textBlock); }
	static void TEXT_BLOCK_REQUEST(const char* textBlock) { return invoke <void>(0xF66090013DE648D5, textBlock); }
	static void _TEXT_BLOCK_DELETE(const char* textBlock) { return invoke <void>(0xAA03F130A637D923, textBlock); }
	static bool _DOES_TEXT_BLOCK_EXIST(const char* textDatabase) { return invoke <bool>(0x2C729F2B94CEA911, textDatabase); }
	static bool DOES_TEXT_LABEL_EXIST(const char* pTextLabel) { return invoke <bool>(0x73C258C68D6F55B6, pTextLabel); }
	static const char* _GET_LABEL_TEXT_2(const char* label) { return invoke <const char*>(0x3429670F9B9EF2D3, label); }
	static const char* _GET_TEXT_SUBSTRING_2(const char* text, int length) { return invoke <const char*>(0xD8402B858F4DDD88, text, length); }
	static Any _0x806862E5D266CF38(Any p0, Any p1, Any p2) { return invoke <Any>(0x806862E5D266CF38, p0, p1, p2); }
	static int GET_LENGTH_OF_LITERAL_STRING(const char* pLiteralString) { return invoke <int>(0x481FBF588B0B76DB, pLiteralString); }
	static int GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(const char* pLiteralString) { return invoke <int>(0xDC5AD6B7AB8184F5, pLiteralString); }
	static const char* GET_STRING_FROM_HASH_KEY(Hash labelHash) { return invoke <const char*>(0xBD5DD5EAE2B6CE14, labelHash); }
	static bool IS_RADAR_PREFERENCE_SWITCHED_ON() { return invoke <bool>(0x81E47F0EE1F2B21E); }
	static bool IS_SUBTITLE_PREFERENCE_SWITCHED_ON() { return invoke <bool>(0x7C4AC9573587F2DF); }
	static void DISPLAY_HUD(bool bDisplayHudFlag) { return invoke <void>(0xD63FE3AF9FB3D53F, bDisplayHudFlag); }
	static bool IS_HUD_HIDDEN() { return invoke <bool>(0x71B72B478F8189DC); }
	static bool IS_RADAR_HIDDEN() { return invoke <bool>(0x1B82FD5FFA4D666E); }
	static bool IS_RADAR_HIDDEN_BY_SCRIPT() { return invoke <bool>(0x66F35DD9D2B58579); }
	static void _GET_COLOR_FROM_NAME(Hash colorNameHash, int* red, int* green, int* blue, int* alpha) { return invoke <void>(0xB981DD2DFAF9B1C9, colorNameHash, red, green, blue, alpha); }
	static void _DISPLAY_TEXT(const char* text, float xPos, float yPos) { return invoke <void>(0xD79334A4BB99BAD1, text, xPos, yPos); }
	static void _SET_TEXT_COLOR(int r, int g, int b, int a) { return invoke <void>(0x50A41AD966910F03, r, g, b, a); }
	static void SET_TEXT_RENDER_ID(int RenderIndex) { return invoke <void>(0xE550CDE128D56757, RenderIndex); }
	static bool REGISTER_NAMED_RENDERTARGET(const char* name, bool delay) { return invoke <bool>(0x98AF2BB6F62BD588, name, delay); }
	static bool IS_NAMED_RENDERTARGET_REGISTERED(const char* name) { return invoke <bool>(0x3EE32F7964C40FE6, name); }
	static bool RELEASE_NAMED_RENDERTARGET(const char* name) { return invoke <bool>(0xE692EE61761361F, name); }
	static void LINK_NAMED_RENDERTARGET(Hash ModelHash) { return invoke <void>(0x2F506B8556242DDB, ModelHash); }
	static int GET_NAMED_RENDERTARGET_RENDER_ID(const char* name) { return invoke <int>(0xB6762A85EE29AA60, name); }
	static bool IS_NAMED_RENDERTARGET_LINKED(Hash ModelHash) { return invoke <bool>(0x707032835FF09AE7, ModelHash); }
	static void _0x9D37EB5003E0F2CF(Any p0, Any p1) { return invoke <void>(0x9D37EB5003E0F2CF, p0, p1); }
	static void HIDE_LOADING_ON_FADE_THIS_FRAME() { return invoke <void>(0xEA600AABAF4B9084); }
	static void _0x052D4AC0922AF91A(Any p0, Any p1) { return invoke <void>(0x52D4AC0922AF91A, p0, p1); }
	static void HIDE_HUD_AND_RADAR_THIS_FRAME() { return invoke <void>(0x36CDD81627A6FCD2); }
	static void _0x8A59D44189AF2BC5(Any p0, Any p1) { return invoke <void>(0x8A59D44189AF2BC5, p0, p1); }
	static void _0x160825DADF1B04B3() { return invoke <void>(0x160825DADF1B04B3); }
	static Any _0x9C409BBC492CB5B1() { return invoke <Any>(0x9C409BBC492CB5B1); }
	static Any _0x0501D52D24EA8934(Any p0) { return invoke <Any>(0x501D52D24EA8934, p0); }
	static Any _0x100157D6D7FE32CA(Any p0, Any p1) { return invoke <Any>(0x100157D6D7FE32CA, p0, p1); }
	static Any _0x28AE29D909C8FDCE(Any p0) { return invoke <Any>(0x28AE29D909C8FDCE, p0); }
	static void _0x2F7BB105144ACF30() { return invoke <void>(0x2F7BB105144ACF30); }
	static void _0xBFFF81E12A745A5F() { return invoke <void>(0xBFFF81E12A745A5F); }
	static void SET_MISSION_NAME(bool bActive, const char* pTextLabel) { return invoke <void>(0x402669A4BDAA72DA, bActive, pTextLabel); }
	static void SET_MISSION_NAME_FOR_UGC_MISSION(bool bActive, const char* pMissionName) { return invoke <void>(0xD98630CE73C61E98, bActive, pMissionName); }
	static void _0xCE0D2F5586627CCE(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0xCE0D2F5586627CCE, p0, p1, p2, p3, p4); }
	static int GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(float vWorldPosX, float vWorldPosY, float vWorldPosZ, float* fScreenPosX, float* fScreenPosY) { return invoke <int>(0xB39C81628EF10B42, vWorldPosX, vWorldPosY, vWorldPosZ, fScreenPosX, fScreenPosY); }
	static void _HIDE_HUD_THIS_FRAME() { return invoke <void>(0xBF4F34A85CA2970D); }
	static void DISABLE_FRONTEND_THIS_FRAME() { return invoke <void>(0x56CE42A528156A67); }
	static void _0x5651516D947ABC53() { return invoke <void>(0x5651516D947ABC53); }
	static void ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME() { return invoke <void>(0x30996422DF1EE561); }
	static void SET_FRONTEND_ACTIVE(bool bActive) { return invoke <void>(0xCE47C21C0687EBC2, bActive); }
	static bool IS_PAUSE_MENU_ACTIVE() { return invoke <bool>(0x535384D6067BA42E); }
	static void _SHOW_PLAYER_CORES(bool state) { return invoke <void>(0x50C803A4CD5932C5, state); }
	static void _SHOW_HORSE_CORES(bool state) { return invoke <void>(0xD4EE21B7CC7FD350, state); }
	static void _0x3FE4FB41EF7D2196(Any p0) { return invoke <void>(0x3FE4FB41EF7D2196, p0); }
	static void _JOURNAL_WRITE_ENTRY(Any p0) { return invoke <void>(0x6DFDD665E416B093, p0); }
	static Any _JOURNAL_CAN_WRITE_ENTRY(Any p0) { return invoke <Any>(0xCF782691D91F270E, p0); }
	static Any _JOURNAL_GET_ENTRY_COUNT() { return invoke <Any>(0xE65B5DE53351BE22); }
	static Any _JOURNAL_GET_ENTRY_AT_INDEX(Any p0) { return invoke <Any>(0x3D16ABD7A1FD8C96, p0); }
	static Any _JOURNAL_GET_GRIME_AT_INDEX(Any p0) { return invoke <Any>(0xCB5945E1B855852F, p0); }
	static Any _JOURNAL_GET_ENTRY_INFO(Any p0, Any p1) { return invoke <Any>(0x5514C3E60673530F, p0, p1); }
	static Any _JOURNAL_GET_TEXTURE_WITH_LAYOUT(Any p0, Any p1, Any p2) { return invoke <Any>(0x62CC549B3B8EA2AA, p0, p1, p2); }
	static void _JOURNAL_MARK_READ(Any p0) { return invoke <void>(0xE4509BABE59BD24E, p0); }
	static void _JOURNAL_CLEAR_ALL_PROGRESS() { return invoke <void>(0xF402978DE6F88D6E); }
	static Any UI_REQUEST_SCENE(Any p0, Any p1) { return invoke <Any>(0xB6857100F8FD433C, p0, p1); }
	static void _0xF1E6979C0B779985(int uiscene) { return invoke <void>(0xF1E6979C0B779985, uiscene); }
	static Any UI_GET_SCENE_UIOBJECT(Any p0) { return invoke <Any>(0xBE1067CD1C9570F6, p0); }
	static void UI_MOVIEVIEW_SET_RENDER_TARGET(Any p0, Any p1) { return invoke <void>(0x51DE09A2196BD951, p0, p1); }
	static Prompt _UI_PROMPT_CREATE(Hash inputHash, const char* labelName, Any p2, Any p3, Any p4, int p5) { return invoke <Prompt>(0x29FA7910726C3889, inputHash, labelName, p2, p3, p4, p5); }
	static Prompt _UI_PROMPT_REGISTER_BEGIN() { return invoke <Prompt>(0x4F97DE45A519419); }
	static void _UI_PROMPT_REGISTER_END(Prompt prompt) { return invoke <void>(0xF7AA2696A22AD8B9, prompt); }
	static void _UI_PROMPT_SET_PRIORITY(Prompt prompt, int priority) { return invoke <void>(0xCA24F528D0D16289, prompt, priority); }
	static Any _UI_PROMPT_SET_CONTROL_ACTION(Prompt prompt, Hash action) { return invoke <Any>(0xB5352B7494A08258, prompt, action); }
	static void _UI_PROMPT_SET_ALLOWED_ACTION(Prompt prompt, Hash action) { return invoke <void>(0x565C1CE183CB0EAF, prompt, action); }
	static void _UI_PROMPT_SET_STANDARD_MODE(Prompt prompt, bool releaseMode) { return invoke <void>(0xCC6656799977741B, prompt, releaseMode); }
	static bool _UI_PROMPT_HAS_STANDARD_MODE_COMPLETED(Prompt prompt, int p1) { return invoke <bool>(0xC92AC953F0A982AE, prompt, p1); }
	static void _UI_PROMPT_SET_PRESSED_TIMED_MODE(Prompt prompt, int depletionTimeMs) { return invoke <void>(0x1473D3AF51D54276, prompt, depletionTimeMs); }
	static bool _UI_PROMPT_HAS_PRESSED_TIMED_MODE_COMPLETED(Prompt prompt) { return invoke <bool>(0x3CE854D250A88DAF, prompt); }
	static bool _UI_PROMPT_HAS_PRESSED_TIMED_MODE_FAILED(Prompt prompt) { return invoke <bool>(0x1A17B9ECFF617562, prompt); }
	static void _UI_PROMPT_SET_HOLD_MODE(Prompt prompt, int holdTimeMs) { return invoke <void>(0x94073D5CA3F16B7B, prompt, holdTimeMs); }
	static void _UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(Prompt prompt, Hash timedEventHash) { return invoke <void>(0x74C7D7B72ED0D3CF, prompt, timedEventHash); }
	static void _UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(Prompt prompt) { return invoke <void>(0xEA5CCF4EEB2F82D1, prompt); }
	static void _UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(Prompt prompt, int autoFillTimeMs, int holdTimeMs) { return invoke <void>(0x3CE932E737C145D6, prompt, autoFillTimeMs, holdTimeMs); }
	static void _UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE(Prompt prompt, int autoFillTimeMs, int holdTimeMs) { return invoke <void>(0xA3F2149AA24F3D8E, prompt, autoFillTimeMs, holdTimeMs); }
	static bool _UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE(Prompt prompt) { return invoke <bool>(0x8010BEBD0D5ED5BC, prompt); }
	static bool _UI_PROMPT_HAS_HOLD_MODE(Prompt prompt) { return invoke <bool>(0xB60C9F9ED47ABB76, prompt); }
	static bool _UI_PROMPT_IS_HOLD_MODE_RUNNING(Prompt prompt) { return invoke <bool>(0xC7D70EAEF92EFF48, prompt); }
	static bool _UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Prompt prompt) { return invoke <bool>(0xE0F65F0640EF0617, prompt); }
	static float _UI_PROMPT_GET_PROGRESS(Prompt prompt) { return invoke <float>(0x81801291806DBC50, prompt); }
	static void _UI_PROMPT_SET_MASH_MODE(Prompt prompt, int mashes) { return invoke <void>(0xDF6423BF071C7F71, prompt, mashes); }
	static void _UI_PROMPT_SET_MASH_INDEFINITELY_MODE(Prompt prompt) { return invoke <void>(0x7B66E89312727274, prompt); }
	static void _UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(Prompt prompt, int mashes, float p2, float p3) { return invoke <void>(0xCD1BDFF15EFA79F5, prompt, mashes, p2, p3); }
	static void _UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(Prompt prompt, int mashes, float p2, float p3) { return invoke <void>(0xDC0CB602DEADBA53, prompt, mashes, p2, p3); }
	static void _UI_PROMPT_SET_MASH_AUTO_FILL_MODE(Prompt prompt, int autoFillTimeMs, int mashes) { return invoke <void>(0x6C39587D7CC66801, prompt, autoFillTimeMs, mashes); }
	static void _UI_PROMPT_SET_MASH_MANUAL_MODE(Prompt prompt, float p1, float p2, float p3, Any p4) { return invoke <void>(0x32DF729D8BD3C1C6, prompt, p1, p2, p3, p4); }
	static void _UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(Prompt prompt, float p1, float p2, float p3, Any p4) { return invoke <void>(0x179DCF71F705DA20, prompt, p1, p2, p3, p4); }
	static bool _UI_PROMPT_HAS_MANUAL_MASH_MODE(Prompt prompt) { return invoke <bool>(0xA6C6A4ADB3BAC409, prompt); }
	static bool _UI_PROMPT_HAS_MASH_MODE(Prompt prompt) { return invoke <bool>(0xCD072523791DDC1B, prompt); }
	static Any _0xB0E8599243B3F568(Any p0) { return invoke <Any>(0xB0E8599243B3F568, p0); }
	static bool _UI_PROMPT_HAS_MASH_MODE_COMPLETED(Prompt prompt) { return invoke <bool>(0x845CE958416DC473, prompt); }
	static bool _UI_PROMPT_HAS_MASH_MODE_FAILED(Prompt prompt) { return invoke <bool>(0x25B18E530CF39D6F, prompt); }
	static float _UI_PROMPT_GET_MASH_MODE_PROGRESS(Prompt prompt) { return invoke <float>(0x8A9585293863B8A5, prompt); }
	static void _UI_PROMPT_SET_MASH_MANUAL_MODE_INCREASE_PER_PRESS(Prompt prompt, float rate) { return invoke <void>(0xA0D1D79C6036A855, prompt, rate); }
	static void _UI_PROMPT_SET_MASH_MANUAL_MODE_DECAY_SPEED(Prompt prompt, float speed) { return invoke <void>(0x7D393C247FB9B431, prompt, speed); }
	static void _UI_PROMPT_SET_MASH_MANUAL_MODE_PRESSED_GROWTH_SPEED(Prompt prompt, float speed) { return invoke <void>(0x56DBB26F98582C29, prompt, speed); }
	static void _UI_PROMPT_SET_ROTATE_MODE(Prompt prompt, float p1, bool counterclockwise) { return invoke <void>(0x7ABE7095FB3D2581, prompt, p1, counterclockwise); }
	static void _UI_PROMPT_SET_TARGET_MODE(Prompt prompt, float p1, float p2, Any p3) { return invoke <void>(0x5F6503D9CD2754EB, prompt, p1, p2, p3); }
	static void _UI_PROMPT_SET_TARGET_MODE_TARGET(Prompt prompt, float p1, float p2) { return invoke <void>(0x5E019C45DD3B6A14, prompt, p1, p2); }
	static void _UI_PROMPT_SET_TARGET_MODE_PROGRESS(Prompt prompt, float progress) { return invoke <void>(0x123054BEC8A30F, prompt, progress); }
	static void _UI_PROMPT_SET_BEAT_MODE(Prompt prompt, bool toggle) { return invoke <void>(0xF957A1654C6322FE, prompt, toggle); }
	static bool _UI_PROMPT_WAS_BEAT_MODE_PRESSED_IN_TIME_WINDOW(Prompt prompt) { return invoke <bool>(0x1FE4788AB1430C55, prompt); }
	static void _UI_PROMPT_SET_BEAT_MODE_GRAYED_OUT(Prompt prompt, Any p1) { return invoke <void>(0xB487A4936FBF40AC, prompt, p1); }
	static void _UI_PROMPT_RESTART_MODES(Prompt prompt) { return invoke <void>(0xDC6C55DFA2C24EE5, prompt); }
	static void _UI_PROMPT_SET_SPINNER_SPEED(Prompt prompt, Any p1) { return invoke <void>(0xAC6586A7FDCD4B68, prompt, p1); }
	static void _UI_PROMPT_SET_SPINNER_POSITION(Prompt prompt, Any p1) { return invoke <void>(0x832CB510DE546282, prompt, p1); }
	static void _UI_PROMPT_SET_URGENT_PULSING_ENABLED(Prompt prompt, bool toggle) { return invoke <void>(0xC5F428EE08FA7F2C, prompt, toggle); }
	static bool _UI_PROMPT_GET_URGENT_PULSING_ENABLED(Prompt prompt) { return invoke <bool>(0x1FBA0DABECDDB52B, prompt); }
	static void _UI_PROMPT_SET_TAG(Prompt prompt, Any p1) { return invoke <void>(0xDEC85C174751292B, prompt, p1); }
	static int _UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Entity entity) { return invoke <int>(0xB796970BD125FCE8, entity); }
	static int _UI_PROMPT_GET_GROUP_ID_FOR_SCENARIO_POINT(Any p0, int p1) { return invoke <int>(0xCB73D7521E7103F0, p0, p1); }
	static void _UI_PROMPT_SET_GROUP(Prompt prompt, int groupId, int tabIndex) { return invoke <void>(0x2F11D3A254169EA4, prompt, groupId, tabIndex); }
	static void _UI_PROMPT_REMOVE_GROUP(Prompt prompt, Any p1) { return invoke <void>(0x4E52C800A28F7BE8, prompt, p1); }
	static Any _UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(Hash hash, const char* name, int tabAmount, int tabDefaultIndex, int p4, Prompt prompt) { return invoke <Any>(0xC65A45D4453C2627, hash, name, tabAmount, tabDefaultIndex, p4, prompt); }
	static int _UI_PROMPT_GET_GROUP_ACTIVE_PAGE(Hash hash) { return invoke <int>(0xC1FCC36C3F7286C8, hash); }
	static Any _UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Entity entity, float p1, int p2, int p3, Hash p4, const char* name, int p6) { return invoke <Any>(0x315C81D760609108, entity, p1, p2, p3, p4, name, p6); }
	static Any _0x8B55B324A9123F6B(int groupId, Volume volume, const char* p2, Any p3, Any p4, Any p5) { return invoke <Any>(0x8B55B324A9123F6B, groupId, volume, p2, p3, p4, p5); }
	static bool _UI_PROMPT_DOES_AMBIENT_GROUP_EXIST(Hash hash) { return invoke <bool>(0xEB550B927B34A1BB, hash); }
	static void _UI_PROMPT_ADD_GROUP_LINK(Any p0, Prompt prompt, Any p2) { return invoke <void>(0x684C96CC7C66E8EF, p0, prompt, p2); }
	static void _UI_PROMPT_ADD_GROUP_RETURN_LINK(Any p0, Prompt prompt) { return invoke <void>(0x837972ED28159536, p0, prompt); }
	static void _UI_PROMPT_SET_TRANSPORT_MODE(Prompt prompt, int mode) { return invoke <void>(0x876E4A35C73A6655, prompt, mode); }
	static void _UI_PROMPT_DISABLE_PROMPTS_THIS_FRAME() { return invoke <void>(0xF1622CE88A1946FB); }
	static void _UI_PROMPT_DELETE(Prompt prompt) { return invoke <void>(0xEDE88D4D13CF59, prompt); }
	static bool _UI_PROMPT_IS_VALID(Prompt prompt) { return invoke <bool>(0x347469FBDD1589A9, prompt); }
	static bool _UI_PROMPT_IS_ACTIVE(Prompt prompt) { return invoke <bool>(0x546E342E01DE71CF, prompt); }
	static void _UI_PROMPT_SET_VISIBLE(Prompt prompt, bool toggle) { return invoke <void>(0x71215ACCFDE075EE, prompt, toggle); }
	static void _UI_PROMPT_SET_ENABLED(Prompt prompt, bool toggle) { return invoke <void>(0x8A0FB4D03A630D21, prompt, toggle); }
	static void _UI_PROMPT_SET_TEXT(Prompt prompt, const char* text) { return invoke <void>(0x5DD02A8318420DD7, prompt, text); }
	static void _UI_PROMPT_SET_ATTRIBUTE(Prompt prompt, int attribute, bool enabled) { return invoke <void>(0x560E76D5E2E1803F, prompt, attribute, enabled); }
	static void _UI_PROMPT_SET_TYPE(Prompt prompt, int type) { return invoke <void>(0xF4A5C4509BF923B1, prompt, type); }
	static void _0x53CE46C01A089DA1(Prompt prompt, bool p1) { return invoke <void>(0x53CE46C01A089DA1, prompt, p1); }
	static void _UI_PROMPT_SET_MANUAL_RESOLVED(Prompt prompt, Any p1) { return invoke <void>(0xA520C7B05FA4EB2A, prompt, p1); }
	static void _UI_PROMPT_CONTEXT_SET_VOLUME(Prompt prompt, Volume volume) { return invoke <void>(0x4D107406667423BE, prompt, volume); }
	static void _UI_PROMPT_CONTEXT_SET_POINT(Prompt prompt, float x, float y, float z) { return invoke <void>(0xAE84C5EE2C384FB3, prompt, x, y, z); }
	static void _UI_PROMPT_CONTEXT_SET_RADIUS(Prompt prompt, float radius) { return invoke <void>(0xC718001B77CA468, prompt, radius); }
	static bool _UI_PROMPT_IS_PRESSED(Prompt prompt) { return invoke <bool>(0x21E60E230086697F, prompt); }
	static bool _UI_PROMPT_IS_JUST_PRESSED(Prompt prompt) { return invoke <bool>(0x2787CC611D3FACC5, prompt); }
	static bool _UI_PROMPT_IS_JUST_RELEASED(Prompt prompt) { return invoke <bool>(0x635CC82FA297A827, prompt); }
	static bool _UI_PROMPT_IS_RELEASED(Prompt prompt) { return invoke <bool>(0xAFC887BA7A7756D6, prompt); }
	static void _UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(int p0) { return invoke <void>(0x6565032897BA861, p0); }
	static void _UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(int p0) { return invoke <void>(0xFC094EF26DD153FA, p0); }
	static void _UI_PROMPT_FILTER_CLEAR() { return invoke <void>(0x6A2F820452017EA2); }
	static void _UI_PROMPT_SET_PROMPT_PRIORITY_PREFERENCE(Ped ped) { return invoke <void>(0x530A428705BE5DEF, ped); }
	static void _UI_PROMPT_CLEAR_PROMPT_PRIORITY_PREFERENCE() { return invoke <void>(0x51259AE5C72D4A1B); }
	static bool _UI_PROMPT_IS_ENABLED(Prompt prompt) { return invoke <bool>(0xD00EDDFB58B7F28, prompt); }
	static bool UI_PROMPT_IS_CONTROL_ACTION_ACTIVE(Hash controlAction) { return invoke <bool>(0x1BE19185B8AFE299, controlAction); }
	static Any _0xD6BD313CFA41E57A(Any p0) { return invoke <Any>(0xD6BD313CFA41E57A, p0); }
	static int _UI_PROMPT_SET_REGISTER_HORIZONTAL_ORIENTATION() { return invoke <int>(0xD9459157EB22C895); }
	static void _UI_PROMPT_CLEAR_HORIZONTAL_ORIENTATION(int id) { return invoke <void>(0x6095358C4142932A, id); }
	static void _UI_PROMPT_SET_ORDERING_AS_INPUT_TYPE(Prompt prompt, Any p1) { return invoke <void>(0x2F385ECC5200938D, prompt, p1); }
	static Any _0x066725A9D52B3641() { return invoke <Any>(0x66725A9D52B3641); }
	static void _0x958278B97C4AFFD8(Any p0, Any p1) { return invoke <void>(0x958278B97C4AFFD8, p0, p1); }
	static int _CREATE_MP_GAMER_TAG(Player player, const char* username, bool pointedClanTag, bool isRockstarClan, const char* clanTag, int clanFlag) { return invoke <int>(0xD877AF112AD2B41B, player, username, pointedClanTag, isRockstarClan, clanTag, clanFlag); }
	static int CREATE_FAKE_MP_GAMER_TAG(Ped ped, const char* PlayerName, bool bCrewTypeIsPrivate, bool bCrewTagContainsRockstar, const char* CrewTag, int iCrewRank) { return invoke <int>(0x53CB4B502E1C57EA, ped, PlayerName, bCrewTypeIsPrivate, bCrewTagContainsRockstar, CrewTag, iCrewRank); }
	static int _CREATE_MP_GAMER_TAG_ON_ENTITY(Entity entity, const char* text) { return invoke <int>(0xE961BF23EAB76B12, entity, text); }
	static void REMOVE_MP_GAMER_TAG(int iPlayerNum) { return invoke <void>(0x839BFD7D7E49FE09, iPlayerNum); }
	static bool IS_MP_GAMER_TAG_ACTIVE(int iPlayerNum) { return invoke <bool>(0x6E1C31E14C7A5F97, iPlayerNum); }
	static bool _IS_MP_GAMER_TAG_ACTIVE_ON_ENTITY(int gamerTagId, Entity entity) { return invoke <bool>(0x502E1591A504F843, gamerTagId, entity); }
	static void _SET_MP_GAMER_TAG_VISIBILITY(int gamerTagId, int visibility) { return invoke <void>(0x93171DDDAB274EB8, gamerTagId, visibility); }
	static void _SET_MP_GAMER_TAG_TYPE(int gamerTagId, Hash type) { return invoke <void>(0x25B9C78A25105C35, gamerTagId, type); }
	static void _SET_MP_GAMER_TAG_COLOUR(int gamerTagId, Hash colour) { return invoke <void>(0x84BD27DDF9575816, gamerTagId, colour); }
	static void _SET_MP_GAMER_TAG_UNK_ALLOW_LOCALIZED(int gamerTagId, bool allow) { return invoke <void>(0xEF7AB1A0E8C86170, gamerTagId, allow); }
	static void SET_MP_GAMER_TAG_NAME(int iPlayerNum, const char* PlayerName) { return invoke <void>(0xEA6F4B8D4B4B5B3E, iPlayerNum, PlayerName); }
	static void _SET_MP_GAMER_TAG_NAME_POSSE(int gamerTagId, const char* text) { return invoke <void>(0x1EA716E0628A6F44, gamerTagId, text); }
	static void SET_MP_GAMER_TAG_BIG_TEXT(int iPlayerNum, const char* BigText) { return invoke <void>(0xA0D7CE5F83259663, iPlayerNum, BigText); }
	static void _SET_MP_GAMER_TAG_TOP_ICON(int gamerTagId, Hash icon) { return invoke <void>(0x5F57522BC1EB9D9D, gamerTagId, icon); }
	static void _SET_MP_GAMER_TAG_SECONDARY_ICON(int gamerTagId, Hash icon) { return invoke <void>(0x95384C6CE1526EFF, gamerTagId, icon); }
	static void _MP_GAMER_TAG_ENABLE_REVIVE_TOP_ICON(int gamerTagId) { return invoke <void>(0xFFF6579CF0139FCE, gamerTagId); }
	static void _MP_GAMER_TAG_DISABLE_REVIVE_TOP_ICON(int gamerTagId) { return invoke <void>(0x1F9A64C2804B3471, gamerTagId); }
}

namespace IK
{
	static void _INVERSE_KINEMATICS_REQUEST_LOOK_AT(Ped ped, void* args) { return invoke <void>(0x66F9EB44342BB4C5, ped, args); }
	static void _0x0B9F7A01EC50448D(Ped ped, void* args) { return invoke <void>(0xB9F7A01EC50448D, ped, args); }
	static void _INVERSE_KINEMATICS_SET_DISABLED_FOR_PED(Ped ped, int p1, bool p2) { return invoke <void>(0xEABF182FBB63D72, ped, p1, p2); }
	static bool _0x6098139150DCC745(Ped ped, int p1) { return invoke <bool>(0x6098139150DCC745, ped, p1); }
	static void _0x873C792E07A32C8B(Ped ped1, Ped ped2) { return invoke <void>(0x873C792E07A32C8B, ped1, ped2); }
}

namespace INTERACTION
{
	static void SET_MOUSE_CURSOR_THIS_FRAME() { return invoke <void>(0xF12E4CCAF249DC10); }
	static void SET_MOUSE_CURSOR_STYLE(int style) { return invoke <void>(0x7F5858AAB5A58CCE, style); }
	static void _SET_ALLOW_FIRST_PERSON_MOUSE_CAMERA_MOVEMENT() { return invoke <void>(0x546B117BB17548B); }
	static bool _POINTER_IS_BEING_MOVED() { return invoke <bool>(0x2B8B605F2A9E64BF); }
	static bool _POINTER_IS_LEFT_BUTTON_HELD() { return invoke <bool>(0x61CAE9D1FD055E44); }
	static bool _POINTER_IS_LEFT_BUTTON_JUST_RELEASED() { return invoke <bool>(0xF7F51A57349739F2); }
}

namespace INTERIOR
{
	static bool IS_VALID_INTERIOR(Interior InteriorInstanceIndex) { return invoke <bool>(0x17C1B3159F79F6C, InteriorInstanceIndex); }
	static void GET_INTERIOR_LOCATION_AND_NAMEHASH(Interior interior, Vector3* position, Hash* nameHash) { return invoke <void>(0x8451E87D3C2B0286, interior, position, nameHash); }
	static Hash _GET_INTERIOR_MINIMAP_HASH(Interior interior) { return invoke <Hash>(0x3039BE60B3749716, interior); }
	static Vector3 _GET_INTERIOR_POSITION(Interior interior) { return invoke <Vector3>(0x2C9746D0CA15BE1C, interior); }
	static bool IS_INTERIOR_SCENE() { return invoke <bool>(0x4200F14D6F840A9A); }
	static void CLEAR_ROOM_FOR_ENTITY(Entity EntityIndex) { return invoke <void>(0xA1762D5BBFCA13A8, EntityIndex); }
	static void FORCE_ROOM_FOR_ENTITY(Entity EntityIndex, Interior InteriorInstanceIndex, Hash RoomKey) { return invoke <void>(0xBC29A9894C976945, EntityIndex, InteriorInstanceIndex, RoomKey); }
	static Hash GET_ROOM_KEY_FROM_ENTITY(Entity EntityIndex) { return invoke <Hash>(0x76E46E0EB52AFC6, EntityIndex); }
	static Hash GET_KEY_FOR_ENTITY_IN_ROOM(Entity EntityIndex) { return invoke <Hash>(0x27D7B6F79E1F4603, EntityIndex); }
	static Interior GET_INTERIOR_FROM_ENTITY(Entity EntityIndex) { return invoke <Interior>(0xB417689857646F61, EntityIndex); }
	static void RETAIN_ENTITY_IN_INTERIOR(Entity EntityIndex, Interior InteriorInstanceIndex) { return invoke <void>(0x5BD616735F16BF5C, EntityIndex, InteriorInstanceIndex); }
	static void FORCE_ROOM_FOR_GAME_VIEWPORT(Interior InteriorInstanceIndex, Hash RoomKey) { return invoke <void>(0x115B4AA8FB28AB43, InteriorInstanceIndex, RoomKey); }
	static void CLEAR_ROOM_FOR_GAME_VIEWPORT() { return invoke <void>(0x951A049765E0D450); }
	static Interior GET_INTERIOR_FROM_PRIMARY_VIEW() { return invoke <Interior>(0xBC8A281FF125C655); }
	static Interior GET_INTERIOR_AT_COORDS(float VecInCoorsX, float VecInCoorsY, float VecInCoorsZ) { return invoke <Interior>(0xCDD36C9E5C469070, VecInCoorsX, VecInCoorsY, VecInCoorsZ); }
	static void PIN_INTERIOR_IN_MEMORY(Interior InteriorInstanceIndex) { return invoke <void>(0xBD3D33EABF680168, InteriorInstanceIndex); }
	static void UNPIN_INTERIOR(Interior InteriorInstanceIndex) { return invoke <void>(0x7FD1A0B814F6055, InteriorInstanceIndex); }
	static bool IS_INTERIOR_READY(Interior InteriorInstanceIndex) { return invoke <bool>(0x941560D2D45DBFC8, InteriorInstanceIndex); }
	static bool SET_INTERIOR_IN_USE(Interior InteriorInstanceIndex) { return invoke <bool>(0xB5EF6FEF2DC9EBED, InteriorInstanceIndex); }
	static Interior GET_INTERIOR_AT_COORDS_WITH_TYPE(float VecInCoorsX, float VecInCoorsY, float VecInCoorsZ, const char* Name) { return invoke <Interior>(0xAAD6170AA33B13C0, VecInCoorsX, VecInCoorsY, VecInCoorsZ, Name); }
	static Interior GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(float VecInCoorsX, float VecInCoorsY, float VecInCoorsZ, Hash NameHash) { return invoke <Interior>(0x3543AEA1816D1D2B, VecInCoorsX, VecInCoorsY, VecInCoorsZ, NameHash); }
	static bool IS_COLLISION_MARKED_OUTSIDE(float VecInCoorsX, float VecInCoorsY, float VecInCoorsZ) { return invoke <bool>(0xF291396B517E25B2, VecInCoorsX, VecInCoorsY, VecInCoorsZ); }
	static Interior GET_INTERIOR_FROM_COLLISION(float VecInCoorsX, float VecInCoorsY, float VecInCoorsZ) { return invoke <Interior>(0x5054D1A5218FA696, VecInCoorsX, VecInCoorsY, VecInCoorsZ); }
	static void ACTIVATE_INTERIOR_ENTITY_SET(Interior InteriorInstanceIndex, const char* entitySetName, int p2) { return invoke <void>(0x174D0AAB11CED739, InteriorInstanceIndex, entitySetName, p2); }
	static void DEACTIVATE_INTERIOR_ENTITY_SET(Interior InteriorInstanceIndex, const char* entitySetName, bool p2) { return invoke <void>(0x33B81A2C07A51FFF, InteriorInstanceIndex, entitySetName, p2); }
	static bool IS_INTERIOR_ENTITY_SET_ACTIVE(Interior InteriorInstanceIndex, const char* entitySetName) { return invoke <bool>(0x32810CA2125F5842, InteriorInstanceIndex, entitySetName); }
	static bool _IS_INTERIOR_ENTITY_SET_VALID(Interior interior, const char* entitySetName) { return invoke <bool>(0xD56FF170710FC826, interior, entitySetName); }
	static void DISABLE_INTERIOR(Interior InteriorInstanceIndex, bool bDisable) { return invoke <void>(0x3C2B92A1A07D4FCE, InteriorInstanceIndex, bDisable); }
	static void _0x2533F2AB0EB9C6F9(Any p0, Any p1) { return invoke <void>(0x2533F2AB0EB9C6F9, p0, p1); }
	static void _0xFE2B3D5500B1B2E4(Any p0, Any p1) { return invoke <void>(0xFE2B3D5500B1B2E4, p0, p1); }
}

namespace INVENTORY
{
	static int _INVENTORY_GET_INVENTORY_ID_FROM_PED(Ped ped) { return invoke <int>(0x13D234A2A3F66E63, ped); }
	static int _GET_ITEM_ROLE_MAX_LEVEL_COUNT(int inventoryId, Hash eRoleMaxLevel) { return invoke <int>(0xADDD1E7C0ECF7D95, inventoryId, eRoleMaxLevel); }
	static int _GET_ITEM_SLOT_MAX_COUNT(Hash provision, Hash slotId) { return invoke <int>(0xE80E50BEE276A54A, provision, slotId); }
	static bool _0x112BCA290D2EB53C(int inventoryId, Hash p1, int* year, int* month, int* day, int* hour, int* minute, int* second) { return invoke <bool>(0x112BCA290D2EB53C, inventoryId, p1, year, month, day, hour, minute, second); }
	static void _0x46743BBFEDBC859E(int inventoryId, Hash eInventoryItem, bool p2) { return invoke <void>(0x46743BBFEDBC859E, inventoryId, eInventoryItem, p2); }
	static void _INVENTORY_SET_INVENTORY_ITEM_IN_USE(int inventoryId, void* guid, bool inUse) { return invoke <void>(0x65A5F70F4A292EBE, inventoryId, guid, inUse); }
	static bool _INVENTORY_GET_INVENTORY_ITEM_IN_USE(int inventoryId, void* guid) { return invoke <bool>(0x70E3A884ED000A01, inventoryId, guid); }
	static void _INVENTORY_SET_INVENTORY_ITEM_HIDDEN(int inventoryId, void* guid, bool hidden) { return invoke <void>(0x9A113C660AEA3832, inventoryId, guid, hidden); }
	static void _INVENTORY_SET_INVENTORY_ITEM_HIDDEN_2(int inventoryId, void* guid, bool hidden) { return invoke <void>(0xD740F11FBC8AEF43, inventoryId, guid, hidden); }
	static bool _INVENTORY_GET_INVENTORY_ITEM_HIDDEN(int inventoryId, void* guid) { return invoke <bool>(0xF9933164965533B7, inventoryId, guid); }
	static bool _INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(Hash item) { return invoke <bool>(0x4AEF1FB5B9011D75, item); }
	static Hash _INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH(Hash item) { return invoke <Hash>(0xA4550FE9C512E3DD, item); }
	static bool _INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(Hash item, int flag) { return invoke <bool>(0x245D07651B1D183B, item, flag); }
	static bool _INVENTORY_GET_IS_INVENTORY_ITEM_SOUND_VALID(Hash item, int soundType) { return invoke <bool>(0x2BAE4880DCDD560B, item, soundType); }
	static Hash _INVENTORY_GET_INVENTORY_ITEM_SOUND(Hash item, int soundType) { return invoke <Hash>(0x2E1CDC1FF3B8473E, item, soundType); }
	static bool _INVENTORY_GET_INVENTORY_ITEM_INSPECTION_INFO(Hash item, void* info) { return invoke <bool>(0xC093C1787F18519, item, info); }
	static int _INVENTORY_GET_INVENTORY_ITEM_WEAPON_COPY_ID(int inventoryId, void* guid) { return invoke <int>(0xAB5F12746A099A0E, inventoryId, guid); }
	static bool _INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(int inventoryId) { return invoke <bool>(0xFBBFFC891A97C81, inventoryId); }
	static bool _INVENTORY_IS_GUID_VALID(void* guid) { return invoke <bool>(0xB881CA836CC4B6D4, guid); }
	static bool _INVENTORY_COMPARE_GUIDS(void* guid1, void* guid2) { return invoke <bool>(0x4C543D5DFCD2DAFD, guid1, guid2); }
	static bool INVENTORY_GET_GUID_FROM_ITEMID(int inventoryId, void* guid, Hash p2, Hash slotId, void* outGuid) { return invoke <bool>(0x886DFD3E185C8A89, inventoryId, guid, p2, slotId, outGuid); }
	static bool _0x5D6182F3BCE1333B(int inventoryId, Hash removeReason) { return invoke <bool>(0x5D6182F3BCE1333B, inventoryId, removeReason); }
	static bool INVENTORY_GET_INVENTORY_ITEM(int inventoryId, void* inData, void* outData, bool p3) { return invoke <bool>(0x9700E8EFC4AB9089, inventoryId, inData, outData, p3); }
	static bool _INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(int inventoryId, void* guid, void* p2, int p3, int p4) { return invoke <bool>(0x25A1B1FB03FBF61, inventoryId, guid, p2, p3, p4); }
	static bool _INVENTORY_GET_INVENTORY_ITEM_CHILD(int inventoryId, void* parentGuid, Any childIndex, void* outInventoryItem) { return invoke <bool>(0xCD9A485F2B383B44, inventoryId, parentGuid, childIndex, outInventoryItem); }
	static bool _INVENTORY_ADD_ITEM_WITH_GUID(int inventoryId, void* guid1, void* guid2, Hash item, Hash inventoryItemSlot, int p5, Hash addReason) { return invoke <bool>(0xCB5D11F9508A928D, inventoryId, guid1, guid2, item, inventoryItemSlot, p5, addReason); }
	static bool _INVENTORY_UPDATE_INVENTORY_ITEM(int inventoryId, void* guid1, void* guid2, int p3) { return invoke <bool>(0xD80A8854DB5CFBA5, inventoryId, guid1, guid2, p3); }
	static bool _INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(int inventoryId, void* guid, int quantity, Hash removeReason) { return invoke <bool>(0x3E4E811480B3AE79, inventoryId, guid, quantity, removeReason); }
	static bool _INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(int inventoryId, Hash item, int quantity, Hash removeReason) { return invoke <bool>(0xB4158C8C9A3B5DCE, inventoryId, item, quantity, removeReason); }
	static bool _INVENTORY_MOVE_INVENTORY_ITEM(int inventoryId, void* guid1, void* guid2, Hash slotId, int quantity, void* outGuid) { return invoke <bool>(0xDCCAA7C3BFD88862, inventoryId, guid1, guid2, slotId, quantity, outGuid); }
	static bool _INVENTORY_SWAP_INVENTORY_ITEM(int inventoryId, void* guid1, void* guid2) { return invoke <bool>(0xF2753D691BCDA314, inventoryId, guid1, guid2); }
	static int _INVENTORY_CREATE_ITEM_COLLECTION(int inventoryId, const char* filterName, Hash slotId, int* size) { return invoke <int>(0x80D78BDC9D88EF07, inventoryId, filterName, slotId, size); }
	static int _INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(int inventoryId, void* filter, int* numInCollection) { return invoke <int>(0x640F890C3E5A3FFD, inventoryId, filter, numInCollection); }
	static bool _INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(int collectionId, int itemIndex, void* itemData) { return invoke <bool>(0x82FA24C3D3FCD9B7, collectionId, itemIndex, itemData); }
	static bool _INVENTORY_RELEASE_ITEM_COLLECTION(int collectionId) { return invoke <bool>(0x42A2F33A1942E865, collectionId); }
	static bool _INVENTORY_EQUIP_ITEM_WITH_GUID(int inventoryId, void* guid, bool bEquipped) { return invoke <bool>(0x734311E2852760D0, inventoryId, guid, bEquipped); }
	static bool _INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(int inventoryId, void* guid, Hash slotId, void* outGuid) { return invoke <bool>(0x22E590F108289A9D, inventoryId, guid, slotId, outGuid); }
	static bool _INVENTORY_DOES_ITEM_OWN_EQUIPMENT(int inventoryId, void* guid, Hash item) { return invoke <bool>(0x88B58B83A43A8CAB, inventoryId, guid, item); }
	static bool _0xD08685BA892DBFAB(int inventoryId, void* guid, int* p2, int* p3) { return invoke <bool>(0xD08685BA892DBFAB, inventoryId, guid, p2, p3); }
	static void _0x0349404A22736740(bool p0, int inventoryId, void* guid) { return invoke <void>(0x349404A22736740, p0, inventoryId, guid); }
	static void _INVENTORY_SET_INVENTORY_ITEM_WEATHER_EFFECTIVENESS(int inventoryId, void* guid, int weatherEffectiveness) { return invoke <void>(0x6D2F987736A42D4C, inventoryId, guid, weatherEffectiveness); }
	static void _INVENTORY_DISABLE_ITEM(int inventoryId, Hash item, Hash gtxReason) { return invoke <void>(0x766315A564594401, inventoryId, item, gtxReason); }
	static void _INVENTORY_ENABLE_ITEM(int inventoryId, Hash item) { return invoke <void>(0x6A564540FAC12211, inventoryId, item); }
	static bool _INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(int inventoryId, Hash item, bool p2) { return invoke <bool>(0x3D10D7179D7034AF, inventoryId, item, p2); }
	static bool _INVENTORY_SET_INVENTORY_ITEM_INSPECTION_ENABLED(int inventoryId, void* p1, bool enabled) { return invoke <bool>(0x227522FD59DDB7E8, inventoryId, p1, enabled); }
	static bool _INVENTORY_IS_ITEM_EXPIRED(void* itemGUID) { return invoke <bool>(0x137C77A2EC64536, itemGUID); }
	static int _INVENTORY_GET_ITEM_EXPIRY_TIME(void* itemGUID) { return invoke <int>(0x4A606C17276E1BCC, itemGUID); }
	static int _INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(int inventoryId, void* guid, bool p2) { return invoke <int>(0xC97E0D2302382211, inventoryId, guid, p2); }
	static int _INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(int inventoryId, Hash eInventoryItem, bool p2) { return invoke <int>(0xE787F05DFC977BDE, inventoryId, eInventoryItem, p2); }
	static bool _0xB1DD74A1F5536622(int inventoryId, void* itemGUID) { return invoke <bool>(0xB1DD74A1F5536622, inventoryId, itemGUID); }
	static int _INVENTORY_GET_CHILDREN_COUNT(int inventoryId, void* parentGuid) { return invoke <int>(0xE843D21A8E2498AA, inventoryId, parentGuid); }
	static int INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(int inventoryId, void* guid, Hash slotId) { return invoke <int>(0x33EE4B89F3AC545, inventoryId, guid, slotId); }
	static int _INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(int inventoryId, void* guid, Hash slotId, int p3, void* p4) { return invoke <int>(0xBE012571B25F5ACA, inventoryId, guid, slotId, p3, p4); }
	static bool _INVENTORY_FITS_SLOT_ID(Hash item, Hash slotId) { return invoke <bool>(0x780C5B9AE2819807, item, slotId); }
	static Hash _GET_DEFAULT_ITEM_SLOT_INFO(Hash item, Hash p1) { return invoke <Hash>(0x6452B1D357D81742, item, p1); }
	static bool _INVENTORY_GET_INVENTORY_ITEM_FIT_SLOT(Hash p0, void* p1, int p2) { return invoke <bool>(0xB991FE166FAF84FD, p0, p1, p2); }
	static bool _0x9AC53CB6907B4428(Hash item, void* p1, void* p2) { return invoke <bool>(0x9AC53CB6907B4428, item, p1, p2); }
	static Hash _0x9D21B185ABC2DBC4(Any data, const char* effects, bool p2, bool p3) { return invoke <Hash>(0x9D21B185ABC2DBC4, data, effects, p2, p3); }
	static void _0x75CFAC49301E134F(Hash databindingEntryId, bool p1, bool p2) { return invoke <void>(0x75CFAC49301E134F, databindingEntryId, p1, p2); }
	static Hash _0x9D21B185ABC2DBC5(Any data, const char* stats, int p2, int p3) { return invoke <Hash>(0x9D21B185ABC2DBC5, data, stats, p2, p3); }
	static void _0x75CFAC49301E134E(Any data, bool p1, Ped ped) { return invoke <void>(0x75CFAC49301E134E, data, p1, ped); }
	static Hash _0x46DB71883EE9D5AF(Any data, const char* stats, void* guid, Ped ped) { return invoke <Hash>(0x46DB71883EE9D5AF, data, stats, guid, ped); }
	static void _0x951847CEF3D829FF(Any p0, void* outGuid, Ped ped) { return invoke <void>(0x951847CEF3D829FF, p0, outGuid, ped); }
	static bool _0x6862E4D93F64CF01(int inventoryId, void* guid, Hash p2, void* p3) { return invoke <bool>(0x6862E4D93F64CF01, inventoryId, guid, p2, p3); }
	static void _SET_USE_MISSION_INVENTORY(bool toggle) { return invoke <void>(0x597F571DDEE3FFAC, toggle); }
	static void INVENTORY_DISABLE_MISSION_INVENTORY_PICKUPS() { return invoke <void>(0xE1F389F03DC83673); }
	static void _INVENTORY_USE_MISSION_INVENTORY(bool enable, bool mirrorTransactions) { return invoke <void>(0xA6AA9F56BC6CFF58, enable, mirrorTransactions); }
	static void INVENTORY_COPY_MP_INVENTORY_TO_MISSION_INVENTORY(bool p0, bool p1, bool bCopySatchelItems, bool bCopyEmotes, bool bCopyHorse, bool p5) { return invoke <void>(0x644CCB76A76CFBD6, p0, p1, bCopySatchelItems, bCopyEmotes, bCopyHorse, p5); }
	static void _INVENTORY_COPY_ITEM_TO_MISSION_INVENTORY(void* guid, bool p1) { return invoke <void>(0x3112ADB9D5F3426B, guid, p1); }
	static void _0xE36D4A38D28D9CFB(bool p0) { return invoke <void>(0xE36D4A38D28D9CFB, p0); }
	static bool _INVENTORY_USE_SP_BACKUP() { return invoke <bool>(0x7C7E4AB748EA3B07); }
	static bool _INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS() { return invoke <bool>(0xFC7563F482781A3D); }
	static void _INVENTORY_COPY_ITEM_TO_INVENTORY(int inventoryId, int inventoryIdCloned, void* p2, Any p3) { return invoke <void>(0xC04F47D488EF9EBA, inventoryId, inventoryIdCloned, p2, p3); }
	static void _0x9E58207B194488AC(Ped ped, int p1) { return invoke <void>(0x9E58207B194488AC, ped, p1); }
	static void _SET_ITEM_PROMPT_INFO_REQUEST(void* p0) { return invoke <void>(0xFD41D1D4350F6413, p0); }
	static void _0x9B4E793B1CB6550A() { return invoke <void>(0x9B4E793B1CB6550A); }
	static void _SET_CARRIABLE_CARRY_ACTION_PROMPT_OVERRIDE(void* data) { return invoke <void>(0xF666EF30F4F0AC4E, data); }
	static void _INVENTORY_ENABLE_WEAPONS(int inventoryId) { return invoke <void>(0xD5D72F1624F3BA7C, inventoryId); }
	static void _INVENTORY_DISABLE_WEAPONS(int inventoryId, Any p1) { return invoke <void>(0xE3A46370F70F3607, inventoryId, p1); }
	static void _0xE1F45A67A9F0DCBC(int inventoryId) { return invoke <void>(0xE1F45A67A9F0DCBC, inventoryId); }
	static void _0x6968CE7AC32F6788(int inventoryId) { return invoke <void>(0x6968CE7AC32F6788, inventoryId); }
	static int _INVENTORY_CREATE_ITEM_COLLECTION_2(int* collectionSize) { return invoke <int>(0x97A3646645727F42, collectionSize); }
	static int _INVENTORY_CREATE_SORTED_COLLECTION(int inventoryId, int p1, int* size) { return invoke <int>(0xBB7F968675B34B0C, inventoryId, p1, size); }
}

namespace ITEMDATABASE
{
	static bool _ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(Any p0, Any p1, Hash slotId) { return invoke <bool>(0x856FF92C57742AE5, p0, p1, slotId); }
	static int _ITEMDATABASE_GET_FITS_SLOT_COUNT(Any p0) { return invoke <int>(0x2970D1D6BFCF9B46, p0); }
	static bool _ITEMDATABASE_GET_FITS_SLOT_INFO(Any p0, Any p1, Any p2) { return invoke <bool>(0x77210C146CED5261, p0, p1, p2); }
	static int _ITEMDATABASE_GET_HAS_SLOT_COUNT(Any p0) { return invoke <int>(0x44915068579D7710, p0); }
	static bool _ITEMDATABASE_GET_HAS_SLOT_INFO(Any p0, Any p1, Any p2) { return invoke <bool>(0x8A9BD0DB7E8376CF, p0, p1, p2); }
	static bool ITEMDATABASE_FILLOUT_ITEM_BY_NAME(Any p0, Any p1) { return invoke <bool>(0x2A610BEE7D341CC4, p0, p1); }
	static bool ITEMDATABASE_FILLOUT_ITEM_INFO(Hash p0, void* p1) { return invoke <bool>(0xFE90ABBCBFDC13B2, p0, p1); }
	static bool _ITEMDATABASE_FILLOUT_ACQUIRE_COST(Any p0, Any p1, Any p2) { return invoke <bool>(0x74F7928816E4E181, p0, p1, p2); }
	static bool _ITEMDATABASE_FILLOUT_SELL_PRICE(Any p0, Any p1, Any p2) { return invoke <bool>(0x7A62A2EEDE1C3766, p0, p1, p2); }
	static bool _ITEMDATABASE_FILLOUT_SATCHEL_DATA(Any p0, Any p1) { return invoke <bool>(0x4776EFD78F75C23F, p0, p1); }
	static bool _ITEMDATABASE_FILLOUT_UI_DATA(Any p0, Any p1) { return invoke <bool>(0xB86F7CC2DC67AC60, p0, p1); }
	static bool _0x74C3B1093728D263(Any p0, Any p1) { return invoke <bool>(0x74C3B1093728D263, p0, p1); }
	static bool _ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(Any p0, Any p1) { return invoke <bool>(0x9379BE60DC55BBE6, p0, p1); }
	static bool ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Any p0, Any p1) { return invoke <bool>(0xCF2D360D27FD1ABF, p0, p1); }
	static bool _ITEMDATABASE_FILLOUT_TAG_DATA(Any p0, Any p1, Any p2, Any p3) { return invoke <bool>(0x5A11D6EEA17165B0, p0, p1, p2, p3); }
	static int _ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(Any p0) { return invoke <int>(0x1FDDAD392D04144, p0); }
	static bool _ITEMDATABASE_GET_ACQUIRE_COST(Any p0, Any p1, Any p2) { return invoke <bool>(0x6772A83C67A25775, p0, p1, p2); }
	static int _0xDEE7B3C76ED664BE(Hash p0, Hash costShop) { return invoke <int>(0xDEE7B3C76ED664BE, p0, costShop); }
	static bool _ITEMDATABASE_FILLOUT_ITEM(Hash p0, Hash costShop, int fillOutIndex, Any p3) { return invoke <bool>(0xAD73B614DF26CF8A, p0, costShop, fillOutIndex, p3); }
	static int _ITEMDATABASE_GET_AWARD_ACQUIRE_COST_TYPE(Any p0) { return invoke <int>(0x12DF9C58201DD19A, p0); }
	static bool _0x1FC25AEB5F76B38D(Any p0, int index, void* data) { return invoke <bool>(0x1FC25AEB5F76B38D, p0, index, data); }
	static int _0xF540239F9937033B(Any award, Hash cost) { return invoke <int>(0xF540239F9937033B, award, cost); }
	static bool _0xF27F01BBF5ACD3F3(Any award, Hash cost, int index, Any p3) { return invoke <bool>(0xF27F01BBF5ACD3F3, award, cost, index, p3); }
	static int _ITEMDATABASE_CREATE_ITEM_COLLECTION(void* p0, int* size, int comparisonType) { return invoke <int>(0x71EFA7999AE79408, p0, size, comparisonType); }
	static int _ITEMDATABASE_GET_COLLECTION_SIZE(int collectionId) { return invoke <int>(0xD389A2549C4EFB30, collectionId); }
	static bool _ITEMDATABASE_GET_COMPONENT_ITEM(int collectionId, int index, Hash* p2) { return invoke <bool>(0x8750F69A720C2E41, collectionId, index, p2); }
	static bool _ITEMDATABASE_RELEASE_ITEM_COLLECTION(int collectionId) { return invoke <bool>(0xCBB7B6EDFA933ADE, collectionId); }
	static bool _ITEMDATABASE_IS_INTRINSIC_ITEM(Any p0) { return invoke <bool>(0x337F88E3A063995E, p0); }
	static bool _ITEMDATABASE_IS_OVERPOWERED_ITEM(Any p0) { return invoke <bool>(0x337F88E3A063995F, p0); }
	static bool _ITEMDATABASE_IS_KEY_VALID(Any p0, Any p1) { return invoke <bool>(0x6D5D51B188333FD1, p0, p1); }
	static bool _0x537A0555F62CA01A(Hash p0, Any p1) { return invoke <bool>(0x537A0555F62CA01A, p0, p1); }
	static int _ITEMDATABASE_GET_BUNDLE_ID(Any p0) { return invoke <int>(0x891A45960B6B768A, p0); }
	static int _ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(Any p0, Any p1) { return invoke <int>(0x3332695B01015DF9, p0, p1); }
	static bool _ITEMDATABASE_GET_BUNDLE_ITEM_INFO(Any p0, Any p1, Any p2, Any p3) { return invoke <bool>(0x5D48A77E4B668B57, p0, p1, p2, p3); }
	static bool _ITEMDATABASE_IS_BUNDLE_VALID(Any p0, Any p1) { return invoke <bool>(0x4308812A6E9CA62E, p0, p1); }
	static int _0x799FCD53358ED5FA(Any bundle, Any p1) { return invoke <int>(0x799FCD53358ED5FA, bundle, p1); }
	static bool _0xC4146375D8A0B374(Any bundle, Any p1, int index, Any p3) { return invoke <bool>(0xC4146375D8A0B374, bundle, p1, index, p3); }
	static bool _0xA97EE5E4589FCF5A(Any p0, Any p1) { return invoke <bool>(0xA97EE5E4589FCF5A, p0, p1); }
	static int _0x7A35A72A692BE9DB(Any p0) { return invoke <int>(0x7A35A72A692BE9DB, p0); }
	static bool _0x3A0B667ABFF87F6E(Any p0, Any p1, Any p2) { return invoke <bool>(0x3A0B667ABFF87F6E, p0, p1, p2); }
	static int _0x388088BFF3681189(Any p0, Any p1) { return invoke <int>(0x388088BFF3681189, p0, p1); }
	static bool _ITEMDATABASE_FILLOUT_BUNDLE(Any p0, Any p1, Any p2, Any p3) { return invoke <bool>(0xB542632693D53408, p0, p1, p2, p3); }
	static bool _ITEMDATABASE_IS_SHOP_KEY_VALID(Any p0) { return invoke <bool>(0xB9507D8E1D8716, p0); }
	static int _ITEMDATABASE_GET_SHOP_INVENTORIES_ITEMS_COUNT(Any p0) { return invoke <int>(0xC568B1A0F17C7025, p0); }
	static bool _ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO(Any p0, Any p1, Any p2) { return invoke <bool>(0x4A79B41B4EB91F4E, p0, p1, p2); }
	static bool _ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_BY_KEY(Any p0, Any p1, Any p2) { return invoke <bool>(0xCFB06801F5099B25, p0, p1, p2); }
	static bool _ITEMDATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_GROUP_INFO(Any p0, Any p1, Any p2, Any p3) { return invoke <bool>(0x76C752D788A76813, p0, p1, p2, p3); }
	static bool _ITEMDATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_INFO(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <bool>(0xE0EA5C031AE5539F, p0, p1, p2, p3, p4); }
	static bool _0x17721003A66C72BF(Any p0, Any p1, Any p2) { return invoke <bool>(0x17721003A66C72BF, p0, p1, p2); }
	static bool _ITEMDATABASE_IS_SHOP_LAYOUT_KEY_VALID(Any p0) { return invoke <bool>(0x3AFE5182C45A84F6, p0); }
	static bool _ITEMDATABASE_GET_SHOP_LAYOUT_INFO(Any p0, Any p1) { return invoke <bool>(0x66A6D76B6BB999B4, p0, p1); }
	static bool _ITEMDATABASE_GET_SHOP_LAYOUT_ROOT_MENU_INFO(Any p0, Any p1, Any p2) { return invoke <bool>(0x86FCB565CCA0CFA7, p0, p1, p2); }
	static bool _ITEMDATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(Any p0, Any p1, Any p2) { return invoke <bool>(0xD66114469978B55B, p0, p1, p2); }
	static bool _ITEMDATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(Any p0, Any p1, Any p2, Any p3) { return invoke <bool>(0xF04247092F193B75, p0, p1, p2, p3); }
	static bool _ITEMDATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(Any p0, Any p1, Any p2, Any p3) { return invoke <bool>(0x9A60570657A7B635, p0, p1, p2, p3); }
	static bool _0xDBEADA0DF5F9AB9F(Any p0, int index, Any menuKey) { return invoke <bool>(0xDBEADA0DF5F9AB9F, p0, index, menuKey); }
	static bool _ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(Any p0, Any p1, Any p2) { return invoke <bool>(0xB347C100DF0C9B7F, p0, p1, p2); }
	static bool _ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <bool>(0xF32BEF578B3DBAE8, p0, p1, p2, p3, p4, p5); }
	static bool ITEMDATABASE_IS_BUYABLE_AWARD_VALID(Any p0) { return invoke <bool>(0x4CE753203FA42214, p0); }
	static bool _ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(Any p0, Any p1, Any p2, Any p3) { return invoke <bool>(0xB52E20F6767A09A2, p0, p1, p2, p3); }
	static bool _0xF8D09EF8CE61D7BF(Any p0, Any p1) { return invoke <bool>(0xF8D09EF8CE61D7BF, p0, p1); }
	static bool _ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(Any p0, Any p1) { return invoke <bool>(0x4EB37AAB79AB0C48, p0, p1); }
	static bool _ITEMDATABASE_FILLOUT_PRICE_MODIFIER_BY_KEY(Any p0, Any p1) { return invoke <bool>(0x40C5D95818823C94, p0, p1); }
	static int _ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(Any p0) { return invoke <int>(0x5AAAF40E9B224F5E, p0); }
	static Hash _ITEMDATABASE_GET_MODIFIED_PRICE(Any p0, Any p1) { return invoke <Hash>(0xCB92EC9C004732B4, p0, p1); }
	static int _ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(Any p0) { return invoke <int>(0x1289D8315235856D, p0); }
	static bool _ITEMDATABASE_FILLOUT_MODIFIER(Any p0, Any p1, Any p2) { return invoke <bool>(0x60614A0AB580A2B5, p0, p1, p2); }
	static bool _ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD(Hash award) { return invoke <bool>(0xEF254F1A4C08B7E6, award); }
	static int _ITEMDATABASE_GET_AWARD_ITEM_COUNT(Hash award) { return invoke <int>(0x3FAA928A79591761, award); }
	static int _0x48229CE0C7938237(Hash award) { return invoke <int>(0x48229CE0C7938237, award); }
	static bool _ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO(Hash award, int index, Hash* currency) { return invoke <bool>(0x121D2005DD64496B, award, index, currency); }
	static bool _0x8D029948CA29409B(Hash award, Any p1, Any p2) { return invoke <bool>(0x8D029948CA29409B, award, p1, p2); }
	static bool _ITEMDATABASE_GET_AWARD_COST_MODIFIERS(Any p0, Any p1) { return invoke <bool>(0xE81D0378A384E755, p0, p1); }
	static bool _0xD076DB9B96FAADF1(Any p0, Any p1) { return invoke <bool>(0xD076DB9B96FAADF1, p0, p1); }
	static bool _ITEMDATABASE_DOES_ITEM_HAVE_TAG(Hash item, Hash tag, Hash tagType) { return invoke <bool>(0xFF5FB5605AD56856, item, tag, tagType); }
	static bool _ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(Hash bundle, Hash tag, Hash tagType) { return invoke <bool>(0x99C6EA66DFE73757, bundle, tag, tagType); }
	static Hash _ITEMDATABASE_GET_ITEM_TAG_TYPE(Hash item, Hash tag) { return invoke <Hash>(0x6111B8F9413F413A, item, tag); }
	static int _0x8870895BA5ED9385(Any p0, Hash tagType, Any p2) { return invoke <int>(0x8870895BA5ED9385, p0, tagType, p2); }
	static int _ITEMDATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(Any p0) { return invoke <int>(0xCEC6A41E8910486A, p0); }
	static int _ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES(Any p0, Any p1) { return invoke <int>(0x49885D82A13EEAEA, p0, p1); }
	static Any _ITEMDATABASE_LOCALIZATION_GET_TYPE(Any p0, Any p1) { return invoke <Any>(0xCABF5D41D0073D4A, p0, p1); }
	static int _ITEMDATABASE_LOCALIZATION_GET_VALUE(Any p0, Hash label, Any p2) { return invoke <int>(0x9AE5610FDCED6EA7, p0, label, p2); }
	static int _ITEMDATABASE_GET_ITEM_PATHSET(int item, int p1) { return invoke <int>(0xF4452CE83118C738, item, p1); }
	static Hash _0xAA29A5F13B2C20B2(Any p0, Hash p1) { return invoke <Hash>(0xAA29A5F13B2C20B2, p0, p1); }
}

namespace ITEMSET
{
	static ItemSet CREATE_ITEMSET(bool autoClean) { return invoke <ItemSet>(0xA1AF16083320065A, autoClean); }
	static void DESTROY_ITEMSET(ItemSet itemSet) { return invoke <void>(0x712BC69F10549B92, itemSet); }
	static bool IS_ITEMSET_VALID(ItemSet itemSet) { return invoke <bool>(0xD30765D153EF5C76, itemSet); }
	static bool ADD_TO_ITEMSET(ScrHandle itemToAdd, ItemSet itemSetToAddTo) { return invoke <bool>(0xABE74510883C7950, itemToAdd, itemSetToAddTo); }
	static void REMOVE_FROM_ITEMSET(ScrHandle itemToRemove, ItemSet itemSetToRemoveFrom) { return invoke <void>(0xC5BAA432B429DC24, itemToRemove, itemSetToRemoveFrom); }
	static int GET_ITEMSET_SIZE(ItemSet itemSet) { return invoke <int>(0x55F2E375AC6018A9, itemSet); }
	static ScrHandle GET_INDEXED_ITEM_IN_ITEMSET(int indexInSet, ItemSet itemSet) { return invoke <ScrHandle>(0x275A2E2C0FAB7612, indexInSet, itemSet); }
	static Any GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET(int index, ItemSet itemset) { return invoke <Any>(0x9FC3CDB5CE815901, index, itemset); }
	static bool IS_IN_ITEMSET(ScrHandle objToCheck, ItemSet itemSet) { return invoke <bool>(0xD1503C2EE2FE688C, objToCheck, itemSet); }
	static void CLEAN_ITEMSET(ItemSet itemSet) { return invoke <void>(0x85F3A86CA9021FB0, itemSet); }
	static void _CLEAR_ITEMSET(ItemSet itemset) { return invoke <void>(0x20A4BF0E09BEE146, itemset); }
}

namespace LAW
{
	static void _REPORT_CRIME(Player player, Hash crimeType, int bounty, Entity entity, bool isKnownSuspect) { return invoke <void>(0xF60386770878A98F, player, crimeType, bounty, entity, isKnownSuspect); }
	static void SUPPRESS_CRIME_THIS_FRAME(Player player, Hash crimeType, int p2, int p3, int p4) { return invoke <void>(0x785177E4D57D7389, player, crimeType, p2, p3, p4); }
	static int NUM_CRIMES_SUPPRESSED(Player player, Hash crimeType) { return invoke <int>(0xC08E804C91F47C80, player, crimeType); }
	static Any _0xFFEBE5AA96BC2E4E(Ped ped, Hash crimeType, bool p2) { return invoke <Any>(0xFFEBE5AA96BC2E4E, ped, crimeType, p2); }
	static void _0x15ABD5004CAD2D99(int p0) { return invoke <void>(0x15ABD5004CAD2D99, p0); }
	static void _0xF611DE44AEB36A1D(Hash crimeType, bool p1) { return invoke <void>(0xF611DE44AEB36A1D, crimeType, p1); }
	static bool _0x3D2674828A4E6B3C() { return invoke <bool>(0x3D2674828A4E6B3C); }
	static void _0xC5EB2755FA25F1E9(bool p0) { return invoke <void>(0xC5EB2755FA25F1E9, p0); }
	static int GET_BOUNTY(Player player) { return invoke <int>(0x54310AAB97B92816, player); }
	static void ADD_BOUNTY(Player player, int itemValueAmount) { return invoke <void>(0xE3BDEED21BEB945, player, itemValueAmount); }
	static void SET_BOUNTY(Player player, int amount) { return invoke <void>(0x93A9D1F72DF0D19, player, amount); }
	static void CLEAR_BOUNTY(Player player) { return invoke <void>(0xC76F252371150D9A, player); }
	static int GET_WANTED_SCORE(Player player) { return invoke <int>(0xDD5FD601481F648B, player); }
	static void SET_WANTED_SCORE(Player player, int intensity) { return invoke <void>(0xA80FF73F772ACF6A, player, intensity); }
	static void CLEAR_WANTED_SCORE(Player player) { return invoke <void>(0x62B4A4A3396351D, player); }
	static void _0x331D349E0380B097(Any p0) { return invoke <void>(0x331D349E0380B097, p0); }
	static void _0x292AD61A33A7A485() { return invoke <void>(0x292AD61A33A7A485); }
	static void _0x07E8B8B20570271C(Player player) { return invoke <void>(0x7E8B8B20570271C, player); }
	static void _0x22741652985C84D0(Player player, Hash lawRegionHash) { return invoke <void>(0x22741652985C84D0, player, lawRegionHash); }
	static void _REPORT_PLAYER_LAW_DISPATCH_RESPONSE_OVERRIDE(Player player, Hash dispatchResponseHash) { return invoke <void>(0x9C4352134B2835FB, player, dispatchResponseHash); }
	static bool _0x9EF07CFBB19A9733() { return invoke <bool>(0x9EF07CFBB19A9733); }
	static void _SET_LAW_DISABLED(bool toggle) { return invoke <void>(0x8DE82BC774F3B862, toggle); }
	static void _FORCE_LAW_ON_LOCAL_PLAYER_IMMEDIATELY() { return invoke <void>(0x956510F8C36B5C64); }
	static void _SET_LAW_REGION(Player player, Hash lawRegionHash, Hash stateHash) { return invoke <void>(0x4752F68EB7F2D280, player, lawRegionHash, stateHash); }
	static void _0x5E6F375CA101C108(Player player, bool p1) { return invoke <void>(0x5E6F375CA101C108, player, p1); }
	static void _SET_LAW_RBS_VOLUME(Player player, Hash p1) { return invoke <void>(0x9BBDCB8DF789EBC1, player, p1); }
	static bool IS_LAW_INCIDENT_ACTIVE(Player player) { return invoke <bool>(0xAD401C63158ACBAA, player); }
	static Hash _0x148E7AC8141C9E64(Player player) { return invoke <Hash>(0x148E7AC8141C9E64, player); }
	static void _0xEDFC6C1FD1C964F5(Player player, Hash crimeType, int bounty, float p3, float p4, bool p5, float p6, float p7, Any p8) { return invoke <void>(0xEDFC6C1FD1C964F5, player, crimeType, bounty, p3, p4, p5, p6, p7, p8); }
	static bool _LAW_WITNESS_RESPONSE_TASK(Ped pedGroup1, Ped ped, Ped pedGroup2, float x, float y, float z, Hash crimeType) { return invoke <bool>(0xF0B67BAD53C35BD9, pedGroup1, ped, pedGroup2, x, y, z, crimeType); }
	static Any _0x018F30D762E62DF8(Ped ped, void* p1) { return invoke <Any>(0x18F30D762E62DF8, ped, p1); }
	static Any _0x318F0F9A4426CFA2(Ped ped, void* p1) { return invoke <Any>(0x318F0F9A4426CFA2, ped, p1); }
	static Any _0x95878B13E272EF1F(Entity entity, Ped ped, bool p2, float x, float y, float z, Hash crimeType) { return invoke <Any>(0x95878B13E272EF1F, entity, ped, p2, x, y, z, crimeType); }
	static void _ADD_WITNESS_RESPONSE(Player player, Hash crimeType, Ped pedGroup) { return invoke <void>(0x10827B5A0AAC56A7, player, crimeType, pedGroup); }
	static void _0xD7494DED50C6EF52(Player player, Hash crimeType, int p2) { return invoke <void>(0xD7494DED50C6EF52, player, crimeType, p2); }
	static bool ARE_WITNESSES_ACTIVE(Player player) { return invoke <bool>(0x69E181772886F48B, player); }
	static bool _ARE_WITNESSES_PENDING(Player player) { return invoke <bool>(0xBB6DE7D23C60626, player); }
	static bool _ARE_INVESTIGATORS_ACTIVE(Player player, bool areInvestigatorsActive, Any p2) { return invoke <bool>(0xF0FBFB9AB15F7734, player, areInvestigatorsActive, p2); }
	static void _0x522F74636DF10201(Player player, ItemSet itemSet) { return invoke <void>(0x522F74636DF10201, player, itemSet); }
	static void _0xDA1A9ADC4E3D4B16(ItemSet itemSet, bool p1, bool p2) { return invoke <void>(0xDA1A9ADC4E3D4B16, itemSet, p1, p2); }
	static void _ENABLE_DISPATCH_LAW(bool toggle) { return invoke <void>(0xC805EB785824F712, toggle); }
	static void _ENABLE_DISPATCH_LAW_2(bool toggle) { return invoke <void>(0x710448D44A64C213, toggle); }
	static bool _ARE_ANY_LAW_PEDS_INVESTIGATING() { return invoke <bool>(0xECE3C34B270428D5); }
	static bool _ARE_LAW_PEDS_ENABLED_FOR_TRAIN() { return invoke <bool>(0xA22C46F16359471C); }
	static void _0x82F11E1296996574(int p0) { return invoke <void>(0x82F11E1296996574, p0); }
	static void _0x3852237A3D9DF145(int p0) { return invoke <void>(0x3852237A3D9DF145, p0); }
	static bool _0x0EAF918F751F27BA(Ped ped) { return invoke <bool>(0xEAF918F751F27BA, ped); }
	static bool _0xC0DF161950FB101E(Ped ped) { return invoke <bool>(0xC0DF161950FB101E, ped); }
	static Any _0xE4D6E45F491A66CB(Player player, int p1) { return invoke <Any>(0xE4D6E45F491A66CB, player, p1); }
	static int _0xE9EB79CBF9C0F58A(Player player) { return invoke <int>(0xE9EB79CBF9C0F58A, player); }
	static void _0x21213B833EF4DAE7(Player player, Ped ped, Vector3* outCoords) { return invoke <void>(0x21213B833EF4DAE7, player, ped, outCoords); }
	static void _0x61B98367D93F012F(Player player) { return invoke <void>(0x61B98367D93F012F, player); }
	static void _0x6ABC50979655BEE7(Player player, Hash* crimeType, Any p2) { return invoke <void>(0x6ABC50979655BEE7, player, crimeType, p2); }
	static void _0x390710D2DAFA6BFF(Player player, bool p1) { return invoke <void>(0x390710D2DAFA6BFF, player, p1); }
	static int _GET_CRIME_BOUNTY_AMOUNT_BY_TYPE(Hash crimeType) { return invoke <int>(0x35E5E21F9159849C, crimeType); }
	static int _0xDAEFDFDB2AEECE37(Hash crimeType, Any p1) { return invoke <int>(0xDAEFDFDB2AEECE37, crimeType, p1); }
	static Hash _GET_HUD_PLAYER_CRIME_TYPE(Player player) { return invoke <Hash>(0x259CE340A8738814, player); }
	static int _0xE083BEDA81709891(Player player) { return invoke <int>(0xE083BEDA81709891, player); }
	static bool _0x89E005B1662F6E48(Player player, int p1, int p2) { return invoke <bool>(0x89E005B1662F6E48, player, p1, p2); }
	static bool _0x3738B784DDD35CC6(Player player, int p1, int p2) { return invoke <bool>(0x3738B784DDD35CC6, player, p1, p2); }
	static int _0x0BDFEBCF40A5F7E3(Hash crimeType) { return invoke <int>(0xBDFEBCF40A5F7E3, crimeType); }
	static void _SET_CUSTOM_LAW_DISPATCH_RESPONSE(Hash dispatchResponseHash) { return invoke <void>(0x9CF9A29972C298, dispatchResponseHash); }
	static Any _CREATE_LAW_DISPATCH_RESPONSE_FOR_COORDS(float x, float y, float z, Hash dispatchResponseHash) { return invoke <Any>(0x75CBF20BA47E4F89, x, y, z, dispatchResponseHash); }
	static void _SET_BOUNTY_HUNTER_PURSUIT_CLEARED() { return invoke <void>(0x55F37F5F3F2475E1); }
	static void _0xBD944A3D36E992DE() { return invoke <void>(0xBD944A3D36E992DE); }
	static void _0x987BE590FB9D41E5(bool p0) { return invoke <void>(0x987BE590FB9D41E5, p0); }
	static void _0xDCF12B89624AAC96(bool p0) { return invoke <void>(0xDCF12B89624AAC96, p0); }
	static void _0xDDCE8E960D1DE240(bool p0) { return invoke <void>(0xDDCE8E960D1DE240, p0); }
	static void _0xDEA083C16BB91345() { return invoke <void>(0xDEA083C16BB91345); }
	static void _0x9C8A2BF37E966464(Player player, ItemSet itemSet) { return invoke <void>(0x9C8A2BF37E966464, player, itemSet); }
	static bool _0x9D5C9A5A3321B128(Player player) { return invoke <bool>(0x9D5C9A5A3321B128, player); }
	static bool _0x0F230DE0DDBE3649(Player player) { return invoke <bool>(0xF230DE0DDBE3649, player); }
	static bool _0x9945A3E2528A02E8(Player player) { return invoke <bool>(0x9945A3E2528A02E8, player); }
	static float _GET_TIME_SINCE_LAST_SEEN_BY_LAW(Player player) { return invoke <float>(0x717DA2281DF90855, player); }
	static void _0x9B4C564BFA7CFF37(float p0) { return invoke <void>(0x9B4C564BFA7CFF37, p0); }
	static void _SET_ALLOW_DISABLED_LAW_RESPONSES(bool toggle) { return invoke <void>(0x4B52BF96E225D230, toggle); }
	static void RESET_WANTED_FOR_NEW_INCIDENT(Player player) { return invoke <void>(0x2728C77FBC4B9796, player); }
	static bool _0x856CE8FDE2416602(Ped ped) { return invoke <bool>(0x856CE8FDE2416602, ped); }
	static bool _0x7351DA734F989F4E(Entity entity) { return invoke <bool>(0x7351DA734F989F4E, entity); }
	static int _GET_BOUNTY_HUNTER_GLOBAL_COOLDOWN(Hash p0) { return invoke <int>(0x76CF93D4B416B288, p0); }
	static void _SET_BOUNTY_HUNTER_GLOBAL_COOLDOWN(Hash p0, int p1) { return invoke <void>(0xF19706B1F8FFA88F, p0, p1); }
	static void _0x2001687F9562FD9D(Any p0) { return invoke <void>(0x2001687F9562FD9D, p0); }
	static void _PAUSE_BOUNTY_HUNTER_COOLDOWN(Hash p0, bool p1, Any p2) { return invoke <void>(0xC61EDEBF16CD9668, p0, p1, p2); }
	static void _0xE9AC8466ABE484BB(bool p0, Any p1) { return invoke <void>(0xE9AC8466ABE484BB, p0, p1); }
	static bool _0x40851BCC33ACD9AB(Ped ped) { return invoke <bool>(0x40851BCC33ACD9AB, ped); }
	static bool _0xF46108C50A22B029() { return invoke <bool>(0xF46108C50A22B029); }
	static void _0x7803436E68C32B26() { return invoke <void>(0x7803436E68C32B26); }
	static void _0xC310239ACCCF5579() { return invoke <void>(0xC310239ACCCF5579); }
	static void _0x29CD4896ECB66C12() { return invoke <void>(0x29CD4896ECB66C12); }
	static void _0xE94B5E938619712E() { return invoke <void>(0xE94B5E938619712E); }
	static int _0x7FC667F6DDFBCDCC(Player player) { return invoke <int>(0x7FC667F6DDFBCDCC, player); }
	static void _0x9C5BD8C562565CE6(Hash* crimeType) { return invoke <void>(0x9C5BD8C562565CE6, crimeType); }
	static void _0xCBFB4951F2E3934C(Player player, void* data) { return invoke <void>(0xCBFB4951F2E3934C, player, data); }
	static void _SET_PED_LAW_BEHAVIOUR(Ped ped, int behaviour) { return invoke <void>(0x819ADD5EF1742F47, ped, behaviour); }
	static void _0x00DB0BC05E3FAA4E(Ped ped, int bitset) { return invoke <void>(0xDB0BC05E3FAA4E, ped, bitset); }
	static void _0x0C392DB374655176(float x, float y, float z, float p3, ItemSet itemSet) { return invoke <void>(0xC392DB374655176, x, y, z, p3, itemSet); }
	static Any _0xC687A23E166DCF68(void* p0) { return invoke <Any>(0xC687A23E166DCF68, p0); }
	static void _SET_DISPATCH_MULTIPLIER_OVERRIDE(float multiplier) { return invoke <void>(0x2BABE0B7D53136, multiplier); }
	static bool _0x26934083D3F2579C(Player player) { return invoke <bool>(0x26934083D3F2579C, player); }
	static bool GET_PLAYER_REGISTERED_CRIME(Player player, int p1, Hash* crimeType) { return invoke <bool>(0x532C5FDDB986EE5C, player, p1, crimeType); }
	static bool _0xB527099D1E1EED49(Player player, int p1, Hash* crimeType) { return invoke <bool>(0xB527099D1E1EED49, player, p1, crimeType); }
	static void CLEAR_PLAYER_PAST_CRIMES(Player player) { return invoke <void>(0xBCC6DC59E32A2BDC, player); }
	static void SET_PLAYER_ARRESTED_IN_REGION(Player player, Hash lawRegionHash) { return invoke <void>(0xE0FA74AA3CCE650B, player, lawRegionHash); }
	static void SET_PLAYER_TURNED_IN_BOUNTY_IN_REGION(Player player, Hash lawRegionHash) { return invoke <void>(0x73BAD7B2F2DB50DE, player, lawRegionHash); }
	static void _0xD6C0A8C7C0B2F82C(Player player, bool p1) { return invoke <void>(0xD6C0A8C7C0B2F82C, player, p1); }
	static void SET_LAW_SENSE_RANGE_MODIFIER(Player player, float range) { return invoke <void>(0xFEC85339AACA2A35, player, range); }
	static void _0x7EF2A2FE38D74456(int flag, bool p1) { return invoke <void>(0x7EF2A2FE38D74456, flag, p1); }
	static bool _0xC7DC5A0A7DF608CB(int flag) { return invoke <bool>(0xC7DC5A0A7DF608CB, flag); }
	static void SET_DISABLE_DISTURBANCE_CRIMES(Player player, bool p1) { return invoke <void>(0xDE5FAA741A781F73, player, p1); }
	static void SET_POSTPONE_DISTURBANCE_CRIMES_DURING_COMBAT(Player player, bool p1) { return invoke <void>(0x362086B911657B1A, player, p1); }
	static void _CREATE_GUARD_ZONE(const char* name) { return invoke <void>(0x8F9DE75680275C9F, name); }
	static void _REMOVE_GUARD_ZONE(const char* name) { return invoke <void>(0x67EBDD958835956C, name); }
	static void _0x9772395CC73E8D1F(Ped ped, const char* name) { return invoke <void>(0x9772395CC73E8D1F, ped, name); }
	static void _DISABLE_GUARD_ZONE(const char* name) { return invoke <void>(0x26D558692B25DD95, name); }
	static bool _0x0DBACA9C38C9A686(const char* name) { return invoke <bool>(0xDBACA9C38C9A686, name); }
	static bool _IS_GUARD_PED_INVESTIGATING(Ped ped) { return invoke <bool>(0xD743C4293F47AFAD, ped); }
	static bool _CREATE_GUARD_ZONE_FOR_ENTITY(const char* guardZoneName, Entity entity, float x, float y, float z) { return invoke <bool>(0xD4B77E862475ED3, guardZoneName, entity, x, y, z); }
	static void _SET_GUARD_ZONE_VOLUME_REGISTRATION_START(const char* name, Volume volume) { return invoke <void>(0x8C598A930F471938, name, volume); }
	static void _SET_GUARD_ZONE_VOLUME_RESTRICTED(const char* name, Volume volume) { return invoke <void>(0x35815F372D43E1E5, name, volume); }
	static void _SET_GUARD_ZONE_VOLUME_THREAT(const char* name, Volume volume) { return invoke <void>(0xA1B0E6301E2E02A6, name, volume); }
	static void _SET_GUARD_ZONE_VOLUME_WARNING(const char* name, Volume volume) { return invoke <void>(0xAD3E07C37A7C1ADC, name, volume); }
	static void _SET_GUARD_ZONE_VOLUME_REGISTRATION_END(const char* name, Volume volume) { return invoke <void>(0xA8A74AA79FB67159, name, volume); }
	static void _SET_GUARD_ZONE_POSITION(const char* name, float x, float y, float z) { return invoke <void>(0x7E7BF59F89FC6C6D, name, x, y, z); }
	static void _SET_GUARD_ZONE_POSITION_2(const char* name, float x, float y, float z) { return invoke <void>(0x2F9005E2EA4E5EE4, name, x, y, z); }
}

namespace LOCALIZATION
{
	static int LOCALIZATION_GET_SYSTEM_LANGUAGE() { return invoke <int>(0x3C1A05F86AE6ACB5); }
	static int GET_CURRENT_LANGUAGE() { return invoke <int>(0xDB917DA5C6835FCC); }
	static bool _DOES_CURRENT_LANGUAGE_SUPPORT_CONDENSED_STYLE() { return invoke <bool>(0x45D50415E4D885FF); }
	static int LOCALIZATION_GET_SYSTEM_DATE_TYPE() { return invoke <int>(0x76E30B799EBEEA0F); }
}

namespace MAP
{
	static Blip GET_BLIP_FROM_ENTITY(Entity entityIndex) { return invoke <Blip>(0x6D2C41A8BD6D6FD0, entityIndex); }
	static Blip GET_MAIN_PLAYER_BLIP_ID() { return invoke <Blip>(0x5CD2889B2B381D45); }
	static Blip _BLIP_ADD_FOR_STYLE(Hash styleHash) { return invoke <Blip>(0x3E593DF9C2962EC6, styleHash); }
	static Blip BLIP_ADD_FOR_COORDS(Hash blipHash, float x, float y, float z) { return invoke <Blip>(0x554D9D53F696D002, blipHash, x, y, z); }
	static Blip BLIP_ADD_FOR_ENTITY(Hash blipHash, Entity entity) { return invoke <Blip>(0x23F74C2FDA6E7C61, blipHash, entity); }
	static Blip BLIP_ADD_FOR_PICKUP_PLACEMENT(Hash blipHash, Pickup pickup) { return invoke <Blip>(0xA486008892065FB9, blipHash, pickup); }
	static Blip BLIP_ADD_FOR_RADIUS(Hash blipHash, float x, float y, float z, float radius) { return invoke <Blip>(0x45F13B7E0A15C880, blipHash, x, y, z, radius); }
	static Blip _BLIP_ADD_FOR_AREA(Hash blipHash, float x, float y, float z, float scaleX, float scaleY, float scaleZ, int p7) { return invoke <Blip>(0xEC174ADBCB611ECC, blipHash, x, y, z, scaleX, scaleY, scaleZ, p7); }
	static Blip _BLIP_ADD_FOR_VOLUME(Hash blipHash, Volume volume) { return invoke <Blip>(0xA6EF0C54A3443E70, blipHash, volume); }
	static bool _BLIP_SET_STYLE(Blip blip, Hash styleHash) { return invoke <bool>(0xEDD964B7984AC291, blip, styleHash); }
	static bool _BLIP_ADD_STYLE(Blip blip, Hash styleHash) { return invoke <bool>(0xBD62D98799A3DAF0, blip, styleHash); }
	static bool BLIP_ADD_MODIFIER(Blip blip, Hash modifierHash) { return invoke <bool>(0x662D364ABF16DE2F, blip, modifierHash); }
	static bool BLIP_REMOVE_MODIFIER(Blip blip, Hash modifierHash) { return invoke <bool>(0xB059D7BD3D78C16F, blip, modifierHash); }
	static void _0x250C75EB1728CC0D(Blip blip) { return invoke <void>(0x250C75EB1728CC0D, blip); }
	static void SET_BLIP_FLASH_TIMER(Blip blip, int blipType, Hash blipHash) { return invoke <void>(0x2FF4CF43B7209D1, blip, blipType, blipHash); }
	static bool SET_BLIP_FLASHES(Blip blip, int* p1, Hash* p2) { return invoke <bool>(0xDF2B55F717DDB10, blip, p1, p2); }
	static void TRIGGER_SONAR_BLIP(Hash typeHash, float VecCoorsX, float VecCoorsY, float VecCoorsZ) { return invoke <void>(0x72DD432F3CDFC0EE, typeHash, VecCoorsX, VecCoorsY, VecCoorsZ); }
	static void _TRIGGER_SONAR_BLIP_ON_ENTITY(Hash typeHash, Entity entity) { return invoke <void>(0xC7A2289A5C4D7C9, typeHash, entity); }
	static void ALLOW_SONAR_BLIPS(bool bSet) { return invoke <void>(0x6E6E64788C07D2E0, bSet); }
	static void SET_BLIP_COORDS(Blip BlipIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ) { return invoke <void>(0x4FF674F5E23D49CE, BlipIndex, VecCoorsX, VecCoorsY, VecCoorsZ); }
	static Vector3 GET_BLIP_COORDS(Blip BlipIndex) { return invoke <Vector3>(0x201C319797BDA603, BlipIndex); }
	static void SET_BLIP_SPRITE(Blip blip, Hash hash, bool p2) { return invoke <void>(0x74F74D3207ED525C, blip, hash, p2); }
	static Any _0x01B928CA2E198B01(Any p0) { return invoke <Any>(0x1B928CA2E198B01, p0); }
	static void SET_BLIP_NAME_FROM_TEXT_FILE(Blip blip, const char* pTextLabel) { return invoke <void>(0xA062D6D7C0B2C2C, blip, pTextLabel); }
	static void _SET_BLIP_NAME(Blip blip, const char* name) { return invoke <void>(0x9CB1A1623062F402, blip, name); }
	static void SET_BLIP_NAME_TO_PLAYER_NAME(Blip blip, Player PlayerIndex) { return invoke <void>(0x93DD5A31BC2B459, blip, PlayerIndex); }
	static void SET_BLIP_ROTATION(Blip blipIndex, int iDegrees) { return invoke <void>(0x6049966A94FBE706, blipIndex, iDegrees); }
	static void SET_BLIP_SCALE(Blip blip, float scale) { return invoke <void>(0xD38744167B2FA257, blip, scale); }
	static void REMOVE_BLIP(Blip* BlipId) { return invoke <void>(0xF2C3C9DA47AAA54A, BlipId); }
	static bool DOES_BLIP_EXIST(Blip blipIndex) { return invoke <bool>(0xCD82FA174080B3B1, blipIndex); }
	static bool _DOES_ENTITY_HAVE_BLIP(Entity entity) { return invoke <bool>(0x9FA00E2FC134A9D0, entity); }
	static void SET_RADAR_ZOOM(int ZoomValue) { return invoke <void>(0xCAF6489DA2C8DD9E, ZoomValue); }
	static void _ABANDON_BLIP(Blip blip) { return invoke <void>(0xDEEDE7C41742E011, blip); }
	static bool _IS_BLIP_ATTACHED_TO_ANY_ENTITY(Blip blip) { return invoke <bool>(0xE9F676788F8D5E1E, blip); }
	static bool IS_BLIP_ON_MINIMAP(Blip BlipIndex) { return invoke <bool>(0x46534526B9CD2D17, BlipIndex); }
	static Any FORCE_SONAR_BLIPS_THIS_FRAME() { return invoke <Any>(0xEE1C7BA69BB74B08); }
	static void SET_GPS_FLAGS(int iFlags, float fBlippedRouteDisplayDistance) { return invoke <void>(0x5DE61C90DDECFA2D, iFlags, fBlippedRouteDisplayDistance); }
	static void CLEAR_GPS_FLAGS() { return invoke <void>(0x4D3771237C79FF41); }
	static void SET_GPS_CUSTOM_ROUTE_RENDER(bool bOn, int iRouteWidthMiniMap, int iRouteWidthPauseMap) { return invoke <void>(0xF6CEF599FC470B33, bOn, iRouteWidthMiniMap, iRouteWidthPauseMap); }
	static void CLEAR_GPS_CUSTOM_ROUTE() { return invoke <void>(0x1EAA5674B4D181C5); }
	static void START_GPS_MULTI_ROUTE(Hash colorNameHash, bool bOnFoot, bool inVehicle) { return invoke <void>(0x3D3D15AF7BCAAF83, colorNameHash, bOnFoot, inVehicle); }
	static void ADD_POINT_TO_GPS_MULTI_ROUTE(float VecCoorsX, float VecCoorsY, float VecCoorsZ, bool p3) { return invoke <void>(0x64C59DD6834FA942, VecCoorsX, VecCoorsY, VecCoorsZ, p3); }
	static void SET_GPS_MULTI_ROUTE_RENDER(bool bOn) { return invoke <void>(0x4426D65E029A4DC0, bOn); }
	static void CLEAR_GPS_MULTI_ROUTE() { return invoke <void>(0x9E0AB9AAEE87CE28); }
	static void _START_GPS_CUSTOM_ROUTE_FROM_WAYPOINT_RECORDING_ROUTE(const char* waypointRecording, int point, int numPoints, Hash colorNameHash, bool p4, bool p5) { return invoke <void>(0x6B44F13D888F770D, waypointRecording, point, numPoints, colorNameHash, p4, p5); }
	static void CLEAR_GPS_PLAYER_WAYPOINT() { return invoke <void>(0x8FDC6F796E350D1); }
	static void _0xD3F58E9316B7FC2A(Any p0) { return invoke <void>(0xD3F58E9316B7FC2A, p0); }
	static void SET_WAYPOINT_OFF() { return invoke <void>(0xFA8C41E8020D3439); }
	static bool IS_WAYPOINT_ACTIVE() { return invoke <bool>(0x202B1BBFC6AB5EE4); }
	static Vector3 _GET_WAYPOINT_COORDS() { return invoke <Vector3>(0x29B30D07C3F7873B); }
	static bool _0xF08E42BFA46BDFF8(Any p0, Any p1) { return invoke <bool>(0xF08E42BFA46BDFF8, p0, p1); }
	static void _HIDE_ACTIVE_POINTS_OF_INTEREST() { return invoke <void>(0xA1B4052C2A3DCC1E); }
	static void _SHOW_ACTIVE_POINTS_OF_INTEREST() { return invoke <void>(0x3FBB838AEA30C1D8); }
	static Any _0xF47A1EB2A538A3A3() { return invoke <Any>(0xF47A1EB2A538A3A3); }
	static bool _FIND_CLOSEST_GPS_POSITION(float x, float y, float z, Vector3* outPosition) { return invoke <bool>(0x3FDA2B79AEEE351C, x, y, z, outPosition); }
	static void DISPLAY_RADAR(bool bDisplayRadarFlag) { return invoke <void>(0x1B3DA717B9AFF828, bDisplayRadarFlag); }
	static void _SET_RADAR_CONFIG_TYPE(Hash configHash, Hash p1) { return invoke <void>(0x9C113883487FD53C, configHash, p1); }
	static void _ADD_PROP_TO_MINIMAP(Hash minimapProp, float x, float y, float rotation, int p4) { return invoke <void>(0x1392105DA88BBFFB, minimapProp, x, y, rotation, p4); }
	static void _REMOVE_PROP_FROM_MINIMAP(Hash minimapProp) { return invoke <void>(0xE057FEA9A22EB3EE, minimapProp); }
	static void SET_RADAR_AS_EXTERIOR_THIS_FRAME() { return invoke <void>(0xA8EBBAE986FB5457); }
	static void SET_MINIMAP_HIDE_FOW(bool bHideFow) { return invoke <void>(0x4B8F743A4A6D2FF8, bHideFow); }
	static void _SET_FOW_UPDATE_PLAYER_OVERRIDE(bool toggle, Hash p1) { return invoke <void>(0x63E7279D04160477, toggle, p1); }
	static void _SET_MINIMAP_FOW_OVERRIDE_REVEAL_SCALE(float scale, Hash p1) { return invoke <void>(0xE5A7F70B7C0F3271, scale, p1); }
	static void _SET_MINIMAP_FOW_SHOULD_UPDATE(bool toggle, Hash p1) { return invoke <void>(0x632AA10BF7EA53D3, toggle, p1); }
	static void SET_MINIMAP_FOW_REVEAL_COORDINATE(float worldPOSX, float worldPOSY, float worldPOSZ, Hash p3) { return invoke <void>(0x73348402566ECB6E, worldPOSX, worldPOSY, worldPOSZ, p3); }
	static void SET_MINIMAP_FOW_REVEAL_VOLUME(Volume volume, Hash p1) { return invoke <void>(0x63CBBD6CA6F321F9, volume, p1); }
	static void RESET_MINIMAP_FOW(Hash hash) { return invoke <void>(0xEB3CB3386C775D72, hash); }
	static void _REVEAL_MINIMAP_FOW(Hash hash) { return invoke <void>(0xF8096DF9B87246E3, hash); }
	static void _SET_MINIMAP_ZONE(Hash zone) { return invoke <void>(0xA657EC9DBC6CC900, zone); }
	static void LOCK_MINIMAP_ANGLE(int iAngle) { return invoke <void>(0xBFD145EF819FB3A, iAngle); }
	static void UNLOCK_MINIMAP_ANGLE() { return invoke <void>(0x5373DE8E179BC2A0); }
	static void _MAP_ENABLE_REGION_BLIP(Hash regionHash, Hash styleHash) { return invoke <void>(0x563FCB6620523917, regionHash, styleHash); }
	static void _MAP_DISABLE_REGION_BLIP(Hash regionHash) { return invoke <void>(0x6786D7AFAC3162B3, regionHash); }
	static bool _MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(Hash regionHash, Hash styleHash) { return invoke <bool>(0xE38450DBCBC70E3D, regionHash, styleHash); }
	static void _MAP_DISCOVER_REGION(Hash discoveryHash) { return invoke <void>(0xD8C7162AB2E2AF45, discoveryHash); }
	static void _MAP_DISCOVERY_SET_ENABLED(Hash discoveryHash) { return invoke <void>(0xDA98246C7A3C2189, discoveryHash); }
	static bool _MAP_IS_DISCOVERY_ACTIVE(Hash discoveryHash) { return invoke <bool>(0x3F81EA4275D39D6F, discoveryHash); }
	static void _SET_PAUSEMAP_COORDS_WITH_RADIUS(float x, float y, float z, float radius) { return invoke <void>(0xE0884C184728C75B, x, y, z, radius); }
	static void _0x7C9F4CDF402CA82A() { return invoke <void>(0x7C9F4CDF402CA82A); }
	static void _0x44813684F72B563C(Entity entity, Any p1) { return invoke <void>(0x44813684F72B563C, entity, p1); }
	static void _0x97F6F158CC5B5CA2(Entity entity, Any p1) { return invoke <void>(0x97F6F158CC5B5CA2, entity, p1); }
	static void _0xBB68D4D3CA3DE402(Any p0, Any p1) { return invoke <void>(0xBB68D4D3CA3DE402, p0, p1); }
	static Any _0x3CB8859F04763C78(Any p0, Any p1) { return invoke <Any>(0x3CB8859F04763C78, p0, p1); }
	static void _0x7563CBCA99253D1A(Entity entity, Hash blip) { return invoke <void>(0x7563CBCA99253D1A, entity, blip); }
	static void _0x1726963E6049DB53(Any p0) { return invoke <void>(0x1726963E6049DB53, p0); }
}

namespace MINIGAME
{
	static void _0x6480723D3BE535B6(Any p0) { return invoke <void>(0x6480723D3BE535B6, p0); }
	static void _0x3DF7EE3A76185108() { return invoke <void>(0x3DF7EE3A76185108); }
	static Any _0xE1F365C4C8F259D8(Any p0, Any p1, Any p2) { return invoke <Any>(0xE1F365C4C8F259D8, p0, p1, p2); }
	static Any _0xE53A308AC35877A8() { return invoke <Any>(0xE53A308AC35877A8); }
	static Any _0x580F34C726387226(Any p0, Any p1) { return invoke <Any>(0x580F34C726387226, p0, p1); }
	static void _0x0876326238914A3F() { return invoke <void>(0x876326238914A3F); }
	static Any _0x3FFE60DD8A936551(Any p0, Any p1) { return invoke <Any>(0x3FFE60DD8A936551, p0, p1); }
	static void _0x18A0D48DF9211C07() { return invoke <void>(0x18A0D48DF9211C07); }
	static Any _MINIGAME_IS_CONNECTED_TO_SERVER(Any p0) { return invoke <Any>(0x2A0C4736AC5AF0CE, p0); }
	static Any _0x39654E1F68B78287() { return invoke <Any>(0x39654E1F68B78287); }
	static Any _0x3EECAADAB0D9FE29() { return invoke <Any>(0x3EECAADAB0D9FE29); }
	static Any _0xD39D32EB3B52DD83(Any p0) { return invoke <Any>(0xD39D32EB3B52DD83, p0); }
	static bool _MINIGAME_IS_SEAT_OCCUPIED(Any p0) { return invoke <bool>(0x8593A8CB0ED2C3B4, p0); }
	static bool _MINIGAME_REQUEST_SEAT_AT_TABLE(void* data) { return invoke <bool>(0xF6AC6085D8D6C004, data); }
	static Any _MINIGAME_LEAVE_TABLE(Any p0) { return invoke <Any>(0xF5446E47941E654C, p0); }
	static Any _MINIGAME_GET_NEXT_EVENT_TYPE() { return invoke <Any>(0x578907F59BA01B6C); }
	static Any _MINIGAME_GET_NEXT_EVENT(Any p0, Any p1) { return invoke <Any>(0xDF728C5AE137FC13, p0, p1); }
	static void _MINIGAME_POP_NEXT_EVENT() { return invoke <void>(0x833E03BAEBADC4B0); }
	static Any _0x3B31732FADE5BAF3() { return invoke <Any>(0x3B31732FADE5BAF3); }
	static Any _0x578907F59BA01B6D(Any p0) { return invoke <Any>(0x578907F59BA01B6D, p0); }
	static Any _0xDF728C5AE137FC14(Any p0, Any p1, Any p2) { return invoke <Any>(0xDF728C5AE137FC14, p0, p1, p2); }
	static Any _MINIGAME_IS_REQUEST_PENDING(Any p0) { return invoke <Any>(0x9105A4A2556FA937, p0); }
	static Any _0x644439B5387EE57E(Any p0, Any p1) { return invoke <Any>(0x644439B5387EE57E, p0, p1); }
	static Any _0x15E90B6A993017AA() { return invoke <Any>(0x15E90B6A993017AA); }
	static Any _0x10342CC82E8356E9(Any p0, Any p1) { return invoke <Any>(0x10342CC82E8356E9, p0, p1); }
	static Any _0x32A7C216344D623B(Any p0, Any p1, Any p2) { return invoke <Any>(0x32A7C216344D623B, p0, p1, p2); }
	static Any _0xEC819D612038EF4B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke <Any>(0xEC819D612038EF4B, p0, p1, p2, p3, p4, p5, p6, p7); }
	static Any _POKER_GET_GAME_SETTINGS_FOR_ID(Any p0) { return invoke <Any>(0x2D20E12E1990D584, p0); }
	static Any _POKER_BUY_IN(Any p0, Any p1) { return invoke <Any>(0xB4D610EA5A1FDE74, p0, p1); }
	static Any _POKER_CALL(Any p0, Any p1) { return invoke <Any>(0x8DED681B161EBD78, p0, p1); }
	static Any _POKER_CHECK(Any p0, Any p1) { return invoke <Any>(0x49A045628D9B1B86, p0, p1); }
	static Any _POKER_FOLD(Any p0) { return invoke <Any>(0x3DFAB7D9BB45B5BE, p0); }
	static Any _POKER_RAISE(Any p0, Any p1) { return invoke <Any>(0xECCF45A79A17BB96, p0, p1); }
	static Any _POKER_REVEAL(Any p0) { return invoke <Any>(0x2F2131DB0A8B02DC, p0); }
	static void _0x58521E6DCDE97D74(Any p0, Any p1, Any p2) { return invoke <void>(0x58521E6DCDE97D74, p0, p1, p2); }
	static void _0xF6DE98516FD3AC9B() { return invoke <void>(0xF6DE98516FD3AC9B); }
	static Any _0x3F4FD4BED07AB8C4(Any p0) { return invoke <Any>(0x3F4FD4BED07AB8C4, p0); }
	static Any _0x3AE451860F03CA8A(Any p0, Any p1) { return invoke <Any>(0x3AE451860F03CA8A, p0, p1); }
	static Any _0x012027C28F421F46(Any p0, Any p1) { return invoke <Any>(0x12027C28F421F46, p0, p1); }
	static void _0x455ECCA0715C507F() { return invoke <void>(0x455ECCA0715C507F); }
	static Any _DOMINOES_BUY_IN(Any p0) { return invoke <Any>(0x399E6CD12FC8CA89, p0); }
	static Any _DOMINOES_PLACE_DOMINO(Any p0, Any p1) { return invoke <Any>(0xB79A29B33BF29BA5, p0, p1); }
	static Any _DOMINOES_REQUEST_VALID_PLACEMENTS(Any p0) { return invoke <Any>(0xE26AEE7E67D9E21D, p0); }
	static Any _0xA2DB3C6270C122E3(Any p0, Any p1) { return invoke <Any>(0xA2DB3C6270C122E3, p0, p1); }
	static Any _0x398066F893149856(Any p0, Any p1, Any p2) { return invoke <Any>(0x398066F893149856, p0, p1, p2); }
	static Any _0xBEA7D3CB47E1479C() { return invoke <Any>(0xBEA7D3CB47E1479C); }
	static Any _0x910B088E51A511AC() { return invoke <Any>(0x910B088E51A511AC); }
	static Any _0x9DD95B405AB4983E(Any p0, Any p1) { return invoke <Any>(0x9DD95B405AB4983E, p0, p1); }
}

namespace MISC
{
	static int GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(int stackSize) { return invoke <int>(0x40DC2907A9697EF7, stackSize); }
	static int _GET_NUMBER_OF_INSTRUCTIONS() { return invoke <int>(0x72904D3D62AF5839); }
	static int _GET_MAX_NUM_INSTRUCTIONS() { return invoke <int>(0xC43CD2668B204419); }
	static bool IS_MAG_DEMO_1_ACTIVE() { return invoke <bool>(0x5FC9357C26DAEFCE); }
	static void SET_RANDOM_SEED(int NewSeed) { return invoke <void>(0x5CD7A49104AFCB6B, NewSeed); }
	static void SET_TIME_SCALE(float fNewTimeScale) { return invoke <void>(0x9682AF6050854856, fNewTimeScale); }
	static void SET_MISSION_FLAG(bool MissionFlagValue) { return invoke <void>(0x36694B456BE80D0A, MissionFlagValue); }
	static bool GET_MISSION_FLAG() { return invoke <bool>(0xB15CD1CF58771DE1); }
	static void _0x5801BE2DF2AF07EC(Any p0) { return invoke <void>(0x5801BE2DF2AF07EC, p0); }
	static void SET_RANDOM_EVENT_FLAG(bool bThisScriptIsARandomEvent) { return invoke <void>(0xB1ADCCC4150C6473, bThisScriptIsARandomEvent); }
	static bool GET_RANDOM_EVENT_FLAG() { return invoke <bool>(0x924D54E5698AE3E0); }
	static void _0x9BF2C0C568C61641(Any p0) { return invoke <void>(0x9BF2C0C568C61641, p0); }
	static void ACTIVITY_FEED_CREATE(const char* CaptionString, const char* CondensedCaptionString) { return invoke <void>(0xCC7FC854B956A128, CaptionString, CondensedCaptionString); }
	static void ACTIVITY_FEED_ADD_SUBSTRING_TO_CAPTION(const char* SubString) { return invoke <void>(0x9935F76407C32539, SubString); }
	static void _0xFF252E2BAFB7330F(Any p0) { return invoke <void>(0xFF252E2BAFB7330F, p0); }
	static void ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE(const char* commandLineString, const char* labelString) { return invoke <void>(0x91D657230BC208D2, commandLineString, labelString); }
	static void ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE_ADD(const char* commandLineString) { return invoke <void>(0x1694A053DFB61A34, commandLineString); }
	static Any _0xAF530E56505D1BD6(Any p0) { return invoke <Any>(0xAF530E56505D1BD6, p0); }
	static void ACTIVITY_FEED_POST() { return invoke <void>(0xB16FC7B364D86585); }
	static const char* _0xF81C53561D15F330() { return invoke <const char*>(0xF81C53561D15F330); }
	static void _0x1096603B519C905F(const char* name) { return invoke <void>(0x1096603B519C905F, name); }
	static void _0xCC3EDC5614B03F61(int p0) { return invoke <void>(0xCC3EDC5614B03F61, p0); }
	static void INFORM_CODE_OF_CONTENT_ID_OF_CURRENT_UGC_MISSION(const char* ContentIdString) { return invoke <void>(0x708DF841B8F27AA2, ContentIdString); }
	static void _0xDA4D8EB04E8E2928(Any p0) { return invoke <void>(0xDA4D8EB04E8E2928, p0); }
	static void _0xB08C4FA25BC29DB9(Any p0) { return invoke <void>(0xB08C4FA25BC29DB9, p0); }
	static Hash _GET_PREV_WEATHER_TYPE_HASH_NAME() { return invoke <Hash>(0x4BEB42AEBCA732E9); }
	static Hash _GET_NEXT_WEATHER_TYPE_HASH_NAME() { return invoke <Hash>(0x51021D36F62AAA83); }
	static void _0x0730E518486DEEC3(Any p0) { return invoke <void>(0x730E518486DEEC3, p0); }
	static void SET_WEATHER_TYPE(Hash weatherType, bool p1, bool p2, bool transition, float transitionTime, bool p5) { return invoke <void>(0x59174F1AFE095B5A, weatherType, p1, p2, transition, transitionTime, p5); }
	static void _SET_WEATHER_TYPE_2(Hash weatherType, int p1, int p2, int p3, bool p4) { return invoke <void>(0x2C6A07AF9AEDABD8, weatherType, p1, p2, p3, p4); }
	static int _GET_RANDOM_WEATHER_TYPE_INDEX() { return invoke <int>(0x7F4CE164D9A11DFE); }
	static Hash _GET_RANDOM_WEATHER_TYPE() { return invoke <Hash>(0x1359C181BC625503); }
	static void SET_RANDOM_WEATHER_TYPE(bool p0, bool p1) { return invoke <void>(0x6E5A7FBEECAB3C72, p0, p1); }
	static void CLEAR_WEATHER_TYPE_PERSIST() { return invoke <void>(0xD85DFE5C131E4AE9); }
	static void _CLEAR_WEATHER_TYPE_PERSIST_OVERTIME(int milliseconds) { return invoke <void>(0xCE7690C0A0D1C36D, milliseconds); }
	static void GET_CURR_WEATHER_STATE(Hash* prevTypeHashName, Hash* nextTypeHashName, float* interpVal) { return invoke <void>(0xAC679B2342F14F2, prevTypeHashName, nextTypeHashName, interpVal); }
	static void SET_CURR_WEATHER_STATE(Hash prevTypeHashName, Hash nextTypeHashName, float interpVal, bool enabled) { return invoke <void>(0xFA3E3CA8A1DE6D5D, prevTypeHashName, nextTypeHashName, interpVal, enabled); }
	static void _SET_WEATHER_TYPE_FROZEN(bool toggle) { return invoke <void>(0xD74ACDF7DB8114AF, toggle); }
	static void _GET_FORCED_WEATHER(Hash* weather, Hash* p1) { return invoke <void>(0xDD560ABEF5D3784C, weather, p1); }
	static void _0x2916B30DC6C41179(Hash weatherType) { return invoke <void>(0x2916B30DC6C41179, weatherType); }
	static void _0xD3F943B88F55376A(Hash weatherType) { return invoke <void>(0xD3F943B88F55376A, weatherType); }
	static void _0x243CEDE8F916B994() { return invoke <void>(0x243CEDE8F916B994); }
	static void _SET_OVERRIDE_WEATHER(Hash weatherType) { return invoke <void>(0xBE83CAE8ED77A94F, weatherType); }
	static void CLEAR_OVERRIDE_WEATHER() { return invoke <void>(0x80A398F16FFE3CC3); }
	static void _SET_WEATHER_VARIATION(const char* weatherType, const char* variation) { return invoke <void>(0x3373779BAF7CAF48, weatherType, variation); }
	static void _CLEAR_WEATHER_VARIATION(const char* weatherType, bool p1) { return invoke <void>(0xE71C80FA4EC8147, weatherType, p1); }
	static void WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(float value) { return invoke <void>(0x55123D5A7D9D3C42, value); }
	static void WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(float value) { return invoke <void>(0xF06C5B66DE20B2B8, value); }
	static float _GET_TEMPERATURE_AT_COORDS(float x, float y, float z) { return invoke <float>(0xB98B78C3768AF6E0, x, y, z); }
	static void SET_WIND_SPEED(float WindSpeed) { return invoke <void>(0xD00C2D82DC04A99F, WindSpeed); }
	static float GET_WIND_SPEED() { return invoke <float>(0xFFB7E74E041150A4); }
	static void SET_WIND_DIRECTION(float WindDir) { return invoke <void>(0xB56C4F5F57A45600, WindDir); }
	static Vector3 GET_WIND_DIRECTION() { return invoke <Vector3>(0xF703E82F3FE14A5F); }
	static void SET_RAIN(float RainVal) { return invoke <void>(0x193DFC0526830FD6, RainVal); }
	static float GET_RAIN_LEVEL() { return invoke <float>(0x931B5F4CC130224B); }
	static void _0x745808BB01CEC6B9(float p0) { return invoke <void>(0x745808BB01CEC6B9, p0); }
	static void _SET_SNOW_LEVEL(float level) { return invoke <void>(0xF6BEE7E80EC5CA40, level); }
	static float GET_SNOW_LEVEL() { return invoke <float>(0x1E5D727041BE1709); }
	static void FORCE_LIGHTNING_FLASH() { return invoke <void>(0x369DB5B2510FA080); }
	static void _FORCE_LIGHTNING_FLASH_AT_COORDS(float x, float y, float z, float p3) { return invoke <void>(0x67943537D179597C, x, y, z, p3); }
	static void _0xA9342743B634A462(Any p0) { return invoke <void>(0xA9342743B634A462, p0); }
	static int GET_GAME_TIMER() { return invoke <int>(0x4F67E8ECA7D3F667); }
	static int _GET_GAME_TIMER_NON_SCALED_CLIPPED() { return invoke <int>(0x483B8C542103AD72); }
	static int GET_SYSTEM_TIME() { return invoke <int>(0xBE7F225417E35A7C); }
	static int GET_NUMBER_OF_MICROSECONDS_SINCE_LAST_CALL() { return invoke <int>(0xB0CE5E5ED8BB3581); }
	static int GET_SCRIPT_TIME_WITHIN_FRAME_IN_MICROSECONDS() { return invoke <int>(0x63219768C586667C); }
	static void RESET_SCRIPT_TIME_WITHIN_FRAME() { return invoke <void>(0x1411A7CBC3A6EB7B); }
	static float GET_FRAME_TIME() { return invoke <float>(0x5E72022914CE3C38); }
	static float GET_SYSTEM_TIME_STEP() { return invoke <float>(0x3F3172FEAE3AFE1C); }
	static int GET_FRAME_COUNT() { return invoke <int>(0x77DFA958FCF100C1); }
	static void _0x6BED40493A1AFDB8(void* p0, float p1) { return invoke <void>(0x6BED40493A1AFDB8, p0, p1); }
	static float _READ_INT_AS_FLOAT(int value) { return invoke <float>(0xD2C9126410DFA1B2, value); }
	static float GET_RANDOM_FLOAT_IN_RANGE(float MinFloat, float MaxFloat) { return invoke <float>(0xE29F927A961F8AAA, MinFloat, MaxFloat); }
	static int GET_RANDOM_INT_IN_RANGE(int MinInt, int MaxInt) { return invoke <int>(0xD53343AA4FB7DD28, MinInt, MaxInt); }
	static bool GET_GROUND_Z_FOR_3D_COORD(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float* ReturnZ, bool p4) { return invoke <bool>(0x24FA4267BB8D2431, VecCoorsX, VecCoorsY, VecCoorsZ, ReturnZ, p4); }
	static bool GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float* ReturnZ, Vector3* ReturnNormal) { return invoke <bool>(0x2A29CA9A6319E6AB, VecCoorsX, VecCoorsY, VecCoorsZ, ReturnZ, ReturnNormal); }
	static Any _0xBBE5B63EFFB08E68(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <Any>(0xBBE5B63EFFB08E68, p0, p1, p2, p3, p4, p5, p6); }
	static float ASIN(float X) { return invoke <float>(0x6E3C15D296C15583, X); }
	static float ACOS(float X) { return invoke <float>(0x586690F0176DC575, X); }
	static float TAN(float X) { return invoke <float>(0x8C13DB96497B7ABF, X); }
	static float ATAN(float X) { return invoke <float>(0x503054DED0B78027, X); }
	static float ATAN2(float Y, float X) { return invoke <float>(0x965B220A066E3F07, Y, X); }
	static float GET_DISTANCE_BETWEEN_COORDS(float VecFirstCoorsX, float VecFirstCoorsY, float VecFirstCoorsZ, float VecSecondCoorsX, float VecSecondCoorsY, float VecSecondCoorsZ, bool bCheck3d) { return invoke <float>(0xBE7F4E3CDBAFB28, VecFirstCoorsX, VecFirstCoorsY, VecFirstCoorsZ, VecSecondCoorsX, VecSecondCoorsY, VecSecondCoorsZ, bCheck3d); }
	static float GET_ANGLE_BETWEEN_2D_VECTORS(float X1, float Y1, float X2, float Y2) { return invoke <float>(0xD0DFE1C486097BBB, X1, Y1, X2, Y2); }
	static float GET_HEADING_FROM_VECTOR_2D(float VecX, float VecY) { return invoke <float>(0x38D5202FF9271C62, VecX, VecY); }
	static Vector3 GET_CLOSEST_POINT_ON_LINE(float rPointToTestX, float rPointToTestY, float rPointToTestZ, float vStartX, float vStartY, float vStartZ, float vEndX, float vEndY, float vEndZ, bool bClampToLine) { return invoke <Vector3>(0x83ACC65D9ACEC5EF, rPointToTestX, rPointToTestY, rPointToTestZ, vStartX, vStartY, vStartZ, vEndX, vEndY, vEndZ, bClampToLine); }
	static bool GET_LINE_PLANE_INTERSECTION(float vscrPntAX, float vscrPntAY, float vscrPntAZ, float vscrPntBX, float vscrPntBY, float vscrPntBZ, float vscrPntOnPlaneX, float vscrPntOnPlaneY, float vscrPntOnPlaneZ, float vscrNormalX, float vscrNormalY, float vscrNormalZ, float* fTValue) { return invoke <bool>(0xAB6A04CEC428258B, vscrPntAX, vscrPntAY, vscrPntAZ, vscrPntBX, vscrPntBY, vscrPntBZ, vscrPntOnPlaneX, vscrPntOnPlaneY, vscrPntOnPlaneZ, vscrNormalX, vscrNormalY, vscrNormalZ, fTValue); }
	static void SET_BIT(int* Variable, int BitIndex) { return invoke <void>(0xF73FBE4845C43B5B, Variable, BitIndex); }
	static void CLEAR_BIT(int* Variable, int BitIndex) { return invoke <void>(0x7D1D4A3602B6AD4E, Variable, BitIndex); }
	static bool _IS_BIT_FLAG_SET(void* bitFlags, int flag) { return invoke <bool>(0x8F4F050054005C27, bitFlags, flag); }
	static bool _IS_ANY_BIT_FLAG_SET(void* bitFlags) { return invoke <bool>(0x80E9C316EF84DD81, bitFlags); }
	static int _COUNT_BIT_FLAGS(void* bitFlags) { return invoke <int>(0xE704838F36F93B7B, bitFlags); }
	static void _SET_BIT_FLAG(void* bitFlags, int flag) { return invoke <void>(0xE84AAC1B22A73E99, bitFlags, flag); }
	static void _CLEAR_BIT_FLAG(void* bitFlags, int flag) { return invoke <void>(0xB909149F2BB5F6DA, bitFlags, flag); }
	static void _CLEAR_ALL_BIT_FLAGS(void* bitFlags) { return invoke <void>(0xD2D74F89DF844A50, bitFlags); }
	static Hash GET_HASH_KEY(const char* InputString) { return invoke <Hash>(0xFD340785ADF8CFB7, InputString); }
	static float _GET_EASING_CURVE_VALUE(float t, float b, float d, int easingCurveType) { return invoke <float>(0xEF50E344A8F93784, t, b, d, easingCurveType); }
	static bool IS_POSITION_OCCUPIED(float VecCenterCoorsX, float VecCenterCoorsY, float VecCenterCoorsZ, float radius, bool bBuildingFlag, bool bVehicleFlag, bool bPedFlag, bool bObjectFlag, bool bDummyFlag, Entity ExcludeEntityIndex, bool bCheckAlive) { return invoke <bool>(0x825CA3ED43831015, VecCenterCoorsX, VecCenterCoorsY, VecCenterCoorsZ, radius, bBuildingFlag, bVehicleFlag, bPedFlag, bObjectFlag, bDummyFlag, ExcludeEntityIndex, bCheckAlive); }
	static void CLEAR_AREA(float VecCentreCoorsX, float VecCentreCoorsY, float VecCentreCoorsZ, float Radius, int iFlags) { return invoke <void>(0x3B882A96EA77D5B1, VecCentreCoorsX, VecCentreCoorsY, VecCentreCoorsZ, Radius, iFlags); }
	static void _CLEAR_VOLUME_AREA(Volume volume, int flag) { return invoke <void>(0x2FCD528A397E5C88, volume, flag); }
	static void CLEAR_ANGLED_AREA_OF_VEHICLES(float vecAngledAreaPoint1X, float vecAngledAreaPoint1Y, float vecAngledAreaPoint1Z, float vecAngledAreaPoint2X, float vecAngledAreaPoint2Y, float vecAngledAreaPoint2Z, float DistanceOfOppositeFace, int iFlags) { return invoke <void>(0xA4D83115C1E02F8A, vecAngledAreaPoint1X, vecAngledAreaPoint1Y, vecAngledAreaPoint1Z, vecAngledAreaPoint2X, vecAngledAreaPoint2Y, vecAngledAreaPoint2Z, DistanceOfOppositeFace, iFlags); }
	static void SET_CREDITS_ACTIVE(bool bActive) { return invoke <void>(0xD37BECF862DA726F, bActive); }
	static void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { return invoke <void>(0x3D0EAC6385DD6100); }
	static void PAUSE_DEATH_ARREST_RESTART(bool bPaused) { return invoke <void>(0x66AB6B6C7E72F393, bPaused); }
	static void IGNORE_NEXT_RESTART(bool bIgnore) { return invoke <void>(0x6C9FF40FF1B69F8F, bIgnore); }
	static void SET_FADE_IN_AFTER_DEATH_ARREST(bool bDoFade) { return invoke <void>(0xDF3B5846DE5904AF, bDoFade); }
	static void SET_FADE_IN_AFTER_LOAD(bool bFadeIn) { return invoke <void>(0xAC806C4CAB973517, bFadeIn); }
	static bool OVERRIDE_SAVE_HOUSE(bool bOverride, float vecCoordsX, float vecCoordsY, float vecCoordsZ, float fHeading, bool bIsAnAutosave, Vector3* vecReturnCoords, float* fReturnHeading) { return invoke <bool>(0xB2C69E11A37B5AF0, bOverride, vecCoordsX, vecCoordsY, vecCoordsZ, fHeading, bIsAnAutosave, vecReturnCoords, fReturnHeading); }
	static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float VecStartCoorsX, float VecStartCoorsY, float VecStartCoorsZ, float VecEndCoorsX, float VecEndCoorsY, float VecEndCoorsZ, int DamageCaused, bool bPerfectAccuracy, Hash Weapon, Ped PedIndex, bool isAudible, bool isInvisible, float InitialVelocity, bool p13) { return invoke <void>(0x867654CBC7606F2C, VecStartCoorsX, VecStartCoorsY, VecStartCoorsZ, VecEndCoorsX, VecEndCoorsY, VecEndCoorsZ, DamageCaused, bPerfectAccuracy, Weapon, PedIndex, isAudible, isInvisible, InitialVelocity, p13); }
	static void FIRE_SINGLE_BULLET(void* args) { return invoke <void>(0xCBC9A21F6A2A679C, args); }
	static void GET_MODEL_DIMENSIONS(Hash ModelHashKey, Vector3* returnMin, Vector3* returnMax) { return invoke <void>(0xDCB8DDD5D054A7E7, ModelHashKey, returnMin, returnMax); }
	static bool IS_BIT_SET(int address, int offset) { return invoke <bool>(0x4ED6CFDFE8D4131A, address, offset); }
	static void _0x0A487CC74A517FB5(Any p0) { return invoke <void>(0xA487CC74A517FB5, p0); }
	static bool IS_MINIGAME_IN_PROGRESS() { return invoke <bool>(0xF4D8BCD052E7EA1B); }
	static bool SHOULD_USE_METRIC_MEASUREMENTS() { return invoke <bool>(0x4FB556ACEFA93098); }
	static bool _SHOULD_USE_METRIC_MEASUREMENTS_2() { return invoke <bool>(0x58BCDC75BA52110A); }
	static bool _SHOULD_USE_METRIC_TEMPERATURE() { return invoke <bool>(0xFF4AAF3275BAAB4F); }
	static bool _SHOULD_USE_METRIC_WEIGHT() { return invoke <bool>(0x8F24157FEDB85EA2); }
	static bool _SHOULD_USE_24_HOUR_CLOCK() { return invoke <bool>(0x177CF20345F44DD); }
	static int COMPARE_STRINGS(const char* String1, const char* String2, bool bCaseSensitive, int numberOfCharactersToCompare) { return invoke <int>(0xBFBB74A15EFC149B, String1, String2, bCaseSensitive, numberOfCharactersToCompare); }
	static int ABSI(int n) { return invoke <int>(0xC214D5B8A38C828, n); }
	static float ABSF(float n) { return invoke <float>(0x134549B388167CBF, n); }
	static bool IS_PROJECTILE_IN_AREA(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, bool bIsPlayer) { return invoke <bool>(0x5B0061EFDFC8941, VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, bIsPlayer); }
	static bool IS_PROJECTILE_TYPE_IN_AREA(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, Hash WeaponType, bool bIsPlayer) { return invoke <bool>(0x4965FB9E14235C7, VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, WeaponType, bIsPlayer); }
	static bool IS_PROJECTILE_TYPE_IN_ANGLED_AREA(float vecAngledAreaPoint1X, float vecAngledAreaPoint1Y, float vecAngledAreaPoint1Z, float vecAngledAreaPoint2X, float vecAngledAreaPoint2Y, float vecAngledAreaPoint2Z, float DistanceOfOppositeFace, Hash WeaponType, bool bIsPlayer) { return invoke <bool>(0x928431F4133CD3D4, vecAngledAreaPoint1X, vecAngledAreaPoint1Y, vecAngledAreaPoint1Z, vecAngledAreaPoint2X, vecAngledAreaPoint2Y, vecAngledAreaPoint2Z, DistanceOfOppositeFace, WeaponType, bIsPlayer); }
	static bool IS_PROJECTILE_TYPE_WITHIN_DISTANCE(float vecCoorsX, float vecCoorsY, float vecCoorsZ, Hash WeaponType, float distance, bool bIsPlayer) { return invoke <bool>(0xF51C9BAAD9ED64C4, vecCoorsX, vecCoorsY, vecCoorsZ, WeaponType, distance, bIsPlayer); }
	static bool GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(Ped ped, Hash WeaponType, float distance, Vector3* positionOut, bool needsToBeStationary, bool mustBeOwnedByThisPed) { return invoke <bool>(0xD73C960A681052DF, ped, WeaponType, distance, positionOut, needsToBeStationary, mustBeOwnedByThisPed); }
	static bool GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(Ped ped, Hash WeaponType, float distance, Vector3* positionOut, Entity* EntityIndex, bool needsToBeStationary, bool mustBeOwnedByThisPed) { return invoke <bool>(0x9578986A6105A6AD, ped, WeaponType, distance, positionOut, EntityIndex, needsToBeStationary, mustBeOwnedByThisPed); }
	static bool IS_BULLET_IN_ANGLED_AREA(float VecPos1X, float VecPos1Y, float VecPos1Z, float VecPos2X, float VecPos2Y, float VecPos2Z, float AreaWidth, bool bIsPlayer) { return invoke <bool>(0x9D09D8493747CF02, VecPos1X, VecPos1Y, VecPos1Z, VecPos2X, VecPos2Y, VecPos2Z, AreaWidth, bIsPlayer); }
	static bool IS_BULLET_IN_AREA(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float Radius, bool bIsPlayer) { return invoke <bool>(0xC652FD308772D79E, VecCoorsX, VecCoorsY, VecCoorsZ, Radius, bIsPlayer); }
	static bool IS_BULLET_IN_BOX(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, bool bIsPlayer) { return invoke <bool>(0xC128137C52152741, VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, bIsPlayer); }
	static bool HAS_BULLET_IMPACTED_IN_AREA(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float Radius, bool bIsPlayer, bool bEntryOnly) { return invoke <bool>(0xC153E5BCCF411814, VecCoorsX, VecCoorsY, VecCoorsZ, Radius, bIsPlayer, bEntryOnly); }
	static bool HAS_BULLET_IMPACTED_IN_BOX(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, bool bIsPlayer, bool bEntryOnly) { return invoke <bool>(0x3B6A4C05FB2B33AC, VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, bIsPlayer, bEntryOnly); }
	static Any _0x7A76104CC2CC69E8(Entity entity, int p1, int p2) { return invoke <Any>(0x7A76104CC2CC69E8, entity, p1, p2); }
	static Any _0xDC416CA762BC4F43(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <Any>(0xDC416CA762BC4F43, p0, p1, p2, p3, p4, p5); }
	static Any _0x970339EFA4FDE518(Any p0, Any p1, Any p2) { return invoke <Any>(0x970339EFA4FDE518, p0, p1, p2); }
	static bool IS_ORBIS_VERSION() { return invoke <bool>(0x88CFAE250D3E0C71); }
	static bool IS_DURANGO_VERSION() { return invoke <bool>(0xD1CCC2A2639D325F); }
	static bool IS_PC_VERSION() { return invoke <bool>(0xB0FB6CFAA5A1C833); }
	static bool IS_STADIA_VERSION() { return invoke <bool>(0x268AB8420A9E4ED7); }
	static bool IS_STRING_NULL(const char* StringToTest) { return invoke <bool>(0x602102324604D96B, StringToTest); }
	static bool IS_STRING_NULL_OR_EMPTY(const char* StringToTest) { return invoke <bool>(0x2CF12F9ACF18F048, StringToTest); }
	static bool IS_STRING_NULL_OR_EMPTY_OR_SPACES(const char* string) { return invoke <bool>(0x375F5870A7B8BEC1, string); }
	static bool ARE_STRINGS_EQUAL(const char* String1, const char* String2) { return invoke <bool>(0xD3852F22AB713A1F, String1, String2); }
	static bool _DOES_STRING_EXIST_IN_STRING(const char* string1, const char* string2) { return invoke <bool>(0x9382D5D43D2AA6FF, string1, string2); }
	static void _0x3C3C7B1B5EC08764() { return invoke <void>(0x3C3C7B1B5EC08764); }
	static Any _0x94E8CA3DEE952789(Any p0, Any p1) { return invoke <Any>(0x94E8CA3DEE952789, p0, p1); }
	static Any _0x5B4A8121A47D844D(Any p0) { return invoke <Any>(0x5B4A8121A47D844D, p0); }
	static bool STRING_TO_INT(const char* StringToConvert, int* ReturnInteger) { return invoke <bool>(0xF2DD2298B3AF23E2, StringToConvert, ReturnInteger); }
	static void _INT_TO_STRING(int value, const char* format, char* buffer) { return invoke <void>(0xCF11C0CEB40C401B, value, format, buffer); }
	static void _0x74ACA66484CEBAF0(Any p0) { return invoke <void>(0x74ACA66484CEBAF0, p0); }
	static void _0x49C44FE78A135A1D(Any p0) { return invoke <void>(0x49C44FE78A135A1D, p0); }
	static void _0xF650DCF5D6F312C1(Any p0) { return invoke <void>(0xF650DCF5D6F312C1, p0); }
	static const char* _GET_STRING_FROM_FLOAT(float value, int digits) { return invoke <const char*>(0x2B6846401D68E563, value, digits); }
	static const char* _GET_STRING_FROM_VECTOR(float x, float y, float z) { return invoke <const char*>(0x6C4DBF553885F9EB, x, y, z); }
	static const char* _GET_STRING_FROM_BOOL(bool value) { return invoke <const char*>(0xF216F74101968DB0, value); }
	template<typename... Args> static const char* _CREATE_VAR_STRING(int flags, Args... args) { return invoke<const char*>(0xFA925AC00EB830B9, flags, args...); } // 0xFA925AC00EB830B9 b1207
	static char* CREATE_STRING(int flags, char* textTemplate, char* str) { return invoke<char*>(0xFA925AC00EB830B9, flags, textTemplate, str); }
	static const char* _CREATE_COLOR_STRING(int rgb) { return invoke <const char*>(0xBCC2CFADEA1AEA6C, rgb); }
	static void SET_BITS_IN_RANGE(int* VariableToChange, int StartBit, int EndBit, int NewValue) { return invoke <void>(0x324DC1CEF57F31E6, VariableToChange, StartBit, EndBit, NewValue); }
	static int GET_BITS_IN_RANGE(int VariableToRead, int StartBit, int EndBit) { return invoke <int>(0x68E1352AF48F905D, VariableToRead, StartBit, EndBit); }
	static void SET_GAME_PAUSED(bool bDoPause) { return invoke <void>(0xFAEC088D28B1DE4A, bDoPause); }
	static void SET_THIS_SCRIPT_CAN_BE_PAUSED(bool bScriptCanBePaused) { return invoke <void>(0x3215376E79F6EA18, bScriptCanBePaused); }
	static void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(bool bCanRemoveBlipsCreatedByOtherScripts) { return invoke <void>(0x8ABD939C2E5D00ED, bCanRemoveBlipsCreatedByOtherScripts); }
	static void SET_CHEAT_ACTIVE(int cheatId) { return invoke <void>(0xD4958E8CF0DE0DD0, cheatId); }
	static void _0xB711EB4BC8D06013() { return invoke <void>(0xB711EB4BC8D06013); }
	static void POPULATE_NOW() { return invoke <void>(0xEA6DC3A8ADD2005F); }
	static bool IS_GAME_SESSION_STATE_MACHINE_IDLE() { return invoke <bool>(0xF9E7DBB39080640B); }
	static bool _QUEUE_SAVEGAME_OPERATION(int p0) { return invoke <bool>(0x279B0696DA4657EB, p0); }
	static int _GET_STATUS_OF_SAVEGAME_OPERATION(int p0) { return invoke <int>(0x1B065A2BF7953815, p0); }
	static Any _0x6C7B68D3CE60E8DE(Any p0) { return invoke <Any>(0x6C7B68D3CE60E8DE, p0); }
	static Any _0x627B68D9CE6EE8DE(Any p0) { return invoke <Any>(0x627B68D9CE6EE8DE, p0); }
	static Any _0x7CF96F1250EF3221(Any p0) { return invoke <Any>(0x7CF96F1250EF3221, p0); }
	static void COPY_SCRIPT_STRUCT(void* DestStruct, void* SourceStruct, int Size) { return invoke <void>(0xF7AC7DC0DEE7C9BE, DestStruct, SourceStruct, Size); }
	static void ENABLE_DISPATCH_SERVICE(int dispatchType, bool bEnable) { return invoke <void>(0x50E52637EF70EF77, dispatchType, bEnable); }
	static void BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(int dispatchType, bool bBlock) { return invoke <void>(0x66947E61A44DE2C6, dispatchType, bBlock); }
	static bool CREATE_INCIDENT(int dispatchType, float vLocationX, float vLocationY, float vLocationZ, int iNumUnits, float fTime, int* incidentIndex, Hash iOverrideRelGroupHash, int assassinsLevel) { return invoke <bool>(0x3F892CAF67444AE7, dispatchType, vLocationX, vLocationY, vLocationZ, iNumUnits, fTime, incidentIndex, iOverrideRelGroupHash, assassinsLevel); }
	static bool _CREATE_INCIDENT_WITH_ENTITIES(int dispatchService, float x, float y, float z, ItemSet itemSet, float radius, int* outIncidentID) { return invoke <bool>(0xAB3D3F45436DB1D8, dispatchService, x, y, z, itemSet, radius, outIncidentID); }
	static void DELETE_INCIDENT(int incidentIndex) { return invoke <void>(0x5CFD0F0D6AAE0AEE, incidentIndex); }
	static bool IS_INCIDENT_VALID(int incidentIndex) { return invoke <bool>(0x39F2B1BAD412246A, incidentIndex); }
	static void _SET_INCIDENT_UNK(int incidentId) { return invoke <void>(0x9617B6E5F6537B63, incidentId); }
	static int ADD_POP_MULTIPLIER_AREA(float minWSX, float minWSY, float minWSZ, float maxWSX, float maxWSY, float maxWSZ, float pedDensity, float trafficDensity, bool localOnly, bool bCameraGlobalMultiplier) { return invoke <int>(0x5EBDA1A3B8CB5EF7, minWSX, minWSY, minWSZ, maxWSX, maxWSY, maxWSZ, pedDensity, trafficDensity, localOnly, bCameraGlobalMultiplier); }
	static bool DOES_POP_MULTIPLIER_AREA_EXIST(int index) { return invoke <bool>(0x3BA619C81A646B3, index); }
	static void REMOVE_POP_MULTIPLIER_AREA(int index, bool localOnly) { return invoke <void>(0x88CB484364EFB37A, index, localOnly); }
	static int _ADD_POP_MULTIPLIER_VOLUME(Volume volume, float pedDensity, float vehicleDensity, bool p3, bool p4) { return invoke <int>(0x3233C4EC0514C7EC, volume, pedDensity, vehicleDensity, p3, p4); }
	static bool _DOES_POP_MULTIPLIER_AREA_EXIST_FOR_VOLUME(Volume volume) { return invoke <bool>(0x39D6DACE323A20B6, volume); }
	static void _REMOVE_POP_MULTIPLIER_AREA_FOR_VOLUME(Volume volume, int p1) { return invoke <void>(0xBD090F5B1DB82189, volume, p1); }
	static void _0xF569E33FB72ED28E() { return invoke <void>(0xF569E33FB72ED28E); }
	static void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { return invoke <void>(0xC7817264BC4B6377); }
	static void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(float fIdealSpawnDistance) { return invoke <void>(0xEAB6823B82FBD283, fIdealSpawnDistance); }
	static void _RESET_DISPATCH_MIN_SPAWN_DISTANCE() { return invoke <void>(0x96498D922D8D0D0A); }
	static void _SET_DISPATCH_MIN_SPAWN_DISTANCE(float minSpawnDistance) { return invoke <void>(0x27A1B170AA8AF84C, minSpawnDistance); }
	static void _RESET_DISPATCH_MAX_SPAWN_DISTANCE() { return invoke <void>(0x54EC7B6BC72BAD69); }
	static void _SET_DISPATCH_MAX_SPAWN_DISTANCE(float maxSpawnDistance) { return invoke <void>(0x89314FB3463E28DE, maxSpawnDistance); }
	static void _0x4B0501A468B749F8() { return invoke <void>(0x4B0501A468B749F8); }
	static void _0x6BCF7B5CD338281A(Any p0, Any p1, Any p2) { return invoke <void>(0x6BCF7B5CD338281A, p0, p1, p2); }
	static Any _ADD_DISPATCH_SPAWN_BLOCKING_AREA(Volume volume) { return invoke <Any>(0xA2D5A26208421426, volume); }
	static void REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(int iIndex) { return invoke <void>(0x49F751F6868DDC5B, iIndex); }
	static void RESET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN() { return invoke <void>(0xEF42F56F69877125); }
	static void ADD_TACTICAL_NAV_MESH_POINT(float vPositionX, float vPositionY, float vPositionZ, int p3) { return invoke <void>(0xE4EE55E63FA9AF45, vPositionX, vPositionY, vPositionZ, p3); }
	static void CLEAR_TACTICAL_NAV_MESH_POINTS() { return invoke <void>(0xD93B6516C6878267); }
	static void DISPLAY_ONSCREEN_KEYBOARD(int keyboardTypeFlag, const char* prompt, const char* description, const char* initialValue1, const char* initialValue2, const char* initialValue3, const char* initialValue4, int maxLength) { return invoke <void>(0x44131118D8DB3CD, keyboardTypeFlag, prompt, description, initialValue1, initialValue2, initialValue3, initialValue4, maxLength); }
	static int UPDATE_ONSCREEN_KEYBOARD() { return invoke <int>(0x37DF360F235A3893); }
	static const char* GET_ONSCREEN_KEYBOARD_RESULT() { return invoke <const char*>(0xAFB4CF58A4A292B1); }
	static void CANCEL_ONSCREEN_KEYBOARD() { return invoke <void>(0x58A39BE597CE99CD); }
	static void NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(int fontBitField) { return invoke <void>(0x5CB71EAA1429A358, fontBitField); }
	static void ACTION_MANAGER_ENABLE_ACTION(Hash iActionHash, bool bEnable) { return invoke <void>(0x7ACF124C12A2B045, iActionHash, bEnable); }
	static bool ACTION_MANAGER_IS_ACTION_ENABLED(Hash hash) { return invoke <bool>(0xFD0759658268FD8E, hash); }
	static int GET_REAL_WORLD_TIME() { return invoke <int>(0x2E036F0480B8BF02); }
	static void SET_SUPER_JUMP_THIS_FRAME(Ped PedIndex) { return invoke <void>(0xB3E9BE963F10C445, PedIndex); }
	static void SCRIPT_RACE_INIT(int numCheckpoints, int numLaps, int numPlayers, int localPlayerIndex) { return invoke <void>(0x8AE059F47158417E, numCheckpoints, numLaps, numPlayers, localPlayerIndex); }
	static void SCRIPT_RACE_SHUTDOWN() { return invoke <void>(0x334CE0DA4FAF330C); }
	static void SCRIPT_RACE_PLAYER_HIT_CHECKPOINT(Ped pedIndex, int checkpoint, int lap, int time) { return invoke <void>(0xBA62B4D80FA66BD6, pedIndex, checkpoint, lap, time); }
	static bool SCRIPT_RACE_GET_PLAYER_SPLIT_TIME(Ped pedIndex, int* time, int* position) { return invoke <bool>(0x769E848C66E3C2BB, pedIndex, time, position); }
	static void START_END_USER_BENCHMARK() { return invoke <void>(0x29D1F6DF864A094E); }
	static void STOP_END_USER_BENCHMARK() { return invoke <void>(0xB89AEC71AFF2B599); }
	static void RESET_END_USER_BENCHMARK() { return invoke <void>(0xECBABD0307FB216F); }
	static void SAVE_END_USER_BENCHMARK() { return invoke <void>(0xF4743E2ECC02B3DA); }
	static bool UI_STARTED_END_USER_BENCHMARK() { return invoke <bool>(0x4FFA0386A6216113); }
	static int GET_BENCHMARK_ITERATIONS() { return invoke <int>(0x22FC52CF470CC98D); }
	static int GET_BENCHMARK_PASS() { return invoke <int>(0x9297DACF3A2CDFF7); }
	static Any _0xDC057B86FC157031() { return invoke <Any>(0xDC057B86FC157031); }
	static void _0x9A252AA23D7098F2() { return invoke <void>(0x9A252AA23D7098F2); }
	static bool _DOES_ITEM_HAVE_VALID_BASE(ScrHandle item) { return invoke <bool>(0xBDC6E364C9C78178, item); }
	static int _GET_ITEM_TYPE(ScrHandle handle) { return invoke <int>(0xDC8D2FF478DF9553, handle); }
	static bool _IS_BASE_A_PERSISTENT_CHARACTER(ScrHandle handle) { return invoke <bool>(0x716F17F8A0419F95, handle); }
	static bool _IS_BASE_A_COVER_POINT(ScrHandle handle) { return invoke <bool>(0xFEC1D4B5C82C176F, handle); }
	static void _0x553D67295DDD2309(Entity entity) { return invoke <void>(0x553D67295DDD2309, entity); }
	static Volume _GET_VOLUME_FROM_INDEXED_ITEM(ScrHandle item) { return invoke <Volume>(0xF18AF483DF70BBDE, item); }
	static Entity _GET_ENTITY_FROM_ITEM(ScrHandle item) { return invoke <Entity>(0xEE04C0AFD4EFAF0E, item); }
	static Ped _GET_PED_FROM_INDEXED_ITEM(ScrHandle item) { return invoke <Ped>(0x3FFB15534067DCD4, item); }
	static Vehicle _GET_VEHICLE_FROM_INDEXED_ITEM(ScrHandle item) { return invoke <Vehicle>(0xE578C8AE173719B3, item); }
	static Object _GET_OBJECT_FROM_INDEXED_ITEM(ScrHandle item) { return invoke <Object>(0x18013392501CE5DC, item); }
	static Any _0x33982467B1E349EF(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <Any>(0x33982467B1E349EF, p0, p1, p2, p3, p4, p5, p6); }
	static Any _0x8314FC2013ECE2DA(Any p0, Any p1, Any p2) { return invoke <Any>(0x8314FC2013ECE2DA, p0, p1, p2); }
	static void _0x4D5C9CC7E7E23E09() { return invoke <void>(0x4D5C9CC7E7E23E09); }
	static bool REGISTER_INTERACTION_LOCKON_PROMPT(Entity entity, const char* text, float radius, float p3, int flag, float p5, float p6, Prompt prompt, bool p8, int p9) { return invoke <bool>(0x870708A6E147A9AD, entity, text, radius, p3, flag, p5, p6, prompt, p8, p9); }
	static bool UNREGISTER_INTERACTION_LOCKON_PROMPT(Entity entity) { return invoke <bool>(0xE98D55C5983F2509, entity); }
	static void _0xFC6ECB9170145ECE() { return invoke <void>(0xFC6ECB9170145ECE); }
	static Any _0x35165C658077CD0B() { return invoke <Any>(0x35165C658077CD0B); }
	static bool _0x4B101DBCC9482F2D(Ped ped) { return invoke <bool>(0x4B101DBCC9482F2D, ped); }
	static bool _IS_MISSION_CREATOR_ACTIVE() { return invoke <bool>(0xF236C84C6ADFCB2F); }
	static void _0xA3A8926951471C82() { return invoke <void>(0xA3A8926951471C82); }
	static void _CREATE_AI_MEMORY(void* args, int aiMemoryType) { return invoke <void>(0x88BC5F4AEF77FC4E, args, aiMemoryType); }
	static bool _GET_AI_PED_DOES_HAVE_EVENT_MEMORY(void* args, int p1) { return invoke <bool>(0xFDF38E2B711BF78E, args, p1); }
	static void _0xEB946B9E579729AD(Ped ped, Any p1) { return invoke <void>(0xEB946B9E579729AD, ped, p1); }
	static void _SET_AI_MEMORY_REACTIONS_ENABLED(bool enabled) { return invoke <void>(0x6AC4AF46A6B8DFB2, enabled); }
	static Any _0x8DB104CCEBCD58C5(Any p0, Any p1) { return invoke <Any>(0x8DB104CCEBCD58C5, p0, p1); }
	static void _0x68319452C5064ABA(Any p0, Any p1) { return invoke <void>(0x68319452C5064ABA, p0, p1); }
	static void _0xDE2C3B74D2B3705C(Any p0, Any p1) { return invoke <void>(0xDE2C3B74D2B3705C, p0, p1); }
	static void _0x49F3241C28EBBFBC(int p0) { return invoke <void>(0x49F3241C28EBBFBC, p0); }
	static void _0x183672FE838A661B(void* data) { return invoke <void>(0x183672FE838A661B, data); }
	static void _0x38C0C9CAE1544500(Hash p0) { return invoke <void>(0x38C0C9CAE1544500, p0); }
	static void _0x154340E87D8CC178(Any p0) { return invoke <void>(0x154340E87D8CC178, p0); }
	static void _0x94FCADCF9F0C368E(Any p0) { return invoke <void>(0x94FCADCF9F0C368E, p0); }
	static bool _0x0D0AE5081F88CFE1(Hash p0) { return invoke <bool>(0xD0AE5081F88CFE1, p0); }
	static void _0xAF3A84C7DE6A1DC5(Any p0, Any p1) { return invoke <void>(0xAF3A84C7DE6A1DC5, p0, p1); }
	static void _LOOT_TABLES_GET_INFO(Ped ped, bool p1, bool p2, Hash lootTableKey, void* p4, Any p5) { return invoke <void>(0x48E4D50F87A96AA5, ped, p1, p2, lootTableKey, p4, p5); }
	static Any _0xB1F6665AA54DCD5C(Any p0) { return invoke <Any>(0xB1F6665AA54DCD5C, p0); }
	static Any _0x8BB99B85444544D9(Any p0, Any p1) { return invoke <Any>(0x8BB99B85444544D9, p0, p1); }
	static Any _0x6F02B5E50511721E(Any p0) { return invoke <Any>(0x6F02B5E50511721E, p0); }
	static Any _0xCC1BAF72D571DB8D(Any p0, Any p1, Any p2) { return invoke <Any>(0xCC1BAF72D571DB8D, p0, p1, p2); }
	static bool _IS_PED_DECOMPOSED(Ped ped) { return invoke <bool>(0x5170DDA6D63ACAAA, ped); }
	static void SET_PED_DECOMPOSED(Ped ped, bool toggle) { return invoke <void>(0x674B90BE1115846D, ped, toggle); }
	static void _0xAB26DEEE120FD3FD(Any p0, Any p1) { return invoke <void>(0xAB26DEEE120FD3FD, p0, p1); }
	static void _0x082C043C7AFC3747(int compositeId, bool p1) { return invoke <void>(0x82C043C7AFC3747, compositeId, p1); }
	static void DISABLE_LOOTING_COMPOSITE_LOOTABLE_THIS_FRAME(int compositeId, bool p1) { return invoke <void>(0x40D72189F46D2E15, compositeId, p1); }
	static void _0xBB282CF5D2333FB8(Any p0, Any p1) { return invoke <void>(0xBB282CF5D2333FB8, p0, p1); }
	static void _0xAD44856A1CD29635(Any p0, Any p1, Any p2) { return invoke <void>(0xAD44856A1CD29635, p0, p1, p2); }
	static Any _0x38C2BF94D15F464D(Any p0) { return invoke <Any>(0x38C2BF94D15F464D, p0); }
	static void _0x3A87FDA8F1B6CDFB(Any p0, Any p1, Any p2) { return invoke <void>(0x3A87FDA8F1B6CDFB, p0, p1, p2); }
	static void _0x4647842FE8F31C1E(Any p0, Any p1) { return invoke <void>(0x4647842FE8F31C1E, p0, p1); }
	static bool _GET_LOOTING_EVENT_HAS_FIRED(Ped ped, const char* eventName) { return invoke <bool>(0xF9B91C5129EABC08, ped, eventName); }
	static void _SET_LOOT_PELT_SATCHEL_ITEM(Ped ped, Any item) { return invoke <void>(0x9B47971234169990, ped, item); }
	static void _0x96282005C5C6801F(Any p0, Any p1) { return invoke <void>(0x96282005C5C6801F, p0, p1); }
	static void _0xF63FA29D4A9ACA86(Any p0, Any p1) { return invoke <void>(0xF63FA29D4A9ACA86, p0, p1); }
	static void _0x8C0F6A3D7236DEEB(Any p0, Any p1) { return invoke <void>(0x8C0F6A3D7236DEEB, p0, p1); }
	static void _0x7FA58CED69405F9A(Any p0, Any p1) { return invoke <void>(0x7FA58CED69405F9A, p0, p1); }
	static void _0xA08111B053D84B4D(Any p0) { return invoke <void>(0xA08111B053D84B4D, p0); }
	static bool _IS_GLOBAL_BLOCK_VALID(int index) { return invoke <bool>(0xACB7E1418A8B6E32, index); }
	static void _SET_GLOBAL_BLOCK_IS_LOADED(int index, bool toggle) { return invoke <void>(0xE97240065406CB80, index, toggle); }
	static bool GAME_FRAMEWORK_MANAGER_INIT(Hash transitionMode) { return invoke <bool>(0x4CABE596D632E4B0, transitionMode); }
	static void _GAME_FRAMEWORK_MANAGER_SHUTDOWN() { return invoke <void>(0xAFF2FD8ADD927585); }
	static Hash _GAME_FRAMEWORK_MANAGER_GET_MODE() { return invoke <Hash>(0xFAED234C7F53ABEB); }
	static bool _IS_PLAYER_OWNING_STANDALONE_SP() { return invoke <bool>(0x36040772DF5E59A0); }
	static Any _0x0358B8A41916C613(Any p0, Any p1, Any p2, Any p3) { return invoke <Any>(0x358B8A41916C613, p0, p1, p2, p3); }
	static void _SET_GAME_LOGIC_PAUSED() { return invoke <void>(0x550F05CFFBD63C8C); }
	static void STOP_CURRENT_LOADING_PROGRESS_TIMER() { return invoke <void>(0xA565FAC215CBC77D); }
	static void _0xDBDA48EC456ED908() { return invoke <void>(0xDBDA48EC456ED908); }
}

namespace MISSIONDATA
{
	static bool MISSIONDATA_IS_VALID(Any p0) { return invoke <bool>(0xE54DC27571D5EDC5, p0); }
	static Hash MISSIONDATA_GET_CATAGORY(Hash missionId) { return invoke <Hash>(0x57E798B65C45EE17, missionId); }
	static Hash MISSIONDATA_GET_TEXTURE_NAME(Hash missionId) { return invoke <Hash>(0x57E798B56C45EE15, missionId); }
	static Hash MISSIONDATA_GET_TEXTURE_TXD(Hash missionId) { return invoke <Hash>(0x57E798B57C45EE16, missionId); }
	static bool MISSIONDATA_WAS_COMPLETED(Hash missionId) { return invoke <bool>(0xE54DC27571D5EDC4, missionId); }
	static int MISSIONDATA_GET_RATING(Hash missionId) { return invoke <int>(0x57E798B54C45EE1A, missionId); }
	static void _MISSIONDATA_SET_MISSION_RATING(Hash missionId, int rating) { return invoke <void>(0xE824CE7D13FCB300, missionId, rating); }
	static bool MISSIONDATA_IS_REQUIRED_STORY_MISSION(Hash missionId) { return invoke <bool>(0xE824CE7D13FCB35E, missionId); }
	static void _MISSIONDATA_SET_REPLAY_STATE_LOCKED(Hash missionId, int replayState) { return invoke <void>(0xE4E2C581F127A11C, missionId, replayState); }
	static int MISSIONDATA_GET_REPLAY_STATE(Any p0) { return invoke <int>(0x8C32D86E9556ED86, p0); }
	static void MISSIONDATA_SET_RATING_SCORES(Hash missionId, int bronzeScore, int silverScore, int goldScore) { return invoke <void>(0x12F65317708749A5, missionId, bronzeScore, silverScore, goldScore); }
	static void MISSIONDATA_SET_HIGH_SCORE(Hash missionId, int score) { return invoke <void>(0x3A04F0169DA87A9D, missionId, score); }
	static int MISSIONDATA_GET_HIGH_SCORE(Hash missionId) { return invoke <int>(0x9AABABF8313C3516, missionId); }
	static bool _MISSIONDATA_IS_REPLAY_CATEGORY_LOCKED(Hash category) { return invoke <bool>(0xE145864DECC34219, category); }
	static void MISSIONDATA_SET_REPLAY_LOCKED_FOR_CATEGORY(Hash category, bool locked) { return invoke <void>(0x957A830C9B4B99EA, category, locked); }
	static void _MISSIONDATA_TIMECYCLE_BOX_SET_MODIFIER(const char* timecycleName) { return invoke <void>(0x25855B1574BF8CD5, timecycleName); }
	static void _MISSIONDATA_TIMECYCLE_BOX_DELETE() { return invoke <void>(0x7F89E15A8FB8DE97); }
	static bool _MISSIONDATA_TIMECYCLE_BOX_EXISTS() { return invoke <bool>(0x7E8F86A4FA33033C); }
}

namespace MONEY
{
	static int _MONEY_GET_CASH_BALANCE() { return invoke <int>(0xC02DABFA3B98176); }
	static bool _MONEY_DECREMENT_CASH_BALANCE(int amount) { return invoke <bool>(0x466BC8769CF26A7A, amount); }
	static bool _MONEY_INCREMENT_CASH_BALANCE(int amount, Hash addReason) { return invoke <bool>(0xBC3422DC91667621, amount, addReason); }
	static const char* _NETWORK_GET_STRING_CASH_BALANCE() { return invoke <const char*>(0x282D36FF103D78DF); }
	static bool _NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(int cashBalance, int goldBarBalance) { return invoke <bool>(0xAEC5F0119867E457, cashBalance, goldBarBalance); }
	static const char* _0xA46FD001D1BE896C() { return invoke <const char*>(0xA46FD001D1BE896C); }
	static bool _0x07AD9E43FD478527(Any p0, Any p1) { return invoke <bool>(0x7AD9E43FD478527, p0, p1); }
	static int _NETWORK_GET_CASH_BALANCE() { return invoke <int>(0x8A67120DBC299525); }
}

namespace NETSHOPPING
{
	static bool CASHINVENTORY_INIT_SESSION_STATUS(int* p0, int* p1) { return invoke <bool>(0xC019112F8995DC1C, p0, p1); }
	static bool _CASHINVENTORY_IS_SESSION_READY() { return invoke <bool>(0xFCC24220FDDAC929); }
	static bool CASHINVENTORY_IS_CONNECTION_FAULTED() { return invoke <bool>(0x6CE9FB6332B5E46E); }
	static bool _CASHINVENTORY_INIT_SESSION_IS_FAULTED() { return invoke <bool>(0xD1CE92D1D9BE170A); }
	static bool _CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(Hash actionHash, int* id, void* item, int p3) { return invoke <bool>(0xFFEA09CCEC4AF32F, actionHash, id, item, p3); }
	static bool _CASHINVENTORY_TRANSACTION_START(int* id, Hash type, Hash actionHash) { return invoke <bool>(0xF039EC27F4490E96, id, type, actionHash); }
	static bool _CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(int id) { return invoke <bool>(0x52A226ADF4A270D2, id); }
	static bool _CASHINVENTORY_TRANSACTION_DELETE(int id) { return invoke <bool>(0x59EF5D516E2D96B9, id); }
	static int _CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(Hash p0, void* p1) { return invoke <int>(0x6C9F12700BCE69F4, p0, p1); }
	static int _0x38640A8C2DEF011B(int p0) { return invoke <int>(0x38640A8C2DEF011B, p0); }
	static bool _0xA3B8D31C13CB4239(int p0, Hash p1, void* p2, int p3, void* p4, int p5) { return invoke <bool>(0xA3B8D31C13CB4239, p0, p1, p2, p3, p4, p5); }
	static bool _CASHINVENTORY_TRANSACTION_ADD_AWARD(int id, Hash hash, void* p2, void* p3) { return invoke <bool>(0x52BDE32F21BA3B6D, id, hash, p2, p3); }
	static bool _CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(int id, int index, void* itemInfo) { return invoke <bool>(0x7616B5F0895C2D99, id, index, itemInfo); }
	static int _CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(int id) { return invoke <int>(0xCF2D04D076847478, id); }
	static Hash _CASHINVENTORY_TRANSACTION_GET_ACTION(int id) { return invoke <Hash>(0xBD2D520C51CCFF52, id); }
	static bool _CASHINVENTORY_TRANSACTION_CHECKOUT(int id) { return invoke <bool>(0x592BC00BF6629BE7, id); }
	static bool _CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(int id, int* status) { return invoke <bool>(0x26C008791D066F37, id, status); }
	static int _0xB6F4557060EF0FB4(int p0, int p1) { return invoke <int>(0xB6F4557060EF0FB4, p0, p1); }
	static bool _CASHINVENTORY_TRANSACTION_RESPONSE_GET_ITEM_INFO(int id, int index, void* itemInfo) { return invoke <bool>(0x98412398BBE73F61, id, index, itemInfo); }
	static bool _0xCE54C9ABE6FBC6DB(Hash p0) { return invoke <bool>(0xCE54C9ABE6FBC6DB, p0); }
	static bool _0xA0B7094629724974(Hash p0, Any p1) { return invoke <bool>(0xA0B7094629724974, p0, p1); }
	static bool _0x92A32BA29622763F(int id, int index, void* p2) { return invoke <bool>(0x92A32BA29622763F, id, index, p2); }
	static bool _0x3FA09DD57B93C0DE(Hash p0, int p1, int p2, Any p3, int p4) { return invoke <bool>(0x3FA09DD57B93C0DE, p0, p1, p2, p3, p4); }
	static bool _0xD1555FBC96C88444(Hash p0, int p1, int p2, Any p3, int p4) { return invoke <bool>(0xD1555FBC96C88444, p0, p1, p2, p3, p4); }
}

namespace NETWORK
{
	static bool NETWORK_IS_SIGNED_ONLINE() { return invoke <bool>(0x1077788E268557C2); }
	static int NETWORK_GET_NP_UNAVAILABLE_REASON() { return invoke <int>(0x74FB3E29E6D10FA9); }
	static bool NETWORK_HAS_VALID_ROS_CREDENTIALS() { return invoke <bool>(0x85443FF4C328F53B); }
	static bool NETWORK_IS_CLOUD_AVAILABLE() { return invoke <bool>(0x9A4CF4F48AD77302); }
	static bool NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() { return invoke <bool>(0x67A5589628E0CFF6); }
	static bool NETWORK_IS_HOST() { return invoke <bool>(0x8DB296B814EDDA07); }
	static bool NETWORK_HAVE_ONLINE_PRIVILEGES() { return invoke <bool>(0x25CB5A9F37BFD063); }
	static bool NETWORK_CHECK_USER_CONTENT_PRIVILEGES(int nGamerIndex) { return invoke <bool>(0x595F028698072DD9, nGamerIndex); }
	static bool NETWORK_CHECK_COMMUNICATION_PRIVILEGES(int nGamerIndex) { return invoke <bool>(0x83F28CE49FBBFFBA, nGamerIndex); }
	static bool NETWORK_CAN_VIEW_GAMER_USER_CONTENT(void* gamerHandle) { return invoke <bool>(0x246545C37C27A717, gamerHandle); }
	static bool _0xF23A6D6C11D8EC15(void* gamerHandle) { return invoke <bool>(0xF23A6D6C11D8EC15, gamerHandle); }
	static int _0x3E8CCE6769DB5F34(int p0) { return invoke <int>(0x3E8CCE6769DB5F34, p0); }
	static void NETWORK_SHOW_ACCOUNT_UPGRADE_UI() { return invoke <void>(0x83FE8D7229593017); }
	static bool NETWORK_IS_PROMOTION_ENABLED() { return invoke <bool>(0x8FF6059DA26E688A); }
	static bool NETWORK_IS_CUSTOM_UPSELL_ENABLED() { return invoke <bool>(0x78A9535AF83715C6); }
	static bool NETWORK_SHOULD_SHOW_PROMOTION_DLG() { return invoke <bool>(0xDA4B1A479C414FB2); }
	static void _0xFC6FCF4C03F1BBF6() { return invoke <void>(0xFC6FCF4C03F1BBF6); }
	static Any _0x160F0CE6D76A39C9() { return invoke <Any>(0x160F0CE6D76A39C9); }
	static int NETWORK_GET_PROMOTION_DLG_SEEN_COUNT() { return invoke <int>(0x2FB53C631A49BE92); }
	static void _0xE5FF65CFF5160752() { return invoke <void>(0xE5FF65CFF5160752); }
	static bool NETWORK_CAN_ACCESS_MULTIPLAYER(int* nAccessCode) { return invoke <bool>(0xAF50DA1A3F8B1BA4, nAccessCode); }
	static bool NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL() { return invoke <bool>(0x2A8112A974DE1EF6); }
	static int _NETWORK_GET_GLOBAL_ENTITY_FLAGS(Entity entity) { return invoke <int>(0xDD7806FD0543BC3D, entity); }
	static void _0xA95470DA137587F5(bool p0) { return invoke <void>(0xA95470DA137587F5, p0); }
	static Any _0xBB697756309D77EE(bool p0) { return invoke <Any>(0xBB697756309D77EE, p0); }
	static bool _NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT() { return invoke <bool>(0xDD73C9838CE7181D); }
	static bool NETWORK_SET_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT(bool completed) { return invoke <bool>(0x2C5BD9A43987AA27, completed); }
	static bool _0xD7D0DF27CB1765B5(int p0) { return invoke <bool>(0xD7D0DF27CB1765B5, p0); }
	static bool NETWORK_SET_MP_MISSION_FLAG_ON_CURRENT_SLOT(bool enabled, int flagIndex) { return invoke <bool>(0x86FD10251A7118A4, enabled, flagIndex); }
	static void _0x3E74A687A73979C6(bool p0) { return invoke <void>(0x3E74A687A73979C6, p0); }
	static bool NETWORK_SESSION_IS_PRIVATE() { return invoke <bool>(0xCEF70AA5B3F89BA1); }
	static void _NETWORK_SESSION_GET_SESSION_ID(void* sessionId) { return invoke <void>(0xE9B356C330C0A806, sessionId); }
	static bool _NETWORK_SESSION_ARE_SESSION_IDS_EQUAL(void* sessionId1, void* sessionId2) { return invoke <bool>(0x4DEC5000F7B508F0, sessionId1, sessionId2); }
	static bool NETWORK_REQUEST_SESSION_SEAMLESS(int flags, int seamlessType, void* sessionRequestId) { return invoke <bool>(0x4019AE4956D4393, flags, seamlessType, sessionRequestId); }
	static bool NETWORK_SESSION_REQUEST_SESSION_SEAMLESS(int flags, int seamlessType, int userHash, void* sessionRequestId) { return invoke <bool>(0x2989E131FDE37E97, flags, seamlessType, userHash, sessionRequestId); }
	static bool NETWORK_SESSION_REQUEST_SESSION_COMPETITIVE(int flags, int matchType, int userHash, int p3, void* sessionRequestId) { return invoke <bool>(0x309BBEBEA8A3986C, flags, matchType, userHash, p3, sessionRequestId); }
	static bool NETWORK_SESSION_REQUEST_SESSION_PRIVATE(int flags, int numPlayers, int userHash, void* sessionRequestId) { return invoke <bool>(0x39A8EF7AF29A192C, flags, numPlayers, userHash, sessionRequestId); }
	static bool _NETWORK_SESSION_REQUEST_SESSION_ON_CALL(int flags, int category, void* p2, int userHash, void* sessionRequestId) { return invoke <bool>(0x23D9C1F2E4098EDC, flags, category, p2, userHash, sessionRequestId); }
	static bool _NETWORK_SESSION_REQUEST_SESSION_NOMINATED(int flags, int userHash, int p2, void* sessionRequestId) { return invoke <bool>(0x4F4672457FF597D1, flags, userHash, p2, sessionRequestId); }
	static bool NETWORK_SESSION_IS_SESSION_REQUEST_ID_VALID(void* sessionRequestId) { return invoke <bool>(0x2F54B146D3EDCE4D, sessionRequestId); }
	static int NETWORK_SESSION_GET_SESSION_TYPE() { return invoke <int>(0xF0C0C94B404206FA); }
	static int _0x1413B6BF27AB7A95() { return invoke <int>(0x1413B6BF27AB7A95); }
	static bool NETWORK_SESSION_IS_ANY_REQUEST_IN_PROGRESS() { return invoke <bool>(0xBAFFDE5F953720D9); }
	static bool _0xAFA14F98327791CE(void* sessionRequestId) { return invoke <bool>(0xAFA14F98327791CE, sessionRequestId); }
	static bool NETWORK_SESSION_IS_REQUEST_IN_PROGRESS(void* sessionRequestId) { return invoke <bool>(0x8FB7C254CFCBF78E, sessionRequestId); }
	static bool _NETWORK_SESSION_IS_REQUEST_IN_PROGRESS_BY_QUEUE_GROUP(int queueGroup) { return invoke <bool>(0x9E762A595CF88E4A, queueGroup); }
	static bool _NETWORK_SESSION_CANCEL_REQUEST(void* sessionRequestId) { return invoke <bool>(0xE72E5C1289BD1F40, sessionRequestId); }
	static void _0xA6F1BAABFF6AD7B9(void* p0) { return invoke <void>(0xA6F1BAABFF6AD7B9, p0); }
	static int _NETWORK_SESSION_GET_SESSION_REQUEST_RESULT(void* sessionRequestId, int* p1) { return invoke <int>(0xDD051B1BF4B8BD6, sessionRequestId, p1); }
	static bool NETWORK_SESSION_IS_REQUEST_PENDING_TRANSITION(void* sessionRequestId) { return invoke <bool>(0xCCF878D50F8AB10D, sessionRequestId); }
	static bool _NETWORK_SESSION_TRANSITION_TO_SESSION(void* sessionRequestId) { return invoke <bool>(0xF20B18A330E6DB5C, sessionRequestId); }
	static bool _NETWORK_SESSION_IS_NSRR_SUCCESS(void* sessionRequestId) { return invoke <bool>(0xF44A5C78D114922, sessionRequestId); }
	static bool NETWORK_SESSION_LEFT_QUEUE_OR_REQUESTED_SESSION(void* sessionRequestId) { return invoke <bool>(0xECE6A0C1B59CD8BE, sessionRequestId); }
	static bool NETWORK_SESSION_LEAVE_SESSION() { return invoke <bool>(0x17C21B7319A05047); }
	static bool NETWORK_SESSION_IS_TRANSITIONING() { return invoke <bool>(0xF2CBC969C4F090C7); }
	static void _0xFD4272A137703449() { return invoke <void>(0xFD4272A137703449); }
	static void _NETWORK_SESSION_PLAYLIST_GO_TO_NEXT_CONTENT() { return invoke <void>(0xBDE605F925B07127); }
	static void _NETWORK_SESSION_PLAYLIST_GET_UPCOMING_CONTENT() { return invoke <void>(0x8F9DB6CD03B42B58); }
	static void NETWORK_DISABLE_REALTIME_MULTIPLAYER() { return invoke <void>(0x236905C700FDB54D); }
	static void _0x71FA2D1880C48032(bool p0) { return invoke <void>(0x71FA2D1880C48032, p0); }
	static void NETWORK_GET_GLOBAL_MULTIPLAYER_CLOCK(int* nHour, int* nMinute, int* nSecond) { return invoke <void>(0x6D03BFBD643B2A02, nHour, nMinute, nSecond); }
	static void NETWORK_CLEAR_CLOCK_TIME_OVERRIDE() { return invoke <void>(0xD972DF67326F966E); }
	static bool NETWORK_IS_CLOCK_TIME_OVERRIDDEN() { return invoke <bool>(0xD7C95D322FF57522); }
	static bool NETWORK_GET_GLOBAL_CLOCK(int* hour, int* minute, int* second) { return invoke <bool>(0x11A7ADCD629E170F, hour, minute, second); }
	static void _NETWORK_CLOCK_TIME_OVERRIDE(int hour, int minute, int second, int transitionTime, bool pauseClock) { return invoke <void>(0x669E223E64B1903C, hour, minute, second, transitionTime, pauseClock); }
	static void _NETWORK_CLOCK_TIME_OVERRIDE_2(int hour, int minute, int second, int transitionTime, bool pauseClock, bool clockwise) { return invoke <void>(0xE28C13ECC36FF14E, hour, minute, second, transitionTime, pauseClock, clockwise); }
	static void _NETWORK_CLEAR_CLOCK_OVERRIDE_OVERTIME(int milliseconds) { return invoke <void>(0x65F040D91001ED4B, milliseconds); }
	static bool _0x0E54D4DA6018FF8E() { return invoke <bool>(0xE54D4DA6018FF8E); }
	static bool NETWORK_IS_FINDING_GAMERS() { return invoke <bool>(0xDDDF64C91BFCF0AA); }
	static bool NETWORK_DID_FIND_GAMERS_SUCCEED() { return invoke <bool>(0xF9B83B77929D8863); }
	static int _0x7BCA0A3972708436(void* outData, int p1) { return invoke <int>(0x7BCA0A3972708436, outData, p1); }
	static void NETWORK_CLEAR_FOUND_GAMERS() { return invoke <void>(0x6D14CCEE1B40381A); }
	static bool _NETWORK_GET_GAMER_SESSION_FROM_HANDLE(void* data, int count) { return invoke <bool>(0xFBDFE1C1356E12E8, data, count); }
	static bool _NETWORK_HAS_CURRENT_GET_GAMER_STATUS_STARTED() { return invoke <bool>(0x25189F9908E9CD65); }
	static bool NETWORK_DID_GET_GAMER_STATUS_SUCCEED() { return invoke <bool>(0x5AE17C6B0134B7F1); }
	static int _NETWORK_GET_GAMER_STATUS(void* gamerHandle, int p1) { return invoke <int>(0xDDAEB478E58F8DEA, gamerHandle, p1); }
	static void NETWORK_CLEAR_GET_GAMER_STATUS() { return invoke <void>(0x86E0660E4F5C956D); }
	static void NETWORK_SET_SCRIPT_READY_FOR_EVENTS(bool bReady) { return invoke <void>(0x7AC752103856FB20, bReady); }
	static bool _0x316FD416C432C761() { return invoke <bool>(0x316FD416C432C761); }
	static bool _0x062842D61D0D53FD() { return invoke <bool>(0x62842D61D0D53FD); }
	static bool NETWORK_IS_GAME_IN_PROGRESS() { return invoke <bool>(0x10FAB35428CCC9D7); }
	static bool NETWORK_IS_SESSION_ACTIVE() { return invoke <bool>(0xD83C2B94E7508980); }
	static bool NETWORK_IS_IN_SESSION() { return invoke <bool>(0xCA97246103B63917); }
	static bool _NETWORK_IS_IN_SESSION_LOBBY() { return invoke <bool>(0xC5196C42DE19F646); }
	static bool NETWORK_IS_SESSION_STARTED() { return invoke <bool>(0x9DE624D2FC4B603F); }
	static bool NETWORK_CAN_SESSION_END() { return invoke <bool>(0x4EEBC3694E49C572); }
	static int NETWORK_GET_GAME_MODE() { return invoke <int>(0x225640E09EFFDC3F); }
	static bool _NETWORK_SESSION_ADD_SESSION_FLAGS(int flags) { return invoke <bool>(0xE546BDA1B3E288EE, flags); }
	static bool NETWORK_SESSION_REMOVE_SESSION_FLAGS(int flags) { return invoke <bool>(0x78335E12DB0BF961, flags); }
	static int NETWORK_SESSION_GET_SESSION_FLAGS() { return invoke <int>(0x51F33DBC1A41CBFD); }
	static bool _NETWORK_SESSION_SET_PLAYER_FLAGS(int flags) { return invoke <bool>(0xAE241A4A9ADEEEC, flags); }
	static bool _NETWORK_SESSION_REMOVE_PLAYER_FLAGS(int flags) { return invoke <bool>(0x3215BBE34D3418C5, flags); }
	static Player _NETWORK_GET_SESSION_HOST() { return invoke <Player>(0x8DC9AA3B508B1A85); }
	static Any _0xD3A3C8B9F3BDEF81() { return invoke <Any>(0xD3A3C8B9F3BDEF81); }
	static bool _0x18B94666CF610AEB() { return invoke <bool>(0x18B94666CF610AEB); }
	static bool _0x981146E5C9CE9250(int inviteIndex) { return invoke <bool>(0x981146E5C9CE9250, inviteIndex); }
	static int _0xBF8276E51761F9DA() { return invoke <int>(0xBF8276E51761F9DA); }
	static bool _0xDCA4A74135E1DEA5(Any p0) { return invoke <bool>(0xDCA4A74135E1DEA5, p0); }
	static bool NETWORK_HAS_PENDING_INVITE_FAILURE() { return invoke <bool>(0xD0498AD30E16B6BD); }
	static bool _NETWORK_CAN_RECEIVE_INVITE_FROM_HANDLE(void* gamerHandle) { return invoke <bool>(0xF23D6475640D29EB, gamerHandle); }
	static void _0x704F92B3AF20D857(bool setting) { return invoke <void>(0x704F92B3AF20D857, setting); }
	static void _0xF342F6BD0A8287D5(Any p0) { return invoke <void>(0xF342F6BD0A8287D5, p0); }
	static void _0xD39A72AE5EBD57E5() { return invoke <void>(0xD39A72AE5EBD57E5); }
	static bool _NETWORK_SEND_SESSION_INVITE(void* gamerHandle, const char* contentId, void* data, int dataSize, int p4, int flags) { return invoke <bool>(0xE47001B7CB8B98AE, gamerHandle, contentId, data, dataSize, p4, flags); }
	static bool _0xD1FFB246F4E088AC(int p0) { return invoke <bool>(0xD1FFB246F4E088AC, p0); }
	static int _0x27B1AE4D8C652F08(int p0) { return invoke <int>(0x27B1AE4D8C652F08, p0); }
	static int _0x6C27442A225A241A(int p0) { return invoke <int>(0x6C27442A225A241A, p0); }
	static const char* _0xE59F4924BD3A718D(int p0) { return invoke <const char*>(0xE59F4924BD3A718D, p0); }
	static int _0x78271BC02AE9AF83(int p0) { return invoke <int>(0x78271BC02AE9AF83, p0); }
	static bool _0x16EFB123C4451032(int p0, void* gamerHandle) { return invoke <bool>(0x16EFB123C4451032, p0, gamerHandle); }
	static const char* _0xE79BA3BC265895DA(int p0) { return invoke <const char*>(0xE79BA3BC265895DA, p0); }
	static Any _0xC0CFFDA87C2C163D(int p0, Any p1, int p2) { return invoke <Any>(0xC0CFFDA87C2C163D, p0, p1, p2); }
	static Any _0x5ED39DA62BEB1330(int p0) { return invoke <Any>(0x5ED39DA62BEB1330, p0); }
	static bool NETWORK_ACCEPT_RS_INVITE(int p0) { return invoke <bool>(0xB2CEA5105AAC8DDE, p0); }
	static bool _0x3AA0CDC63696166D(int p0) { return invoke <bool>(0x3AA0CDC63696166D, p0); }
	static int NETWORK_REQUEST_JOIN(Any p0) { return invoke <int>(0xE483BB6BE686F632, p0); }
	static int _0xE8E633215471BB5D(Any p0) { return invoke <int>(0xE8E633215471BB5D, p0); }
	static bool _0xA2837A5E21FB5A58(Any p0) { return invoke <bool>(0xA2837A5E21FB5A58, p0); }
	static bool _0xE39600E50D608693(Any p0, Any p1) { return invoke <bool>(0xE39600E50D608693, p0, p1); }
	static bool _0xD7BAD4062074B9C1(Any p0) { return invoke <bool>(0xD7BAD4062074B9C1, p0); }
	static int _0xCA58D4FD20D70F24(Any p0) { return invoke <int>(0xCA58D4FD20D70F24, p0); }
	static bool _0xC028B3F52C707C49(Any p0) { return invoke <bool>(0xC028B3F52C707C49, p0); }
	static bool NETWORK_IS_PLATFORM_INVITE_PENDING() { return invoke <bool>(0xFC4165C9165C166F); }
	static void _0x5B9C6AC118FD4774() { return invoke <void>(0x5B9C6AC118FD4774); }
	static int _NETWORK_GET_PLATFORM_INVITE_ID() { return invoke <int>(0x9BCF28FB5D65A9BE); }
	static bool NETWORK_ACTION_PLATFORM_INVITE() { return invoke <bool>(0x3B82ACC3F4B6240C); }
	static void NETWORK_CLEAR_PLATFORM_INVITE() { return invoke <void>(0xA4484173759749B1); }
	static void _0x603469298A4308AF(bool p0) { return invoke <void>(0x603469298A4308AF, p0); }
	static bool _NETWORK_ARE_ONLINE_NOTIFICATIONS_SHOWN_IN_STORY_MODE() { return invoke <bool>(0xF5C5929E07512F80); }
	static bool NETWORK_IS_IN_PLATFORM_PARTY() { return invoke <bool>(0x2FC5650B0271CB57); }
	static bool _NETWORK_ARE_PLAYERS_IN_SAME_PLATFORM_PARTY(void* gamerHandle1, void* gamerHandle2) { return invoke <bool>(0x11820D1AE80DEA39, gamerHandle1, gamerHandle2); }
	static bool NETWORK_IS_IN_PLATFORM_PARTY_CHAT() { return invoke <bool>(0xFD8B834A8BA05048); }
	static void NETWORK_SEED_RANDOM_NUMBER_GENERATOR(int nSeed) { return invoke <void>(0xF1B84178F8674195, nSeed); }
	static int NETWORK_GET_RANDOM_INT_RANGED(int nMinimum, int nMaximum) { return invoke <int>(0xE30CF56F1EFA5F43, nMinimum, nMaximum); }
	static void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(int MaxNumPlayers, bool activeInSinglePlayer, int InstanceId) { return invoke <void>(0x1CA59E306ECB80A5, MaxNumPlayers, activeInSinglePlayer, InstanceId); }
	static bool NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return invoke <bool>(0x2910669969E9535E); }
	static int NETWORK_GET_MAX_NUM_PARTICIPANTS() { return invoke <int>(0xA6C90FBC38E395EE); }
	static int NETWORK_GET_NUM_PARTICIPANTS() { return invoke <int>(0x18D0456E86604654); }
	static int NETWORK_GET_SCRIPT_STATUS() { return invoke <int>(0x57D158647A6BFABF); }
	static void NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(void* Address, int Size, const char* DebugName) { return invoke <void>(0x3E9B2F01C50DF595, Address, Size, DebugName); }
	static int _NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(int* p0) { return invoke <int>(0xBA24095EA96DFE17, p0); }
	static void NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(void* Address, int Size, const char* DebugName) { return invoke <void>(0x3364AA97340CA215, Address, Size, DebugName); }
	static int _NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(int* p0) { return invoke <int>(0x690806BC83BC8CA2, p0); }
	static bool NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA() { return invoke <bool>(0x5D10B3795F3FC886); }
	static Player NETWORK_GET_PLAYER_INDEX(int Participant) { return invoke <Player>(0x24FB80D107371267, Participant); }
	static int NETWORK_GET_PARTICIPANT_INDEX(Player Plr) { return invoke <int>(0x1B84DF6AF2A46938, Plr); }
	static Player NETWORK_GET_PLAYER_INDEX_FROM_PED(Ped PedIndex) { return invoke <Player>(0x6C0E2E0125610278, PedIndex); }
	static int NETWORK_GET_NUM_CONNECTED_PLAYERS() { return invoke <int>(0xA4A79DD2D9600654); }
	static bool NETWORK_IS_PLAYER_CONNECTED(Player Plr) { return invoke <bool>(0x93DC1BE4E1ABE9D1, Plr); }
	static int NETWORK_GET_TOTAL_NUM_PLAYERS() { return invoke <int>(0xCF61D4B4702EE9EB); }
	static bool NETWORK_IS_PARTICIPANT_ACTIVE(int Participant) { return invoke <bool>(0x6FF8FF40B6357D45, Participant); }
	static bool NETWORK_IS_PLAYER_ACTIVE(Player Plr) { return invoke <bool>(0xB8DFD30D6973E135, Plr); }
	static bool NETWORK_IS_PLAYER_A_PARTICIPANT(Player Plr) { return invoke <bool>(0x3CA58F6CB7CBD784, Plr); }
	static bool NETWORK_IS_HOST_OF_THIS_SCRIPT() { return invoke <bool>(0x83CD99A1E6061AB5); }
	static int NETWORK_GET_HOST_OF_THIS_SCRIPT() { return invoke <int>(0xC7B4D79B01FA7A5C); }
	static Player NETWORK_GET_HOST_OF_SCRIPT(const char* scriptName, int instanceId, int p2) { return invoke <Player>(0x1D6A14F1F9A736FC, scriptName, instanceId, p2); }
	static Player NETWORK_GET_HOST_OF_THREAD(int threadId) { return invoke <Player>(0xB4A25351D79B444C, threadId); }
	static void NETWORK_SET_MISSION_FINISHED() { return invoke <void>(0x3B3D11CD9FFCDFC9); }
	static bool NETWORK_IS_SCRIPT_ACTIVE(const char* scriptName, int instanceId, bool localOnly, int p3) { return invoke <bool>(0x9D40DF90FAD26098, scriptName, instanceId, localOnly, p3); }
	static bool NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(Hash scriptHash, int p1, bool p2, int p3) { return invoke <bool>(0x1B89BC43B6E69107, scriptHash, p1, p2, p3); }
	static bool _NETWORK_IS_THREAD_ACTIVE(int threadId) { return invoke <bool>(0x31DAD2CD6D49546E, threadId); }
	static int _NETWORK_GET_INSTANCE_ID_OF_THREAD(int threadId) { return invoke <int>(0xFB9ECED5B68F3B78, threadId); }
	static int NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(const char* scriptName, int instanceId, Hash positionHash) { return invoke <int>(0x3658E8CD94FC121A, scriptName, instanceId, positionHash); }
	static int NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT() { return invoke <int>(0x638A3A81733086DB); }
	static bool NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(Player Plr, const char* scriptName, int instanceId) { return invoke <bool>(0x1AD5B71586B94820, Plr, scriptName, instanceId); }
	static void NETWORK_PREVENT_SCRIPT_HOST_MIGRATION() { return invoke <void>(0x2302C0264EA58D31); }
	static bool NETWORK_IS_FEATURE_SUPPORTED(int featureId) { return invoke <bool>(0x9C725D149622BFDE, featureId); }
	static int PARTICIPANT_ID() { return invoke <int>(0x90986E8876CE0A83); }
	static int PARTICIPANT_ID_TO_INT() { return invoke <int>(0x57A3BDDAD8E5AA0A); }
	static Player NETWORK_GET_DESTROYER_OF_NETWORK_ID(int NetworkId, Hash* TypeOfWeapon) { return invoke <Player>(0x7A1ADEEF01740A24, NetworkId, TypeOfWeapon); }
	static Player _0x6CF82A7F65A5AD5F(Ped ped, void* p1) { return invoke <Player>(0x6CF82A7F65A5AD5F, ped, p1); }
	static bool _0x236321F1178A5446(Player player, Ped ped, void* p2) { return invoke <bool>(0x236321F1178A5446, player, ped, p2); }
	static bool NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(Player playerIndexDamager, Entity entityDamaged, int* damageDealt) { return invoke <bool>(0x4CACA84440FA26F6, playerIndexDamager, entityDamaged, damageDealt); }
	static Entity NETWORK_GET_ENTITY_KILLER_OF_PLAYER(Player Plr, Hash* TypeOfWeapon) { return invoke <Entity>(0x42B2DAA6B596F5F8, Plr, TypeOfWeapon); }
	static void NETWORK_RESURRECT_LOCAL_PLAYER(float PosX, float PosY, float PosZ, float Heading, int p4, bool p5, Any p6, bool p7) { return invoke <void>(0xEA23C49EAA83ACFB, PosX, PosY, PosZ, Heading, p4, p5, p6, p7); }
	static void _NETWORK_RESURRECT_LOCAL_PLAYER_2(void* args) { return invoke <void>(0x4154B7D8C75E5DCF, args); }
	static void NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(int invincibilityTime) { return invoke <void>(0x2D95C7E2D7E07307, invincibilityTime); }
	static void NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT(bool bSyncLookAt) { return invoke <void>(0x524FF0AEFF9C3973, bSyncLookAt); }
	static bool NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(Entity EntityIndex) { return invoke <bool>(0xB07D3185E11657A5, EntityIndex); }
	static int NETWORK_GET_NETWORK_ID_FROM_ENTITY(Entity EntityIndex) { return invoke <int>(0xA11700682F3AD45C, EntityIndex); }
	static Entity NETWORK_GET_ENTITY_FROM_NETWORK_ID(int NetworkId) { return invoke <Entity>(0xCE4E5D9B0A4FF560, NetworkId); }
	static bool NETWORK_GET_ENTITY_IS_NETWORKED(Entity entityIndex) { return invoke <bool>(0xC7827959479DCC78, entityIndex); }
	static void NETWORK_REGISTER_ENTITY_AS_NETWORKED(Entity entityIndex) { return invoke <void>(0x6FAACD625D80CAA, entityIndex); }
	static bool NETWORK_DOES_NETWORK_ID_EXIST(int NetworkId) { return invoke <bool>(0x38CE16C96BD11344, NetworkId); }
	static Any _0x950ACD8F05B7B9DF(Any p0) { return invoke <Any>(0x950ACD8F05B7B9DF, p0); }
	static bool NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(int NetworkId) { return invoke <bool>(0xA670B3662FAFFBD0, NetworkId); }
	static bool NETWORK_HAS_CONTROL_OF_NETWORK_ID(int NetworkId) { return invoke <bool>(0x4D36070FE0215186, NetworkId); }
	static bool NETWORK_REQUEST_CONTROL_OF_ENTITY(Entity entityIndex) { return invoke <bool>(0xB69317BF5E782347, entityIndex); }
	static bool _NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(AnimScene animScene) { return invoke <bool>(0xAAA92B631B13F614, animScene); }
	static bool NETWORK_REQUEST_CONTROL_OF_PICKUP_PLACEMENT(Any p0) { return invoke <bool>(0x56ED2C48558DAB78, p0); }
	static bool NETWORK_HAS_CONTROL_OF_ENTITY(Entity entityIndex) { return invoke <bool>(0x1BF60A500E28887, entityIndex); }
	static bool NETWORK_HAS_CONTROL_OF_PICKUP(Pickup pickupIndex) { return invoke <bool>(0x5BC9495F0B3B6FA6, pickupIndex); }
	static bool _NETWORK_HAS_CONTROL_OF_ANIM_SCENE(AnimScene animScene) { return invoke <bool>(0x26A5C12FACFF8724, animScene); }
	static bool NETWORK_HAS_CONTROL_OF_PICKUP_PLACEMENT(Any p0) { return invoke <bool>(0x51EABCF2786515AB, p0); }
	static int _0xF260AF6F43953316(ScrHandle handle) { return invoke <int>(0xF260AF6F43953316, handle); }
	static int VEH_TO_NET(Vehicle vehID) { return invoke <int>(0xB4C94523F023419C, vehID); }
	static int PED_TO_NET(Ped pedID) { return invoke <int>(0xEDEC3C276198689, pedID); }
	static int OBJ_TO_NET(Object objID) { return invoke <int>(0x99BFDC94A603E541, objID); }
	static int _ANIM_SCENE_TO_NET(AnimScene animScene) { return invoke <int>(0xE0D73CDDEA79DDCD, animScene); }
	static Vehicle NET_TO_VEH(int netID) { return invoke <Vehicle>(0x367B936610BA360C, netID); }
	static Ped NET_TO_PED(int netID) { return invoke <Ped>(0xBDCD95FC216A8B3E, netID); }
	static Object NET_TO_OBJ(int netID) { return invoke <Object>(0xD8515F5FEA14CB3F, netID); }
	static Entity NET_TO_ENT(int netID) { return invoke <Entity>(0xBFFEAB45A9A9094A, netID); }
	static AnimScene _NET_TO_ANIM_SCENE(int netId) { return invoke <AnimScene>(0xD7F6781A0ABAF6FB, netId); }
	static int _PROPSET_TO_NET(PropSet propSet) { return invoke <int>(0x74F99EF7EF503398, propSet); }
	static PropSet _NET_TO_PROPSET(int netId) { return invoke <PropSet>(0xD08066E00D26C448, netId); }
	static void _0x0CC28C08613BA9E5(int p0) { return invoke <void>(0xCC28C08613BA9E5, p0); }
	static void NETWORK_GET_LOCAL_HANDLE(void* gamerHandle) { return invoke <void>(0xE86051786B66CD8E, gamerHandle); }
	static void NETWORK_HANDLE_FROM_PLAYER(Player playerIndex, void* gamerHandle) { return invoke <void>(0x388EB2B86C73B6B3, playerIndex, gamerHandle); }
	static Hash NETWORK_HASH_FROM_PLAYER_HANDLE(Player playerIndex) { return invoke <Hash>(0xBC1D768F2F5D6C05, playerIndex); }
	static void NETWORK_HANDLE_FROM_FRIEND(int friendIndex, void* gamerHandle) { return invoke <void>(0xD45CB817D7E177D2, friendIndex, gamerHandle); }
	static const char* NETWORK_GET_GAMERTAG_FROM_HANDLE(void* gamerHandle) { return invoke <const char*>(0x426141162EBE5CDB, gamerHandle); }
	static int NETWORK_DISPLAYNAMES_FROM_HANDLES_START(void* gamerHandles, int count) { return invoke <int>(0xD66C9E72B3CC4982, gamerHandles, count); }
	static int NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(int requestId, Any displayNames, int count) { return invoke <int>(0x58CC181719256197, requestId, displayNames, count); }
	static bool _NETWORK_GET_DISPLAY_NAME_FROM_HANDLE(void* gamerHandle, char* displayName) { return invoke <bool>(0x7FEE4F07C54B6B3C, gamerHandle, displayName); }
	static bool NETWORK_ARE_HANDLES_THE_SAME(void* gamerHandle1, void* gamerHandle2) { return invoke <bool>(0x57DBA049E110F217, gamerHandle1, gamerHandle2); }
	static bool NETWORK_IS_HANDLE_VALID(void* gamerHandle) { return invoke <bool>(0x6F79B93B0A8E4133, gamerHandle); }
	static Player NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(void* gamerHandle) { return invoke <Player>(0xCE5F689CF5A0A49D, gamerHandle); }
	static bool NETWORK_IS_GAMER_IN_MY_SESSION(void* gamerHandle) { return invoke <bool>(0xF10B05DDF8D16E9, gamerHandle); }
	static void NETWORK_SHOW_PROFILE_UI(void* gamerHandle) { return invoke <void>(0x859ED1CEA343FCA8, gamerHandle); }
	static void _0x5759160AC17C13CE(void* gamerHandle, const char* message) { return invoke <void>(0x5759160AC17C13CE, gamerHandle, message); }
	static int _0xF302AB9D978352EE(Entity entity) { return invoke <int>(0xF302AB9D978352EE, entity); }
	static Entity _0x4538EE7C321590BC(int networkId) { return invoke <Entity>(0x4538EE7C321590BC, networkId); }
	static bool _0xA47D48D06AA5A188() { return invoke <bool>(0xA47D48D06AA5A188); }
	static int NETWORK_GET_TOTAL_NUM_FRIENDS() { return invoke <int>(0xDB7ABDD203FA3704); }
	static int _0xA94ECE191D90637A() { return invoke <int>(0xA94ECE191D90637A); }
	static void _0x5CB8B0C846D0F30B(Any p0) { return invoke <void>(0x5CB8B0C846D0F30B, p0); }
	static void _0xFF36F36B07E69059(Any p0) { return invoke <void>(0xFF36F36B07E69059, p0); }
	static bool _NETWORK_GET_CURRENT_FRIEND_PAGE_DATA(void* p0) { return invoke <bool>(0xA3EEC0A5AFF3FC5B, p0); }
	static int _0xB389289F031F059A() { return invoke <int>(0xB389289F031F059A); }
	static bool NETWORK_CAN_REFRESH_FRIEND_PAGE() { return invoke <bool>(0x1AF5E28E64A76A9F); }
	static bool NETWORK_REFRESH_CURRENT_FRIEND_PAGE() { return invoke <bool>(0x1F51F367B710A832); }
	static bool _0xDA1BFED8582F61F0() { return invoke <bool>(0xDA1BFED8582F61F0); }
	static bool _0x232E1EB23CDB313C() { return invoke <bool>(0x232E1EB23CDB313C); }
	static bool _0x3E4A16BC669E71B3() { return invoke <bool>(0x3E4A16BC669E71B3); }
	static bool _NETWORK_IS_FRIEND_HANDLE_ONLINE(void* gamerHandle) { return invoke <bool>(0xE348D1404BD80146, gamerHandle); }
	static bool _NETWORK_IS_FRIEND_HANDLE_IN_SAME_TITLE(void* gamerHandle) { return invoke <bool>(0x665161D250850A9F, gamerHandle); }
	static const char* _NETWORK_GET_GAMERTAG_FROM_FRIEND(void* gamerHandle) { return invoke <const char*>(0x5659D87BE674AB17, gamerHandle); }
	static bool NETWORK_IS_FRIEND(void* gamerHandle) { return invoke <bool>(0x1A24A179F9B31654, gamerHandle); }
	static bool NETWORK_IS_PENDING_FRIEND(void* gamerHandle) { return invoke <bool>(0xBE73DA6984A6E33, gamerHandle); }
	static bool NETWORK_ADD_FRIEND(void* gamerHandle, const char* message) { return invoke <bool>(0x8E02D73914064223, gamerHandle, message); }
	static bool _NETWORK_REMOVE_FRIEND(void* gamerHandle) { return invoke <bool>(0x55F618F68AB854D3, gamerHandle); }
	static bool _NETWORK_CAN_ADD_FRIEND(void* gamerHandle) { return invoke <bool>(0x99ABE9BF9DADA162, gamerHandle); }
	static void NETWORK_SET_PLAYER_IS_PASSIVE(bool toggle) { return invoke <void>(0x9C25E8EC4C535FBD, toggle); }
	static void NETWORK_SET_FRIENDLY_FIRE_OPTION(bool friendlyFire) { return invoke <void>(0xF808475FA571D823, friendlyFire); }
	static void NETWORK_SET_RICH_PRESENCE(int id, void* data, int sizeOfData, int numFields) { return invoke <void>(0x1DCCACDCFC569362, id, data, sizeOfData, numFields); }
	static int NETWORK_GET_TIMEOUT_TIME() { return invoke <int>(0x5ED0356A0CE3A34F); }
	static void _0xBC7D36946D19E60E(bool p0) { return invoke <void>(0xBC7D36946D19E60E, p0); }
	static bool _0x880A7202301E282B(void* p0, void* p1, float x, float y, float z, float p5, Any p6) { return invoke <bool>(0x880A7202301E282B, p0, p1, x, y, z, p5, p6); }
	static Any _0xC964FCD3D1720697() { return invoke <Any>(0xC964FCD3D1720697); }
	static Any _0xEC089F84A9C16C62() { return invoke <Any>(0xEC089F84A9C16C62); }
	static void PREVENT_NETWORK_ID_MIGRATION(int netId) { return invoke <void>(0x7182EDDA1EE7DB5A, netId); }
	static void KEEP_NETWORK_ID_IN_FAST_INSTANCE(int netId, bool p1, int p2) { return invoke <void>(0xE1BC73D6815BA361, netId, p1, p2); }
	static void _0x02C4C6C2900D84DF(Player player, Any p1) { return invoke <void>(0x2C4C6C2900D84DF, player, p1); }
	static void _0xD78A26024BB13E08(Player player) { return invoke <void>(0xD78A26024BB13E08, player); }
	static void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int NetworkId, bool ExistsOnAll) { return invoke <void>(0xE05E81A888FA63C8, NetworkId, ExistsOnAll); }
	static void SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(int NetworkId, Player PlayerId, bool AlwaysExistsForPlayer) { return invoke <void>(0xA8A024587329F36A, NetworkId, PlayerId, AlwaysExistsForPlayer); }
	static void SET_NETWORK_ID_STOP_CLONING(int networkId, bool bStopCloning) { return invoke <void>(0x9ED3108D6847760A, networkId, bStopCloning); }
	static void NETWORK_SET_ENTITY_REMAINS_WHEN_UNNETWORKED(Entity entity, bool toggle) { return invoke <void>(0xD785864798258032, entity, toggle); }
	static void NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(Entity EntityIndex, bool Exists) { return invoke <void>(0xF1CA12B18AEF5298, EntityIndex, Exists); }
	static void _0xE31A04513237DC89(Entity entity) { return invoke <void>(0xE31A04513237DC89, entity); }
	static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(int NetworkId, bool Visible, bool RemotelyVisible, Any p3) { return invoke <void>(0xA6928482543022B4, NetworkId, Visible, RemotelyVisible, p3); }
	static bool IS_NETWORK_ID_OWNED_BY_PARTICIPANT(int NetworkId) { return invoke <bool>(0xA1607996431332DF, NetworkId); }
	static Player _NETWORK_GET_PLAYER_OWNER_OF_NETWORK_ID(int netId) { return invoke <Player>(0xA6C0787443C9583E, netId); }
	static void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(bool LocallyVisible, bool RemotelyVisible, int instanceId) { return invoke <void>(0xD1065D68947E7B6E, LocallyVisible, RemotelyVisible, instanceId); }
	static void PREVENT_MIGRATION_OF_ENTITIES_IN_FAST_INSTANCE_FOR_LOCAL_PLAYER(bool toggle) { return invoke <void>(0x89D803CD48622150, toggle); }
	static void SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(bool bIncludePlayersVehicle) { return invoke <void>(0xE5F773C1A1D9D168, bIncludePlayersVehicle); }
	static void SET_PLAYER_INVISIBLE_LOCALLY(Player PlayerId, bool bIncludePlayersVehicle) { return invoke <void>(0x12B37D54667DB0B8, PlayerId, bIncludePlayersVehicle); }
	static void SET_PLAYER_VISIBLE_LOCALLY(Player PlayerId, bool bIncludePlayersVehicle) { return invoke <void>(0xFAA10F1FAFB11AF2, PlayerId, bIncludePlayersVehicle); }
	static void SET_ENTITY_VISIBLE_IN_CUTSCENE(Entity EntityIndex, bool Visible, bool RemotelyVisible, int p3) { return invoke <void>(0xE0031D3C8F36AB82, EntityIndex, Visible, RemotelyVisible, p3); }
	static void _SET_DOOR_NETWORKED(Hash doorHash) { return invoke <void>(0x51D99497ABF3F451, doorHash); }
	static void _SET_DOOR_UNNETWORKED(Any p0, bool toggle) { return invoke <void>(0xC1E1A3D5ED7617B8, p0, toggle); }
	static bool IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(int NetworkId) { return invoke <bool>(0x6E192E33AD436366, NetworkId); }
	static void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(int NetworkId, bool ActivateTracker) { return invoke <void>(0xD45B1FFCCD52FF19, NetworkId, ActivateTracker); }
	static bool IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(float PosX, float PosY, float PosZ, float minRadius, float maxRadius) { return invoke <bool>(0xD82CF8E64C8729D8, PosX, PosY, PosZ, minRadius, maxRadius); }
	static bool IS_SPHERE_VISIBLE_TO_PLAYER(Player PlayerId, float PosX, float PosY, float PosZ, float minRadius, float maxRadius) { return invoke <bool>(0xDC3A310219E5DA62, PlayerId, PosX, PosY, PosZ, minRadius, maxRadius); }
	static void _0xD42C543F73233041(bool p0) { return invoke <void>(0xD42C543F73233041, p0); }
	static void RESERVE_NETWORK_MISSION_OBJECTS(int NumObjectsToReserve) { return invoke <void>(0x4E5C93BD0C32FBF8, NumObjectsToReserve); }
	static void RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(int amount) { return invoke <void>(0xE7DDA8BD3BCF751C, amount); }
	static void RESERVE_NETWORK_MISSION_PEDS(int NumPedsToReserve) { return invoke <void>(0xB60FEBA45333D36F, NumPedsToReserve); }
	static void RESERVE_NETWORK_CLIENT_MISSION_PEDS(int amount) { return invoke <void>(0x807E119F80231732, amount); }
	static void RESERVE_NETWORK_MISSION_VEHICLES(int NumVehiclesToReserve) { return invoke <void>(0x76B02E21ED27A469, NumVehiclesToReserve); }
	static void RESERVE_NETWORK_MISSION_PICKUPS(int amount) { return invoke <void>(0x4D40E7D749BC6E6D, amount); }
	static bool CAN_REGISTER_MISSION_OBJECTS(int NumObjectsToRegister) { return invoke <bool>(0x800DD4721A8B008B, NumObjectsToRegister); }
	static bool CAN_REGISTER_MISSION_PEDS(int NumPedsToRegister) { return invoke <bool>(0xBCBF4FEF9FA5D781, NumPedsToRegister); }
	static bool CAN_REGISTER_MISSION_VEHICLES(int NumVehiclesToRegister) { return invoke <bool>(0x7277F1F2E085EE74, NumVehiclesToRegister); }
	static bool CAN_REGISTER_MISSION_PICKUPS(int amount) { return invoke <bool>(0xF0460C7BF80011EA, amount); }
	static bool CAN_REGISTER_MISSION_ENTITIES(int NumPedsToRegister, int NumVehiclesToRegister, int NumObjectsToRegister, int NumPickupsToRegister) { return invoke <bool>(0x69778E7564BADE6D, NumPedsToRegister, NumVehiclesToRegister, NumObjectsToRegister, NumPickupsToRegister); }
	static int GET_NUM_RESERVED_MISSION_OBJECTS(bool bForAllScripts) { return invoke <int>(0xAA81B5F10BC43AC2, bForAllScripts); }
	static int GET_NUM_RESERVED_MISSION_PEDS(bool bForAllScripts) { return invoke <int>(0x1F13D5AE5CB17E17, bForAllScripts); }
	static int GET_NUM_RESERVED_MISSION_VEHICLES(bool bForAllScripts) { return invoke <int>(0xCF3A965906452031, bForAllScripts); }
	static int _GET_NUM_RESERVED_MISSION_PICKUPS(bool p0) { return invoke <int>(0x62BE3ECC79FBD004, p0); }
	static int GET_NUM_CREATED_MISSION_OBJECTS(bool bForAllScripts) { return invoke <int>(0x12B6281B6C6706C0, bForAllScripts); }
	static int GET_NUM_CREATED_MISSION_PEDS(bool bForAllScripts) { return invoke <int>(0xCB215C4B56A7FAE7, bForAllScripts); }
	static int GET_NUM_CREATED_MISSION_VEHICLES(bool bForAllScripts) { return invoke <int>(0xCD9AB83489430EA, bForAllScripts); }
	static int _GET_NUM_CREATED_MISSION_PICKUPS(bool p0) { return invoke <int>(0xD2BA051B94CA9BCC, p0); }
	static void _GET_RESERVED_MISSION_ENTITIES_FOR_THREAD(int threadId, int* pedMax, int* vehicleMax, int* unkMax, int* pedMin, int* vehicleMin, int* unkMin) { return invoke <void>(0x99AAC89C510DEB0D, threadId, pedMax, vehicleMax, unkMax, pedMin, vehicleMin, unkMin); }
	static void GET_RESERVED_MISSION_ENTITIES_IN_AREA(float locationX, float locationY, float locationZ, bool includeLocalScripts, int* numReservedPeds, int* numReservedVehicles, int* numReservedObjects, int* numReservedPickups) { return invoke <void>(0x5E71E72A94985214, locationX, locationY, locationZ, includeLocalScripts, numReservedPeds, numReservedVehicles, numReservedObjects, numReservedPickups); }
	static bool _0x5F328FC909F0E0FF(int p0, int p1, int p2, int p3) { return invoke <bool>(0x5F328FC909F0E0FF, p0, p1, p2, p3); }
	static int GET_MAX_NUM_NETWORK_OBJECTS() { return invoke <int>(0xC7BE335216B5EC7C); }
	static int GET_MAX_NUM_NETWORK_PEDS() { return invoke <int>(0xC1F7D49C39D2289); }
	static int GET_MAX_NUM_NETWORK_VEHICLES() { return invoke <int>(0xAFCE529F69B21FF); }
	static int GET_MAX_NUM_NETWORK_PICKUPS() { return invoke <int>(0xA72835064DD63E4C); }
	static bool _0x75FC34A2BA345BD1(Entity entity, Player player, void* p2) { return invoke <bool>(0x75FC34A2BA345BD1, entity, player, p2); }
	static void _0x979765465A6F25FC(Entity entity, bool p1) { return invoke <void>(0x979765465A6F25FC, entity, p1); }
	static int _0x5133CF81924F1129() { return invoke <int>(0x5133CF81924F1129); }
	static int _0x1E4E097D71D449FB(bool p0) { return invoke <int>(0x1E4E097D71D449FB, p0); }
	static int _0x982D7AD755B8F62C(bool p0) { return invoke <int>(0x982D7AD755B8F62C, p0); }
	static int _0x917AD74BDCF8B6E9(bool p0) { return invoke <int>(0x917AD74BDCF8B6E9, p0); }
	static int _0xF8DC69DC1AD19072(bool p0) { return invoke <int>(0xF8DC69DC1AD19072, p0); }
	static int _0x744BFBB0CA908161(bool p0) { return invoke <int>(0x744BFBB0CA908161, p0); }
	static int _0x106CBDD5077DEDE1(bool p0) { return invoke <int>(0x106CBDD5077DEDE1, p0); }
	static int _0xBAF7E2979442B29F(bool p0) { return invoke <int>(0xBAF7E2979442B29F, p0); }
	static int _0x039B692B3318FAB6(bool p0) { return invoke <int>(0x39B692B3318FAB6, p0); }
	static int _0x4835413EA6F9C9CD(bool p0) { return invoke <int>(0x4835413EA6F9C9CD, p0); }
	static int GET_NETWORK_TIME() { return invoke <int>(0x7A5487FE9FAA6B48); }
	static int GET_NETWORK_TIME_ACCURATE() { return invoke <int>(0x89023FBBF9200E9F); }
	static bool HAS_NETWORK_TIME_STARTED() { return invoke <bool>(0x46718ACEEDEAFC84); }
	static int GET_TIME_OFFSET(int Time1, int Offset) { return invoke <int>(0x17008CCDAD48503, Time1, Offset); }
	static bool IS_TIME_LESS_THAN(int Time1, int Time2) { return invoke <bool>(0xCB2CF5148012C8D0, Time1, Time2); }
	static bool IS_TIME_MORE_THAN(int Time1, int Time2) { return invoke <bool>(0xDE350F8651E4346C, Time1, Time2); }
	static int GET_TIME_DIFFERENCE(int Time1, int Time2) { return invoke <int>(0xA2C6FC031D46FFF0, Time1, Time2); }
	static int GET_CLOUD_TIME_AS_INT() { return invoke <int>(0x9A73240B49945C76); }
	static void CONVERT_POSIX_TIME(int nContentIndex, void* sDate) { return invoke <void>(0xAC97AF97FA68E5D5, nContentIndex, sDate); }
	static void NETWORK_SET_IN_SPECTATOR_MODE(bool InSpectatorMode, Player playerIndex) { return invoke <void>(0x423DE3854BB50894, InSpectatorMode, playerIndex); }
	static void _NETWORK_SET_IN_STATIC_SPECTATOR_MODE(bool toggle, float x, float y, float z) { return invoke <void>(0xFBF1ECFB39A77B5F, toggle, x, y, z); }
	static bool NETWORK_IS_IN_SPECTATOR_MODE() { return invoke <bool>(0x48746E388762E11); }
	static bool _NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(Player player) { return invoke <bool>(0x5B709519997ECF0F, player); }
	static void NETWORK_SET_IN_MP_CUTSCENE(bool p0, bool p1, int p2, bool p3) { return invoke <void>(0x9CA5DE655269FEC4, p0, p1, p2, p3); }
	static bool NETWORK_IS_IN_MP_CUTSCENE() { return invoke <bool>(0x6CC27C9FA2040220); }
	static bool NETWORK_IS_PLAYER_IN_MP_CUTSCENE(Player playerIndex) { return invoke <bool>(0x63F9EE203C3619F2, playerIndex); }
	static void _0x34BC1E79546BA543(bool p0) { return invoke <void>(0x34BC1E79546BA543, p0); }
	static void _SET_NETWORK_RESPOT_TIMER(Entity entity, int timer, bool p2) { return invoke <void>(0x442B4347B6EC36E8, entity, timer, p2); }
	static bool _0x26A867C0B7A456D1(Entity entity) { return invoke <bool>(0x26A867C0B7A456D1, entity); }
	static void SET_LOCAL_PLAYER_AS_GHOST(bool bSet) { return invoke <void>(0x5FFE9B4144F9712F, bSet); }
	static bool IS_ENTITY_A_GHOST(Entity EntityIndex) { return invoke <bool>(0x21D04D7BC538C146, EntityIndex); }
	static void _SET_PLAYER_VISIBILITY_TO_LOCAL_PLAYER_DISABLED(Player player, bool disabled) { return invoke <void>(0xDCA6ABDB9288FBE4, player, disabled); }
	static void _SET_ENTITY_GHOSTED_TO_LOCAL_PLAYER(Entity entity, bool toggle) { return invoke <void>(0xEE5AE9956743BA20, entity, toggle); }
	static bool IS_OBJECT_REASSIGNMENT_IN_PROGRESS() { return invoke <bool>(0x8FE9EB11EC9CC23A); }
	static int _0x039AD6B57D5179FF() { return invoke <int>(0x39AD6B57D5179FF); }
	static int _0x02B3CDD652B3CDD6() { return invoke <int>(0x2B3CDD652B3CDD6); }
	static int _GET_NUM_PEER_NEGOTIATION_RESPONSES() { return invoke <int>(0x4FE932E84FE932E8); }
	static void _NETWORK_DEBUG_REQUEST_ENTITY_POSITION(void* p0) { return invoke <void>(0xFA38B52F91B59075, p0); }
	static int NETWORK_GET_NETWORK_ID_FROM_ROPE_ID(int ropeId) { return invoke <int>(0x42871327315EDAE8, ropeId); }
	static int NETWORK_GET_ROPE_ID_FROM_NETWORK_ID(int netId) { return invoke <int>(0xEB1A4DD8352EC828, netId); }
	static void _NETWORK_SPAWN_CONFIG_ADD_SPAWN_POINT(float x, float y, float z, float heading) { return invoke <void>(0xFD1AC0B3858F224C, x, y, z, heading); }
	static void _0xA63E4F050F20021F() { return invoke <void>(0xA63E4F050F20021F); }
	static void _NETWORK_SPAWN_CONFIG_ADD_EXCLUSION_VOLUME(Volume volume) { return invoke <void>(0xEEB7818B1D307212, volume); }
	static void _NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME(Volume volume) { return invoke <void>(0xA35E7BF20FA269E0, volume); }
	static void _0x0BF90CBB6B72977B() { return invoke <void>(0xBF90CBB6B72977B); }
	static void _0x7B3FF2D193628126(Player player) { return invoke <void>(0x7B3FF2D193628126, player); }
	static void _0x19B52C20B5C4757C() { return invoke <void>(0x19B52C20B5C4757C); }
	static void NETWORK_SPAWN_CONFIG_SET_FLAGS(int flags) { return invoke <void>(0xF94A0D5B254375DF, flags); }
	static void _0x6CEE2E30021DAEC6() { return invoke <void>(0x6CEE2E30021DAEC6); }
	static void _NETWORK_SPAWN_CONFIG_ADD_PROPERTY_SCRIPTED(int configProperty, bool include) { return invoke <void>(0x44D59EC597BBF348, configProperty, include); }
	static void _0xB131E686BD97B3F8() { return invoke <void>(0xB131E686BD97B3F8); }
	static void _NETWORK_SPAWN_CONFIG_ADD_PROPERTY_PREFERENCE(int configProperty, bool include, float weight) { return invoke <void>(0xEB6027FD1B4600D5, configProperty, include, weight); }
	static void _0x405DDEFB1F531B18(Volume volume, bool p1, Any p2, Any p3) { return invoke <void>(0x405DDEFB1F531B18, volume, p1, p2, p3); }
	static void _0x43CF999205084B4B() { return invoke <void>(0x43CF999205084B4B); }
	static void _0x13F592FC3BF0EA84(Volume volume, bool p1, float originalWeight, Any p3, Any p4) { return invoke <void>(0x13F592FC3BF0EA84, volume, p1, originalWeight, p3, p4); }
	static void _0xCF23AB5BD47B384D(Any p0) { return invoke <void>(0xCF23AB5BD47B384D, p0); }
	static void _0xE5634491A58C2703(float p0) { return invoke <void>(0xE5634491A58C2703, p0); }
	static void NETWORK_SPAWN_CONFIG_SET_GROUND_TO_ROOT_OFFSET(float offset) { return invoke <void>(0x59577799F6AE2F34, offset); }
	static void _NETWORK_SPAWN_CONFIG_SET_LEVEL_WATER_DEPTH(int waterDepthLevel) { return invoke <void>(0xBDCC671B911040F9, waterDepthLevel); }
	static void NETWORK_SPAWN_CONFIG_SET_TUNING_FLOAT(Hash p0, float p1) { return invoke <void>(0x608326F7B98C08D, p0, p1); }
	static void _0x5D3C528B7A7DF836(Hash nsctf) { return invoke <void>(0x5D3C528B7A7DF836, nsctf); }
	static void _0x2686BD9566B65EDA(float x, float y, float z) { return invoke <void>(0x2686BD9566B65EDA, x, y, z); }
	static void _0xBB1EC8C2EEF33BAA(Entity entity) { return invoke <void>(0xBB1EC8C2EEF33BAA, entity); }
	static bool _0x67CCDF74C4DF7169() { return invoke <bool>(0x67CCDF74C4DF7169); }
	static void _0xC8B6D18E22484643() { return invoke <void>(0xC8B6D18E22484643); }
	static void _0x97BCE4C4B3191228() { return invoke <void>(0x97BCE4C4B3191228); }
	static int _0x41452E8A3B9C0C4B() { return invoke <int>(0x41452E8A3B9C0C4B); }
	static bool _NETWORK_SPAWN_CONFIG_SEARCH_IN_PROGRESS() { return invoke <bool>(0x89EC2FC89ECB1005); }
	static void _0x61BFBAA795E712AD() { return invoke <void>(0x61BFBAA795E712AD); }
	static void _NETWORK_SPAWN_CONFIG_SET_CANCEL_SEARCH() { return invoke <void>(0x765E60A1DCB8B1CE); }
	static void _0x691E4DE5309EAEFC(Any p0, void* p1) { return invoke <void>(0x691E4DE5309EAEFC, p0, p1); }
	static void NETWORK_START_SOLO_TUTORIAL_SESSION() { return invoke <void>(0x17E0198B3882C2CB); }
	static void NETWORK_END_TUTORIAL_SESSION() { return invoke <void>(0xD0AFAFF5A51D72F7); }
	static bool NETWORK_IS_IN_TUTORIAL_SESSION() { return invoke <bool>(0xADA24309FE08DACF); }
	static bool NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING() { return invoke <bool>(0x35F0B98A8387274D); }
	static bool NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(Player FirstPlayerIndex, Player SecondPlayerIndex) { return invoke <bool>(0x9DE986FC9A87C474, FirstPlayerIndex, SecondPlayerIndex); }
	static void NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(bool toggle) { return invoke <void>(0x4B05B97BA46F419D, toggle); }
	static void NETWORK_ALLOW_ENTITY_FADING_FOR_INSTANCES(Entity entity, bool toggle) { return invoke <void>(0xF3354D6CA46F419D, entity, toggle); }
	static void _0xDC6AD5C046F33AB4(bool p0, bool p1) { return invoke <void>(0xDC6AD5C046F33AB4, p0, p1); }
	static void _0x6C7E04E9DE451789() { return invoke <void>(0x6C7E04E9DE451789); }
	static void NETWORK_SET_LOCAL_PLAYER_PENDING_FAST_INSTANCE_ID(int instanceId) { return invoke <void>(0x7FF852DCF49DA4, instanceId); }
	static int _NETWORK_GET_PLAYER_FAST_INSTANCE_ID(Player player) { return invoke <int>(0xD9267375834C5EAB, player); }
	static void NETWORK_CONCEAL_PLAYER(Player PlayerIndex, bool Conceal) { return invoke <void>(0xBBDF066252829606, PlayerIndex, Conceal); }
	static bool NETWORK_IS_PLAYER_CONCEALED(Player PlayerIndex) { return invoke <bool>(0x919B3C98ED8292F9, PlayerIndex); }
	static void _0x40FEDB13870042F1() { return invoke <void>(0x40FEDB13870042F1); }
	static void _0x422F9D6D6C7BC290(int p0) { return invoke <void>(0x422F9D6D6C7BC290, p0); }
	static void NETWORK_REQUEST_CLOUD_TUNABLES() { return invoke <void>(0x42FB3B532D526E6C); }
	static bool NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING() { return invoke <bool>(0x467C11ED88B7D28); }
	static int NETWORK_GET_TUNABLE_CLOUD_CRC() { return invoke <int>(0x10BD227A753B0D84); }
	static bool NETWORK_DOES_TUNABLE_EXIST(Hash tunableContext, Hash tunableName) { return invoke <bool>(0x85E5F8B9B898B20A, tunableContext, tunableName); }
	static bool NETWORK_ACCESS_TUNABLE_INT(Hash tunableContext, Hash tunableName, int* value) { return invoke <bool>(0x8BE1146DFD5D4468, tunableContext, tunableName, value); }
	static bool NETWORK_ACCESS_TUNABLE_BOOL(Hash tunableContext, Hash tunableName) { return invoke <bool>(0xAA6A47A573ABB75A, tunableContext, tunableName); }
	static int NETWORK_TRY_ACCESS_TUNABLE_INT_HASH(Hash tunableContext, Hash tunableName, int defaultValue) { return invoke <int>(0xA25E006B36719774, tunableContext, tunableName, defaultValue); }
	static float NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(Hash tunableContext, Hash tunableName, float defaultValue) { return invoke <float>(0xA18393089C05E49C, tunableContext, tunableName, defaultValue); }
	static bool NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(Hash tunableContext, Hash tunableName, bool defaultValue) { return invoke <bool>(0xB2AD5D29A99D4B26, tunableContext, tunableName, defaultValue); }
	static void _0x894B5ECAB45D2342(int netHandle, Any p1) { return invoke <void>(0x894B5ECAB45D2342, netHandle, p1); }
	static void NETWORK_DISABLE_PROXIMITY_MIGRATION(int NetworkId) { return invoke <void>(0x407091CF6037118E, NetworkId); }
	static bool _COMMERCE_STORE_IS_OPEN() { return invoke <bool>(0xCE5E79D9E303628E); }
	static bool _COMMERCE_STORE_IS_ENABLED() { return invoke <bool>(0xDBC754CB6CCB9378); }
	static bool CLOUD_HAS_REQUEST_COMPLETED(int nRequestID) { return invoke <bool>(0x4C61B39930D045DA, nRequestID); }
	static bool CLOUD_DID_REQUEST_SUCCEED(int nRequestID) { return invoke <bool>(0x3A3D5568AF297CD5, nRequestID); }
	static bool _GET_LAUNCH_PARAM_EXISTS(const char* paramName) { return invoke <bool>(0x2E97CE283648CD9, paramName); }
	static const char* GET_LAUNCH_PARAM_VALUE(const char* paramName) { return invoke <const char*>(0x65E65CA6A0FE59D4, paramName); }
	static void _SET_LAUNCH_PARAM_VALUE(const char* paramName, const char* value) { return invoke <void>(0x668AF6E4933AC13F, paramName, value); }
	static void _CLEAR_LAUNCH_PARAM(const char* paramName) { return invoke <void>(0x782C94DB6469634D, paramName); }
	static const char* _GET_LAUNCH_PARAM_STRING() { return invoke <const char*>(0xC59AB6A04333C502); }
	static void _SET_LAUNCH_PARAM_STRING(const char* params) { return invoke <void>(0xDFFC15AA63D04AAB, params); }
	static void CLEAR_SERVICE_EVENT_ARGUMENTS() { return invoke <void>(0x966DD84FB6A46017); }
	static bool UGC_IS_REQUEST_PENDING(int ugcRequestId) { return invoke <bool>(0xF4AC4FA844FD559A, ugcRequestId); }
	static bool UGC_HAS_REQUEST_FINISHED(int ugcRequestId) { return invoke <bool>(0xA9EB4D606076615D, ugcRequestId); }
	static bool UGC_DID_REQUEST_SUCCEED(int ugcRequestId) { return invoke <bool>(0xB6009A90B8495F1, ugcRequestId); }
	static bool _0xCD53E6CBF609C012(int ugcRequestId) { return invoke <bool>(0xCD53E6CBF609C012, ugcRequestId); }
	static int _UGC_QUERY_BY_CONTENT_TYPE(int p0, int maxGet, const char* contentTypeName, int p3, int p4, int p5) { return invoke <int>(0xF40EF49B3099E98E, p0, maxGet, contentTypeName, p3, p4, p5); }
	static int _UGC_QUERY_BY_CATEGORY(int categoryType, int p1, int maxGet, const char* contentTypeName, int p4, bool p5) { return invoke <int>(0x8C109958C9BB559D, categoryType, p1, maxGet, contentTypeName, p4, p5); }
	static int _UGC_QUERY_BY_CONTENT_ID(const char* contentId, bool latestVersion, const char* contentTypeName) { return invoke <int>(0x69D22E183580113F, contentId, latestVersion, contentTypeName); }
	static bool _UGC_IS_BOOK_MARKED(const char* contentId) { return invoke <bool>(0xE42D1042F09865FE, contentId); }
	static void UGC_CLEAR_QUERY_RESULTS(int ugcRequestId) { return invoke <void>(0xE931354FEA710038, ugcRequestId); }
	static bool UGC_QUERY_WAS_FORCE_CANCELLED(int ugcRequestId) { return invoke <bool>(0xF8F0705E77A0E705, ugcRequestId); }
	static int UGC_QUERY_GET_CONTENT_NUM(int ugcRequestId) { return invoke <int>(0x76160E0396142765, ugcRequestId); }
	static Any _UGC_QUERY_GET_CREATOR_HANDLE(Any p0, int index, void* gamerHandle) { return invoke <Any>(0xADB56322EEDFBDC9, p0, index, gamerHandle); }
	static const char* _UGC_QUERY_GET_OWNER_ID(Any p0, int index) { return invoke <const char*>(0xF9F0B3028431967B, p0, index); }
	static const char* _UGC_QUERY_GET_NAME(Any p0, int index) { return invoke <const char*>(0x2D053EA815702DD1, p0, index); }
	static const char* _UGC_QUERY_GET_ROOT_CONTENT_ID(Any p0, int index) { return invoke <const char*>(0x566CEB0542EF5ECF, p0, index); }
	static const char* _UGC_QUERY_GET_PLAYLIST_NAME(Any p0, int index) { return invoke <const char*>(0xCAF50048C8D0FBA0, p0, index); }
	static Hash _UGC_QUERY_GET_MISSION_DESC_HASH(Any p0, int index) { return invoke <Hash>(0xA6BF569956C60A60, p0, index); }
	static const char* _UGC_QUERY_GET_CREATOR_PHOTO(Any p0, int p1, Any p2) { return invoke <const char*>(0x409FE0CA6A4D1D49, p0, p1, p2); }
	static void _UGC_QUERY_GET_DATE(Any p0, int index, void* p2) { return invoke <void>(0xE0CB4AB15CB32710, p0, index, p2); }
	static int _UGC_QUERY_GET_POSIX_UPDATED_DATE(Any p0, Any p1) { return invoke <int>(0x21A99A72B00D8002, p0, p1); }
	static int _UGC_QUERY_GET_POSIX_PUBLISHED_DATE(Any p0, Any p1) { return invoke <int>(0x104080CA9E519B00, p0, p1); }
	static int _UGC_QUERY_GET_VERSION(Any p0, int index, int p2) { return invoke <int>(0x63E9DCBC8B0931ED, p0, index, p2); }
	static int _UGC_QUERY_GET_LANGUAGE(Any p0, int index) { return invoke <int>(0x97764E8AC6487A9A, p0, index); }
	static bool _UGC_QUERY_GET_PUBLISHED(Any p0, Any p1) { return invoke <bool>(0x9993F1E11944A3DD, p0, p1); }
	static float _UGC_QUERY_GET_RATING(Any p0, int index, int p2) { return invoke <float>(0x24CD8FAEA1368379, p0, index, p2); }
	static Any _0x5F0E99071582DECA(Any p0, int index, int p2) { return invoke <Any>(0x5F0E99071582DECA, p0, index, p2); }
	static bool UGC_QUERY_GET_CONTENT_HAS_PLAYER_RECORD(Any p0, int index) { return invoke <bool>(0xF794765390A6DCA5, p0, index); }
	static bool _UGC_QUERY_GET_BOOK_MARKED(Any p0, int index) { return invoke <bool>(0x98539FC453AEA639, p0, index); }
	static bool _UGC_HAS_PRIVILEGE() { return invoke <bool>(0x6506BFA755FB209C); }
	static int UGC_REQUEST_CONTENT_DATA_FROM_PARAMS(const char* szContentType, const char* szContentID, int nFileID, int nFileVersion, int nLanguage) { return invoke <int>(0x7FD2990AF016795E, szContentType, szContentID, nFileID, nFileVersion, nLanguage); }
	static int UGC_REQUEST_CACHED_DESCRIPTION(Hash nHash) { return invoke <int>(0x5E0165278F6339EE, nHash); }
	static bool UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS(Hash nHash) { return invoke <bool>(0x2D5DC831176D0114, nHash); }
	static bool UGC_HAS_DESCRIPTION_REQUEST_FINISHED(Hash nHash) { return invoke <bool>(0xEBFA8D50ADDC54C4, nHash); }
	static bool UGC_DID_DESCRIPTION_REQUEST_SUCCEED(Hash nHash) { return invoke <bool>(0x162C23CA83ED0A62, nHash); }
	static const char* UGC_GET_CACHED_DESCRIPTION(Hash nHash, int nMaxLength) { return invoke <const char*>(0x40F7E66472DF3E5C, nHash, nMaxLength); }
	static bool UGC_RELEASE_CACHED_DESCRIPTION(Hash nHash) { return invoke <bool>(0x5A34CD9C3C5BEC44, nHash); }
	static void UGC_RELEASE_ALL_CACHED_DESCRIPTIONS() { return invoke <void>(0x68103E2247887242); }
	static void UGC_SET_QUERY_DATA_FROM_OFFLINE(bool bFromOffline) { return invoke <void>(0xF98DDE0A8ED09323, bFromOffline); }
	static bool UGC_IS_LANGUAGE_SUPPORTED(int nLanguage) { return invoke <bool>(0xF53E48461B71EECB, nLanguage); }
	static Any _0xD4022C7286B0DFA2(const char* p0, int p1, int p2) { return invoke <Any>(0xD4022C7286B0DFA2, p0, p1, p2); }
	static bool _NETWORK_PERSONA_PHOTO_WRITE_SC_PROFILE(const char* texture, int personaPhotoType, int formatIndex) { return invoke <bool>(0xB72999D3120599DF, texture, personaPhotoType, formatIndex); }
	static bool _NETWORK_PERSONA_PHOTO_WRITE_LOCAL(const char* texture, int playerSlot, int p2, int personaPhotoLocalCacheType) { return invoke <bool>(0x2A48D9567940598F, texture, playerSlot, p2, personaPhotoLocalCacheType); }
	static bool _NETWORK_IS_PREVIOUS_UPLOAD_PENDING() { return invoke <bool>(0xA21E3BAD0A42D199); }
	static Any _0xCC4E72C339461ED1() { return invoke <Any>(0xCC4E72C339461ED1); }
	static const char* _REQUEST_PEDSHOT_TEXTURE_LOCAL_BACKUP_DOWNLOAD(int player, int personaPhotoLocalCacheType) { return invoke <const char*>(0x356F9FB0698C1FEB, player, personaPhotoLocalCacheType); }
	static const char* _REQUEST_PEDSHOT_TEXTURE_LOCAL_DOWNLOAD(void* gamerHandle, int p1) { return invoke <const char*>(0xCAF4CA2F87779F8F, gamerHandle, p1); }
	static const char* _REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD(void* gamerHandle, int p1) { return invoke <const char*>(0xB5C4B18B12A2AF23, gamerHandle, p1); }
	static bool _TEXTURE_DOWNLOAD_TEXTURE_NAME_IS_VALID(const char* name) { return invoke <bool>(0xE2C3CEC3C0903A00, name); }
	static int TEXTURE_DOWNLOAD_REQUEST(void* gamerHandle, const char* cloudPath, const char* textureName, bool useCacheWithoutCloudChecks) { return invoke <int>(0x16160DA74A8E74A2, gamerHandle, cloudPath, textureName, useCacheWithoutCloudChecks); }
	static int _MUGSHOT_TEXTURE_DOWNLOAD_REQUEST(void* gamerHandle, int p1, const char* name, bool p3) { return invoke <int>(0x9B5DB6CEAFAA10BB, gamerHandle, p1, name, p3); }
	static int UGC_TEXTURE_DOWNLOAD_REQUEST(const char* contentID, int nFileID, int nFileVersion, int nLanguage, const char* textureName, bool useCacheWithoutCloudChecks) { return invoke <int>(0x308F96458B7087CC, contentID, nFileID, nFileVersion, nLanguage, textureName, useCacheWithoutCloudChecks); }
	static int _LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(int playerSlot, int personaPhotoLocalCacheType) { return invoke <int>(0x6E2FD8CF7EB10E53, playerSlot, personaPhotoLocalCacheType); }
	static void TEXTURE_DOWNLOAD_RELEASE(int textureDownloadHandle) { return invoke <void>(0x487EB90B98E9FB19, textureDownloadHandle); }
	static void _TEXTURE_DOWNLOAD_RELEASE_BY_NAME(const char* name) { return invoke <void>(0x7A17B7981560FFA5, name); }
	static const char* TEXTURE_DOWNLOAD_GET_NAME(int textureDownloadHandle) { return invoke <const char*>(0x3448505B6E35262D, textureDownloadHandle); }
	static int GET_STATUS_OF_TEXTURE_DOWNLOAD(int textureDownloadHandle) { return invoke <int>(0x8BD6C6DEA20E82C6, textureDownloadHandle); }
	static int _PEDMUGSHOT_GET_STATUS() { return invoke <int>(0xCBAC13F065C47596); }
	static bool _PEDMUGSHOT_TAKE() { return invoke <bool>(0xCD954F330693F5F2); }
	static Any _PEDMUGSHOT_REQUEST_SEND() { return invoke <Any>(0xFBC30B70B3CDB87E); }
	static void _0x814729078AED6D30() { return invoke <void>(0x814729078AED6D30); }
	static bool NETWORK_HAVE_ROS_BANNED_PRIV() { return invoke <bool>(0x8020A73847E0CA7D); }
	static bool NETWORK_HAS_ROS_PRIVILEGE(int privilegeId) { return invoke <bool>(0xA699957E60D80214, privilegeId); }
	static int NETWORK_START_USER_CONTENT_PERMISSIONS_CHECK(void* hGamer) { return invoke <int>(0xDEB2B99A1AF1A2A6, hGamer); }
	static void _NETWORK_AUTO_SESSION_SET_ALLOWED_TO_SPLIT(bool toggle) { return invoke <void>(0xA428058079EE65C, toggle); }
	static bool NETWORK_AUTO_SESSION_IS_ALLOWED_TO_MERGE() { return invoke <bool>(0xAADED99A6B268A27); }
	static void _NETWORK_AUTO_SESSION_SET_ALLOWED_TO_MERGE(bool toggle, void* p1, int p2) { return invoke <void>(0x63246A24F5747510, toggle, p1, p2); }
	static bool _NETWORK_AUTO_SESSION_IS_AUTO_WARP_DISABLED() { return invoke <bool>(0xE258570E0C116A66); }
	static void _NETWORK_AUTO_SESSION_SET_AUTO_WARP_ENABLED(bool toggle) { return invoke <void>(0x4440FEE3EFE78F54, toggle); }
	static bool NETWORK_AUTO_SESSION_CAN_SPLIT_SESSION(int* p0) { return invoke <bool>(0xE404BFF0ABA23CDC, p0); }
	static bool NETWORK_AUTO_SESSION_SPLIT_SESSION(int playersToTake, int maxInstancePlayers, int sessionFlags, int bucketId) { return invoke <bool>(0xC223D299C670413D, playersToTake, maxInstancePlayers, sessionFlags, bucketId); }
	static bool _NETWORK_AUTO_SESSION_IS_PROCESSING_SESSION_SPLIT() { return invoke <bool>(0xA021095C983F20D8); }
	static bool _NETWORK_AUTO_SESSION_SPLIT_SESSION_SUCCESSFUL() { return invoke <bool>(0x6D87BA8EF15226CD); }
	static bool _NETWORK_AUTO_SESSION_IS_INSTANCED_SESSION() { return invoke <bool>(0x277865A734918AE6); }
	static void NETWORK_AUTO_SESSION_FINISH_INSTANCE() { return invoke <void>(0xBB51299166B844F3); }
	static void _0xFD8112109A96877C() { return invoke <void>(0xFD8112109A96877C); }
	static void _0x5A91BCEF74944E93(Player player, float p1) { return invoke <void>(0x5A91BCEF74944E93, player, p1); }
	static int _0xFB3205788F8AFA3F() { return invoke <int>(0xFB3205788F8AFA3F); }
	static void _0x335AF56613CA0F49(int p0) { return invoke <void>(0x335AF56613CA0F49, p0); }
	static bool _0x9E5A47744C0F0376(int p0) { return invoke <bool>(0x9E5A47744C0F0376, p0); }
	static void _0xD3B6EBC6C3D77D44(int p0) { return invoke <void>(0xD3B6EBC6C3D77D44, p0); }
	static void _0xA7670F7991099680(int p0) { return invoke <void>(0xA7670F7991099680, p0); }
	static void _0x7673C0D2C5CDAC55() { return invoke <void>(0x7673C0D2C5CDAC55); }
	static void _0x3CBD6565D9C3B133(int p0, int p1, float p2) { return invoke <void>(0x3CBD6565D9C3B133, p0, p1, p2); }
	static void _0x0D183D8490EE4366(int p0, int p1) { return invoke <void>(0xD183D8490EE4366, p0, p1); }
	static void _0xC1968045EEB563B7(int p0) { return invoke <void>(0xC1968045EEB563B7, p0); }
	static bool NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED() { return invoke <bool>(0xE2C3AEE6CE603B7); }
	static bool _0x0B6B4507AC5EA8B8() { return invoke <bool>(0xB6B4507AC5EA8B8); }
	static bool NETWORK_IS_RESETTING_POPULATION() { return invoke <bool>(0x1BB50CD340A996E6); }
	static bool NETWORK_RESET_POPULATION(bool p0, int p1) { return invoke <bool>(0x101F538C25ABB39A, p0, p1); }
	static void NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(bool flag) { return invoke <void>(0xC505036A35AFD01B, flag); }
	static void _0x3034C77C79A58880(bool p0) { return invoke <void>(0x3034C77C79A58880, p0); }
	static void NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION(Entity EntityIndex, bool CanModify) { return invoke <void>(0x267C78C60E806B9A, EntityIndex, CanModify); }
	static void NETWORK_SHOW_CHAT_RESTRICTION_MSC(Player localGamerIndex) { return invoke <void>(0x6BFF5F84102DF80A, localGamerIndex); }
	static void NETWORK_SHOW_PSN_UGC_RESTRICTION() { return invoke <void>(0x5C497525F803486B); }
	static bool NETWORK_IS_CONNECTED_VIA_RELAY(Player PlayerIndex) { return invoke <bool>(0x16D3D49902F697BB, PlayerIndex); }
	static float NETWORK_GET_AVERAGE_LATENCY(Player PlayerIndex) { return invoke <float>(0xD414BE129BB81B32, PlayerIndex); }
	static float NETWORK_GET_AVERAGE_PING(Player PlayerIndex) { return invoke <float>(0xE3A041ED6AC2B45, PlayerIndex); }
	static float NETWORK_GET_AVERAGE_PACKET_LOSS(Player PlayerIndex) { return invoke <float>(0x350C23949E43686C, PlayerIndex); }
	static int NETWORK_GET_NUM_UNACKED_RELIABLES(Player PlayerIndex) { return invoke <int>(0xFF8FCF9FFC458A1C, PlayerIndex); }
	static int NETWORK_GET_UNRELIABLE_RESEND_COUNT(Player PlayerIndex) { return invoke <int>(0x3765C3A3E8192E10, PlayerIndex); }
	static int NETWORK_GET_HIGHEST_RELIABLE_RESEND_COUNT(Player PlayerIndex) { return invoke <int>(0x52C1EADAF7B10302, PlayerIndex); }
	static void NETWORK_DUMP_NET_IF_CONFIG() { return invoke <void>(0xAEDF1BC1C133D6E3); }
	static void NETWORK_GET_NET_STATISTICS_INFO() { return invoke <void>(0x6FD992C4A1C1B986); }
	static bool NETWORK_IS_PLAYER_INDEX_VALID(Player player) { return invoke <bool>(0x255A5EF65EDA9167, player); }
	static bool _GET_PLAYER_WAYPOINT_IS_ACTIVE(Player player) { return invoke <bool>(0xDCC4B7F7112E8AB7, player); }
	static void _0x455156F47DC6B78C(bool p0) { return invoke <void>(0x455156F47DC6B78C, p0); }
	static void _SET_LOCAL_PLAYER_DAMAGE_MULTIPLIER_FOR_PLAYER(Player player, float damageMultiplier) { return invoke <void>(0xD041A32992A55F84, player, damageMultiplier); }
	static void NETWORK_TRIGGER_DAMAGE_EVENT_FOR_ZERO_DAMAGE(Entity EntityIndex, bool shouldTrigger) { return invoke <void>(0xC8BC052AE87D744, EntityIndex, shouldTrigger); }
	static void _0x5CD3AAD8FF9ED121(Any p0) { return invoke <void>(0x5CD3AAD8FF9ED121, p0); }
	static void _0x51951DE06C0D1C40(Player player, int type) { return invoke <void>(0x51951DE06C0D1C40, player, type); }
	static void _0xE3AB5EEFCB6671A2(int setting) { return invoke <void>(0xE3AB5EEFCB6671A2, setting); }
	static void _0x9B39B0555CC692B5() { return invoke <void>(0x9B39B0555CC692B5); }
	static int _0xFE53B1F8D43F19BF(Player player1, Player player2) { return invoke <int>(0xFE53B1F8D43F19BF, player1, player2); }
	static bool _0x862C5040F4888741(Player player1, Player player2) { return invoke <bool>(0x862C5040F4888741, player1, player2); }
	static void _0x2CD41AC000E6F611() { return invoke <void>(0x2CD41AC000E6F611); }
	static void _0xACC44768AF229042() { return invoke <void>(0xACC44768AF229042); }
	static void _0x7E300B5B86AB1D1A(void* p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14) { return invoke <void>(0x7E300B5B86AB1D1A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
	static int GET_UNIQUE_INT_FOR_PLAYER(Player player) { return invoke <int>(0x7F723401B9D921C, player); }
	static void _0x780A13F780A13F1B(bool toggle) { return invoke <void>(0x780A13F780A13F1B, toggle); }
	static bool _NETWORK_IS_TRACKED_PLAYER_VISIBLE(Player player, Player trackedPlayer) { return invoke <bool>(0xE525878A35B9EEBD, player, trackedPlayer); }
	static bool NETWORK_IS_AIM_CAM_ACTIVE(Player player) { return invoke <bool>(0x8E7CE19219669AEB, player); }
	static void _NETWORK_ALERT(Hash ctx, Hash lh, int ec, int h) { return invoke <void>(0x1BAA028F52EED310, ctx, lh, ec, h); }
	static void _0x19447FCAE97704DC(Hash ctx, int ec, bool ex, bool ro) { return invoke <void>(0x19447FCAE97704DC, ctx, ec, ex, ro); }
	static void _0x2C4E98DDA475364F(const char* p0) { return invoke <void>(0x2C4E98DDA475364F, p0); }
	static void _0x3F0ABAE38A0515AD(int p0, int p1) { return invoke <void>(0x3F0ABAE38A0515AD, p0, p1); }
	static int _0x3F2EE18A3E294801(int p0) { return invoke <int>(0x3F2EE18A3E294801, p0); }
	static void _SET_SOCIAL_MATCHMAKING_ALLOWED(bool toggle) { return invoke <void>(0x777D0571A466B520, toggle); }
	static bool _GET_SOCIAL_MATCHMAKING_ALLOWED() { return invoke <bool>(0xD0541EF28E9C4783); }
	static bool NETWORK_AWARD_HAS_REACHED_MAXCLAIM(Any p0) { return invoke <bool>(0xFBE782B3165AC8EC, p0); }
	static Any _0x271F95E55C663B8B(Any p0, Any p1) { return invoke <Any>(0x271F95E55C663B8B, p0, p1); }
	static Any _0x64A36BA85CE01A81(Any p0, Any p1, Any p2, Any p3) { return invoke <Any>(0x64A36BA85CE01A81, p0, p1, p2, p3); }
	static Any _0xE10F2D7715ABABEC(Any p0) { return invoke <Any>(0xE10F2D7715ABABEC, p0); }
	static Any _0x7A8E8DF782B47EB0(Any p0, Any p1, Any p2) { return invoke <Any>(0x7A8E8DF782B47EB0, p0, p1, p2); }
	static Any _0x77B299E8799B1332(Any p0, Any p1, Any p2) { return invoke <Any>(0x77B299E8799B1332, p0, p1, p2); }
	static Any _0x923346025512DFB7(Any p0) { return invoke <Any>(0x923346025512DFB7, p0); }
	static int _NETWORK_GET_XP() { return invoke <int>(0xDB438CC9BC6F4022); }
	static int _NETWORK_GET_RANK() { return invoke <int>(0x32C90CDFAF40514C); }
	static void NETWORK_SET_RECENT_GAMERS_ENABLED(bool toggle) { return invoke <void>(0x29FE035D35B8589C, toggle); }
	static bool _0x273E04A3A7AD1F2D() { return invoke <bool>(0x273E04A3A7AD1F2D); }
	static void _NETWORK_ADD_PLAYER_TO_RECENT_GAMERS_LIST(Player player, int p1) { return invoke <void>(0x157D8F3DE12B307F, player, p1); }
	static bool NETWORK_REQUEST_RECENT_GAMER_NAMES(int p0, int playerCount) { return invoke <bool>(0x6D206D383BB5F6B1, p0, playerCount); }
	static bool _NETWORK_IS_RECENT_GAMER_NAMES_REQUEST_IN_PROGRESS() { return invoke <bool>(0x4664D213A0CCAF40); }
	static bool _NETWORK_DID_RECENT_GAMER_NAMES_REQUEST_SUCCEED() { return invoke <bool>(0x12AEB56B489415C5); }
	static int _NETWORK_GET_NUM_RECENT_GAMERS() { return invoke <int>(0x37A834AEC6A4F74A); }
	static bool NETWORK_GET_RECENT_GAMER_NAMES(int p0, int p1, void* outData, int dataSize) { return invoke <bool>(0xFEFCC345CE357453, p0, p1, outData, dataSize); }
	static void _0x49CF17A564918E8D() { return invoke <void>(0x49CF17A564918E8D); }
	static void _0xD637D327080CD86E(int p0) { return invoke <void>(0xD637D327080CD86E, p0); }
	static void _0x564552C6AF1EEAB1() { return invoke <void>(0x564552C6AF1EEAB1); }
	static void NETWORK_ACTIVITY_RESET_TO_IDLE() { return invoke <void>(0x3FE141FDB990E3D1); }
	static void NETWORK_ACTIVITY_SET_CURRENT(int netPlaylistActivity) { return invoke <void>(0x9ADAC065D9F6706F, netPlaylistActivity); }
	static const char* _NETWORK_GET_ROS_TITLE_NAME() { return invoke <const char*>(0xAC6153A0722F524C); }
	static void _REPORT_PLAYER(Player player, int reportType, const char* description, const char* horseName) { return invoke <void>(0xA197C35F73AC0F12, player, reportType, description, horseName); }
}

namespace OBJECT
{
	static Object CREATE_OBJECT(Hash ModelIndex, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, bool RegisterAsNetworkObject, bool ScriptHostObject, bool ForceToBeObject, bool p7, bool p8) { return invoke <Object>(0x509D5878EB39E842, ModelIndex, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, RegisterAsNetworkObject, ScriptHostObject, ForceToBeObject, p7, p8); }
	static Object CREATE_OBJECT_NO_OFFSET(Hash ModelIndex, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, bool RegisterAsNetworkObject, bool ScriptHostObject, bool ForceToBeObject, bool p7) { return invoke <Object>(0x9A294B2138ABB884, ModelIndex, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, RegisterAsNetworkObject, ScriptHostObject, ForceToBeObject, p7); }
	static void DELETE_OBJECT(Object* ObjectIndex) { return invoke <void>(0x931914268722C263, ObjectIndex); }
	static bool PLACE_OBJECT_ON_GROUND_PROPERLY(Object ObjectIndex, bool p1) { return invoke <bool>(0x58A850EAEE20FAA3, ObjectIndex, p1); }
	static bool SLIDE_OBJECT(Object ObjectID, float VecDestCoorstX, float VecDestCoorstY, float VecDestCoorstZ, float VecIncrementX, float VecIncrementY, float VecIncrementZ, bool StopOnCollision) { return invoke <bool>(0x2FDFF4107B8C1147, ObjectID, VecDestCoorstX, VecDestCoorstY, VecDestCoorstZ, VecIncrementX, VecIncrementY, VecIncrementZ, StopOnCollision); }
	static void SET_OBJECT_TARGETTABLE(Object ObjectID, bool Targettable) { return invoke <void>(0x8A7391690F5AFD81, ObjectID, Targettable); }
	static void _SET_OBJECT_TARGETTABLE_2(Object object, bool targettable) { return invoke <void>(0x581EDBE56E8D62C9, object, targettable); }
	static void _SET_OBJECT_TARGETTABLE_FOCUS(Object object, bool p1, bool p2) { return invoke <void>(0xA22712E8471AA08E, object, p1, p2); }
	static void _0xF6E88489B4E6EBE5(Any p0, Any p1) { return invoke <void>(0xF6E88489B4E6EBE5, p0, p1); }
	static void _0xE157A8A336C7F04A(Any p0, Any p1) { return invoke <void>(0xE157A8A336C7F04A, p0, p1); }
	static void _0x46CBCF0E98A4E156(Any p0, Any p1) { return invoke <void>(0x46CBCF0E98A4E156, p0, p1); }
	static Object GET_CLOSEST_OBJECT_OF_TYPE(float scrVecCentreCoorsX, float scrVecCentreCoorsY, float scrVecCentreCoorsZ, float Radius, Hash ObjectModelHashKey, bool RegisterAsScriptObject, bool ScriptHostObject, bool RegisterAsNetworkObject) { return invoke <Object>(0xE143FA2249364369, scrVecCentreCoorsX, scrVecCentreCoorsY, scrVecCentreCoorsZ, Radius, ObjectModelHashKey, RegisterAsScriptObject, ScriptHostObject, RegisterAsNetworkObject); }
	static bool HAS_OBJECT_BEEN_BROKEN(Object ObjectID) { return invoke <bool>(0x8ABFB70C49CC43E2, ObjectID); }
	static bool HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(float scrVecCoorsX, float scrVecCoorsY, float scrVecCoorsZ, float Radius, Hash model, int SearchFlags) { return invoke <bool>(0x761B0E69AC4D007E, scrVecCoorsX, scrVecCoorsY, scrVecCoorsZ, Radius, model, SearchFlags); }
	static Vector3 GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(float vPosX, float vPosY, float vPosZ, float fHeading, float vOffsetX, float vOffsetY, float vOffsetZ) { return invoke <Vector3>(0x163E252DE035A133, vPosX, vPosY, vPosZ, fHeading, vOffsetX, vOffsetY, vOffsetZ); }
	static void _ADD_DOOR_TO_SYSTEM_NEW(Hash doorHash, bool p1, bool p2, bool p3, int threadId, int p5, bool p6) { return invoke <void>(0xD99229FE93B46286, doorHash, p1, p2, p3, threadId, p5, p6); }
	static bool _IS_DOOR_REGISTERED_WITH_NETWORK(Hash doorHash) { return invoke <bool>(0xB5DED7B65C604FDF, doorHash); }
	static void REMOVE_DOOR_FROM_SYSTEM(Hash doorEnumHash) { return invoke <void>(0x464D8E1427156FE4, doorEnumHash); }
	static void DOOR_SYSTEM_SET_DOOR_STATE(Hash doorEnumHash, int state) { return invoke <void>(0x6BAB9442830C7F53, doorEnumHash, state); }
	static int DOOR_SYSTEM_GET_DOOR_STATE(Hash doorEnumHash) { return invoke <int>(0x160AA1B32F6139B8, doorEnumHash); }
	static void DOOR_SYSTEM_SET_AUTOMATIC_RATE(Hash doorEnumHash, float fAutomaticRate) { return invoke <void>(0x3C27E13B42A0E82, doorEnumHash, fAutomaticRate); }
	static void DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Hash doorEnumHash, float fAutomaticDistance) { return invoke <void>(0x9BA001CB45CBF627, doorEnumHash, fAutomaticDistance); }
	static void _0xB3B1546D23DF8DE1(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0xB3B1546D23DF8DE1, p0, p1, p2, p3, p4); }
	static void DOOR_SYSTEM_SET_OPEN_RATIO(Hash doorEnumHash, float fOpenRatio, bool forceUpdate) { return invoke <void>(0xB6E6FBA95C7324AC, doorEnumHash, fOpenRatio, forceUpdate); }
	static void _0x3A77DAE8B4FD7586(Any p0, Any p1) { return invoke <void>(0x3A77DAE8B4FD7586, p0, p1); }
	static void _DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(Hash doorHash, bool p1) { return invoke <void>(0x1F1FABFE9B2A1254, doorHash, p1); }
	static bool _IS_DOOR_REGISTERED_WITH_OWNER(Hash doorHash) { return invoke <bool>(0x4F89DAD4156BA145, doorHash); }
	static void _DOOR_SYSTEM_CHANGE_SCRIPT_OWNER(Hash doorHash) { return invoke <void>(0x985767F5FA45BC44, doorHash); }
	static float _DOOR_SYSTEM_GET_AUTOMATIC_RATE(Hash doorHash) { return invoke <float>(0x8433E1954BE323FC, doorHash); }
	static Any _0x6E2AA80BB0C03728(Any p0, Any p1) { return invoke <Any>(0x6E2AA80BB0C03728, p0, p1); }
	static void _DOOR_SYSTEM_SET_AUTOMATIC_STATE(Hash doorHash, bool disable) { return invoke <void>(0x1BC47A9DEDC8DF5D, doorHash, disable); }
	static float DOOR_SYSTEM_GET_OPEN_RATIO(Hash doorEnumHash) { return invoke <float>(0x65499865FCA6E5EC, doorEnumHash); }
	static void _0x7F458B543006C8FE(Any p0, Any p1) { return invoke <void>(0x7F458B543006C8FE, p0, p1); }
	static Any _0xACD4F9831DFAD7F5(Any p0) { return invoke <Any>(0xACD4F9831DFAD7F5, p0); }
	static void _0x0C0A373D181BF900(Any p0) { return invoke <void>(0xC0A373D181BF900, p0); }
	static void _0xA93F925F1942E434(Any p0, Any p1) { return invoke <void>(0xA93F925F1942E434, p0, p1); }
	static Any _0x4D8611DFE1126478(Any p0) { return invoke <Any>(0x4D8611DFE1126478, p0); }
	static void _0x57C242543B7B8FB9(Any p0, Any p1) { return invoke <void>(0x57C242543B7B8FB9, p0, p1); }
	static void _0x4AE07EBA3462C5D5(Any p0, Any p1) { return invoke <void>(0x4AE07EBA3462C5D5, p0, p1); }
	static void _0x22031584496CFB70(Any p0, Any p1) { return invoke <void>(0x22031584496CFB70, p0, p1); }
	static void _0xC07B91B996C1DE89(Any p0, Any p1) { return invoke <void>(0xC07B91B996C1DE89, p0, p1); }
	static bool IS_DOOR_REGISTERED_WITH_SYSTEM(Hash doorEnumHash) { return invoke <bool>(0xC153C43EA202C8C1, doorEnumHash); }
	static bool IS_DOOR_CLOSED(Hash doorEnumHash) { return invoke <bool>(0xC531EE8A1145A149, doorEnumHash); }
	static Any _0x0943113E02322164(Object object, int p1) { return invoke <Any>(0x943113E02322164, object, p1); }
	static Any _0x614D0B4533F842D3(Any p0) { return invoke <Any>(0x614D0B4533F842D3, p0); }
	static void _DOOR_SYSTEM_FORCE_SHUT(Hash doorHash, bool p1) { return invoke <void>(0x276AAF0F1C7F2494, doorHash, p1); }
	static Any _0xEBA314768FB35D58(Any p0) { return invoke <Any>(0xEBA314768FB35D58, p0); }
	static void _0x5230BF34EB0EC645(Any p0) { return invoke <void>(0x5230BF34EB0EC645, p0); }
	static bool DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float Radius, Hash ModelIndex, bool checkPhysicsExists) { return invoke <bool>(0xBFA48E2FF417213F, VecCoorsX, VecCoorsY, VecCoorsZ, Radius, ModelIndex, checkPhysicsExists); }
	static bool IS_POINT_IN_ANGLED_AREA(float VecPointX, float VecPointY, float VecPointZ, float VecCoors1X, float VecCoors1Y, float VecCoors1Z, float VecCoors2X, float VecCoors2Y, float VecCoors2Z, float DistanceP1toP4, bool HighlightArea, bool bCheck3D) { return invoke <bool>(0x2A70BAE8883E4C81, VecPointX, VecPointY, VecPointZ, VecCoors1X, VecCoors1Y, VecCoors1Z, VecCoors2X, VecCoors2Y, VecCoors2Z, DistanceP1toP4, HighlightArea, bCheck3D); }
	static void SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(Object ObjectID, bool AllowFlag) { return invoke <void>(0x4D89D607CB3DD1D2, ObjectID, AllowFlag); }
	static void SET_OBJECT_PHYSICS_PARAMS(Object ObjectIndex, float fMass, float fGravityFactor, float TranslationalDampingX, float TranslationalDampingY, float TranslationalDampingZ, float RotationalDampingX, float RotationalDampingY, float RotationalDampingZ, float fCollisionMargin, float fMaxAngularSpeed, float fBuoyancyFactor) { return invoke <void>(0xF6DF6E90DE7DF90F, ObjectIndex, fMass, fGravityFactor, TranslationalDampingX, TranslationalDampingY, TranslationalDampingZ, RotationalDampingX, RotationalDampingY, RotationalDampingZ, fCollisionMargin, fMaxAngularSpeed, fBuoyancyFactor); }
	static float GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Object ObjectIndex, bool HealthPercentageByMass) { return invoke <float>(0xB6FBFD079B8D0596, ObjectIndex, HealthPercentageByMass); }
	static Any _0x235C863DA77BD88D(Any p0, Any p1, Any p2) { return invoke <Any>(0x235C863DA77BD88D, p0, p1, p2); }
	static void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Object ObjectIndex, bool bActivatePhysicsWhenUnfrozen) { return invoke <void>(0x406137F8EF90EAF5, ObjectIndex, bActivatePhysicsWhenUnfrozen); }
	static void BREAK_OBJECT_FRAGMENT_CHILD(Object ObjectIndex, int Component, bool Disappear) { return invoke <void>(0xE7E4C198B0185900, ObjectIndex, Component, Disappear); }
	static void BREAK_ALL_OBJECT_FRAGMENT_BONES(Object object) { return invoke <void>(0x8462BE2341A55B6F, object); }
	static void _0xAAACF33CBF9B990A(Any p0, Any p1) { return invoke <void>(0xAAACF33CBF9B990A, p0, p1); }
	static void _DAMAGE_BONE_ON_PROP(Object object, int bone) { return invoke <void>(0xE4EFB315BCD2A838, object, bone); }
	static void FIX_OBJECT_FRAGMENT(Object ObjectIndex) { return invoke <void>(0xF9C1681347C8BD15, ObjectIndex); }
	static Any _0x58DE624FA7FB0E7F(Any p0) { return invoke <Any>(0x58DE624FA7FB0E7F, p0); }
	static void _0x491439AEF410A2FC(Any p0) { return invoke <void>(0x491439AEF410A2FC, p0); }
	static void _SET_OBJECT_BREAK_SCALE(Object object, float scale) { return invoke <void>(0xFFB99FFD17F65889, object, scale); }
	static void _0xCEAB54F4632C6EF6(Any p0, Any p1) { return invoke <void>(0xCEAB54F4632C6EF6, p0, p1); }
	static void TRACK_OBJECT_VISIBILITY(Object ObjectID) { return invoke <void>(0xB252BC036B525623, ObjectID); }
	static bool IS_OBJECT_VISIBLE(Object ObjectID) { return invoke <bool>(0x8B32ACE6326A7546, ObjectID); }
	static void SET_OBJECT_TAKES_DAMAGE_FROM_COLLIDING_WITH_BUILDINGS(Object ObjectIndex, bool bTakesDamage) { return invoke <void>(0xEB6F1A9B5510A5D2, ObjectIndex, bTakesDamage); }
	static void ALLOW_DAMAGE_EVENTS_FOR_NON_NETWORKED_OBJECTS(bool enabled) { return invoke <void>(0xE2B3B852B537C398, enabled); }
	static void _0x6579860A5558524A(Any p0, Any p1) { return invoke <void>(0x6579860A5558524A, p0, p1); }
	static void _0xDFA1237F5228263F(Any p0, Any p1) { return invoke <void>(0xDFA1237F5228263F, p0, p1); }
	static float _GET_LIGHT_INTENSITY_FROM_OBJECT(Object object) { return invoke <float>(0xFA3B61EC249B4674, object); }
	static void _SET_LIGHT_INTENSITY_FOR_OBJECT(Object object, float lightIntensity) { return invoke <void>(0xF49574E2332A8F06, object, lightIntensity); }
	static void _SET_LIGHT_TRANSLUCENCY_FOR_OBJECT(Object object, float value) { return invoke <void>(0x63E39F09310F481F, object, value); }
	static void _SET_LIGHT_SCATTERING_DISABLED_FOR_OBJECT(Object object, bool disable) { return invoke <void>(0x4D1D4E411CE52D0, object, disable); }
	static void _0x7FCD49388BC9B775(Any p0, Any p1) { return invoke <void>(0x7FCD49388BC9B775, p0, p1); }
	static Any _0xFA99E8E575F2FEF8(Any p0) { return invoke <Any>(0xFA99E8E575F2FEF8, p0); }
	static Object GET_RAYFIRE_MAP_OBJECT(float PosX, float PosY, float PosZ, float fRadius, const char* RayfireName) { return invoke <Object>(0xB48FCED898292E52, PosX, PosY, PosZ, fRadius, RayfireName); }
	static void SET_STATE_OF_RAYFIRE_MAP_OBJECT(Object RayFireObject, int state) { return invoke <void>(0x5C29F698D404C5E1, RayFireObject, state); }
	static int GET_STATE_OF_RAYFIRE_MAP_OBJECT(Object RayFireObject) { return invoke <int>(0x899BA936634A322E, RayFireObject); }
	static bool DOES_RAYFIRE_MAP_OBJECT_EXIST(Object RayFireObject) { return invoke <bool>(0x52AF537A0C5B8AAD, RayFireObject); }
	static float GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(Object RayFireObject) { return invoke <float>(0x260EE4FDBDF4DB01, RayFireObject); }
	static Pickup CREATE_PICKUP(Hash Type, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, int PlacementFlags, int Amount, bool ScriptHostObject, Hash CustomModel, int p8, float p9, Any p10) { return invoke <Pickup>(0xFBA08C503DD5FA58, Type, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, PlacementFlags, Amount, ScriptHostObject, CustomModel, p8, p9, p10); }
	static Pickup CREATE_PICKUP_ROTATE(Hash Type, float CoorsX, float CoorsY, float CoorsZ, float OrientationX, float OrientationY, float OrientationZ, int PlacementFlags, int Amount, int RotOrder, bool ScriptHostObject, Hash CustomModel, int p12, float p13, Any p14) { return invoke <Pickup>(0x891804727E0A98B7, Type, CoorsX, CoorsY, CoorsZ, OrientationX, OrientationY, OrientationZ, PlacementFlags, Amount, RotOrder, ScriptHostObject, CustomModel, p12, p13, p14); }
	static Object CREATE_AMBIENT_PICKUP(Hash Type, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, int PlacementFlags, int Amount, Hash CustomModel, bool bCreateAsScriptObject, bool ScriptHostObject, int p9, float p10) { return invoke <Object>(0x673966A0C0FD7171, Type, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, PlacementFlags, Amount, CustomModel, bCreateAsScriptObject, ScriptHostObject, p9, p10); }
	static Object CREATE_PORTABLE_PICKUP(Hash Type, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, bool SnapToGround, Hash CustomModel) { return invoke <Object>(0x2EAF1FDB2FB55698, Type, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, SnapToGround, CustomModel); }
	static void ATTACH_PORTABLE_PICKUP_TO_PED(Object PickupID, Ped PedID) { return invoke <void>(0x8DC39368BDD57755, PickupID, PedID); }
	static void DETACH_PORTABLE_PICKUP_FROM_PED(Object PickupID) { return invoke <void>(0xCF463D1E9A0AECB1, PickupID); }
	static void _HIDE_PICKUP_OBJECT(Object pickupObject, bool toggle) { return invoke <void>(0x2777150CC7D9365E, pickupObject, toggle); }
	static void SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Hash modelName, int MaxPickups) { return invoke <void>(0xBF3B3BD47D79C08, modelName, MaxPickups); }
	static Any _0x3E2616E7EA539480(Any p0) { return invoke <Any>(0x3E2616E7EA539480, p0); }
	static void SET_LOCAL_PLAYER_CAN_COLLECT_PORTABLE_PICKUPS(bool CanCollect) { return invoke <void>(0x78857FC65CADB909, CanCollect); }
	static Vector3 GET_SAFE_PICKUP_COORDS(float VecInCoorsX, float VecInCoorsY, float VecInCoorsZ, float minDist, float maxDist, Any p5) { return invoke <Vector3>(0x6E16BC2503FF1FF0, VecInCoorsX, VecInCoorsY, VecInCoorsZ, minDist, maxDist, p5); }
	static Vector3 GET_PICKUP_COORDS(Pickup PickupID) { return invoke <Vector3>(0x225B8B35C88029B3, PickupID); }
	static void REMOVE_ALL_PICKUPS_OF_TYPE(Hash Type) { return invoke <void>(0x27F9D613092159CF, Type); }
	static bool HAS_PICKUP_BEEN_COLLECTED(Pickup PickupID) { return invoke <bool>(0x80EC48E6679313F9, PickupID); }
	static void REMOVE_PICKUP(Pickup PickupID) { return invoke <void>(0x3288D8ACAECD2AB2, PickupID); }
	static void SET_PICKUP_DO_NOT_AUTO_PLACE_ON_GROUND(Object pickupObject) { return invoke <void>(0x634C19521485AB25, pickupObject); }
	static bool DOES_PICKUP_EXIST(Pickup PickupID) { return invoke <bool>(0xAFC1CA75AD4074D1, PickupID); }
	static bool DOES_PICKUP_OBJECT_EXIST(Pickup PickupID) { return invoke <bool>(0xD9EFB6DBF7DAAEA3, PickupID); }
	static Object GET_PICKUP_OBJECT(Pickup PickupID) { return invoke <Object>(0x5099BC55630B25AE, PickupID); }
	static bool IS_OBJECT_A_PORTABLE_PICKUP(Object ObjectID) { return invoke <bool>(0x378C08504160D0D, ObjectID); }
	static bool _IS_PICKUP_TYPE_VALID(Hash pickupHash) { return invoke <bool>(0x7BD043587F7C82, pickupHash); }
	static bool DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(Hash PickupType, float VecCoordsX, float VecCoordsY, float VecCoordsZ, float Radius) { return invoke <bool>(0xF9C36251F6E48E33, PickupType, VecCoordsX, VecCoordsY, VecCoordsZ, Radius); }
	static void SET_PICKUP_REGENERATION_TIME(Pickup PickupID, int RegenTime) { return invoke <void>(0x78015C9B4B3ECC9D, PickupID, RegenTime); }
	static void FORCE_PICKUP_REGENERATE(Pickup PickupID) { return invoke <void>(0x758A5C1B3B1E1990, PickupID); }
	static void _SET_NETWORK_PICKUP_USABLE_FOR_PLAYER(Player player, Hash pickupHash, bool isUsable) { return invoke <void>(0x94F3D956BFAEAE18, player, pickupHash, isUsable); }
	static void SET_LOCAL_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_WITH_MODEL(Hash CustomModel, bool Allow) { return invoke <void>(0x88EAEC617CD26926, CustomModel, Allow); }
	static void BLOCK_PICKUP_FROM_PLAYER_COLLECTION(Any p0, Any p1) { return invoke <void>(0xB8F5062070BB6DBD, p0, p1); }
	static void SET_PICKUP_NOT_LOOTABLE(Any p0, Any p1) { return invoke <void>(0x92E87F60F21A0C3A, p0, p1); }
	static void _0x1F5E07E14A86FAFC(bool p0) { return invoke <void>(0x1F5E07E14A86FAFC, p0); }
	static void SET_TEAM_PICKUP_OBJECT(Object PickupID, int Team, bool bSet) { return invoke <void>(0x53E0DF1A2A3CF0CA, PickupID, Team, bSet); }
	static Any _0x9F52AD67D1A91BAD(Any p0, Any p1) { return invoke <Any>(0x9F52AD67D1A91BAD, p0, p1); }
	static void PREVENT_COLLECTION_OF_PORTABLE_PICKUP(Object PickupID, bool bPrevent, bool bLocalOnly) { return invoke <void>(0x92AEFB5F6E294023, PickupID, bPrevent, bLocalOnly); }
	static void SET_PICKUP_GENERATION_RANGE_MULTIPLIER(float multiplier) { return invoke <void>(0x318516E02DE3ECE2, multiplier); }
	static void SET_PICKUP_UNCOLLECTABLE(Pickup PickupID, bool bSet) { return invoke <void>(0x4A8CB328CD6F1C9B, PickupID, bSet); }
	static void SET_PICKUP_HIDDEN_WHEN_UNCOLLECTABLE(Pickup PickupID, bool bSet) { return invoke <void>(0x81218CE01B672219, PickupID, bSet); }
	static void _SET_AMBIENT_PICKUP_LIFETIME(int lifetime) { return invoke <void>(0xAC9AE68F0A463752, lifetime); }
	static void SET_PICKUP_PARTICLE_FX_SPAWN(Any p0, Any p1) { return invoke <void>(0xEB9740A38FD6D634, p0, p1); }
	static void SET_PICKUP_PARTICLE_FX_HIGHLIGHT(Any p0, Any p1) { return invoke <void>(0x1607C7D9B3021DF5, p0, p1); }
	static void SUPPRESS_PICKUP_REWARD_TYPE(int pickupFlag, bool bClearPreviousFlags) { return invoke <void>(0xF92099527DB8E2A7, pickupFlag, bClearPreviousFlags); }
	static Any _0x20135AF9C10D2A3D(Any p0) { return invoke <Any>(0x20135AF9C10D2A3D, p0); }
	static void _SET_PICKUP_COLLECTABLE_ON_MOUNT(Object object) { return invoke <void>(0xEE08603EADEE92, object); }
	static void _0xDE116ECFFDD4B997(Any p0, Any p1) { return invoke <void>(0xDE116ECFFDD4B997, p0, p1); }
	static Hash GET_WEAPON_TYPE_FROM_PICKUP_TYPE(Hash ePickupType) { return invoke <Hash>(0x8F96CA6C551AD51, ePickupType); }
	static Hash _GET_AMMO_TYPE_FROM_PICKUP_TYPE(Hash pickupHash) { return invoke <Hash>(0x44B09A23D728045A, pickupHash); }
	static void SET_OBJECT_TINT_INDEX(Object ObjectIndex, int TintIndex) { return invoke <void>(0x971DA0055324D033, ObjectIndex, TintIndex); }
	static float _GET_OBJECT_LIGHT_INTENSITY(Object object) { return invoke <float>(0x3397CD4E0353DFBA, object); }
	static void _SET_OBJECT_BURN_OPACITY(Object object, float opacity) { return invoke <void>(0x7D7285EFEAB5AF15, object, opacity); }
	static void _SET_OBJECT_BURN_INTENSITY(Object object, float intensity) { return invoke <void>(0xC8E21C1677DC5E6F, object, intensity); }
	static void _SET_OBJECT_BURN_LEVEL(Object object, float burnLevel, bool affectAsh) { return invoke <void>(0x2797C633DCDBBAC5, object, burnLevel, affectAsh); }
	static void _0x9A74A9CADFA8A598(Any p0) { return invoke <void>(0x9A74A9CADFA8A598, p0); }
	static void _RESET_OBJECT_VELOCITY(Object object) { return invoke <void>(0xF40AB58D83C35027, object); }
	static void _SET_OBJECT_BURN_SPEED(Object object, float speed, float p2) { return invoke <void>(0x646564A3B7DF68F8, object, speed, p2); }
	static void _0xCBFBD38F2E0A263B(Any p0, Any p1) { return invoke <void>(0xCBFBD38F2E0A263B, p0, p1); }
	static Hash CONVERT_OLD_PICKUP_TYPE_TO_NEW(Hash OldPickupType) { return invoke <Hash>(0x5EAAD83F8CFB4575, OldPickupType); }
	static void SET_FORCE_OBJECT_THIS_FRAME(float posX, float posY, float posZ, float radius) { return invoke <void>(0xF538081986E49E9D, posX, posY, posZ, radius); }
	static Any _0xD91E55B6C005EB09(Any p0, Any p1) { return invoke <Any>(0xD91E55B6C005EB09, p0, p1); }
	static void ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(Object ObjectIndex) { return invoke <void>(0xADBE4809F19F927A, ObjectIndex); }
	static void _0xCAAF2BCCFEF37F77(Object object, Any p1) { return invoke <void>(0xCAAF2BCCFEF37F77, object, p1); }
	static Any _0x08C5825A2932EA7B(Any p0) { return invoke <Any>(0x8C5825A2932EA7B, p0); }
	static Any _0x7D4411D6736CD295(Any p0, Any p1) { return invoke <Any>(0x7D4411D6736CD295, p0, p1); }
	static Any _0x250EBB11E81A10BE(Any p0) { return invoke <Any>(0x250EBB11E81A10BE, p0); }
	static Any _0x2BF1953C0C21AC88(Any p0) { return invoke <Any>(0x2BF1953C0C21AC88, p0); }
	static bool CREATE_OBJECT_SKELETON(Object object) { return invoke <bool>(0xB6CBD40F8EA69E8A, object); }
	static void _MAKE_ITEM_CARRIABLE(Object object) { return invoke <void>(0x1461DF6DB886BE3F, object); }
	static void _0xF65EDE5D02A7A760(Any p0, Any p1) { return invoke <void>(0xF65EDE5D02A7A760, p0, p1); }
	static void _SET_AUTO_JUMPABLE_BY_HORSE(Object object, bool p1) { return invoke <void>(0x98D2D9C053A1F449, object, p1); }
	static void _SET_NOT_JUMPABLE_BY_HORSE(Object object, bool p1) { return invoke <void>(0xE1C708BA4885796B, object, p1); }
	static void _SET_OBJECT_KICKABLE(Object object, bool kickable) { return invoke <void>(0xB7017DA4D498269F, object, kickable); }
	static void SET_CUSTOM_TEXTURES_ON_OBJECT(Object object, Hash txdHash, Any p2, Any p3) { return invoke <void>(0xE124889AE0521FCF, object, txdHash, p2, p3); }
	static void _0xD503D6F0986D58BC(Any p0, Any p1) { return invoke <void>(0xD503D6F0986D58BC, p0, p1); }
	static void _0xAEE6C800E124CFE1(Any p0, Any p1) { return invoke <void>(0xAEE6C800E124CFE1, p0, p1); }
	static void _0x3DF1A0A58498E209(Object object, Any p1) { return invoke <void>(0x3DF1A0A58498E209, object, p1); }
}

namespace PAD
{
	static void _SET_CONTROL_CONTEXT(int control, Hash context) { return invoke <void>(0x2804658EB7D8A50B, control, context); }
	static Hash _GET_CURRENT_CONTROL_CONTEXT(int control) { return invoke <Hash>(0xDDCEB0F26C89C00F, control); }
	static bool _IS_CONTROL_ACTION_VALID(Hash action, int control) { return invoke <bool>(0xBC0884BC590951C7, action, control); }
	static bool IS_CONTROL_ENABLED(int control, Hash action) { return invoke <bool>(0x1CEA6BFDF248E5D9, control, action); }
	static bool IS_CONTROL_PRESSED(int control, Hash action) { return invoke <bool>(0xF3A21BCD95725A4A, control, action); }
	static bool IS_CONTROL_RELEASED(int control, Hash action) { return invoke <bool>(0x648EE3E7F38877DD, control, action); }
	static bool IS_CONTROL_JUST_PRESSED(int control, Hash action) { return invoke <bool>(0x580417101DDB492F, control, action); }
	static bool IS_CONTROL_JUST_RELEASED(int control, Hash action) { return invoke <bool>(0x50F940259D3841E6, control, action); }
	static int GET_CONTROL_VALUE(int control, Hash action) { return invoke <int>(0xD95E79E8686D2C27, control, action); }
	static float GET_CONTROL_NORMAL(int control, Hash action) { return invoke <float>(0xEC3C9B8D5327B563, control, action); }
	static float GET_CONTROL_UNBOUND_NORMAL(int control, Hash action) { return invoke <float>(0x5B84D09CEC5209C5, control, action); }
	static bool SET_CONTROL_VALUE_NEXT_FRAME(int control, Hash action, float value) { return invoke <bool>(0xE8A25867FBA3B05E, control, action, value); }
	static bool IS_DISABLED_CONTROL_PRESSED(int control, Hash action) { return invoke <bool>(0xE2587F8CBBD87B1D, control, action); }
	static bool IS_DISABLED_CONTROL_JUST_PRESSED(int control, Hash action) { return invoke <bool>(0x91AEF906BCA88877, control, action); }
	static bool IS_DISABLED_CONTROL_JUST_RELEASED(int control, Hash action) { return invoke <bool>(0x305C8DCD79DA8B0F, control, action); }
	static float GET_DISABLED_CONTROL_NORMAL(int control, Hash action) { return invoke <float>(0x11E65974A982637C, control, action); }
	static float GET_DISABLED_CONTROL_UNBOUND_NORMAL(int control, Hash action) { return invoke <float>(0x4F8A26A890FD62FB, control, action); }
	static int GET_CONTROL_HOW_LONG_AGO(int control) { return invoke <int>(0xD7D22F5592AED8BA, control); }
	static int _GET_DISABLED_CONTROL_HOW_LONG_AGO(int control) { return invoke <int>(0x771DFCB24D19C2F6, control); }
	static bool IS_USING_KEYBOARD_AND_MOUSE(int control) { return invoke <bool>(0xA571D46727E2B718, control); }
	static Any _0x43F35DDB2905D945(Any p0, Any p1) { return invoke <Any>(0x43F35DDB2905D945, p0, p1); }
	static Any _0xBD629C1C4F501C80(Any p0) { return invoke <Any>(0xBD629C1C4F501C80, p0); }
	static bool HAVE_CONTROLS_CHANGED(int control) { return invoke <bool>(0x6CD79468A1E595C6, control); }
	static void SET_CONTROL_LIGHT_EFFECT_COLOR(int control, int red, int green, int blue) { return invoke <void>(0x8290252FFF36ACB5, control, red, green, blue); }
	static void CLEAR_CONTROL_LIGHT_EFFECT(int control) { return invoke <void>(0xCB0360EFEFB2580D, control); }
	static void SET_CONTROL_LIGHT_EFFECT_FLASHING_COLOR(int control, int red, int green, int blue) { return invoke <void>(0xA45884DB10EC7EE3, control, red, green, blue); }
	static void SET_CONTROL_SHAKE(int control, int Duration, int Frequency) { return invoke <void>(0x48B3886C1358D0D5, control, Duration, Frequency); }
	static void SET_CONTROL_TRIGGER_SHAKE(int control, int leftDuration, int leftFrequency, int rightDuration, int rightFrequency) { return invoke <void>(0x14D29BB12D47F68C, control, leftDuration, leftFrequency, rightDuration, rightFrequency); }
	static void STOP_CONTROL_SHAKE(int control) { return invoke <void>(0x38C16A305E8CDC8D, control); }
	static void SET_CONTROL_SHAKE_SUPPRESSED_ID(int control, int SupressId) { return invoke <void>(0xF239400E16C23E08, control, SupressId); }
	static void CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(int control) { return invoke <void>(0xA0CEFCEA390AAB9B, control); }
	static bool IS_LOOK_INVERTED() { return invoke <bool>(0x77B612531280010D); }
	static void SET_INPUT_EXCLUSIVE(int control, Hash action) { return invoke <void>(0xEDE476E5EE29EDB1, control, action); }
	static void DISABLE_CONTROL_ACTION(int control, Hash action, bool disableRelatedActions) { return invoke <void>(0xFE99B66D079CF6BC, control, action, disableRelatedActions); }
	static void ENABLE_CONTROL_ACTION(int control, Hash action, bool enableRelatedActions) { return invoke <void>(0x351220255D64C155, control, action, enableRelatedActions); }
	static void DISABLE_ALL_CONTROL_ACTIONS(int control) { return invoke <void>(0x5F4B6931816E599B, control); }
	static void _0x5F217BC1190503D8(const char* rumbleCurve, float p1) { return invoke <void>(0x5F217BC1190503D8, rumbleCurve, p1); }
	static void _0x709BA8C08C5C008D() { return invoke <void>(0x709BA8C08C5C008D); }
	static bool _0x1252C029FC8EBB4D() { return invoke <bool>(0x1252C029FC8EBB4D); }
	static void _0x52C68E92D6E23ADD(Any p0) { return invoke <void>(0x52C68E92D6E23ADD, p0); }
}

namespace PATHFIND
{
	static void SET_ROADS_IN_AREA(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, Any p6, bool bNetwork, Any p8) { return invoke <void>(0xBF1A602B5BA52FEE, VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, p6, bNetwork, p8); }
	static void SET_ROADS_IN_ANGLED_AREA(float vVec1X, float vVec1Y, float vVec1Z, float vVec2X, float vVec2Y, float vVec2Z, float fAreaWidth, Any p7, Any p8, bool bNetwork, Any p10) { return invoke <void>(0x1A5AA1208AF5DB59, vVec1X, vVec1Y, vVec1Z, vVec2X, vVec2Y, vVec2Z, fAreaWidth, p7, p8, bNetwork, p10); }
	static void SET_ROADS_IN_VOLUME(Volume volume, bool p1, bool p2, bool p3) { return invoke <void>(0xC1799FAFD2FDF52B, volume, p1, p2, p3); }
	static void RESET_ROADS_IN_VOLUME(Volume volume, bool p1) { return invoke <void>(0xD17672447692478E, volume, p1); }
	static void SET_ROADS_BACK_TO_ORIGINAL(float VecCoorsMinX, float VecCoorsMinY, float VecCoorsMinZ, float VecCoorsMaxX, float VecCoorsMaxY, float VecCoorsMaxZ, Any p6, bool bNetwork) { return invoke <void>(0x1EE7063B80FFC77C, VecCoorsMinX, VecCoorsMinY, VecCoorsMinZ, VecCoorsMaxX, VecCoorsMaxY, VecCoorsMaxZ, p6, bNetwork); }
	static void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(float vVec1X, float vVec1Y, float vVec1Z, float vVec2X, float vVec2Y, float vVec2Z, float fAreaWidth, Any p7, bool bNetwork) { return invoke <void>(0x27501B9F3B407E, vVec1X, vVec1Y, vVec1Z, vVec2X, vVec2Y, vVec2Z, fAreaWidth, p7, bNetwork); }
	static void _0xAFE2AE66F6251C66(float xMin, float yMin, float zMin, float xMax, float yMax, float zMax, int p6, Any p7) { return invoke <void>(0xAFE2AE66F6251C66, xMin, yMin, zMin, xMax, yMax, zMax, p6, p7); }
	static void _0x4358BCF14C91761C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke <void>(0x4358BCF14C91761C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _0xB03944057FD735BA(Any p0, Any p1, Any p2) { return invoke <void>(0xB03944057FD735BA, p0, p1, p2); }
	static void _0x6C3F12ECEB6D2E2A(float xMin, float yMin, float zMin, float xMax, float yMax, float zMax, Any p6, Any p7) { return invoke <void>(0x6C3F12ECEB6D2E2A, xMin, yMin, zMin, xMax, yMax, zMax, p6, p7); }
	static void _0x5A4E1A41E3A02AD0(Any p0, Any p1, Any p2) { return invoke <void>(0x5A4E1A41E3A02AD0, p0, p1, p2); }
	static bool GET_CLOSEST_VEHICLE_NODE(float VecCoorsX, float VecCoorsY, float VecCoorsZ, Vector3* VecReturnNearestNodeCoors, int nodeFlags, float zMeasureMult, float zTolerance) { return invoke <bool>(0x240A18690AE96513, VecCoorsX, VecCoorsY, VecCoorsZ, VecReturnNearestNodeCoors, nodeFlags, zMeasureMult, zTolerance); }
	static Any _0xCA27A86CAA4E98ED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <Any>(0xCA27A86CAA4E98ED, p0, p1, p2, p3, p4, p5, p6); }
	static bool GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(float VecCoorsX, float VecCoorsY, float VecCoorsZ, Vector3* VecReturnNearestNodeCoors, float* ReturnHeading, int nodeFlags, float zMeasureMult, float zTolerance) { return invoke <bool>(0x23CFFD4CCB243354, VecCoorsX, VecCoorsY, VecCoorsZ, VecReturnNearestNodeCoors, ReturnHeading, nodeFlags, zMeasureMult, zTolerance); }
	static bool GET_NTH_CLOSEST_VEHICLE_NODE(float VecCoorsX, float VecCoorsY, float VecCoorsZ, int NodeNumber, Vector3* VecReturnNearestNodeCoors, int nodeFlags, float zMeasureMult, float zTolerance) { return invoke <bool>(0x5A6D8DF6FBC5D0C4, VecCoorsX, VecCoorsY, VecCoorsZ, NodeNumber, VecReturnNearestNodeCoors, nodeFlags, zMeasureMult, zTolerance); }
	static int GET_NTH_CLOSEST_VEHICLE_NODE_ID(float VecCoorsX, float VecCoorsY, float VecCoorsZ, int NodeNumber, int nodeFlags, float zMeasureMult, float zTolerance) { return invoke <int>(0x116443008E5CEFC3, VecCoorsX, VecCoorsY, VecCoorsZ, NodeNumber, nodeFlags, zMeasureMult, zTolerance); }
	static bool GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(float VecCoorsX, float VecCoorsY, float VecCoorsZ, int NodeNumber, Vector3* VecReturnNearestNodeCoors, float* ReturnHeading, int* ReturnNumLanes, int nodeFlags, float zMeasureMult, float zTolerance) { return invoke <bool>(0x591B40D4390DB54A, VecCoorsX, VecCoorsY, VecCoorsZ, NodeNumber, VecReturnNearestNodeCoors, ReturnHeading, ReturnNumLanes, nodeFlags, zMeasureMult, zTolerance); }
	static int GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(float VecCoorsX, float VecCoorsY, float VecCoorsZ, int NodeNumber, float* ReturnHeading, int* ReturnNumLanes, int nodeFlags, float zMeasureMult, float zTolerance) { return invoke <int>(0x4114EAA8A7F7766D, VecCoorsX, VecCoorsY, VecCoorsZ, NodeNumber, ReturnHeading, ReturnNumLanes, nodeFlags, zMeasureMult, zTolerance); }
	static bool GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float FaceCoorsX, float FaceCoorsY, float FaceCoorsZ, int NodeNumber, Vector3* VecReturnNearestNodeCoors, float* ReturnHeading, int nodeFlags, float zMeasureMult, float zTolerance) { return invoke <bool>(0x2FAC235A6062F14A, VecCoorsX, VecCoorsY, VecCoorsZ, FaceCoorsX, FaceCoorsY, FaceCoorsZ, NodeNumber, VecReturnNearestNodeCoors, ReturnHeading, nodeFlags, zMeasureMult, zTolerance); }
	static bool IS_VEHICLE_NODE_ID_VALID(int NodeId) { return invoke <bool>(0x5829A02AF4F0B3CB, NodeId); }
	static void GET_VEHICLE_NODE_POSITION(int nodeId, Vector3* VecNodePosition) { return invoke <void>(0x8E8D72FF24DEE1FB, nodeId, VecNodePosition); }
	static bool GET_VEHICLE_NODE_IS_SWITCHED_OFF(int nodeId) { return invoke <bool>(0x28533DBDDF7C2C97, nodeId); }
	static bool GET_CLOSEST_ROAD(float TestCoorsX, float TestCoorsY, float TestCoorsZ, float MinLength, int MinLanes, Vector3* SouthEndNode, Vector3* NorthEndNode, int* LanesGoingSouth, int* LanesGoingNorth, float* CentralReservationWidth, bool bIgnoreSwitchedOffNodes) { return invoke <bool>(0x132F52BBA570FE92, TestCoorsX, TestCoorsY, TestCoorsZ, MinLength, MinLanes, SouthEndNode, NorthEndNode, LanesGoingSouth, LanesGoingNorth, CentralReservationWidth, bIgnoreSwitchedOffNodes); }
	static bool ARE_NODES_LOADED_FOR_AREA(float MinX, float MinY, float MaxX, float MaxY) { return invoke <bool>(0xF7B79A50B905A30D, MinX, MinY, MaxX, MaxY); }
	static bool REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(float MinX, float MinY, float MaxX, float MaxY) { return invoke <bool>(0x7FB139B592FA687, MinX, MinY, MaxX, MaxY); }
	static bool GET_RANDOM_VEHICLE_NODE(float centrePointX, float centrePointY, float centrePointZ, float radius, int MinLanes, bool bAvoidDeadEnds, bool bAvoidHighways, Vector3* vecReturn, int* NodeAddress) { return invoke <bool>(0x93E0DB8440B73A7D, centrePointX, centrePointY, centrePointZ, radius, MinLanes, bAvoidDeadEnds, bAvoidHighways, vecReturn, NodeAddress); }
	static void _GET_SPAWN_DATA_FOR_ROAD_NODE(int nodeId, float x, float y, float z, Vector3* outCoords, float* heading) { return invoke <void>(0xA3791B915B8B84C6, nodeId, x, y, z, outCoords, heading); }
	static bool IS_POINT_ON_ROAD(float vPosX, float vPosY, float vPosZ, Vehicle VehicleIndex) { return invoke <bool>(0x125BF4ABFC536B09, vPosX, vPosY, vPosZ, VehicleIndex); }
	static void SET_PED_PATHS_IN_AREA(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, bool bActive, bool bForceAbortCurrentPath) { return invoke <void>(0x34F060F4BF92E018, VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, bActive, bForceAbortCurrentPath); }
	static void _0xE5EF9DE716FF737E(Any p0, Any p1, Any p2) { return invoke <void>(0xE5EF9DE716FF737E, p0, p1, p2); }
	static bool GET_SAFE_COORD_FOR_PED(float VecCoorsX, float VecCoorsY, float VecCoorsZ, bool bOnlyOnPavement, Vector3* VecReturnSafeCoors, int iFlags) { return invoke <bool>(0xB61C8E878A4199CA, VecCoorsX, VecCoorsY, VecCoorsZ, bOnlyOnPavement, VecReturnSafeCoors, iFlags); }
	static void SET_PED_PATHS_BACK_TO_ORIGINAL(float VecCoorsMinX, float VecCoorsMinY, float VecCoorsMinZ, float VecCoorsMaxX, float VecCoorsMaxY, float VecCoorsMaxZ, bool bForceAbortCurrentPath) { return invoke <void>(0xE04B48F2CC926253, VecCoorsMinX, VecCoorsMinY, VecCoorsMinZ, VecCoorsMaxX, VecCoorsMaxY, VecCoorsMaxZ, bForceAbortCurrentPath); }
	static void _0xCF213A5FC3ABFC08(Any p0, Any p1, Any p2) { return invoke <void>(0xCF213A5FC3ABFC08, p0, p1, p2); }
	static void ADD_NAVMESH_REQUIRED_REGION(float x, float y, float radius) { return invoke <void>(0x387EAD7EE42F6685, x, y, radius); }
	static bool IS_NAVMESH_LOADED_IN_AREA(float vMinX, float vMinY, float vMinZ, float vMaxX, float vMaxY, float vMaxZ) { return invoke <bool>(0xF813C7E63F9062A5, vMinX, vMinY, vMinZ, vMaxX, vMaxY, vMaxZ); }
	static int GET_NUM_NAVMESHES_EXISTING_IN_AREA(float vMinX, float vMinY, float vMinZ, float vMaxX, float vMaxY, float vMaxZ) { return invoke <int>(0x1708E8DD3FF8C65, vMinX, vMinY, vMinZ, vMaxX, vMaxY, vMaxZ); }
	static bool _NAVMESH_ACTIVATE_SWAP(const char* name) { return invoke <bool>(0x7C334FF4D9215912, name); }
	static bool _NAVMESH_DEACTIVATE_SWAP(const char* name) { return invoke <bool>(0x527B97C203BB8606, name); }
	static bool _NAVMESH_IS_SWAP_ACTIVE(const char* name) { return invoke <bool>(0x5AC0944C156E5F44, name); }
	static bool _NAVMESH_DOES_SWAP_EXIST(const char* name) { return invoke <bool>(0x495CFAB2924237C7, name); }
	static int _0x5A3B54ADDF5472A3(const char* p0) { return invoke <int>(0x5A3B54ADDF5472A3, p0); }
	static void* _0xA33914B00CA55756(const char* p0, int p1) { return invoke <void*>(0xA33914B00CA55756, p0, p1); }
	static bool _NAVMESH_ASSIGN_NAVMESH_TO_VEHICLE(Vehicle vehicle, const char* navMeshName) { return invoke <bool>(0x44026E3DB3CED602, vehicle, navMeshName); }
	static int ADD_NAVMESH_BLOCKING_OBJECT(float vPositionX, float vPositionY, float vPositionZ, float vSizeXYZX, float vSizeXYZY, float vSizeXYZZ, float fHeading, bool bPermanent, int iFlags) { return invoke <int>(0xFCD5C8E06E502F5A, vPositionX, vPositionY, vPositionZ, vSizeXYZX, vSizeXYZY, vSizeXYZZ, fHeading, bPermanent, iFlags); }
	static void REMOVE_NAVMESH_BLOCKING_OBJECT(int iObjectId) { return invoke <void>(0x46399A7895957C0E, iObjectId); }
	static bool DOES_NAVMESH_BLOCKING_OBJECT_EXIST(int iObjectId) { return invoke <bool>(0xEAEB0DB4B132399, iObjectId); }
	static bool _ADD_NAVMESH_BLOCKING_VOLUME(Volume volume, int flags) { return invoke <bool>(0x19C7567D2F2287D6, volume, flags); }
	static void _REMOVE_NAVMESH_BLOCKING_VOLUME(Volume volume) { return invoke <void>(0x2C87C3E1C7B96EE2, volume); }
	static bool _DOES_NAVMESH_BLOCKING_VOLUME_EXIST(Volume volume) { return invoke <bool>(0xDE0EA444735C1368, volume); }
	static void _0x6DAD6630AE4A74CB(Any p0, Any p1) { return invoke <void>(0x6DAD6630AE4A74CB, p0, p1); }
	static int NAVMESH_REQUEST_PATH(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, int bitFlag) { return invoke <int>(0x348F211CA2404039, ped, x1, y1, z1, x2, y2, z2, bitFlag); }
	static bool _NAVMESH_CLEAR_REQUESTED_PATH(int path) { return invoke <bool>(0x661BB1E1FF77742D, path); }
	static int _NAVMESH_REQUESTED_QUERY_STATUS(int path) { return invoke <int>(0x3A0F82F6EE2291C8, path); }
	static bool _NAVMESH_REQUESTED_PATH_WAYPOINTS_FOUND(int path) { return invoke <bool>(0x8800776E410EB669, path); }
	static int _NAVMESH_REQUESTED_PATH_WAYPOINTS_TERRAIN(int path) { return invoke <int>(0xF61CFEDEAB627BFA, path); }
	static int _NAVMESH_REQUESTED_PATH_NUM_WAYPOINTS(int path) { return invoke <int>(0xD470725E0703D22F, path); }
	static Vector3 _NAVMESH_REQUESTED_PATH_WAYPOINT_BY_INDEX(int path, int waypointIndex) { return invoke <Vector3>(0x430F8319AE56C8A9, path, waypointIndex); }
	static float GET_APPROX_FLOOR_FOR_POINT(float x, float y) { return invoke <float>(0x336511A34F2E5185, x, y); }
	static void SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(float fMultiplier) { return invoke <void>(0xB919E1FB47CC4E0, fMultiplier); }
	static void SET_IGNORE_NO_GPS_FLAG(bool bIgnore) { return invoke <void>(0x72751156E7678833, bIgnore); }
	static int GET_GPS_BLIP_ROUTE_LENGTH() { return invoke <int>(0xBBB45C3CF5C8AA85); }
	static Any _0xEFC535C9FAF563B3(Any p0) { return invoke <Any>(0xEFC535C9FAF563B3, p0); }
	static Any _0x665B21666351CB37(Any p0, Any p1, Any p2) { return invoke <Any>(0x665B21666351CB37, p0, p1, p2); }
	static bool GET_GPS_BLIP_ROUTE_FOUND() { return invoke <bool>(0x869DAACBBE9FA006); }
	static Any _0x54F4D7B6670FBB5A(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <Any>(0x54F4D7B6670FBB5A, p0, p1, p2, p3, p4); }
	static void _0x34C9AF25649172D0(Any p0) { return invoke <void>(0x34C9AF25649172D0, p0); }
	static void _0xF2A2177AC848B3A8(Volume volume, int p1, int p2) { return invoke <void>(0xF2A2177AC848B3A8, volume, p1, p2); }
	static void _0x4BDEBEA5702B97A9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <void>(0x4BDEBEA5702B97A9, p0, p1, p2, p3, p4, p5); }
	static void _0x264E9A5CD78C338F(Any p0) { return invoke <void>(0x264E9A5CD78C338F, p0); }
	static void _0x869A7015BD4606E9(Any p0) { return invoke <void>(0x869A7015BD4606E9, p0); }
	static Any _SIMULATED_ROUTE_CREATE(float x1, float y1, float z1, float x2, float y2, float z2, int p6) { return invoke <Any>(0xFD5BB35AAB83FD48, x1, y1, z1, x2, y2, z2, p6); }
	static void _SIMULATED_ROUTE_DELETE(Any p0) { return invoke <void>(0x4907D0E4FB26EE65, p0); }
	static bool _SIMULATED_ROUTE_EXISTS(Any p0) { return invoke <bool>(0x65A8196B8D7F5E0B, p0); }
	static bool SIMULATED_ROUTE_IS_LOADED(Any p0) { return invoke <bool>(0x240915043CB799D7, p0); }
	static void SIMULATED_ROUTE_TRAVEL_TO_POINT(Any p0, float p1, float p2) { return invoke <void>(0xA1A3DE1C215C7394, p0, p1, p2); }
	static float SIMULATED_ROUTE_GET_ETA(Any p0) { return invoke <float>(0x2DD5F78D73B24172, p0); }
}

namespace PED
{
	static Ped CREATE_PED(Hash PedModelHashKey, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, float fPedHeading, bool RegisterAsNetworkObject, bool ScriptHostObject, bool p7, bool p8) { return invoke <Ped>(0xD49F9B0955C367DE, PedModelHashKey, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, fPedHeading, RegisterAsNetworkObject, ScriptHostObject, p7, p8); }
	static void DELETE_PED(Ped* PedIndex) { return invoke <void>(0xCC0EF140F99365C5, PedIndex); }
	static void _SET_REMOVE_PED_NETWORKED(Ped ped, int p1) { return invoke <void>(0x39A2FC5AF55A52B1, ped, p1); }
	static void _0x7C08E7CB8D951B70(Ped ped, float p1) { return invoke <void>(0x7C08E7CB8D951B70, ped, p1); }
	static void _SET_PED_TO_BE_REMOVED(Ped ped, float p1, float p2, int p3, Any p4) { return invoke <void>(0x36E4B61DC56DE77C, ped, p1, p2, p3, p4); }
	static Ped CLONE_PED(Ped PedIndex, bool bRegisterAsNetworkObject, bool bScriptHostObject, bool bLinkBlends) { return invoke <Ped>(0xEF29A16337FACADB, PedIndex, bRegisterAsNetworkObject, bScriptHostObject, bLinkBlends); }
	static void CLONE_PED_TO_TARGET(Ped PedIndexSource, Ped PedIndexTarget) { return invoke <void>(0xE952D6431689AD9A, PedIndexSource, PedIndexTarget); }
	static bool IS_PED_IN_VEHICLE(Ped PedIndex, Vehicle VehicleIndex, bool ConsiderEnteringAsInVehicle) { return invoke <bool>(0xA3EE4A07279BB9DB, PedIndex, VehicleIndex, ConsiderEnteringAsInVehicle); }
	static bool IS_PED_IN_MODEL(Ped PedIndex, Hash VehicleModelHashKey) { return invoke <bool>(0x796D90EFB19AA332, PedIndex, VehicleModelHashKey); }
	static bool IS_PED_IN_ANY_VEHICLE(Ped PedIndex, bool ConsiderEnteringAsInVehicle) { return invoke <bool>(0x997ABD671D25CA0B, PedIndex, ConsiderEnteringAsInVehicle); }
	static void _0x9851DE7AEC10B4E1(float x, float y, float z, float p3, int p4, Any p5) { return invoke <void>(0x9851DE7AEC10B4E1, x, y, z, p3, p4, p5); }
	static bool IS_PED_INJURED(Ped PedIndex) { return invoke <bool>(0x84A2DD9AC37C35C1, PedIndex); }
	static bool IS_PED_FATALLY_INJURED(Ped PedIndex) { return invoke <bool>(0xD839450756ED5A80, PedIndex); }
	static bool IS_PED_DEAD_OR_DYING(Ped PedIndex, bool CheckMeleeDeathFlags) { return invoke <bool>(0x3317DEDB88C95038, PedIndex, CheckMeleeDeathFlags); }
	static void _SET_PED_BLEEDOUT_PROFILE(Ped ped, Hash bleedoutProfile) { return invoke <void>(0x66C047719B0E80E1, ped, bleedoutProfile); }
	static bool IS_PED_AIMING_FROM_COVER(Ped PedIndex) { return invoke <bool>(0x3998B1276A3300E5, PedIndex); }
	static bool IS_PED_RELOADING(Ped PedIndex) { return invoke <bool>(0x24B100C68C645951, PedIndex); }
	static bool IS_PED_A_PLAYER(Ped PedIndex) { return invoke <bool>(0x12534C348C6CB68B, PedIndex); }
	static bool _IS_ANIMAL_CONTROLLED_BY_A_PLAYER(Ped ped) { return invoke <bool>(0xE2F43516F998269, ped); }
	static Ped CREATE_PED_INSIDE_VEHICLE(Vehicle VehicleIndex, Hash PedModelHashKey, int Seat, bool RegisterAsNetworkObject, bool ScriptHostObject, bool p5) { return invoke <Ped>(0x7DD959874C1FD534, VehicleIndex, PedModelHashKey, Seat, RegisterAsNetworkObject, ScriptHostObject, p5); }
	static void SET_PED_DESIRED_HEADING(Ped PedIndex, float DesiredHeading) { return invoke <void>(0xAA5A7ECE2AA8FE70, PedIndex, DesiredHeading); }
	static void FORCE_ALL_HEADING_VALUES_TO_ALIGN(Ped PedIndex) { return invoke <void>(0xFF287323B0E2C69A, PedIndex); }
	static bool IS_PED_FACING_PED(Ped PedIndex1, Ped PedIndex2, float Degrees) { return invoke <bool>(0xD71649DB0A545AA3, PedIndex1, PedIndex2, Degrees); }
	static bool IS_PED_IN_MELEE_COMBAT(Ped PedIndex) { return invoke <bool>(0x4E209B2C1EAD5159, PedIndex); }
	static Any _0x6DB875AFC584FA32(Ped ped, int p1) { return invoke <Any>(0x6DB875AFC584FA32, ped, p1); }
	static bool IS_PED_STOPPED(Ped PedIndex) { return invoke <bool>(0x530944F6F4B8A214, PedIndex); }
	static bool IS_PED_SITTING(Ped ped) { return invoke <bool>(0x84D0BF2B21862059, ped); }
	static bool _0x09D7AFD3716DA8E1(Ped ped, int p1) { return invoke <bool>(0x9D7AFD3716DA8E1, ped, p1); }
	static bool _0x9C81338B2E62CE0A(Player player, Ped ped, int shotNearRecentlyTime) { return invoke <bool>(0x9C81338B2E62CE0A, player, ped, shotNearRecentlyTime); }
	static bool _0xB7DBB2986B87E230(Ped ped, float p1) { return invoke <bool>(0xB7DBB2986B87E230, ped, p1); }
	static bool _0xD355E2F1BB41087E(Ped ped, float p1) { return invoke <bool>(0xD355E2F1BB41087E, ped, p1); }
	static bool IS_ANY_PED_SHOOTING_IN_AREA(float vMinX, float vMinY, float vMinZ, float vMaxX, float vMaxY, float vMaxZ, bool HighlightArea, bool bDo3DCheck) { return invoke <bool>(0xA0D3D71EA1086C55, vMinX, vMinY, vMinZ, vMaxX, vMaxY, vMaxZ, HighlightArea, bDo3DCheck); }
	static bool IS_PED_SHOOTING(Ped PedIndex) { return invoke <bool>(0x34616828CD07F1A1, PedIndex); }
	static float TIME_SINCE_PED_LAST_SHOT(Ped ped) { return invoke <float>(0x285D36C5C72B0569, ped); }
	static void SET_PED_ACCURACY(Ped PedIndex, int NewAccuracy) { return invoke <void>(0x7AEFB85C1D49DEB6, PedIndex, NewAccuracy); }
	static int GET_PED_ACCURACY(Ped PedIndex) { return invoke <int>(0x37F4AD56ECBC0CD6, PedIndex); }
	static bool IS_PED_MODEL(Ped PedIndex, Hash PedModelHashKey) { return invoke <bool>(0xC9D55B1A358A5BF7, PedIndex, PedModelHashKey); }
	static void EXPLODE_PED_HEAD(Ped PedIndex, Hash wtWeapon) { return invoke <void>(0x2D05CED3A38D0F3A, PedIndex, wtWeapon); }
	static void ADD_ARMOUR_TO_PED(Ped PedIndex, int ArmourToAdd) { return invoke <void>(0x5BA652A0CD14DF2F, PedIndex, ArmourToAdd); }
	static void _0x5CA20FBE49891BBD(Ped ped, int p1) { return invoke <void>(0x5CA20FBE49891BBD, ped, p1); }
	static void SET_PED_INTO_VEHICLE(Ped PedIndex, Vehicle VehicleIndex, int seat) { return invoke <void>(0xF75B0D629E1C063D, PedIndex, VehicleIndex, seat); }
	static void SET_PED_MOVE_ANIMS_BLEND_OUT(Ped PedIndex) { return invoke <void>(0x9E8C908F41584ECD, PedIndex); }
	static void _0x606D529DADA3C940(Ped ped, Any p1) { return invoke <void>(0x606D529DADA3C940, ped, p1); }
	static bool IS_PED_MALE(Ped PedIndex) { return invoke <bool>(0x6D9F5FAA7488BA46, PedIndex); }
	static bool IS_PED_HUMAN(Ped PedIndex) { return invoke <bool>(0xB980061DA992779D, PedIndex); }
	static Vehicle GET_VEHICLE_PED_IS_IN(Ped PedIndex, bool ConsiderEnteringAsInVehicle) { return invoke <Vehicle>(0x9A9112A0FE9A4713, PedIndex, ConsiderEnteringAsInVehicle); }
	static void RESET_PED_LAST_VEHICLE(Ped PedIndex) { return invoke <void>(0xBB8DE8CF6A8DD8BB, PedIndex); }
	static void _0xC6136B40FFFB778B(bool p0) { return invoke <void>(0xC6136B40FFFB778B, p0); }
	static void _0x6E8B87139854022D(Ped ped, const char* clipset) { return invoke <void>(0x6E8B87139854022D, ped, clipset); }
	static int _GET_NUM_FREE_SLOTS_IN_PED_POOL() { return invoke <int>(0x313778EDCA9158E2); }
	static void _RESERVE_AMBIENT_PEDS(int numPeds) { return invoke <void>(0xED9582B3DA8F02B4, numPeds); }
	static void _RESERVE_AMBIENT_PEDS_TOTAL(int numPeds) { return invoke <void>(0xF008E0BA1FE1D644, numPeds); }
	static void _UNRESERVE_AMBIENT_PEDS(int numPeds) { return invoke <void>(0x7D4E70A67A651C71, numPeds); }
	static int _GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED() { return invoke <int>(0x62DE46F061CAA468); }
	static int _GET_NUM_RESERVED_AMBIENT_PEDS_READY() { return invoke <int>(0x5C16855277819BBF); }
	static bool _ARE_ALL_AMBIENT_PED_RESERVATIONS_READY() { return invoke <bool>(0x5E420FF293EE5472); }
	static void _SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(float multiplier) { return invoke <void>(0xA77FA7BE9312F8C0, multiplier); }
	static void _0x9E3842E5DAD69F80(Volume volume) { return invoke <void>(0x9E3842E5DAD69F80, volume); }
	static void _SET_AMBIENT_PED_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { return invoke <void>(0xAB0D553FE20A6E25, multiplier); }
	static void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { return invoke <void>(0x7A556143A1C03898, multiplier); }
	static void _SET_AMBIENT_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { return invoke <void>(0xC0258742B034DFAF, multiplier); }
	static void _SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { return invoke <void>(0xBA0980B5C0A11924, multiplier); }
	static void _SET_SCENARIO_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { return invoke <void>(0xDB48E99F8E064E56, multiplier); }
	static void _SET_SCENARIO_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { return invoke <void>(0x28CB6391ACEDD9DB, multiplier); }
	static void _SET_SCENARIO_PED_DENSITY_THIS_FRAME(Hash configHash) { return invoke <void>(0x95423627A9CA598E, configHash); }
	static void INSTANTLY_FILL_PED_POPULATION() { return invoke <void>(0x4759CC730F947C81); }
	static void _0xBFA6B7731C3BAF02() { return invoke <void>(0xBFA6B7731C3BAF02); }
	static bool IS_INSTANTLY_FILL_PED_POPULATION_FINISHED() { return invoke <bool>(0xEE3F0D7FECCC54F); }
	static void SET_PED_NON_CREATION_AREA(float MinX, float MinY, float MinZ, float MaxX, float MaxY, float MaxZ) { return invoke <void>(0xEE01041D559983EA, MinX, MinY, MinZ, MaxX, MaxY, MaxZ); }
	static void CLEAR_PED_NON_CREATION_AREA() { return invoke <void>(0x2E05208086BA0651); }
	static void _ATTACH_VOLUME_TO_ENTITY(Volume volume, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int p8, bool p9) { return invoke <void>(0x7C00CFC48A782DC0, volume, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, p8, p9); }
	static void _DETACH_VOLUME_FROM_ENTITY(Volume volume, Entity entity) { return invoke <void>(0x19C975B81BE53C28, volume, entity); }
	static void SET_PED_ONTO_MOUNT(Ped ped, Ped mount, int seatIndex, bool p3) { return invoke <void>(0x28F76B6E78246EB, ped, mount, seatIndex, p3); }
	static void _REMOVE_PED_FROM_MOUNT(Ped ped, bool p1, bool p2) { return invoke <void>(0x5337B721C51883A9, ped, p1, p2); }
	static Ped CREATE_PED_ON_MOUNT(Ped mount, Hash modelHash, int index, bool p3, bool p4, bool p5, bool p6) { return invoke <Ped>(0xF89AA2BD01FC06B7, mount, modelHash, index, p3, p4, p5, p6); }
	static bool _IS_MOUNT_SEAT_FREE(Ped mount, int seat) { return invoke <bool>(0xAAB0FE202E9FC9F0, mount, seat); }
	static bool IS_PED_ON_MOUNT(Ped PedIndex) { return invoke <bool>(0x460BC76A0E10655E, PedIndex); }
	static bool IS_PED_FULLY_ON_MOUNT(Ped ped, bool p1) { return invoke <bool>(0x95CBC65780DE7EB1, ped, p1); }
	static Ped GET_MOUNT(Ped PedIndex) { return invoke <Ped>(0xE7E11B8DCBED1058, PedIndex); }
	static Ped _GET_LAST_LED_MOUNT(Ped ped) { return invoke <Ped>(0x693126B5D0457D0D, ped); }
	static Ped _GET_LAST_MOUNT(Ped ped) { return invoke <Ped>(0x4C8B59171957BCF7, ped); }
	static void _0xED1C764997A86D5A(Ped ped1, Ped ped2) { return invoke <void>(0xED1C764997A86D5A, ped1, ped2); }
	static void _0xB8AB265426CFE6DD(Ped ped, bool p1) { return invoke <void>(0xB8AB265426CFE6DD, ped, p1); }
	static int _0xE8D1CCB9375C101B(Ped mount, Player player) { return invoke <int>(0xE8D1CCB9375C101B, mount, player); }
	static void _0xA691C10054275290(Ped mount, Player player, int dismountedTimestamp) { return invoke <void>(0xA691C10054275290, mount, player, dismountedTimestamp); }
	static void _0x6734F0A6A52C371C(Player player, int horseSlot) { return invoke <void>(0x6734F0A6A52C371C, player, horseSlot); }
	static void _0x024EC9B649111915(Ped ped, bool p1) { return invoke <void>(0x24EC9B649111915, ped, p1); }
	static void SET_PED_OWNS_ANIMAL(Ped ped, Ped animal, bool p2) { return invoke <void>(0x931B241409216C1F, ped, animal, p2); }
	static Ped _GET_ACTIVE_ANIMAL_OWNER(Ped animal) { return invoke <Ped>(0xF103823FFE72BB49, animal); }
	static void _CLEAR_ACTIVE_ANIMAL_OWNER(Ped horse, bool clear) { return invoke <void>(0xBCC76708E5677E1D, horse, clear); }
	static int _GET_HORSE_TAMING_STATE(Ped horse) { return invoke <int>(0x454AD4DA6C41B5BD, horse); }
	static void _0x54D3CD482742C482(Ped animal, float p2) { return invoke <void>(0x54D3CD482742C482, animal, p2); }
	static void _0x5CB2EBB467BE3ED6(Ped animal, float p2) { return invoke <void>(0x5CB2EBB467BE3ED6, animal, p2); }
	static void _0x9F0F28B42C4EE80A(Ped animal, float p2) { return invoke <void>(0x9F0F28B42C4EE80A, animal, p2); }
	static void _SET_MOUNT_BONDING_LEVEL(Ped ped, int bondingLevel) { return invoke <void>(0xA69899995997A63B, ped, bondingLevel); }
	static void _SET_MOUNT_SECURITY_ENABLED(Ped ped, bool toggle) { return invoke <void>(0x11E6B9629C46D6EC, ped, toggle); }
	static void _0x9B65444C07B782BF(Ped ped, const char* p1) { return invoke <void>(0x9B65444C07B782BF, ped, p1); }
	static bool IS_ANIMAL_INTERACTION_POSSIBLE(Ped ped, Ped animal) { return invoke <bool>(0xD543D3A8FDE4F185, ped, animal); }
	static bool _IS_ANIMAL_INTERACTION_RUNNING(Ped ped) { return invoke <bool>(0x7FC84E85D98F063D, ped); }
	static Ped _0x8BE24D74D74C6E9B(Ped ped) { return invoke <Ped>(0x8BE24D74D74C6E9B, ped); }
	static bool _0x77243ED4F7CAAA55(Ped ped) { return invoke <bool>(0x77243ED4F7CAAA55, ped); }
	static bool IS_PED_ON_VEHICLE(Ped PedIndex, bool p1) { return invoke <bool>(0x67722AEB798E5FAB, PedIndex, p1); }
	static bool IS_PED_ON_SPECIFIC_VEHICLE(Ped PedIndex, Vehicle VehicleIndex) { return invoke <bool>(0xEC5F66E459AF3BB2, PedIndex, VehicleIndex); }
	static void _WARP_PED_OUT_OF_VEHICLE(Ped ped) { return invoke <void>(0xE0B61ED8BB37712F, ped); }
	static void SET_PED_MONEY(Ped PedIndex, int MoneyToSet) { return invoke <void>(0xA9C8960E8684C1B5, PedIndex, MoneyToSet); }
	static int GET_PED_MONEY(Ped PedIndex) { return invoke <int>(0x3F69145BBA87BAE7, PedIndex); }
	static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS_FOR_AMBIENT_PEDS_THIS_FRAME(bool Block) { return invoke <void>(0x9911F4A24485F653, Block); }
	static void _0x34EDDD59364AD74A(Ped ped, void* p1) { return invoke <void>(0x34EDDD59364AD74A, ped, p1); }
	static void _0x2D976DBDC731DF80(Ped ped) { return invoke <void>(0x2D976DBDC731DF80, ped); }
	static bool IS_PED_SITTING_IN_VEHICLE(Ped PedIndex, Vehicle VehicleIndex) { return invoke <bool>(0xA808AA1D79230FC2, PedIndex, VehicleIndex); }
	static bool IS_PED_SITTING_IN_ANY_VEHICLE(Ped PedIndex) { return invoke <bool>(0x826AA586EDB9FEF8, PedIndex); }
	static bool IS_PED_ON_FOOT(Ped PedIndex) { return invoke <bool>(0x1FEE67DB37F59B2, PedIndex); }
	static bool IS_PED_PLANTING_BOMB(Ped PedIndex) { return invoke <bool>(0xC70B5FAE151982D8, PedIndex); }
	static Vector3 GET_DEAD_PED_PICKUP_COORDS(Ped PedIndex, float minDist, float maxDist) { return invoke <Vector3>(0xCD5003B097200F36, PedIndex, minDist, maxDist); }
	static bool IS_PED_IN_ANY_BOAT(Ped PedIndex) { return invoke <bool>(0x2E0E1C2B4F6CB339, PedIndex); }
	static bool IS_PED_IN_ANY_HELI(Ped PedIndex) { return invoke <bool>(0x298B91AE825E5705, PedIndex); }
	static bool IS_PED_IN_ANY_PLANE(Ped PedIndex) { return invoke <bool>(0x5FFF4CFC74D8FB80, PedIndex); }
	static bool IS_PED_IN_FLYING_VEHICLE(Ped PedIndex) { return invoke <bool>(0x9134873537FA419C, PedIndex); }
	static bool _0x256EDD55C6BE1482(Ped ped) { return invoke <bool>(0x256EDD55C6BE1482, ped); }
	static bool GET_PED_LAST_DAMAGE_BONE(Ped PedIndex, int* ReturnBoneTag) { return invoke <bool>(0xD75960F6BD9EA49C, PedIndex, ReturnBoneTag); }
	static void CLEAR_PED_LAST_DAMAGE_BONE(Ped PedIndex) { return invoke <void>(0x8EF6B7AC68E2F01B, PedIndex); }
	static int _GET_PED_DAMAGE_CLEANLINESS(Ped ped) { return invoke <int>(0x88EFFED5FE8B0B4A, ped); }
	static void _SET_PED_DAMAGE_CLEANLINESS(Ped ped, int damageCleanliness) { return invoke <void>(0x7528720101A807A5, ped, damageCleanliness); }
	static bool _GET_PED_DAMAGED(Ped ped) { return invoke <bool>(0x6CFC373008A1EDAF, ped); }
	static void _SET_PED_DAMAGED(Ped ped, bool damaged) { return invoke <void>(0xDACE03C65C6666DB, ped, damaged); }
	static Any _SET_PLAYER_CURRENT_ANIMAL_DAMAGE_MODIFIER(Player player, float modifier, int p2, int p3) { return invoke <Any>(0x9EFF3C91DF38304F, player, modifier, p2, p3); }
	static void _UPDATE_ANIMAL_DAMAGE_MODIFIER(Player player) { return invoke <void>(0xF9E754EBE8FDBFA, player); }
	static float _GET_PLAYER_CURRENT_ANIMAL_DAMAGE_MODIFIER(Player player) { return invoke <float>(0xEE2D5C819A65BF26, player); }
	static Any _0xB29C553BA582D09E(void* p0, Hash model, int damageCleanliness, int p3) { return invoke <Any>(0xB29C553BA582D09E, p0, model, damageCleanliness, p3); }
	static bool _0x101B45C5F56D970F(void* p0, Ped ped, int damageCleanliness, int p3) { return invoke <bool>(0x101B45C5F56D970F, p0, ped, damageCleanliness, p3); }
	static int _COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS(void* outInventoryItemArray, Ped ped, int damageCleanliness, int skinningQuality) { return invoke <int>(0x6B89FAA36FC909A3, outInventoryItemArray, ped, damageCleanliness, skinningQuality); }
	static bool COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(Any p0, Ped pedAttached, int damageCleanliness) { return invoke <bool>(0x9E7738B291706746, p0, pedAttached, damageCleanliness); }
	static void SET_AI_WEAPON_DAMAGE_MODIFIER(float Modifier) { return invoke <void>(0x1B1E2A40A65B8521, Modifier); }
	static void RESET_AI_WEAPON_DAMAGE_MODIFIER() { return invoke <void>(0xEA16670E7BA4743C); }
	static void _SET_TOTAL_PED_DAMAGE_FROM_AI(Ped ped, float totalDamage) { return invoke <void>(0x73B6F907B913C860, ped, totalDamage); }
	static void _0xA6D6F03095C88F59(Ped ped) { return invoke <void>(0xA6D6F03095C88F59, ped); }
	static float _GET_TOTAL_PED_DAMAGE_FROM_AI(Ped ped) { return invoke <float>(0x92C8EACA29F6BED6, ped); }
	static void SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(Ped ped, float damageModifier) { return invoke <void>(0xD77AE48611B7B10A, ped, damageModifier); }
	static float GET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(Ped ped) { return invoke <float>(0x936E7CAD0AE2EE14, ped); }
	static void _SET_CURRENT_DEFENSE_AGAINST_PLAYERS_MODIFIER(Ped horse, float modifier) { return invoke <void>(0x69EDDF1FD4DEB0A, horse, modifier); }
	static float _0x763FA8A9D76EE3A7(Ped ped) { return invoke <float>(0x763FA8A9D76EE3A7, ped); }
	static void SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(float Modifier) { return invoke <void>(0x66460DEDDD417254, Modifier); }
	static void _SET_ACCURACY_AGAINST_LOCAL_PLAYER_MODIFIER(Ped ped, float modifier) { return invoke <void>(0xC2266AA617668AD3, ped, modifier); }
	static float _GET_ACCURACY_AGAINST_LOCAL_PLAYER_MODIFIER(Ped ped) { return invoke <float>(0xDC9273D95976BA22, ped); }
	static void _SET_PED_HEADSHOT_DAMAGE_MULTIPLIER(Ped ped, float multiplier) { return invoke <void>(0x2BA918C823B8BA56, ped, multiplier); }
	static void _0xDEE8D30AA5C2E28D(Ped ped, Hash p1, bool p2) { return invoke <void>(0xDEE8D30AA5C2E28D, ped, p1, p2); }
	static void _0xE1B3BE07D3AADDED(Ped ped, int p1, bool p2) { return invoke <void>(0xE1B3BE07D3AADDED, ped, p1, p2); }
	static void _0x32CEDA9A0AB4CEF7(Ped ped, Hash p1, bool p2) { return invoke <void>(0x32CEDA9A0AB4CEF7, ped, p1, p2); }
	static void _0x52A24D8A1DA89658(Ped ped, int p1, bool p2) { return invoke <void>(0x52A24D8A1DA89658, ped, p1, p2); }
	static void _0x34B5CEAC180A5D6E(Ped ped, Hash p1, bool p2) { return invoke <void>(0x34B5CEAC180A5D6E, ped, p1, p2); }
	static void _0x4F27603E44A8E4C0(Ped ped, int p1, bool p2) { return invoke <void>(0x4F27603E44A8E4C0, ped, p1, p2); }
	static void _0x3FDCC1F8C17E303E(Ped ped, int p1, float p2) { return invoke <void>(0x3FDCC1F8C17E303E, ped, p1, p2); }
	static void _0xE50C9816B3F22D8B(Ped ped, Hash p1, float p2) { return invoke <void>(0xE50C9816B3F22D8B, ped, p1, p2); }
	static void _SET_DEFENSE_MODIFIER_FOR_PED(Ped ped, float modifier) { return invoke <void>(0x9B6808EC46BE849B, ped, modifier); }
	static void _SET_MIN_PED_HEALTH_THRESHOLD(Ped ped, float healthAmount) { return invoke <void>(0x7883AA809DF43D98, ped, healthAmount); }
	static void _0xC5B78E41DCF8227C(Ped ped, bool p1) { return invoke <void>(0xC5B78E41DCF8227C, ped, p1); }
	static void SET_PED_CAN_BE_TARGETTED(Ped PedIndex, bool bAllowTargetted) { return invoke <void>(0x63F58F7C80513AAD, PedIndex, bAllowTargetted); }
	static void SET_PED_CAN_BE_TARGETTED_BY_TEAM(Ped PedIndex, int team, bool bAllowTargetted) { return invoke <void>(0xBF1CA77833E58F2C, PedIndex, team, bAllowTargetted); }
	static void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(Ped PedIndex, Player PlayerIndex, bool bAllowTargetted) { return invoke <void>(0x66B57B72E0836A76, PedIndex, PlayerIndex, bAllowTargetted); }
	static void _SET_INTERACTION_LOCKON_FLAG(Ped ped, Player player, int flag, bool enable) { return invoke <void>(0xFECA2081F61ED2CD, ped, player, flag, enable); }
	static bool IS_PED_FALLING(Ped PedIndex) { return invoke <bool>(0xFB92A102F1C4DFA3, PedIndex); }
	static bool _IS_PED_SLIDING(Ped ped) { return invoke <bool>(0xD6740E14E4CEFC0B, ped); }
	static bool IS_PED_JUMPING(Ped PedIndex) { return invoke <bool>(0xCEDABC5900A0BF97, PedIndex); }
	static bool IS_PED_CLIMBING(Ped PedIndex) { return invoke <bool>(0x53E8CB4F48BFE623, PedIndex); }
	static bool _IS_PED_CLIMBING_LADDER(Ped ped) { return invoke <bool>(0x59643424B68D52B5, ped); }
	static bool _0x577C60BA06D0EA64(Ped ped) { return invoke <bool>(0x577C60BA06D0EA64, ped); }
	static bool IS_PED_VAULTING(Ped PedIndex) { return invoke <bool>(0x117C70D1F5730B5E, PedIndex); }
	static bool IS_PED_DIVING(Ped PedIndex) { return invoke <bool>(0x5527B8246FEF9B11, PedIndex); }
	static bool IS_PED_OPENING_DOOR(Ped PedIndex) { return invoke <bool>(0x26AF0E8E30BD2A2C, PedIndex); }
	static bool _0x5C6C7C70CA302801(Ped ped) { return invoke <bool>(0x5C6C7C70CA302801, ped); }
	static bool _0xB91AB3BE7F655D49(Ped ped) { return invoke <bool>(0xB91AB3BE7F655D49, ped); }
	static bool IS_PED_IN_ANY_TAXI(Ped PedIndex) { return invoke <bool>(0x6E575D6A898AB852, PedIndex); }
	static void SET_PED_ID_RANGE(Ped PedIndex, float IdRange) { return invoke <void>(0xF107E836A70DCE05, PedIndex, IdRange); }
	static float _GET_PED_ID_RANGE(Ped ped) { return invoke <float>(0x31167ED4324B758D, ped); }
	static void SET_PED_HIGHLY_PERCEPTIVE(Ped PedIndex, bool bHighlyPerceptive) { return invoke <void>(0x52D59AB61DDC05DD, PedIndex, bHighlyPerceptive); }
	static void SET_PED_INJURED_ON_GROUND_BEHAVIOUR(Ped PedIndex, float duration) { return invoke <void>(0xEC4B4B3B9908052A, PedIndex, duration); }
	static void DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Ped PedIndex) { return invoke <void>(0x733C87D4CE22BEA2, PedIndex); }
	static void _0x028E7B3BBA0BD2FC(Ped ped) { return invoke <void>(0x28E7B3BBA0BD2FC, ped); }
	static bool _0xFA8C10DCE0706D43(Ped ped) { return invoke <bool>(0xFA8C10DCE0706D43, ped); }
	static void _SET_PED_ANIMAL_DETECTION_MODIFIER(Ped ped, float modifier) { return invoke <void>(0x43CA928E892CFDB8, ped, modifier); }
	static float _0x2BA9D7BF629F920C(Ped ped) { return invoke <float>(0x2BA9D7BF629F920C, ped); }
	static void SET_PED_SEEING_RANGE(Ped PedIndex, float SeeingRange) { return invoke <void>(0xF29CF591C4BF6CEE, PedIndex, SeeingRange); }
	static float _0x900CA00CE703E1E2(Ped ped) { return invoke <float>(0x900CA00CE703E1E2, ped); }
	static void SET_PED_HEARING_RANGE(Ped PedIndex, float HearingRange) { return invoke <void>(0x33A8F7F7D5F7F33C, PedIndex, HearingRange); }
	static void SET_PED_VISUAL_FIELD_MIN_ANGLE(Ped PedIndex, float fAngle) { return invoke <void>(0x2DB492222FB21E26, PedIndex, fAngle); }
	static void SET_PED_VISUAL_FIELD_MAX_ANGLE(Ped PedIndex, float fAngle) { return invoke <void>(0x70793BDCA1E854D4, PedIndex, fAngle); }
	static void SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Ped PedIndex, float fDistance) { return invoke <void>(0x9C74B0BC831B753A, PedIndex, fDistance); }
	static void SET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped PedIndex, float fAngle) { return invoke <void>(0x3B6405E8AB34A907, PedIndex, fAngle); }
	static void _0x9AB33CB5834885B3(Ped ped, float p1, float p2, float p3, float p4) { return invoke <void>(0x9AB33CB5834885B3, ped, p1, p2, p3, p4); }
	static void _0x899DFA0009AC93DE(Ped ped, float p1) { return invoke <void>(0x899DFA0009AC93DE, ped, p1); }
	static void _0x3A5697B80FED5EBE(Ped ped, float p1, float p2, float p3, float p4) { return invoke <void>(0x3A5697B80FED5EBE, ped, p1, p2, p3, p4); }
	static void SET_PED_STEALTH_MOVEMENT(Ped PedIndex, bool bStealth, Any p2, Any p3) { return invoke <void>(0x88CBB5CEB96B7BD2, PedIndex, bStealth, p2, p3); }
	static bool GET_PED_STEALTH_MOVEMENT(Ped PedIndex) { return invoke <bool>(0x7C2AC9CA66575FBF, PedIndex); }
	static void _SET_PED_CROUCH_MOVEMENT(Ped ped, bool state, int p2, bool immediately) { return invoke <void>(0x7DE9692C6F64CFE8, ped, state, p2, immediately); }
	static bool GET_PED_CROUCH_MOVEMENT(Ped ped) { return invoke <bool>(0xD5FE956C70FF370B, ped); }
	static bool GET_PED_IS_DOING_COMBAT_ROLL(Ped ped) { return invoke <bool>(0xC48A9EB0D499B3E5, ped); }
	static int CREATE_GROUP(int DefaultTaskType) { return invoke <int>(0x90370EBE0FEE1A3D, DefaultTaskType); }
	static void SET_PED_AS_GROUP_LEADER(Ped PedIndex, int GroupUniqueID, bool p2) { return invoke <void>(0x2A7819605465FBCE, PedIndex, GroupUniqueID, p2); }
	static void SET_PED_AS_GROUP_MEMBER(Ped PedIndex, int GroupUniqueID) { return invoke <void>(0x9F3480FE65DB31B5, PedIndex, GroupUniqueID); }
	static void SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Ped PedIndex, int GroupUniqueID, bool bEnabled) { return invoke <void>(0x2E2F4240B3F24647, PedIndex, GroupUniqueID, bEnabled); }
	static void REMOVE_GROUP(int UniqueGroupID) { return invoke <void>(0x8EB2F69076AF7053, UniqueGroupID); }
	static void REMOVE_PED_FROM_GROUP(Ped PedIndex) { return invoke <void>(0xED74007FFB146BC2, PedIndex); }
	static bool IS_PED_GROUP_MEMBER(Ped PedIndex, int UniqueGroupID, bool p2) { return invoke <bool>(0x9BB01E3834671191, PedIndex, UniqueGroupID, p2); }
	static bool _IS_PED_GROUP_LEADER(Ped ped, int groupId) { return invoke <bool>(0x878B68960C1C2A35, ped, groupId); }
	static bool IS_PED_HANGING_ON_TO_VEHICLE(Ped PedIndex) { return invoke <bool>(0x1C86D8AEF8254B78, PedIndex); }
	static void SET_GROUP_SEPARATION_RANGE(int UniqueGroupID, float SeparationRange) { return invoke <void>(0x4102C7858CFEE4E4, UniqueGroupID, SeparationRange); }
	static void _0x89E59DBD15E21177(int groupId, int p1) { return invoke <void>(0x89E59DBD15E21177, groupId, p1); }
	static bool IS_PED_PRONE(Ped PedIndex) { return invoke <bool>(0xD6A86331A537A7B9, PedIndex); }
	static bool _IS_PED_INVESTIGATING(Ped ped) { return invoke <bool>(0x7583A9D35248B83F, ped); }
	static bool IS_PED_IN_COMBAT(Ped PedIndex, Ped TargetPedIndex) { return invoke <bool>(0x4859F1FC66A6278E, PedIndex, TargetPedIndex); }
	static bool CAN_PED_IN_COMBAT_SEE_TARGET(Ped PedIndex, Ped TargetPedIndex) { return invoke <bool>(0xEAD42DE3610D0721, PedIndex, TargetPedIndex); }
	static bool IS_PED_JACKING(Ped PedIndex) { return invoke <bool>(0x4AE4FF911DFB61DA, PedIndex); }
	static bool IS_PED_BEING_JACKED(Ped PedIndex) { return invoke <bool>(0x9A497FE2DF198913, PedIndex); }
	static bool IS_PED_BEING_STUNNED(Ped PedIndex, Hash WeaponType) { return invoke <bool>(0x4FBACCE3B4138EE8, PedIndex, WeaponType); }
	static Ped GET_PEDS_JACKER(Ped PedIndex) { return invoke <Ped>(0x9B128DC36C1E04CF, PedIndex); }
	static Ped GET_JACK_TARGET(Ped PedIndex) { return invoke <Ped>(0x5486A79D9FBD342D, PedIndex); }
	static bool IS_PED_FLEEING(Ped PedIndex) { return invoke <bool>(0xBBCCE00B381F8482, PedIndex); }
	static bool IS_PED_IN_COVER(Ped PedIndex, bool p1, bool p2) { return invoke <bool>(0x60DFD0691A170B88, PedIndex, p1, p2); }
	static bool _0x2DD4E0E26DFAD97D(Ped ped1, Ped ped2, float p2) { return invoke <bool>(0x2DD4E0E26DFAD97D, ped1, ped2, p2); }
	static bool _PED_WAS_KILLED_BY_HEADSHOT(Ped ped) { return invoke <bool>(0x6FA94C835787C64, ped); }
	static bool _PED_DUELING_DID_PLAYER_HEADSHOT_OPPONENT(Ped ped) { return invoke <bool>(0xBD6B242B8BD5543A, ped); }
	static bool IS_PED_IN_COVER_FACING_LEFT(Ped PedIndex) { return invoke <bool>(0x845333B3150583AB, PedIndex); }
	static bool IS_PED_GOING_INTO_COVER(Ped PedIndex) { return invoke <bool>(0x9F65DBC537E59AD5, PedIndex); }
	static bool IS_PED_RESPONDING_TO_THREAT(Ped ped) { return invoke <bool>(0x77525BBF433F2CD6, ped); }
	static Hash _GET_ACTIVE_DYNAMIC_SCENARIO_2(Ped ped) { return invoke <Hash>(0xC22AA08A8ADB87D4, ped); }
	static Hash _GET_ACTIVE_DYNAMIC_SCENARIO(Ped ped) { return invoke <Hash>(0x569F1E1237508DEB, ped); }
	static bool _GIVE_PED_SCENARIO_PROP(Ped ped, Object object, const char* conditionalAnim, const char* p3, const char* p4, bool p5) { return invoke <bool>(0x3BBDD6143FF16F98, ped, object, conditionalAnim, p3, p4, p5); }
	static bool GIVE_PED_HASH_SCENARIO_PROP(Ped ped, Object object, const char* conditionalAnim, Hash scenarioType, Hash p4, bool p5) { return invoke <bool>(0x2B02DB082258625F, ped, object, conditionalAnim, scenarioType, p4, p5); }
	static bool _GIVE_PED_SCENARIO_PROP_DYNAMIC(Ped ped, Object object, const char* p2, const char* p3, bool p4) { return invoke <bool>(0xA0774E388CE4A679, ped, object, p2, p3, p4); }
	static Any _REQUEST_PROP_SCENARIO_PED(Ped ped, Object object, const char* p2, const char* p3, const char* p4, bool p5) { return invoke <Any>(0xBEC65C6049B3219D, ped, object, p2, p3, p4, p5); }
	static Any _REQUEST_PED_FOR_SCENARIO_TYPE(Ped ped, Object object, const char* p2, Hash scenarioType, const char* p4, bool p5) { return invoke <Any>(0xBDED916A9F9B0604, ped, object, p2, scenarioType, p4, p5); }
	static Entity _GET_PED_REGISTER_PROP(Ped ped, const char* propName, bool detachProp) { return invoke <Entity>(0x4D0D2E3D8BC000EB, ped, propName, detachProp); }
	static int GET_SEAT_PED_IS_TRYING_TO_ENTER(Ped PedIndex) { return invoke <int>(0x6F4C85ACD641BCD2, PedIndex); }
	static Entity GET_PED_SOURCE_OF_DEATH(Ped PedIndex) { return invoke <Entity>(0x93C8B64DEB84728C, PedIndex); }
	static Hash GET_PED_CAUSE_OF_DEATH(Ped PedIndex) { return invoke <Hash>(0x16FFE42AB2D2DC59, PedIndex); }
	static int GET_PED_TIME_OF_DEATH(Ped PedIndex) { return invoke <int>(0x1E98817B311AE98A, PedIndex); }
	static int COUNT_PEDS_IN_COMBAT_WITH_TARGET(Ped TargetIndex, int flag) { return invoke <int>(0x5407B7288D0478B7, TargetIndex, flag); }
	static int _GET_PEDS_IN_COMBAT_WITH_TARGET(Ped ped, ItemSet itemset, int flag) { return invoke <int>(0x7BE607DAFF382FD2, ped, itemset, flag); }
	static int COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Ped TargetIndex, float vecSearchCenterX, float vecSearchCenterY, float vecSearchCenterZ, float fSearchRadius, int flag) { return invoke <int>(0x336B3D200AB007CB, TargetIndex, vecSearchCenterX, vecSearchCenterY, vecSearchCenterZ, fSearchRadius, flag); }
	static Entity GET_CURRENT_TARGET_FOR_PED(Ped ped) { return invoke <Entity>(0xCD66FEA29400A0B5, ped); }
	static void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped PedIndex, Hash relGroup) { return invoke <void>(0xADB3F206518799E8, PedIndex, relGroup); }
	static Hash _GET_DEFAULT_RELATIONSHIP_GROUP_HASH(Hash modelHash) { return invoke <Hash>(0x3CC4A718C258BDD0, modelHash); }
	static void SET_PED_RELATIONSHIP_GROUP_HASH(Ped PedIndex, Hash relGroup) { return invoke <void>(0xC80A74AC829DDD92, PedIndex, relGroup); }
	static void SET_RELATIONSHIP_BETWEEN_GROUPS(int RelationshipType, Hash relGroup, Hash otherRelGroup) { return invoke <void>(0xBF25EB89375A37AD, RelationshipType, relGroup, otherRelGroup); }
	static void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(int RelationshipType, Hash relGroup, Hash otherRelGroup) { return invoke <void>(0x5E29243FB56FC6D4, RelationshipType, relGroup, otherRelGroup); }
	static bool ADD_RELATIONSHIP_GROUP(const char* sName, Hash* group) { return invoke <bool>(0xF372BC22FCB88606, sName, group); }
	static void REMOVE_RELATIONSHIP_GROUP(Hash group) { return invoke <void>(0xB6BA2444AB393DA2, group); }
	static int GET_RELATIONSHIP_BETWEEN_PEDS(Ped PedIndex, Ped SecondPedIndex) { return invoke <int>(0xEBA5AD3A0EAF7121, PedIndex, SecondPedIndex); }
	static Hash GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped PedIndex) { return invoke <Hash>(0x42FDD0F017B1E38E, PedIndex); }
	static Hash GET_PED_RELATIONSHIP_GROUP_HASH(Ped PedIndex) { return invoke <Hash>(0x7DBDD04862D95F04, PedIndex); }
	static int GET_RELATIONSHIP_BETWEEN_GROUPS(Hash relGroupA, Hash relGroupB) { return invoke <int>(0x9E6B70061662AE5C, relGroupA, relGroupB); }
	static void _0xDC91F22F09BC6C2F(Hash group, bool p1) { return invoke <void>(0xDC91F22F09BC6C2F, group, p1); }
	static void _0x9629FAF6460D35CB(Hash group, bool p1) { return invoke <void>(0x9629FAF6460D35CB, group, p1); }
	static void _0x4E68C7EF706DF35D(Ped ped, float x, float y, float z, float p4, Hash relationshipGroup) { return invoke <void>(0x4E68C7EF706DF35D, ped, x, y, z, p4, relationshipGroup); }
	static int _0x3ACCE14DFA6BA8C2(Ped ped, int p1, float x, float y, float z, float p5, ItemSet itemset) { return invoke <int>(0x3ACCE14DFA6BA8C2, ped, p1, x, y, z, p5, itemset); }
	static void SET_PED_TO_INFORM_RESPECTED_FRIENDS(Ped PedIndex, float Distance, int MaximumNumber) { return invoke <void>(0x112942C6E708F70B, PedIndex, Distance, MaximumNumber); }
	static bool _0x40C9155AF8BC13F3(Ped ped) { return invoke <bool>(0x40C9155AF8BC13F3, ped); }
	static int _0xF4860514AD354226(ScrHandle shockingEvent, float x, float y, float z, float p4, int* p5) { return invoke <int>(0xF4860514AD354226, shockingEvent, x, y, z, p4, p5); }
	static bool IS_PED_RESPONDING_TO_EVENT(Ped PedIndex, Hash EventType) { return invoke <bool>(0x625B774D75C87068, PedIndex, EventType); }
	static Entity _0x5E9FAF6C513347B4(Ped ped, Hash eventType) { return invoke <Entity>(0x5E9FAF6C513347B4, ped, eventType); }
	static Any _0x326F7951EF0D7F75(Ped ped, Hash eventType) { return invoke <Any>(0x326F7951EF0D7F75, ped, eventType); }
	static Entity _0xE76687023D8C8505(Hash perscharModel, int p1) { return invoke <Entity>(0xE76687023D8C8505, perscharModel, p1); }
	static bool _0xCB8F4C9343EBE240(Ped ped, Hash eventType, Vector3* coords) { return invoke <bool>(0xCB8F4C9343EBE240, ped, eventType, coords); }
	static void SET_PED_FIRING_PATTERN(Ped PedIndex, Hash FiringPatternHash) { return invoke <void>(0x9AC577F5A12AD8A9, PedIndex, FiringPatternHash); }
	static void _SET_PED_FIRING_PATTERN_2(Ped ped, Hash patternHash) { return invoke <void>(0x20E54854DEF6A54A, ped, patternHash); }
	static void _SET_PED_FIRING_PATTERN_3(Ped ped, Hash patternHash) { return invoke <void>(0x244E8C282188E40F, ped, patternHash); }
	static void SET_PED_SHOOT_RATE(Ped PedIndex, int ShootRate) { return invoke <void>(0x614DA022990752DC, PedIndex, ShootRate); }
	static void _0x3C529A827998F9B3(Ped ped, int p1, int p2) { return invoke <void>(0x3C529A827998F9B3, ped, p1, p2); }
	static void _0x1F44B7E283C09EDE(Ped ped, float p1, int p2) { return invoke <void>(0x1F44B7E283C09EDE, ped, p1, p2); }
	static void SET_COMBAT_FLOAT(Ped PedIndex, int combatAttribute, float fNewValue) { return invoke <void>(0xFF41B4B141ED981C, PedIndex, combatAttribute, fNewValue); }
	static float GET_COMBAT_FLOAT(Ped PedIndex, int combatAttribute) { return invoke <float>(0x52DFF8A10508090A, PedIndex, combatAttribute); }
	static void GET_GROUP_SIZE(int UniqueGroupID, int* ReturnHasLeader, int* ReturnNumberOfFollowers) { return invoke <void>(0x8DE69FE35CA09A45, UniqueGroupID, ReturnHasLeader, ReturnNumberOfFollowers); }
	static bool DOES_GROUP_EXIST(int UniqueGroupID) { return invoke <bool>(0x7C6B0C22F9F40BBE, UniqueGroupID); }
	static bool _0x0455546F23FF08E4(int groupId) { return invoke <bool>(0x455546F23FF08E4, groupId); }
	static bool IS_GROUP_LOCALLY_CONTROLLED(int groupId) { return invoke <bool>(0x909AD9E9A92A10DF, groupId); }
	static int GET_PED_GROUP_INDEX(Ped PedIndex) { return invoke <int>(0xF162E133B4E7A675, PedIndex); }
	static bool IS_PED_IN_GROUP(Ped PedIndex) { return invoke <bool>(0x5891CAC5D4ACFF74, PedIndex); }
	static bool _IS_PED_LEADING_ANY_GROUP(Ped ped) { return invoke <bool>(0x917760CFE7A0E0F1, ped); }
	static Player GET_PLAYER_PED_IS_FOLLOWING(Ped PedIndex) { return invoke <Player>(0x6A3975DEA89F9A17, PedIndex); }
	static void SET_GROUP_FORMATION(int UniqueGroupID, int GroupFormation) { return invoke <void>(0xCE2F5FC3AF7E8C1E, UniqueGroupID, GroupFormation); }
	static int _GET_GROUP_FORMATION(int groupId) { return invoke <int>(0x13A1B061007C906B, groupId); }
	static void SET_GROUP_FORMATION_SPACING(int UniqueGroupID, float Spacing, float AdjustSpeedMinDist, float AdjustSpeedMaxDist) { return invoke <void>(0x1D9D45004C28C916, UniqueGroupID, Spacing, AdjustSpeedMinDist, AdjustSpeedMaxDist); }
	static void RESET_GROUP_FORMATION_DEFAULT_SPACING(int UniqueGroupID) { return invoke <void>(0x63DAB4CCB3273205, UniqueGroupID); }
	static bool _0xB05CC690CDE8A4A9(int groupId, float p1) { return invoke <bool>(0xB05CC690CDE8A4A9, groupId, p1); }
	static void ADD_CUSTOM_FORMATION_LOCATION(int groupId, float x, float y, float z, int position) { return invoke <void>(0x4E23CD07BD161E06, groupId, x, y, z, position); }
	static bool ADD_FORMATION_LOCATION(int groupId, float p1, float p2, float p3) { return invoke <bool>(0xB05945C1E9E60D91, groupId, p1, p2, p3); }
	static bool SET_FORMATION_POSITIONS_TARGET_RADIUS(int groupId, float radius) { return invoke <bool>(0x7CC7D3B7AF7FB71F, groupId, radius); }
	static void _SET_FORMATION_AUTO_ASSIGN_POSITION(int groupId, bool toggle) { return invoke <void>(0x478F6B9920446CE2, groupId, toggle); }
	static void _SET_PED_FORMATION_POSITION(Ped ped, int position, bool toggle) { return invoke <void>(0xE9E95FDEDCC9D35, ped, position, toggle); }
	static int _0x8AF8E647D6B2A649(int groupId, Ped ped) { return invoke <int>(0x8AF8E647D6B2A649, groupId, ped); }
	static void _0x87C2724A56F66020(Ped ped) { return invoke <void>(0x87C2724A56F66020, ped); }
	static void _0xD5BD1B5318A81994(int groupId, bool p1) { return invoke <void>(0xD5BD1B5318A81994, groupId, p1); }
	static void _0x9BBEAF8B0C007F1E(Ped ped, bool p1) { return invoke <void>(0x9BBEAF8B0C007F1E, ped, p1); }
	static void _0xC99F104BDF8C7F5A(Ped ped, bool p1) { return invoke <void>(0xC99F104BDF8C7F5A, ped, p1); }
	static void _0x02E741E19E39628C(Ped ped, float p1) { return invoke <void>(0x2E741E19E39628C, ped, p1); }
	static void _0x97C475212B327666(int groupId, bool p1) { return invoke <void>(0x97C475212B327666, groupId, p1); }
	static void _0x154B7E841AC7412F(int groupId, bool p1) { return invoke <void>(0x154B7E841AC7412F, groupId, p1); }
	static void _0x8AFCCC0F18D70018(int groupId, bool p1) { return invoke <void>(0x8AFCCC0F18D70018, groupId, p1); }
	static void _0xE1103300F3456DE7(int groupId, float p1, float p2) { return invoke <void>(0xE1103300F3456DE7, groupId, p1, p2); }
	static void _0xA8A95CECB1906EA2(int groupId, bool p1) { return invoke <void>(0xA8A95CECB1906EA2, groupId, p1); }
	static void _0xDDFAD4DEAA7FA362(int groupId, float p1, float p2, float p3, float p4) { return invoke <void>(0xDDFAD4DEAA7FA362, groupId, p1, p2, p3, p4); }
	static void _0x966DE09688A1DE39(int groupId, float p1, float p2, float p3, float p4) { return invoke <void>(0x966DE09688A1DE39, groupId, p1, p2, p3, p4); }
	static void _0x7E5185B979706210(int groupId, int p1) { return invoke <void>(0x7E5185B979706210, groupId, p1); }
	static void _0x40C3524D4ED83554(int groupId, bool p1) { return invoke <void>(0x40C3524D4ED83554, groupId, p1); }
	static void _0x86FAFC18E3D4380C(int groupId, bool p1) { return invoke <void>(0x86FAFC18E3D4380C, groupId, p1); }
	static void _0x07EA5B053FA60AC7(int groupId, bool p1) { return invoke <void>(0x7EA5B053FA60AC7, groupId, p1); }
	static void _0xF9CBD46433E36713(Ped ped, Entity targetEntity, float p2, float p3, float p4, float p5, float p6, float p7, float p8, const char* p9) { return invoke <void>(0xF9CBD46433E36713, ped, targetEntity, p2, p3, p4, p5, p6, p7, p8, p9); }
	static Vehicle GET_VEHICLE_PED_IS_USING(Ped PedIndex) { return invoke <Vehicle>(0x6094AD011A2EA87D, PedIndex); }
	static Vehicle GET_VEHICLE_PED_IS_ENTERING(Ped PedIndex) { return invoke <Vehicle>(0xF92691AED837A5FC, PedIndex); }
	static Vehicle _GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO(Ped horse) { return invoke <Vehicle>(0xE4770DA1B8FF4FD1, horse); }
	static Vehicle _GET_LAST_VEHICLE_DRAFT_HORSE_WAS_ATTACHED_TO(Ped horse) { return invoke <Vehicle>(0x5064DB5083C29921, horse); }
	static int GET_SEAT_PED_IS_USING(Ped ped) { return invoke <int>(0x4E76CB57222A00E5, ped); }
	static Entity _GET_TRANSPORT_PED_IS_SEATED_ON(Ped ped) { return invoke <Entity>(0x849BD6C6314793D0, ped); }
	static bool IS_PED_ENTERING_ANY_TRANSPORT(Ped ped) { return invoke <bool>(0x1D46B417F926D34D, ped); }
	static void SET_PED_GRAVITY(Ped PedIndex, bool isAffectedByGravity) { return invoke <void>(0x9FF447B6B6AD960A, PedIndex, isAffectedByGravity); }
	static void _0x96595B36D6A2279B(Ped animal, bool toggle) { return invoke <void>(0x96595B36D6A2279B, animal, toggle); }
	static void _SET_PED_IMMERSION_FLAG(Ped ped, bool toggle) { return invoke <void>(0x7FB0088E8769CDDB, ped, toggle); }
	static void _0xA90684ED185CCB4B(Ped animal, bool p1, float p2, float p3) { return invoke <void>(0xA90684ED185CCB4B, animal, p1, p2, p3); }
	static void _FAKE_SET_PED_LOCO_INJURED(Ped ped, bool enabled) { return invoke <void>(0x8B3CB08158E98481, ped, enabled); }
	static void _FORCE_PED_DEATH(Ped ped, Ped pedKiller, Hash weapon) { return invoke <void>(0x1CE875505D45338A, ped, pedKiller, weapon); }
	static void APPLY_DAMAGE_TO_PED(Ped PedIndex, int Damage, bool DamageArmourFlag, int boneId, Entity InstigatorIndex) { return invoke <void>(0x697157CED63F18D4, PedIndex, Damage, DamageArmourFlag, boneId, InstigatorIndex); }
	static void _0xBAD2A311667A50D7(Ped ped, bool p1) { return invoke <void>(0xBAD2A311667A50D7, ped, p1); }
	static int GET_PED_TYPE(Ped PedIndex) { return invoke <int>(0xFF059E1E4C01E63C, PedIndex); }
	static void SET_PED_AS_COP(Ped PedIndex, bool bSetRelationshipGroup) { return invoke <void>(0xBB03C38DD3FB7FFD, PedIndex, bSetRelationshipGroup); }
	static void _0x405180B14DA5A935(Ped ped, bool p1) { return invoke <void>(0x405180B14DA5A935, ped, p1); }
	static void _SET_PED_INTERACTION_PERSONALITY(Ped ped, Hash personality) { return invoke <void>(0x24C82EF607105FAA, ped, personality); }
	static Hash _GET_PED_INTERACTION_PERSONALITY(Ped ped) { return invoke <Hash>(0xD7AD3C7EBAF88C92, ped); }
	static void _SET_PED_PERSONALITY(Ped ped, Hash personality) { return invoke <void>(0xB8B6430EAD2D2437, ped, personality); }
	static void _0x329772C47DBB2FBC(Ped ped) { return invoke <void>(0x329772C47DBB2FBC, ped); }
	static bool _GET_IS_PED_IN_DISPUTE_WITH_PED(Ped ped, Ped pedInDisputeWith) { return invoke <bool>(0x331550B212014B92, ped, pedInDisputeWith); }
	static bool _0x94132D7C8D3575C4(Ped ped) { return invoke <bool>(0x94132D7C8D3575C4, ped); }
	static void _0x8AF46E5159A5B620(Ped ped, Hash speechParams) { return invoke <void>(0x8AF46E5159A5B620, ped, speechParams); }
	static void _0x45FEA6D5539BD474(Ped ped, const char* p1) { return invoke <void>(0x45FEA6D5539BD474, ped, p1); }
	static void _SET_PED_INTERACTION_POSITIVE_RESPONSE(Ped ped, const char* speech) { return invoke <void>(0x20C5459379D75C1C, ped, speech); }
	static void _0xE37ACEE15AC50C7E(Ped ped, const char* p1) { return invoke <void>(0xE37ACEE15AC50C7E, ped, p1); }
	static void _SET_PED_INTERACTION_NEGATIVE_RESPONSE(Ped ped, const char* speech) { return invoke <void>(0xA3C53CDE922BC78B, ped, speech); }
	static void _0x41C23A8E6B344867(Ped ped, const char* p1) { return invoke <void>(0x41C23A8E6B344867, ped, p1); }
	static bool GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION(Ped ped, Player player) { return invoke <bool>(0x9337183FDA2E9035, ped, player); }
	static bool GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION(Ped ped, Player player) { return invoke <bool>(0xA454D234E45BB6E5, ped, player); }
	static void _0xA7DC9266ED6A4E51(Ped ped) { return invoke <void>(0xA7DC9266ED6A4E51, ped); }
	static Any _0x89816B58C3466262(Ped ped) { return invoke <Any>(0x89816B58C3466262, ped); }
	static void _0x97B06669AC569003(Ped ped1, Ped ped2) { return invoke <void>(0x97B06669AC569003, ped1, ped2); }
	static void _0x85F500F4E24CA43E(Ped ped, float p1) { return invoke <void>(0x85F500F4E24CA43E, ped, p1); }
	static void _0x9B9B9FA0EA283E3D(Ped ped, float p1) { return invoke <void>(0x9B9B9FA0EA283E3D, ped, p1); }
	static void _0xEC60D1D225BC50AA(Ped ped, float p1) { return invoke <void>(0xEC60D1D225BC50AA, ped, p1); }
	static void _0x12F2D161BF4031FC(Ped ped, float p1) { return invoke <void>(0x12F2D161BF4031FC, ped, p1); }
	static void _0x0ADA3EC589E1736E() { return invoke <void>(0xADA3EC589E1736E); }
	static bool _GET_IS_PED_BEING_ROBBED(Ped ped, Player player, bool trueUntilPlayerPocketsItem) { return invoke <bool>(0xE33F98BD76490ABC, ped, player, trueUntilPlayerPocketsItem); }
	static bool _0xD55DB4466D00A258(Ped legendaryAnimal) { return invoke <bool>(0xD55DB4466D00A258, legendaryAnimal); }
	static void SET_PED_MAX_HEALTH(Ped PedIndex, int MaxHealth) { return invoke <void>(0xF5F6378C4F3419D3, PedIndex, MaxHealth); }
	static int GET_PED_MAX_HEALTH(Ped PedIndex) { return invoke <int>(0x4700A416E8324EF3, PedIndex); }
	static void _SET_PED_HEALTH_CONFIG(Ped ped, Hash configHash) { return invoke <void>(0xF6B82FCE03B43A37, ped, configHash); }
	static void INIT_PED_DEFAULT_HEALTH(Ped ped) { return invoke <void>(0x7DD7FB3480D8083E, ped); }
	static void SET_PED_MAX_TIME_IN_WATER(Ped PedIndex, float fMaxTime) { return invoke <void>(0x43C851690662113D, PedIndex, fMaxTime); }
	static void SET_PED_MAX_TIME_UNDERWATER(Ped PedIndex, float fMaxTime) { return invoke <void>(0x6BA428C528D9E522, PedIndex, fMaxTime); }
	static void _0xAF041C10756C30FB(Ped ped, bool p1, bool p2, bool p3) { return invoke <void>(0xAF041C10756C30FB, ped, p1, p2, p3); }
	static void _0x5AF24CA9C974E51A(Ped ped1, Ped ped2) { return invoke <void>(0x5AF24CA9C974E51A, ped1, ped2); }
	static void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Ped PedIndex, int CanBeKnockedOffFlag) { return invoke <void>(0x7A6535691B477C48, PedIndex, CanBeKnockedOffFlag); }
	static bool CAN_KNOCK_PED_OFF_VEHICLE(Ped PedIndex) { return invoke <bool>(0x51AC07A44D4F5B8A, PedIndex); }
	static void KNOCK_PED_OFF_VEHICLE(Ped PedIndex) { return invoke <void>(0x45BBCBA77C29A841, PedIndex); }
	static Ped GET_PED_AS_GROUP_MEMBER(int UniqueGroupID, int MemberNumber) { return invoke <Ped>(0x51455483CF23ED97, UniqueGroupID, MemberNumber); }
	static Ped GET_PED_AS_GROUP_LEADER(int UniqueGroupID) { return invoke <Ped>(0x5CCE68DBD5FE93EC, UniqueGroupID); }
	static void SET_PED_KEEP_TASK(Ped PedIndex, bool KeepTasksFlag) { return invoke <void>(0x971D38760FBC02EF, PedIndex, KeepTasksFlag); }
	static bool IS_PED_SWIMMING(Ped PedIndex) { return invoke <bool>(0x9DE327631295B4C2, PedIndex); }
	static bool IS_PED_SWIMMING_UNDER_WATER(Ped PedIndex) { return invoke <bool>(0xC024869A53992F34, PedIndex); }
	static bool _0xDC88D06719070C39(Ped ped) { return invoke <bool>(0xDC88D06719070C39, ped); }
	static void SET_CREATE_RANDOM_COPS(bool CreateRandomCopsFlag) { return invoke <void>(0x102E68B2024D536D, CreateRandomCopsFlag); }
	static bool IS_PED_IN_ANY_TRAIN(Ped PedIndex) { return invoke <bool>(0x6F972C1AB75A1ED0, PedIndex); }
	static bool IS_PED_GETTING_INTO_A_VEHICLE(Ped PedIndex) { return invoke <bool>(0xBB062B2B5722478E, PedIndex); }
	static bool _0x550CB89DD7F4FA3D(Ped ped1, Ped ped2) { return invoke <bool>(0x550CB89DD7F4FA3D, ped1, ped2); }
	static void SET_ENABLE_HANDCUFFS(Ped PedIndex, bool bEnable, bool p2) { return invoke <void>(0xDF1AF8B5D56542FA, PedIndex, bEnable, p2); }
	static void SET_ENABLE_BOUND_ANKLES(Ped PedIndex, bool bEnable) { return invoke <void>(0xC52E0F855C58FC2E, PedIndex, bEnable); }
	static bool _0x8822F139408B8D0A(Ped ped) { return invoke <bool>(0x8822F139408B8D0A, ped); }
	static void _0x8822F124788B8D0A(Ped ped, bool p1) { return invoke <void>(0x8822F124788B8D0A, ped, p1); }
	static void RESET_PED_WEAPON_MOVEMENT_CLIPSET(Ped PedIndex) { return invoke <void>(0x97B0DB5B4AA74E77, PedIndex); }
	static void _SET_PED_GETUP_ANIMATION(Ped ped, const char* animName, bool p2) { return invoke <void>(0x3AE3552E7C207CC5, ped, animName, p2); }
	static void _0x88A95BB640FC186F(Ped ped) { return invoke <void>(0x88A95BB640FC186F, ped); }
	static void RESET_PED_IN_VEHICLE_CONTEXT(Ped PedIndex) { return invoke <void>(0x22EF8FF8778030EB, PedIndex); }
	static void _0x878E8104FA27CDAE(Vehicle vehicle, Hash p1) { return invoke <void>(0x878E8104FA27CDAE, vehicle, p1); }
	static void SET_PED_GESTURE_GROUP(Ped PedIndex, const char* GestureGroup, int p2) { return invoke <void>(0xDDF803377F94AAA8, PedIndex, GestureGroup, p2); }
	static void _SET_PED_DESIRED_LOCO_FOR_MODEL(Ped ped, const char* locomotionArchetype) { return invoke <void>(0x923583741DC87BCE, ped, locomotionArchetype); }
	static void _CLEAR_PED_DESIRED_LOCO_FOR_MODEL(Ped ped) { return invoke <void>(0x4FD80C3DD84B817B, ped); }
	static void _SET_PED_DESIRED_LOCO_MOTION_TYPE(Ped ped, const char* locoMotionType) { return invoke <void>(0x89F5E7ADECCCB49C, ped, locoMotionType); }
	static void _CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(Ped ped) { return invoke <void>(0x58F7DB5BD8FA2288, ped); }
	static void _0x2371C39D4F91C288(Ped ped) { return invoke <void>(0x2371C39D4F91C288, ped); }
	static void _REQUEST_PED_GETUP_ANIMATION(Ped ped, const char* getUpType) { return invoke <void>(0xEAA8242C8479C27D, ped, getUpType); }
	static void PED_COWER_IN_PLACE(Ped ped, Ped ped2) { return invoke <void>(0xF6E1E9F47A7686F8, ped, ped2); }
	static void PED_COWER_MOVE_TO_POINT(Ped ped, float p1, float p2, float p3, Ped ped2, float p5) { return invoke <void>(0x1E4C940233FC0C6F, ped, p1, p2, p3, ped2, p5); }
	static void _0x16F798A05BB9E3B5(Ped ped) { return invoke <void>(0x16F798A05BB9E3B5, ped); }
	static void _PED_EMOTIONAL_PRESET_LOCO_MOTION(Ped ped, const char* presetName, Ped targetPed, int duration, int flag) { return invoke <void>(0xAAB050DA48B57978, ped, presetName, targetPed, duration, flag); }
	static void _PED_CLEAR_LOCO_MOTION(Ped ped) { return invoke <void>(0x935CF6E42BAF7F4D, ped); }
	static void _0x32CCAD8A981B53D3(Ped ped) { return invoke <void>(0x32CCAD8A981B53D3, ped); }
	static void _SET_PED_DRUNKNESS(Ped ped, bool enabled, float drunknessLevel) { return invoke <void>(0x406CCF555B04FAD3, ped, enabled, drunknessLevel); }
	static bool _IS_PED_DRUNK(Ped ped) { return invoke <bool>(0x50F124E6EF188B22, ped); }
	static float _GET_PED_DRUNKNESS(Ped ped) { return invoke <float>(0x6FB76442469ABD68, ped); }
	static Vector3 GET_ANIM_INITIAL_OFFSET_POSITION(const char* pAnimDictName, const char* pAnimName, float scenePositionX, float scenePositionY, float scenePositionZ, float sceneOrientationX, float sceneOrientationY, float sceneOrientationZ, float phase, int RotOrder) { return invoke <Vector3>(0xBE22B26DD764C040, pAnimDictName, pAnimName, scenePositionX, scenePositionY, scenePositionZ, sceneOrientationX, sceneOrientationY, sceneOrientationZ, phase, RotOrder); }
	static Vector3 GET_ANIM_INITIAL_OFFSET_ROTATION(const char* pAnimDictName, const char* pAnimName, float scenePositionX, float scenePositionY, float scenePositionZ, float sceneOrientationX, float sceneOrientationY, float sceneOrientationZ, float phase, int RotOrder) { return invoke <Vector3>(0x4B805E6046EE9E47, pAnimDictName, pAnimName, scenePositionX, scenePositionY, scenePositionZ, sceneOrientationX, sceneOrientationY, sceneOrientationZ, phase, RotOrder); }
	static void SET_PED_RANDOM_COMPONENT_VARIATION(Ped PedIndex, int race) { return invoke <void>(0xC8A9481A01E63C28, PedIndex, race); }
	static void KNOCK_OFF_PED_PROP(Ped PedIndex, bool bDamaged, bool bHats, bool bGlasses, bool bHelmets) { return invoke <void>(0x6FD7816A36615F48, PedIndex, bDamaged, bHats, bGlasses, bHelmets); }
	static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped PedIndex, bool bBlockEvents) { return invoke <void>(0x9F8AA94D6D97DBF4, PedIndex, bBlockEvents); }
	static bool _GET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped) { return invoke <bool>(0x268B3AEBF032A88D, ped); }
	static void _0xC17A94CC8FC3C61A(Entity entity, int boneId, float p2, float p3, float p4) { return invoke <void>(0xC17A94CC8FC3C61A, entity, boneId, p2, p3, p4); }
	static void _SET_PED_SCALE(Ped ped, float scale) { return invoke <void>(0x25ACFC650B65C538, ped, scale); }
	static float _0x134775B093AD5C38(Ped ped) { return invoke <float>(0x134775B093AD5C38, ped); }
	static float _GET_PED_HEIGHT(Ped ped) { return invoke <float>(0x1D491CCF7211FB74, ped); }
	static int _GET_PED_MODEL_SIZE_FROM_HASH(Hash modelHash) { return invoke <int>(0xA65AA1ACE81E5A77, modelHash); }
	static void REGISTER_TARGET(Ped PedIndex, Ped TargetPedIndex, bool p2) { return invoke <void>(0x2F25D9AEFA34FBA2, PedIndex, TargetPedIndex, p2); }
	static void _REGISTER_HATED_TARGETS_IN_AREA(Ped ped, float x, float y, float z, float radius) { return invoke <void>(0xD8736EFDA38EDC5C, ped, x, y, z, radius); }
	static void REGISTER_HATED_TARGETS_AROUND_PED(Ped PedIndex, float Radius) { return invoke <void>(0x9222F300BF8354FE, PedIndex, Radius); }
	static bool _IS_TARGET(Ped ped, Ped targetPed) { return invoke <bool>(0x6E5CBCB3941D7D08, ped, targetPed); }
	static void _REMOVE_TARGET(Ped ped, Ped targetPed) { return invoke <void>(0x4707E9C23D8CA3FE, ped, targetPed); }
	static bool GET_CLOSEST_PED(float VecCentreCoorsX, float VecCentreCoorsY, float VecCentreCoorsZ, float Range, bool bScanRandomPeds, bool bScanMissionPeds, Ped* ClosestPedIndex, bool p7, bool p8, bool p9, int ExclusionPedType) { return invoke <bool>(0xC33AB876A77F8164, VecCentreCoorsX, VecCentreCoorsY, VecCentreCoorsZ, Range, bScanRandomPeds, bScanMissionPeds, ClosestPedIndex, p7, p8, p9, ExclusionPedType); }
	static bool CAN_PED_RAGDOLL(Ped PedIndex) { return invoke <bool>(0x128F79EDCECE4FD5, PedIndex); }
	static bool SET_PED_TO_RAGDOLL(Ped PedIndex, int MinTime, int MaxTime, int StartTask, bool bAbortIfInjured, bool bAbortIfDead, const char* nmTaskMessageParameterName) { return invoke <bool>(0xAE99FB955581844A, PedIndex, MinTime, MaxTime, StartTask, bAbortIfInjured, bAbortIfDead, nmTaskMessageParameterName); }
	static bool SET_PED_TO_RAGDOLL_WITH_FALL(Ped PedIndex, int MinTime, int MaxTime, int nFallType, float vecDirectionX, float vecDirectionY, float vecDirectionZ, float fGroundHeight, float vecGrab1X, float vecGrab1Y, float vecGrab1Z, float vecGrab2X, float vecGrab2Y, float vecGrab2Z) { return invoke <bool>(0xD76632D99E4966C8, PedIndex, MinTime, MaxTime, nFallType, vecDirectionX, vecDirectionY, vecDirectionZ, fGroundHeight, vecGrab1X, vecGrab1Y, vecGrab1Z, vecGrab2X, vecGrab2Y, vecGrab2Z); }
	static void SET_PED_RAGDOLL_ON_COLLISION(Ped PedIndex, bool RagdollOnCollision, bool p2) { return invoke <void>(0xF0A4F1BBF4FA7497, PedIndex, RagdollOnCollision, p2); }
	static void _SET_PED_TO_DISABLE_RAGDOLL(Ped ped, bool toggle) { return invoke <void>(0x221F4D9912B7FE86, ped, toggle); }
	static bool IS_PED_RAGDOLL(Ped PedIndex) { return invoke <bool>(0x47E4E977581C5B55, PedIndex); }
	static bool IS_PED_RUNNING_RAGDOLL_TASK(Ped PedIndex) { return invoke <bool>(0xE3B6097CC25AA69E, PedIndex); }
	static void SET_PED_RAGDOLL_FORCE_FALL(Ped PedIndex) { return invoke <void>(0x1F6594B923B9251, PedIndex); }
	static void _0x8CB2553C559102C1(Ped ped, int p1, bool p2) { return invoke <void>(0x8CB2553C559102C1, ped, p1, p2); }
	static void _0xFD3C31A2E45671E7(Ped ped, int p1) { return invoke <void>(0xFD3C31A2E45671E7, ped, p1); }
	static void RESET_PED_RAGDOLL_TIMER(Ped PedIndex) { return invoke <void>(0x9FA4664CF62E47E8, PedIndex); }
	static void SET_PED_CAN_RAGDOLL(Ped PedIndex, bool bUnlock) { return invoke <void>(0xB128377056A54E2A, PedIndex, bUnlock); }
	static bool _0x3AEC4A410ECAF30D(Ped ped) { return invoke <bool>(0x3AEC4A410ECAF30D, ped); }
	static bool IS_PED_RUNNING_MOBILE_PHONE_TASK(Ped PedIndex) { return invoke <bool>(0x2AFE52F782F25775, PedIndex); }
	static void SET_RAGDOLL_BLOCKING_FLAGS(Ped PedIndex, int flags) { return invoke <void>(0x26695EC767728D84, PedIndex, flags); }
	static void CLEAR_RAGDOLL_BLOCKING_FLAGS(Ped PedIndex, int flags) { return invoke <void>(0xD86D101FCFD00A4B, PedIndex, flags); }
	static void _0x9F933E0985E12C51(Ped ped, float p1, float p2, float p3) { return invoke <void>(0x9F933E0985E12C51, ped, p1, p2, p3); }
	static void _0x88B2026A3B0BE33D(Ped ped, float p1) { return invoke <void>(0x88B2026A3B0BE33D, ped, p1); }
	static void SET_PED_DEFENSIVE_AREA_VOLUME(Ped ped, Volume volume, bool p2, bool p3, bool p4) { return invoke <void>(0xFC3DB99C8144CD81, ped, volume, p2, p3, p4); }
	static void SET_PED_SPHERE_DEFENSIVE_AREA(Ped PedIndex, float vCentreX, float vCentreY, float vCentreZ, float fRadius, bool p5, bool p6, bool p7) { return invoke <void>(0x9D3151A373974804, PedIndex, vCentreX, vCentreY, vCentreZ, fRadius, p5, p6, p7); }
	static void _SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_ENTITY(Ped ped, Entity entity, float x, float y, float z, float radius, int p6, bool p7) { return invoke <void>(0x1854217C640B39EC, ped, entity, x, y, z, radius, p6, p7); }
	static void _SET_PED_DEFENSIVE_AREA_TO_ANGLED_AREA(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, Any p7, bool p8, bool p9, Entity entity, bool p11) { return invoke <void>(0xEB2BFE5D009F0331, ped, x1, y1, z1, x2, y2, z2, p7, p8, p9, entity, p11); }
	static void SET_PED_DEFENSIVE_AREA_DIRECTION(Ped PedIndex, float vDefendFromPosX, float vDefendFromPosY, float vDefendFromPosZ, bool bApplyToSecondaryDefensiveArea) { return invoke <void>(0x413C6C763A4AFFAD, PedIndex, vDefendFromPosX, vDefendFromPosY, vDefendFromPosZ, bApplyToSecondaryDefensiveArea); }
	static void REMOVE_PED_DEFENSIVE_AREA(Ped PedIndex, bool bRemoveSecondaryDefensiveArea) { return invoke <void>(0x74D4E028107450A9, PedIndex, bRemoveSecondaryDefensiveArea); }
	static Vector3 GET_PED_DEFENSIVE_AREA_POSITION(Ped PedIndex, bool bApplyToSecondaryDefensiveArea) { return invoke <Vector3>(0x3C06B8786DD94CD1, PedIndex, bApplyToSecondaryDefensiveArea); }
	static bool IS_PED_DEFENSIVE_AREA_ACTIVE(Ped PedIndex, bool bCheckSecondaryDefensiveArea) { return invoke <bool>(0xBA63D9FE45412247, PedIndex, bCheckSecondaryDefensiveArea); }
	static Volume _GET_PED_DEFENSIVE_VOLUME(Ped ped, Any p1) { return invoke <Volume>(0xEF2E6F870783369B, ped, p1); }
	static void _0x4EC4EA2F72B36358(Ped ped, bool p1) { return invoke <void>(0x4EC4EA2F72B36358, ped, p1); }
	static void _0xCF0B19806473D324(Ped ped, float x, float y, float z) { return invoke <void>(0xCF0B19806473D324, ped, x, y, z); }
	static void _0xB4B7C92FCE7347B7(Ped ped) { return invoke <void>(0xB4B7C92FCE7347B7, ped); }
	static void REVIVE_INJURED_PED(Ped PedIndex) { return invoke <void>(0x8D8ACD8388CD99CE, PedIndex); }
	static void RESURRECT_PED(Ped PedIndex) { return invoke <void>(0x71BC8E838B9C6035, PedIndex); }
	static void SET_PED_NAME_DEBUG(Ped PedIndex, const char* debugName) { return invoke <void>(0x98EFA132A4117BE1, PedIndex, debugName); }
	static void SPECIAL_FUNCTION_DO_NOT_USE(Ped PedIndex, bool bNoCollisionUntilClear) { return invoke <void>(0xF9ACF4A08098EA25, PedIndex, bNoCollisionUntilClear); }
	static bool _0x7020839C7302D8AC(Ped ped) { return invoke <bool>(0x7020839C7302D8AC, ped); }
	static void _0xE1AADD0055D76603(Ped ped, Entity entity, int boneIndex1, int boneIndex2, float x, float y, float z, float p7, bool p8, bool p9, int p10) { return invoke <void>(0xE1AADD0055D76603, ped, entity, boneIndex1, boneIndex2, x, y, z, p7, p8, p9, p10); }
	static void _0x5A1A929C8B729B4A(Ped ped) { return invoke <void>(0x5A1A929C8B729B4A, ped); }
	static void _0x97A38B65EBDA3D50(Ped ped, bool p1) { return invoke <void>(0x97A38B65EBDA3D50, ped, p1); }
	static bool _0x06A10B4D7F50B0C3(Ped ped) { return invoke <bool>(0x6A10B4D7F50B0C3, ped); }
	static bool _0x88A5564B19C15391(Ped ped) { return invoke <bool>(0x88A5564B19C15391, ped); }
	static int _0x354CA4DDDEEC397A(Ped ped) { return invoke <int>(0x354CA4DDDEEC397A, ped); }
	static void _0xFEA6126C34DF2532(Ped ped, bool p1) { return invoke <void>(0xFEA6126C34DF2532, ped, p1); }
	static void _0xA967D6A8ED2D713B(Ped ped, bool p1) { return invoke <void>(0xA967D6A8ED2D713B, ped, p1); }
	static void APPLY_PED_BLOOD_SPECIFIC(Ped pedIndex, int component, float u, float v, float rotation, float scale, int forcedFrame, float preAge, const char* bloodName) { return invoke <void>(0xEF0D582CBF2D9B0F, pedIndex, component, u, v, rotation, scale, forcedFrame, preAge, bloodName); }
	static void _0x58D32261AE0F0843(Ped ped, int boneId, float p2, float p3, float p4, float p5, float p6, float p7, const char* p8) { return invoke <void>(0x58D32261AE0F0843, ped, boneId, p2, p3, p4, p5, p6, p7, p8); }
	static void _0x735662994E60A710(Ped ped, bool p1) { return invoke <void>(0x735662994E60A710, ped, p1); }
	static void _0x91BAB9E064F036CD(Any p0, Any p1) { return invoke <void>(0x91BAB9E064F036CD, p0, p1); }
	static void _0x897934E868EDDD6C(Ped ped, int p1, float p2, float p3, float p4) { return invoke <void>(0x897934E868EDDD6C, ped, p1, p2, p3, p4); }
	static void _SET_PED_ACTIVATE_WOUND_EFFECT(Ped ped, int p1, int boneId, float moveWoundLeftRight, float bloodFountainPressure, float yaw, float bloodFountainDirection, float bloodFountainPulse, float p8, float p9) { return invoke <void>(0xFFD54D9FE71B966A, ped, p1, boneId, moveWoundLeftRight, bloodFountainPressure, yaw, bloodFountainDirection, bloodFountainPulse, p8, p9); }
	static void _UPDATE_PED_WOUND_EFFECT(Ped ped, float value) { return invoke <void>(0x66B1CB778D911F49, ped, value); }
	static void APPLY_PED_DAMAGE_PACK(Ped PedIndex, const char* packName, float preAge, float alpha_param) { return invoke <void>(0x46DF918788CB093F, PedIndex, packName, preAge, alpha_param); }
	static void CLEAR_PED_BLOOD_DAMAGE(Ped pedIndex) { return invoke <void>(0x8FE22675A5A45817, pedIndex); }
	static void CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Ped PedIndex, int zone) { return invoke <void>(0x56E3B78C5408D9F4, PedIndex, zone); }
	static void CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Ped PedIndex, int zone, const char* damageDecalName) { return invoke <void>(0x523C79AEEFCC4A2A, PedIndex, zone, damageDecalName); }
	static void _CLEAR_PED_BLOOD_DAMAGE_FACIAL(Ped ped, int p1) { return invoke <void>(0x7F5D88333EE8A86F, ped, p1); }
	static void _0x34C11114887150FD(Any p0, Any p1) { return invoke <void>(0x34C11114887150FD, p0, p1); }
	static void _0xD8544F6260F5F01E(Ped ped, int p1) { return invoke <void>(0xD8544F6260F5F01E, ped, p1); }
	static void _0xEB8886E1065654CD(Ped ped, int p1, const char* p2, float p3) { return invoke <void>(0xEB8886E1065654CD, ped, p1, p2, p3); }
	static void FADE_AND_DESTROY_PED(Ped* ped) { return invoke <void>(0x7043D0681285BA2D, ped); }
	static bool _IS_PED_QUEUED_FOR_DELETION(Ped ped) { return invoke <bool>(0x8D9BFCE3352DE47F, ped); }
	static void CLEAR_PED_WETNESS(Ped pedIndex) { return invoke <void>(0x9C720776DAA43E7E, pedIndex); }
	static void SET_PED_WETNESS_HEIGHT(Ped pedIndex, float height) { return invoke <void>(0x44CB6447D2571AA0, pedIndex, height); }
	static void _0xF9CFF5BB70E8A2CB(Ped ped, float p1) { return invoke <void>(0xF9CFF5BB70E8A2CB, ped, p1); }
	static void SET_PED_WETNESS_ENABLED_THIS_FRAME(Ped pedIndex) { return invoke <void>(0xB5485E4907B53019, pedIndex); }
	static void _0xA7A806677F8DE138(Ped ped) { return invoke <void>(0xA7A806677F8DE138, ped); }
	static void _0xA064BBABB064446F(Any p0) { return invoke <void>(0xA064BBABB064446F, p0); }
	static void CLEAR_PED_ENV_DIRT(Ped pedIndex) { return invoke <void>(0x6585D955A68452A5, pedIndex); }
	static void SET_PED_SWEAT(Ped pedIndex, float amount) { return invoke <void>(0x27B0405F59637D1F, pedIndex, amount); }
	static void CLEAR_PED_DECORATIONS(Ped PedIndex) { return invoke <void>(0xE5173C163976E38, PedIndex); }
	static bool WAS_PED_SKELETON_UPDATED(Ped PedIndex) { return invoke <bool>(0x11B499C1E0FF8559, PedIndex); }
	static Vector3 GET_PED_BONE_COORDS(Ped PedIndex, int bone, float vecOffsetX, float vecOffsetY, float vecOffsetZ) { return invoke <Vector3>(0x17C07FC640E86B4E, PedIndex, bone, vecOffsetX, vecOffsetY, vecOffsetZ); }
	static int ADD_SCENARIO_BLOCKING_AREA(float vMinX, float vMinY, float vMinZ, float vMaxX, float vMaxY, float vMaxZ, bool bNetwork, int blockingFlags) { return invoke <int>(0x1B5C85C612E5256E, vMinX, vMinY, vMinZ, vMaxX, vMaxY, vMaxZ, bNetwork, blockingFlags); }
	static void REMOVE_SCENARIO_BLOCKING_AREAS() { return invoke <void>(0xD37401D78A929A49); }
	static void REMOVE_SCENARIO_BLOCKING_AREA(int ScenarioBlockingIndex, bool bNetwork) { return invoke <void>(0x31D16B74C6E29D66, ScenarioBlockingIndex, bNetwork); }
	static Any _ADD_SCENARIO_BLOCKING_VOLUME(Volume volume, bool p1, int flag) { return invoke <Any>(0x4C39C95AE5DB1329, volume, p1, flag); }
	static Any _0x6F46F8ACB44C4FC1(Any p0) { return invoke <Any>(0x6F46F8ACB44C4FC1, p0); }
	static bool _IS_SCENARIO_BLOCKING_AREA_VALID(Any p0) { return invoke <bool>(0x91A5F9CBEBB9D936, p0); }
	static bool IS_PED_USING_SCENARIO_HASH(Ped ped, Hash scenarioHash) { return invoke <bool>(0x34D6AC1157C8226C, ped, scenarioHash); }
	static bool IS_PED_USING_ANY_SCENARIO(Ped PedIndex) { return invoke <bool>(0x57AB4A3080F85143, PedIndex); }
	static bool IS_PED_USING_THIS_SCENARIO(Ped ped, int scenario) { return invoke <bool>(0x9C54041BB66BCF9E, ped, scenario); }
	static bool _CAN_PED_USE_SCENARIO_POINT(Ped ped, int scenario, Any p2, Any p3, Any p4) { return invoke <bool>(0xAB643407D0B26F07, ped, scenario, p2, p3, p4); }
	static bool _0x1148F706CF4EBDDA(Ped ped, Hash p1, int p2) { return invoke <bool>(0x1148F706CF4EBDDA, ped, p1, p2); }
	static bool SET_PED_PANIC_EXIT_SCENARIO(Ped PedIndex, float vDangerPositionX, float vDangerPositionY, float vDangerPositionZ) { return invoke <bool>(0xFE07FF6495D52E2A, PedIndex, vDangerPositionX, vDangerPositionY, vDangerPositionZ); }
	static void TOGGLE_SCENARIO_PED_COWER_IN_PLACE(Ped PedIndex, bool bStart) { return invoke <void>(0x9A77DFD295E29B09, PedIndex, bStart); }
	static void _0xD8CEEED54C672B5D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0xD8CEEED54C672B5D, p0, p1, p2, p3, p4, p5, p6); }
	static bool SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(Ped PedIndex, float vReactPositionX, float vReactPositionY, float vReactPositionZ) { return invoke <bool>(0xEC6935EBE0847B90, PedIndex, vReactPositionX, vReactPositionY, vReactPositionZ); }
	static void SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(Ped PedIndex) { return invoke <void>(0xA3A9299C4F2ADB98, PedIndex); }
	static void SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Ped PedIndex) { return invoke <void>(0xF1C03A5352243A30, PedIndex); }
	static bool SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(Ped PedIndex, float vDangerPositionX, float vDangerPositionY, float vDangerPositionZ, int lookIntensity) { return invoke <bool>(0xEEED8FAFEC331A70, PedIndex, vDangerPositionX, vDangerPositionY, vDangerPositionZ, lookIntensity); }
	static bool SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(Ped ped, float x, float y, float z, int lookIntensity) { return invoke <bool>(0x802092B07E3B1EEA, ped, x, y, z, lookIntensity); }
	static bool SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(Ped ped, float x, float y, float z, int lookIntensity, bool p5) { return invoke <bool>(0x62FDAD5E01D2DD47, ped, x, y, z, lookIntensity, p5); }
	static bool SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT(Ped ped, float x, float y, float z, int lookIntensity, bool p5) { return invoke <bool>(0x463803429297117C, ped, x, y, z, lookIntensity, p5); }
	static bool _0xF9331B3A314EB49D(Ped ped) { return invoke <bool>(0xF9331B3A314EB49D, ped); }
	static void _0xE735A7DA22E88359(Any p0) { return invoke <void>(0xE735A7DA22E88359, p0); }
	static Any _0x82CB0F3F0C7785E5(Any p0) { return invoke <Any>(0x82CB0F3F0C7785E5, p0); }
	static void _0xCA95C156C14B2054(Any p0, Any p1) { return invoke <void>(0xCA95C156C14B2054, p0, p1); }
	static void SET_FACIAL_IDLE_ANIM_OVERRIDE(Ped PedIndex, const char* pOverrideIdleClipName, const char* pOverrideIdleClipDictName) { return invoke <void>(0xFFC24B988B938B38, PedIndex, pOverrideIdleClipName, pOverrideIdleClipDictName); }
	static void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Ped PedIndex) { return invoke <void>(0x726256CC1EEB182F, PedIndex); }
	static void _REQUEST_PED_FACIAL_MOOD_THIS_FRAME(Ped ped, Hash mood, int p2) { return invoke <void>(0x8B3B71C80A29A4BB, ped, mood, p2); }
	static void _0xD2F0FE8805D91647(Any p0, Any p1) { return invoke <void>(0xD2F0FE8805D91647, p0, p1); }
	static void SET_PED_CAN_PLAY_GESTURE_ANIMS(Ped PedIndex, bool p1, Any p2) { return invoke <void>(0xBAF20C5432058024, PedIndex, p1, p2); }
	static void _0x7EDB3C766B0D073F(Ped ped) { return invoke <void>(0x7EDB3C766B0D073F, ped); }
	static void SET_PED_CAN_PLAY_AMBIENT_ANIMS(Ped PedIndex, bool bAlllowAmbientAnims) { return invoke <void>(0x6373D1349925A70E, PedIndex, bAlllowAmbientAnims); }
	static void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Ped PedIndex, bool bAlllowAmbientAnims) { return invoke <void>(0xEB0585D15254740, PedIndex, bAlllowAmbientAnims); }
	static void _0x4F63433CE3C08230(Ped ped, bool p1) { return invoke <void>(0x4F63433CE3C08230, ped, p1); }
	static void SET_PED_CAN_ARM_IK(Ped PedIndex, bool bEnableIK) { return invoke <void>(0x6C3B4D6D13B4C841, PedIndex, bEnableIK); }
	static void _SET_PED_CAN_UNK_BODYPART_IK(Ped ped, bool toggle) { return invoke <void>(0xEE9DF765990E8D1D, ped, toggle); }
	static void SET_PED_CAN_HEAD_IK(Ped PedIndex, bool bEnableIK) { return invoke <void>(0xC11C18092C5530DC, PedIndex, bEnableIK); }
	static void SET_PED_CAN_LEG_IK(Ped PedIndex, bool bEnableIK) { return invoke <void>(0x73518ECE2485412B, PedIndex, bEnableIK); }
	static void SET_PED_CAN_TORSO_IK(Ped PedIndex, bool bEnableIK) { return invoke <void>(0xF2B7106D37947CE0, PedIndex, bEnableIK); }
	static void SET_PED_CAN_TORSO_REACT_IK(Ped PedIndex, bool bEnableIK) { return invoke <void>(0xF5846EDB26A98A24, PedIndex, bEnableIK); }
	static void SET_PED_CAN_TORSO_VEHICLE_IK(Ped PedIndex, bool bEnableIK) { return invoke <void>(0x6647C5F6F5792496, PedIndex, bEnableIK); }
	static void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Ped PedIndex, bool bAllowAutoConversationLookAts) { return invoke <void>(0xEC4686EC06434678, PedIndex, bAllowAutoConversationLookAts); }
	static bool IS_PED_HEADTRACKING_PED(Ped FirstPedIndex, Ped SecondPedIndex) { return invoke <bool>(0x5CD3CB88A7F8850D, FirstPedIndex, SecondPedIndex); }
	static bool IS_PED_HEADTRACKING_ENTITY(Ped PedIndex, Entity EntityIndex) { return invoke <bool>(0x813A0A7C9D2E831F, PedIndex, EntityIndex); }
	static void _DISABLE_AMBIENT_LOOK_AT_REQUESTS(Any p0, Any p1) { return invoke <void>(0x80038740C96AD17F, p0, p1); }
	static void _DISABLE_ALL_LOOK_AT_REQUESTS(Ped ped, int p1) { return invoke <void>(0xE1965A380342BE1F, ped, p1); }
	static void _0xCD9E5F94A2F38683(Ped ped, bool p1) { return invoke <void>(0xCD9E5F94A2F38683, ped, p1); }
	static void SET_PED_CLOTH_PIN_FRAMES(Ped PedIndex, int pinFrames) { return invoke <void>(0x78C4E9961DB3EB5B, PedIndex, pinFrames); }
	static void _0x1D4636C90BBEFACB(Ped ped, int p1) { return invoke <void>(0x1D4636C90BBEFACB, ped, p1); }
	static void _0xEF371232BC6053E1(Ped ped) { return invoke <void>(0xEF371232BC6053E1, ped); }
	static void _0x86F0B6730C32AC14(Ped ped, bool p1) { return invoke <void>(0x86F0B6730C32AC14, ped, p1); }
	static void _0x8101BA1C0B462412(Ped ped, int ropeId) { return invoke <void>(0x8101BA1C0B462412, ped, ropeId); }
	static void SET_PED_CONFIG_FLAG(Ped PedIndex, int ConfigFlag, bool bTrue) { return invoke <void>(0x1913FE4CBF41C463, PedIndex, ConfigFlag, bTrue); }
	static void SET_PED_RESET_FLAG(Ped PedIndex, int ResetFlag, bool bTrue) { return invoke <void>(0xC1E8A365BF3B29F2, PedIndex, ResetFlag, bTrue); }
	static bool GET_PED_CONFIG_FLAG(Ped PedIndex, int ConfigFlag, bool DoDeadCheck) { return invoke <bool>(0x7EE53118C892B513, PedIndex, ConfigFlag, DoDeadCheck); }
	static bool GET_PED_RESET_FLAG(Ped PedIndex, int ResetFlag) { return invoke <bool>(0xAF9E59B1B1FBF2A0, PedIndex, ResetFlag); }
	static void _0xC6981AFF6D2A71C2(Any p0) { return invoke <void>(0xC6981AFF6D2A71C2, p0); }
	static void _0xE0FE107AB174D64A(Any p0, Any p1) { return invoke <void>(0xE0FE107AB174D64A, p0, p1); }
	static void SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Ped PedIndex, int seat) { return invoke <void>(0xBDDB8D9EC6BCF3C, PedIndex, seat); }
	static bool IS_PED_EVASIVE_DIVING(Ped PedIndex, Entity* EntityDivingFromIndex) { return invoke <bool>(0x414641C26E105898, PedIndex, EntityDivingFromIndex); }
	static Any _SHOOT_TRIGGER_AT_COORDS(Ped ped, float x, float y, float z, int p4, float p5, int p6, float p7) { return invoke <Any>(0x4C57F27D1554E6B0, ped, x, y, z, p4, p5, p6, p7); }
	static bool _IS_THIS_MODEL_A_HORSE(Hash model) { return invoke <bool>(0x772A1969F649E902, model); }
	static void SET_PED_MODEL_IS_SUPPRESSED(Hash PedModelHashKey, bool bSurpressModel) { return invoke <void>(0xE163A4BCE4DE6F11, PedModelHashKey, bSurpressModel); }
	static bool _IS_PED_MODEL_SUPPRESSED(Hash model) { return invoke <bool>(0xAA9F048DCF69B6DC, model); }
	static void _0x7ABBD9E449E0DB00(Ped ped, bool p1) { return invoke <void>(0x7ABBD9E449E0DB00, ped, p1); }
	static void _SET_PED_DISABLE_KICK_MOVE(Ped ped, bool disable) { return invoke <void>(0xADD31A5C7A5FAA73, ped, disable); }
	static void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Ped PedIndex, bool bAllow) { return invoke <void>(0xDF993EE5E90ABA25, PedIndex, bAllow); }
	static void _0xE6CB36F43A95D75F(Any p0) { return invoke <void>(0xE6CB36F43A95D75F, p0); }
	static void SET_PED_LEG_IK_MODE(Ped PedIndex, int nLegIkMode) { return invoke <void>(0xC396F5B86FF9FEBD, PedIndex, nLegIkMode); }
	static bool _IS_PED_IN_POINT(Ped ped, float x, float y, float z, float radius, bool p5) { return invoke <bool>(0x78076AB50FB117F, ped, x, y, z, radius, p5); }
	static void _SET_PED_CAN_BE_LASSOED(Ped ped, bool toggle) { return invoke <void>(0xFD6943B6DF77E449, ped, toggle); }
	static void SET_PED_COMBAT_MOVEMENT(Ped PedIndex, int PedCombatMoveType) { return invoke <void>(0x4D9CA1009AFBD057, PedIndex, PedCombatMoveType); }
	static int GET_PED_COMBAT_MOVEMENT(Ped PedIndex) { return invoke <int>(0xDEA92412FCAEB3F5, PedIndex); }
	static void _0x815C0074A1BC0D93(Ped ped, int p1) { return invoke <void>(0x815C0074A1BC0D93, ped, p1); }
	static int _0xFFDE295662405B25(Ped ped) { return invoke <int>(0xFFDE295662405B25, ped); }
	static void SET_PED_COMBAT_ABILITY(Ped PedIndex, int PedCombatAbilityType) { return invoke <void>(0xC7622C0D36B2FDA8, PedIndex, PedCombatAbilityType); }
	static void SET_PED_COMBAT_RANGE(Ped PedIndex, int CombatRange) { return invoke <void>(0x3C606747B23E497B, PedIndex, CombatRange); }
	static void SET_PED_COMBAT_ATTRIBUTES(Ped PedIndex, int CombatAttribute, bool bActiveSkill) { return invoke <void>(0x9F7794730795E019, PedIndex, CombatAttribute, bActiveSkill); }
	static bool _GET_PED_COMBAT_ATTRIBUTE(Ped ped, int attributeIndex) { return invoke <bool>(0xCC2B20596E29E4E3, ped, attributeIndex); }
	static void _SET_PED_COMBAT_ATTRIBUTE_HASH(Ped ped, Hash p1) { return invoke <void>(0xBD75500141E4725C, ped, p1); }
	static void SET_PED_TARGET_LOSS_RESPONSE(Ped PedIndex, int TargetLossResponse) { return invoke <void>(0x703B9079823DA4A, PedIndex, TargetLossResponse); }
	static void _0x0A4618FFD517E24D(Any p0, Any p1) { return invoke <void>(0xA4618FFD517E24D, p0, p1); }
	static void _0x712B2C2B2471B493(Ped ped, Hash p1) { return invoke <void>(0x712B2C2B2471B493, ped, p1); }
	static void _0x00B380FF2DF6AB7A(Any p0, Any p1) { return invoke <void>(0xB380FF2DF6AB7A, p0, p1); }
	static void _SET_PED_COMBAT_STYLE(Ped ped, Hash combatStyleHash, int p2, float duration) { return invoke <void>(0x8ACC0506743A8A5C, ped, combatStyleHash, p2, duration); }
	static void _CLEAR_PED_COMBAT_STYLE(Ped ped, int p1) { return invoke <void>(0x78815FC52832B690, ped, p1); }
	static void _SET_PED_COMBAT_STYLE_MOD(Ped ped, Hash combatStyleModHash, float duration) { return invoke <void>(0x8B1E8E35A6E814EA, ped, combatStyleModHash, duration); }
	static void _CLEAR_PED_COMBAT_STYLE_MOD(Ped ped, Hash combatStyleModHash) { return invoke <void>(0x1FA132CBCD7CB239, ped, combatStyleModHash); }
	static bool _0x5BF0B9D9A8E227A0(Ped ped) { return invoke <bool>(0x5BF0B9D9A8E227A0, ped); }
	static void _0x642720D8D69328B6(Ped ped, Hash p1) { return invoke <void>(0x642720D8D69328B6, ped, p1); }
	static bool IS_PED_PERFORMING_MELEE_ACTION(Ped PedIndex, int p1, Hash p2) { return invoke <bool>(0xDCCA191DF9980FD7, PedIndex, p1, p2); }
	static bool _0x99DF2639DA76C1DC(Ped ped1, Ped ped2, int p2) { return invoke <bool>(0x99DF2639DA76C1DC, ped1, ped2, p2); }
	static float _GET_PED_MELEE_ACTION_PHASE(Ped ped) { return invoke <float>(0x6127F25ED21C533C, ped); }
	static bool IS_PED_BEING_STEALTH_KILLED(Ped PedIndex) { return invoke <bool>(0x863B23EFDE9C5DF2, PedIndex); }
	static Ped GET_MELEE_TARGET_FOR_PED(Ped PedIndex) { return invoke <Ped>(0x18A3E9EE1297FD39, PedIndex); }
	static void _0xDEDBED3020DA49DC(Any p0) { return invoke <void>(0xDEDBED3020DA49DC, p0); }
	static void _0xA405BF9F01960C16(Any p0) { return invoke <void>(0xA405BF9F01960C16, p0); }
	static Hash _GET_PED_BRAWLING_STYLE(Ped ped) { return invoke <Hash>(0xEC6B59BE445FEC51, ped); }
	static void _SET_PED_BRAWLING_STYLE(Ped ped, Hash brawlingStyle) { return invoke <void>(0x8BA83CC4288CD56D, ped, brawlingStyle); }
	static void _0x9D8DFE2DE9CB4DFC(Ped ped) { return invoke <void>(0x9D8DFE2DE9CB4DFC, ped); }
	static Any _0xC48AF420371C7407(Ped ped, Hash grapple) { return invoke <Any>(0xC48AF420371C7407, ped, grapple); }
	static Any _0x5EFA8A3D8A60D662(Any p0, Any p1) { return invoke <Any>(0x5EFA8A3D8A60D662, p0, p1); }
	static Any _0x242EDF85D4E87B65(Any p0) { return invoke <Any>(0x242EDF85D4E87B65, p0); }
	static void _SET_PED_COMBAT_BEHAVIOUR(Ped ped, Hash behaviour) { return invoke <void>(0x9238A3D970BBB0A9, ped, behaviour); }
	static void _0x9A4AC116CC1EEE14(Any p0) { return invoke <void>(0x9A4AC116CC1EEE14, p0); }
	static void _0xE20027B414BFE6C7(Any p0, Any p1) { return invoke <void>(0xE20027B414BFE6C7, p0, p1); }
	static void _SET_PED_BEAT_MULTIPLIER(Ped ped, float p1) { return invoke <void>(0x6DBF2D78709AD70B, ped, p1); }
	static void _SET_PED_ACTION_DISABLE_FLAG(Ped ped, int actionDisableFlag) { return invoke <void>(0xB8DE69D9473B7593, ped, actionDisableFlag); }
	static void _CLEAR_PED_ACTION_DISABLE_FLAG(Ped ped, int actionDisableFlag) { return invoke <void>(0x949B2F9ED2917F5D, ped, actionDisableFlag); }
	static bool _IS_PED_ACTION_DISABLE_FLAG_ENABLED(Ped ped, int actionDisableFlag) { return invoke <bool>(0xB346C85D49CC998E, ped, actionDisableFlag); }
	static void _SET_PED_TARGET_ACTION_DISABLE_FLAG(Ped ped, int actionDisableFlag) { return invoke <void>(0xC163DAC52AC975D3, ped, actionDisableFlag); }
	static void _CLEAR_PED_TARGET_ACTION_DISABLE_FLAG(Ped ped, int actionDisableFlag) { return invoke <void>(0xBBF6D1D07C02D00A, ped, actionDisableFlag); }
	static bool _IS_PED_TARGET_ACTION_DISABLE_FLAG_ENABLED(Ped ped, int actionDisableFlag) { return invoke <bool>(0x2AA2096FE00F3E1, ped, actionDisableFlag); }
	static void _0x57F35552E771BE9D(Ped ped, int p1) { return invoke <void>(0x57F35552E771BE9D, ped, p1); }
	static void _0x7C10221CE718AA72(Ped ped, int p1) { return invoke <void>(0x7C10221CE718AA72, ped, p1); }
	static bool _0x0D3B1568917EBDA0(Ped ped, int p1) { return invoke <bool>(0xD3B1568917EBDA0, ped, p1); }
	static void _0x29F3539189D3E277(Any p0, Any p1) { return invoke <void>(0x29F3539189D3E277, p0, p1); }
	static void _0xE9E06EA514A69061(Any p0, Any p1) { return invoke <void>(0xE9E06EA514A69061, p0, p1); }
	static void _SET_PED_WRITHING_DURATION(Ped ped, float writhingDuration1, float writhingDuration2, int p3) { return invoke <void>(0x4DB9D03AC4E1FA84, ped, writhingDuration1, writhingDuration2, p3); }
	static float _GET_PED_REMAINING_REVIVAL_TIME(Ped ped, bool normalized) { return invoke <float>(0xEBE89623EB861271, ped, normalized); }
	static void SET_PAUSE_PED_WRITHE_BLEEDOUT(Ped ped, bool toggle) { return invoke <void>(0x925A160133003AC6, ped, toggle); }
	static bool _0x12EB4E31F092C9B3(Ped ped) { return invoke <bool>(0x12EB4E31F092C9B3, ped); }
	static bool GET_PED_IS_GRAPPLING(Ped ped) { return invoke <bool>(0xE99E3BF11BB6367, ped); }
	static bool GET_PED_IS_BEING_GRAPPLED(Ped ped) { return invoke <bool>(0x3BDFCF25B58B0415, ped); }
	static Ped _GET_PED_GRAPPLER(Ped ped) { return invoke <Ped>(0xD0B7AEB56229D317, ped); }
	static int GET_PED_GRAPPLE_STATE(Ped ped) { return invoke <int>(0x2311F15D971AA680, ped); }
	static Hash _GET_PED_GRAPPLE_STYLE(Ped ped) { return invoke <Hash>(0x753B15AD0FD6F3E3, ped); }
	static Any _SET_PED_GRAPPLE_STYLE(Ped ped, Hash style) { return invoke <Any>(0x630E7B01F091A197, ped, style); }
	static void _SET_PED_GRAPPLE_SEQUENCE(Ped ped, const char* grappleSequence) { return invoke <void>(0x604190F0CF0DF158, ped, grappleSequence); }
	static void _SET_PED_GRAPPLE_FLAG(Ped ped, int flag, bool enable) { return invoke <void>(0x789DABD18E9024DB, ped, flag, enable); }
	static void _CLEAR_PED_GRAPPLE_FLAG(Ped ped, int flag) { return invoke <void>(0xEAE3B5B019C8D23F, ped, flag); }
	static int _GET_PED_GRAPPLE_FLAG(Ped ped) { return invoke <int>(0xF3C873ED0C595109, ped); }
	static void _SET_PED_GRAPPLE_ACTION(Ped ped, Hash grappleAction) { return invoke <void>(0x8301D87B1B89E219, ped, grappleAction); }
	static Any _SET_PED_GRAPPLE_EFFECT_MULTIPLIER(Ped ped, float multiplier) { return invoke <Any>(0x99A6E246C315BF60, ped, multiplier); }
	static void _SET_PED_GRAPPLE_ANIMATION(Ped ped, Hash grappleAnim) { return invoke <void>(0x56E9C26CD29D1ED6, ped, grappleAnim); }
	static void SET_PED_FLEE_ATTRIBUTES(Ped PedIndex, int FleeAttribute, bool bActiveSkill) { return invoke <void>(0x70A2D1137C8ED7C9, PedIndex, FleeAttribute, bActiveSkill); }
	static bool _IS_PED_COWERING(Ped ped) { return invoke <bool>(0xB086C8C0F5701D14, ped); }
	static bool IS_ANY_PED_NEAR_POINT(float pointX, float pointY, float pointZ, float radius) { return invoke <bool>(0x83961498679DC9F, pointX, pointY, pointZ, radius); }
	static void FORCE_PED_AI_AND_ANIMATION_UPDATE(Ped PedIndex, bool ForceAIPreCameraUpdate, bool ForceZeroTimestep) { return invoke <void>(0x2208438012482A1A, PedIndex, ForceAIPreCameraUpdate, ForceZeroTimestep); }
	static void _0xC2722B252C79E641(Ped ped, Any p1, Any p2, bool p3) { return invoke <void>(0xC2722B252C79E641, ped, p1, p2, p3); }
	static bool _IS_PED_DOING_SCENARIO_TRANSITION(Ped ped) { return invoke <bool>(0xC488B8C0E52560D8, ped); }
	static bool _0x2DC0E8DCBD3546E9(Ped ped) { return invoke <bool>(0x2DC0E8DCBD3546E9, ped); }
	static void _ADD_SCENARIO_TRANSITION(Ped ped) { return invoke <void>(0x6D07B371E9439019, ped); }
	static void _GIVE_PED_HASH_COMMAND(Ped ped, Hash commandHash, float activationDuration) { return invoke <void>(0xD65FDC686A031C83, ped, commandHash, activationDuration); }
	static bool _GET_IS_PED_COMMAND_HASH_PRESENT(Ped ped, Hash commandHash) { return invoke <bool>(0x68821369A2CEADD5, ped, commandHash); }
	static bool IS_PED_HEADING_TOWARDS_POSITION(Ped iPedIndex, float vPointX, float vPointY, float vPointZ, float fDegreesDelta) { return invoke <bool>(0xFCF37A457CB96DC0, iPedIndex, vPointX, vPointY, vPointZ, fDegreesDelta); }
	static void _0x600BBDD29820370C(Ped ped) { return invoke <void>(0x600BBDD29820370C, ped); }
	static void REQUEST_PED_VISIBILITY_TRACKING(Ped ped) { return invoke <void>(0x7D7A2E43E74E2EB8, ped); }
	static void RELEASE_PED_VISIBILITY_TRACKING(Ped ped) { return invoke <void>(0x3088634CF8C819CF, ped); }
	static void REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(Ped ped, bool trackvehicle) { return invoke <void>(0x2BC338A7B21F4608, ped, trackvehicle); }
	static void REQUEST_PED_USE_SMALL_BBOX_VISIBILITY_TRACKING(Ped ped, bool useSmallBox) { return invoke <void>(0x75BA1CB3B7D40CAF, ped, useSmallBox); }
	static int GET_TRACKED_PED_PIXELCOUNT(Ped ped) { return invoke <int>(0x511F1A683387C7E2, ped); }
	static bool IS_TRACKED_PED_VISIBLE(Ped ped) { return invoke <bool>(0x91C8E617F64188AC, ped); }
	static bool _IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(Ped ped, float percent) { return invoke <bool>(0x164CECC59E70DF86, ped, percent); }
	static bool _IS_PED_VISIBILITY_TRACKED(Ped ped) { return invoke <bool>(0x5102307CE88798EB, ped); }
	static bool CAN_PED_BE_MOUNTED(Ped ped) { return invoke <bool>(0x2D64376CF437363E, ped); }
	static bool _IS_META_PED_FISH(Ped ped) { return invoke <bool>(0x118D476A6F1A13F1, ped); }
	static bool IS_EVENT_IN_QUEUE(Ped ped, Hash eventType) { return invoke <bool>(0xC8D523BF5BBD3808, ped, eventType); }
	static int CAN_PED_SEE_ENTITY(Ped ped, Entity targetEntity, bool p2, bool p3) { return invoke <int>(0x7F9B9791D4CB71F6, ped, targetEntity, p2, p3); }
	static int CAN_PED_SEE_PED_CACHED(Ped ped, Ped targetPed, bool p2) { return invoke <int>(0x9D9473CB82D83A30, ped, targetPed, p2); }
	static float _0x0EA9EACBA3B01601(Ped ped1, Ped ped2, bool p2) { return invoke <float>(0xEA9EACBA3B01601, ped1, ped2, p2); }
	static int GET_PED_BONE_INDEX(Ped iPedIndex, int boneTag) { return invoke <int>(0x3F428D08BE5AAE31, iPedIndex, boneTag); }
	static int _0xC5303F460A40D21D(Ped ped, int p1) { return invoke <int>(0xC5303F460A40D21D, ped, p1); }
	static void _0xE29D8CD66553DBAA(Ped horse) { return invoke <void>(0xE29D8CD66553DBAA, horse); }
	static void _0xB06F5F1DEF417216(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xB06F5F1DEF417216, p0, p1, p2, p3); }
	static void _0xFC23348F0F4E245F(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xFC23348F0F4E245F, p0, p1, p2, p3); }
	static void _0x9184788BFF1EDAD7(Any p0, Any p1) { return invoke <void>(0x9184788BFF1EDAD7, p0, p1); }
	static void _SET_PED_DIRT_CLEANED(Ped ped, float p1, int p2, bool p3, bool p4) { return invoke <void>(0xE3144B932DFDFF65, ped, p1, p2, p3, p4); }
	static Any _0x0105FEE8F9091255(Any p0, Any p1) { return invoke <Any>(0x105FEE8F9091255, p0, p1); }
	static void _0xD049920CD29F6CC8(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0xD049920CD29F6CC8, p0, p1, p2, p3, p4); }
	static Any _0xBB3E5370EBB6BE28(Any p0, Any p1) { return invoke <Any>(0xBB3E5370EBB6BE28, p0, p1); }
	static void _0x2FA568BFA725F8D6(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x2FA568BFA725F8D6, p0, p1, p2, p3); }
	static Any _0x56E4BAD93D33453C(Any p0, Any p1) { return invoke <Any>(0x56E4BAD93D33453C, p0, p1); }
	static void _0x75A082563B4452E5(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x75A082563B4452E5, p0, p1, p2, p3); }
	static void _0x16802C32B2FCA06B(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x16802C32B2FCA06B, p0, p1, p2, p3); }
	static void _0x8BA0C65AC15A7D33(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x8BA0C65AC15A7D33, p0, p1, p2, p3); }
	static void _0x0FFDF937E5C11382(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <void>(0xFFDF937E5C11382, p0, p1, p2, p3, p4, p5); }
	static void _0x5FCF25D584065BFD(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x5FCF25D584065BFD, p0, p1, p2, p3); }
	static void _0xA2116C1E4ED85C24(Ped ped, bool inverted) { return invoke <void>(0xA2116C1E4ED85C24, ped, inverted); }
	static bool FORCE_PED_MOTION_STATE(Ped PedIndex, Hash state, bool shouldRestart, int exitstate, bool ForceAIPreCameraUpdate) { return invoke <bool>(0xF28965D04F570DCA, PedIndex, state, shouldRestart, exitstate, ForceAIPreCameraUpdate); }
	static void _0x75D3333409CD33CE(Any p0, Any p1, Any p2) { return invoke <void>(0x75D3333409CD33CE, p0, p1, p2); }
	static bool GET_PED_CURRENT_MOVE_BLEND_RATIO(Ped PedIndex, float* MbrXOut, float* MbrYOut) { return invoke <bool>(0xF60165E1D2C5370B, PedIndex, MbrXOut, MbrYOut); }
	static void SET_PED_MAX_MOVE_BLEND_RATIO(Ped PedIndex, float MoveBlendRatio) { return invoke <void>(0x433083750C5E064A, PedIndex, MoveBlendRatio); }
	static void SET_PED_MIN_MOVE_BLEND_RATIO(Ped PedIndex, float MoveBlendRatio) { return invoke <void>(0x1A898D26E2333DD, PedIndex, MoveBlendRatio); }
	static void _0xBC1DC48270468444(Any p0) { return invoke <void>(0xBC1DC48270468444, p0); }
	static float _0x46BF2A810679D6E6(Ped ped, float maxMoveBlendRatio) { return invoke <float>(0x46BF2A810679D6E6, ped, maxMoveBlendRatio); }
	static float _0xCA95924C893A0C91(Ped ped, float p1) { return invoke <float>(0xCA95924C893A0C91, ped, p1); }
	static void _HORSE_AGITATE(Ped mount, bool kickOffRider) { return invoke <void>(0xBAE08F00021BFFB2, mount, kickOffRider); }
	static void _0x413697EC260AABBF(Any p0, Any p1, Any p2) { return invoke <void>(0x413697EC260AABBF, p0, p1, p2); }
	static void _0xCAC43D060099EA72(Ped ped) { return invoke <void>(0xCAC43D060099EA72, ped); }
	static void _0xC9151483CC06A414(Ped ped) { return invoke <void>(0xC9151483CC06A414, ped); }
	static void _0xAD3330E3C3E98007(Any p0, Any p1) { return invoke <void>(0xAD3330E3C3E98007, p0, p1); }
	static Any _0xB8E2D655E1D5BD39(Any p0) { return invoke <Any>(0xB8E2D655E1D5BD39, p0); }
	static Any _0x7BB810E8B343AC7B(Any p0) { return invoke <Any>(0x7BB810E8B343AC7B, p0); }
	static void SET_PED_MOVE_RATE_OVERRIDE(Ped PedIndex, float DesiredRate) { return invoke <void>(0x85BF80FA50A39D1, PedIndex, DesiredRate); }
	static int GET_PED_NEARBY_VEHICLES(Ped PedIndex, Vehicle* array) { return invoke <int>(0xCFF869CBFA210D82, PedIndex, array); }
	static int GET_PED_NEARBY_PEDS(Ped PedIndex, void* array, int ExclusionPedType, int p3) { return invoke <int>(0x23F8F5FC7E8C4A6B, PedIndex, array, ExclusionPedType, p3); }
	static bool IS_PED_READY_TO_RENDER(Ped ped) { return invoke <bool>(0xA0BC8FAED8CFEB3C, ped); }
	static void _0x6A489892E813951A(Any p0) { return invoke <void>(0x6A489892E813951A, p0); }
	static bool IS_PED_USING_ACTION_MODE(Ped PedIndex) { return invoke <bool>(0xE73468D085F745, PedIndex); }
	static bool _IS_PED_USING_ACTION_MODE_2(Ped ped) { return invoke <bool>(0xEBB208D6AE712C03, ped); }
	static void SET_PED_USING_ACTION_MODE(Ped PedIndex, bool UsingActionMode, int ActionModeTime, const char* ActionModeName) { return invoke <void>(0xD75ACCF5E0FB5367, PedIndex, UsingActionMode, ActionModeTime, ActionModeName); }
	static void SET_PED_CAPSULE(Ped PedIndex, float Radius) { return invoke <void>(0x364DF566EC833DE2, PedIndex, Radius); }
	static Ped _GET_RIDER_OF_MOUNT(Ped mount, bool p1) { return invoke <Ped>(0xB676EFDA03DADA52, mount, p1); }
	static void SPAWNPOINTS_START_SEARCH(float vSearchOriginX, float vSearchOriginY, float vSearchOriginZ, float fSearchRadius, float fMaxDistZ, int iFlags, float fMinimumSpacing, int iMaxSearchDurationMS, float p8) { return invoke <void>(0x2DF9038C90AD5264, vSearchOriginX, vSearchOriginY, vSearchOriginZ, fSearchRadius, fMaxDistZ, iFlags, fMinimumSpacing, iMaxSearchDurationMS, p8); }
	static void SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(float vPoint1X, float vPoint1Y, float vPoint1Z, float vPoint2X, float vPoint2Y, float vPoint2Z, float fWidth, int iFlags, float fMinimumSpacing, int iMaxSearchDurationMS, float p10) { return invoke <void>(0xB2AFF10216DEFA2F, vPoint1X, vPoint1Y, vPoint1Z, vPoint2X, vPoint2Y, vPoint2Z, fWidth, iFlags, fMinimumSpacing, iMaxSearchDurationMS, p10); }
	static void _SPAWNPOINTS_START_SEARCH_WITH_VOLUME(Volume volume, int spawnpointsFlag, float p2, int duration, float p4) { return invoke <void>(0x83ED1FC9DF3411F5, volume, spawnpointsFlag, p2, duration, p4); }
	static void SPAWNPOINTS_CANCEL_SEARCH() { return invoke <void>(0xFEE4A5459472A9F8); }
	static bool SPAWNPOINTS_IS_SEARCH_ACTIVE() { return invoke <bool>(0x3C67506996001F5E); }
	static bool SPAWNPOINTS_IS_SEARCH_COMPLETE() { return invoke <bool>(0xA586FBEB32A53DBB); }
	static bool SPAWNPOINTS_IS_SEARCH_FAILED() { return invoke <bool>(0xF445DE8DA80A1792); }
	static int SPAWNPOINTS_GET_NUM_SEARCH_RESULTS() { return invoke <int>(0xA635C11B8C44AFC2); }
	static void SPAWNPOINTS_GET_SEARCH_RESULT(int iResultIndex, float* fOut_X, float* fOut_Y, float* fOut_Z) { return invoke <void>(0x280C7E3AC7F56E90, iResultIndex, fOut_X, fOut_Y, fOut_Z); }
	static void SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(int iResultIndex, int* iOut_Flags) { return invoke <void>(0xB782F8238512BAD5, iResultIndex, iOut_Flags); }
	static void SET_IK_TARGET(Ped PedIndex, int IKPart, Entity TargetEntityIndex, int TargetBone, float TargetOffsetX, float TargetOffsetY, float TargetOffsetZ, int Flags, int BlendInTimeMS, int BlendOutTimeMS) { return invoke <void>(0xC32779C16FCEECD9, PedIndex, IKPart, TargetEntityIndex, TargetBone, TargetOffsetX, TargetOffsetY, TargetOffsetZ, Flags, BlendInTimeMS, BlendOutTimeMS); }
	static void _REQUEST_PED_EMOTIONAL_PRESET(Ped ped, const char* name) { return invoke <void>(0x5C3C55EAAD19915F, ped, name); }
	static bool _HAS_PED_EMOTIONAL_PRESET_LOADED(Ped ped, const char* name) { return invoke <bool>(0xDE3904B22695D9F9, ped, name); }
	static void _REMOVE_PED_EMOTIONAL_PRESET(Ped ped, const char* name) { return invoke <void>(0xFC3BAB1801A8255A, ped, name); }
	static void _REQUEST_MOTION_TYPE_ASSET(Hash nameHash, Ped ped) { return invoke <void>(0xF7EA250B9A919E03, nameHash, ped); }
	static bool HAS_MOTION_TYPE_ASSET_LOADED(Hash nameHash, Ped ped) { return invoke <bool>(0x854BC9B1A1CCD034, nameHash, ped); }
	static void _REMOVE_MOTION_TYPE_ASSET(Hash nameHash, Ped ped) { return invoke <void>(0xDE7B2B4144906CDF, nameHash, ped); }
	static bool _0x290B2E6CCDE532E1(Ped ped) { return invoke <bool>(0x290B2E6CCDE532E1, ped); }
	static bool _0x0EEF7A81C17679DB(Ped ped) { return invoke <bool>(0xEEF7A81C17679DB, ped); }
	static void SET_PED_LOD_MULTIPLIER(Ped PedIndex, float multiplier) { return invoke <void>(0xDC2C5C242AAC342B, PedIndex, multiplier); }
	static float _GET_PED_LOD_MULTIPLIER(Ped ped) { return invoke <float>(0x1B710E6F4AB69341, ped); }
	static Any _0xA218D2BBCAA7388C(Any p0, Any p1) { return invoke <Any>(0xA218D2BBCAA7388C, p0, p1); }
	static bool IS_ANY_HOSTILE_PED_NEAR_POINT(Ped iPedIndex, float pointX, float pointY, float pointZ, float radius) { return invoke <bool>(0x68772DB2B2526F9F, iPedIndex, pointX, pointY, pointZ, radius); }
	static void _0xCBDE59C48F2B06F5(Any p0, Any p1, Any p2) { return invoke <void>(0xCBDE59C48F2B06F5, p0, p1, p2); }
	static void _0x6A190B94C2541A99(Any p0) { return invoke <void>(0x6A190B94C2541A99, p0); }
	static bool IS_TARGET_PED_IN_PERCEPTION_AREA(Ped PedIndex, Ped TargetPedIndex, float fFocusAngle, float fFocusDistance, float fPeripheralAngle, float fPeripheralDistance) { return invoke <bool>(0x6087579E7AA85A9, PedIndex, TargetPedIndex, fFocusAngle, fFocusDistance, fPeripheralAngle, fPeripheralDistance); }
	static void SET_POP_CONTROL_SPHERE_THIS_FRAME(float centerX, float centerY, float centerZ, float pedRadius, float vehRadius) { return invoke <void>(0xD8C3BE3EE94CAF2D, centerX, centerY, centerZ, pedRadius, vehRadius); }
	static bool IS_PED_HOGTIED(Ped ped) { return invoke <bool>(0x3AA24CCC0D451379, ped); }
	static bool IS_PED_BEING_HOGTIED(Ped ped) { return invoke <bool>(0xD453BB601D4A606E, ped); }
	static Ped _0x3D9F958834AB9C30(Ped ped) { return invoke <Ped>(0x3D9F958834AB9C30, ped); }
	static bool _0x913D04A5176F84C9(Ped ped) { return invoke <bool>(0x913D04A5176F84C9, ped); }
	static bool IS_PED_HOGTYING(Ped ped) { return invoke <bool>(0x42429C674B61238B, ped); }
	static bool _GET_PED_LASSO_HOGTIE_FLAG(Ped ped, int flagId) { return invoke <bool>(0x2C76FA0E01681F8D, ped, flagId); }
	static void SET_PED_LASSO_HOGTIE_FLAG(Ped ped, int flagId, bool value) { return invoke <void>(0xAE6004120C18DF97, ped, flagId, value); }
	static int _0x4642182A298187D0(Ped ped, int p1, void* p2, int p3, int p4) { return invoke <int>(0x4642182A298187D0, ped, p1, p2, p3, p4); }
	static void _0x6B67320E0D57856A(Ped ped, void* p1, int p2, bool p3) { return invoke <void>(0x6B67320E0D57856A, ped, p1, p2, p3); }
	static Entity _GET_FIRST_ENTITY_PED_IS_CARRYING(Ped ped) { return invoke <Entity>(0xD806CD2A4F2C2996, ped); }
	static void _0xAA6C49AE90A32299(Ped ped, Hash p1) { return invoke <void>(0xAA6C49AE90A32299, ped, p1); }
	static Ped _GET_CARRIER_AS_PED(Entity entity) { return invoke <Ped>(0x9B83E68DE004CD4, entity); }
	static Ped _GET_CARRIER_AS_MOUNT(Entity entity) { return invoke <Ped>(0xA033D7E4BBF9844D, entity); }
	static Ped _GET_CARRIER_AS_HUMAN(Entity entity) { return invoke <Ped>(0x79443D56C8DF45EE, entity); }
	static Any GET_CARRIED_ATTACHED_INFO_FOR_SLOT(Any p0, Any p1, Any p2, Any p3) { return invoke <Any>(0x608BC6A6AACD5036, p0, p1, p2, p3); }
	static void DETACH_CARRIABLE_ENTITY(Entity entity, bool p1, bool p2) { return invoke <void>(0xED00D72F81CF7278, entity, p1, p2); }
	static void FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Ped ped, ItemSet itemset) { return invoke <void>(0xB5ACE8B23A438EC0, ped, itemset); }
	static bool IS_PED_CARRYING_SOMETHING(Ped ped) { return invoke <bool>(0xA911EE21EDF69DAF, ped); }
	static bool _0xB65927F861E7AE39(Ped ped, int p1) { return invoke <bool>(0xB65927F861E7AE39, ped, p1); }
	static bool _0xA1FBAC56D38563E2(Volume volume) { return invoke <bool>(0xA1FBAC56D38563E2, volume); }
	static Any _0x6F43C351A5D51E2F(Ped ped, void* p1) { return invoke <Any>(0x6F43C351A5D51E2F, ped, p1); }
	static bool IS_PED_LASSOED(Ped ped) { return invoke <bool>(0x9682F850056C9ADE, ped); }
	static Entity _GET_LASSOER_OF_PED(Ped ped) { return invoke <Entity>(0x833F0053340EF413, ped); }
	static Entity _GET_LASSO_TARGET(Ped ped) { return invoke <Entity>(0xB65A4DAB460A19BD, ped); }
	static Ped _GET_LASSOED_LASSOER(Ped ped) { return invoke <Ped>(0xC31C51168E80365, ped); }
	static void SET_LOOTING_FLAG(Ped ped, int lootFlag, bool enabled) { return invoke <void>(0x6569F31A01B4C097, ped, lootFlag, enabled); }
	static bool _GET_LOOTING_FLAG(Ped ped, int lootFlag) { return invoke <bool>(0xE4C11F104620DDCE, ped, lootFlag); }
	static int _REFRESH_LOOT_STATE_FOR_PED(Ped ped, int p1, Ped* lootTarget, int p3, int p4) { return invoke <int>(0x5463C962BC7777C3, ped, p1, lootTarget, p3, p4); }
	static int GET_PED_LOOT_STATUS_MP(Ped ped) { return invoke <int>(0xC737697C41628340, ped); }
	static Ped _0x4B19F171450E0D4F(Ped ped) { return invoke <Ped>(0x4B19F171450E0D4F, ped); }
	static bool _0x758F081DB204DDDE(Ped ped) { return invoke <bool>(0x758F081DB204DDDE, ped); }
	static Entity GET_LOOTING_PICKUP_TARGET_ENTITY(Ped ped) { return invoke <Entity>(0x14169FA823679E41, ped); }
	static Any _0x7B5C293238EE4F20(Any p0) { return invoke <Any>(0x7B5C293238EE4F20, p0); }
	static void _0xAE6B68A83ABBE7C0(Any p0) { return invoke <void>(0xAE6B68A83ABBE7C0, p0); }
	static bool _0xA4B6432E3880F2F9(Ped ped) { return invoke <bool>(0xA4B6432E3880F2F9, ped); }
	static bool _ADD_PED_SUBSCRIBE_TO_LEGENDARY_BLIPS(Ped ped) { return invoke <bool>(0xE37287EE358939C3, ped); }
	static bool _REMOVE_PED_SUBSCRIBE_TO_LEGENDARY_BLIPS(Ped ped) { return invoke <bool>(0x11A42FD923D41CA, ped); }
	static bool IS_PED_INCAPACITATED(Ped ped) { return invoke <bool>(0xB655DB7582AEC805, ped); }
	static void _SET_PED_INCAPACITATION_MODIFIERS(Ped ped, bool canBeIncapacitated, int threshold, int bleedoutTime, int p4) { return invoke <void>(0x39ED303390DDEAC7, ped, canBeIncapacitated, threshold, bleedoutTime, p4); }
	static bool _GET_PED_CAN_BE_INCAPACITATED_THIS_FRAME(Ped ped) { return invoke <bool>(0x7A4E00364B5D727B, ped); }
	static void SET_PED_CAN_BE_INCAPACITATED(Ped ped, bool toggle) { return invoke <void>(0x5240864E847C691C, ped, toggle); }
	static int _GET_PED_INCAPACITATION_HEALTH(Ped ped) { return invoke <int>(0x89BFDF6D53145545, ped); }
	static void _SET_PED_INCAPACITATION_TOTAL_BLEED_OUT_DURATION(Ped ped, float duration) { return invoke <void>(0x2890418B39BC8FFF, ped, duration); }
	static void _RESET_PED_INCAPACITATION_BLEED_OUT_DURATION(Ped ped) { return invoke <void>(0x4B9668DB91DC39B8, ped); }
	static void _SET_PED_INCAPACITATION_FLAGS(Ped ped, int flags) { return invoke <void>(0xD67B6F3BCF81BA47, ped, flags); }
	static void _0x92A1B55A59720395(Any p0, Any p1) { return invoke <void>(0x92A1B55A59720395, p0, p1); }
	static void _INCAPACITATED_REVIVE(Ped ped, Ped ped2) { return invoke <void>(0xF6262491C7704A63, ped, ped2); }
	static int _GET_INCAPACITATION_TIME_REMAINING(Ped ped) { return invoke <int>(0x88D9D76D78065487, ped); }
	static void _SET_PED_KNOCKED_BY_ONE_HIT(Ped ped, float p1) { return invoke <void>(0x5BCF0B79D4F5DBA3, ped, p1); }
	static void _0x2E5B5D1F1453E08E(Ped ped, int p1) { return invoke <void>(0x2E5B5D1F1453E08E, ped, p1); }
	static void _0x29924EB8EE9DB926(Ped ped, float p1) { return invoke <void>(0x29924EB8EE9DB926, ped, p1); }
	static void _SET_PED_ACTIVE_PLAYER_TYPE(Ped ped, Hash playerType) { return invoke <void>(0xB285AD0EC870B2DF, ped, playerType); }
	static Any _0xCB86D3E3E3708901(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <Any>(0xCB86D3E3E3708901, p0, p1, p2, p3, p4); }
	static void _0x633F83B301C87994(Any p0, Any p1) { return invoke <void>(0x633F83B301C87994, p0, p1); }
	static bool _0x5203038FF8BAE577(Ped ped, int p1, int p2) { return invoke <bool>(0x5203038FF8BAE577, ped, p1, p2); }
	static bool _0x7F090958AE95B61B(Ped ped, int p1) { return invoke <bool>(0x7F090958AE95B61B, ped, p1); }
	static void _0xC494C76A34266E82(Ped ped, int p1) { return invoke <void>(0xC494C76A34266E82, ped, p1); }
	static bool _0xC3995D396F1D97B6(Ped ped, int p1, int p2) { return invoke <bool>(0xC3995D396F1D97B6, ped, p1, p2); }
	static void _0x15F4732C357B1D6D(Any p0, Any p1, Any p2) { return invoke <void>(0x15F4732C357B1D6D, p0, p1, p2); }
	static bool _0x947E43F544B6AB34(Ped ped, Player player, int flag, int ms) { return invoke <bool>(0x947E43F544B6AB34, ped, player, flag, ms); }
	static Any _0x32417CB860A3BDC4(Any p0, Any p1) { return invoke <Any>(0x32417CB860A3BDC4, p0, p1); }
	static void _0xE737D5F14304A2EC(Ped ped, Player player, int p2) { return invoke <void>(0xE737D5F14304A2EC, ped, player, p2); }
	static void _0xEBD49472BCCF7642(Any p0, Any p1) { return invoke <void>(0xEBD49472BCCF7642, p0, p1); }
	static void _SET_PLAYER_GREET_DISABLED_FOR_PED(Ped ped, Player player, int duration) { return invoke <void>(0x19173C3F15367B54, ped, player, duration); }
	static void _SET_PLAYER_ANTAGONIZE_DISABLED_FOR_PED(Ped ped, Player player, int duration) { return invoke <void>(0x5708EDD71B50C008, ped, player, duration); }
	static void _0xB9BDFAE609DFB7C5(Any p0, Any p1, Any p2) { return invoke <void>(0xB9BDFAE609DFB7C5, p0, p1, p2); }
	static Any _0xF7327ACC7A89AEF1(Any p0, Any p1, Any p2) { return invoke <Any>(0xF7327ACC7A89AEF1, p0, p1, p2); }
	static int _GET_PED_ATTITUDE(Ped ped, Player player) { return invoke <int>(0x7CC2186C32D3540A, ped, player); }
	static bool _0x1E017404784AA6A3(Ped ped, Hash p1) { return invoke <bool>(0x1E017404784AA6A3, ped, p1); }
	static void _0x2B4CE170DE09F346(Ped ped, Hash p1) { return invoke <void>(0x2B4CE170DE09F346, ped, p1); }
	static Any _0x7C8AA850617651D9(Any p0, Any p1) { return invoke <Any>(0x7C8AA850617651D9, p0, p1); }
	static float _GET_PED_MOTIVATION(Ped ped, int motivationState, Ped targetPed) { return invoke <float>(0x42688E94E96FD9B4, ped, motivationState, targetPed); }
	static void _SET_PED_MOTIVATION(Ped ped, int motivationState, float threshold, Ped targetPed) { return invoke <void>(0x6D26A96CA1BCA75, ped, motivationState, threshold, targetPed); }
	static void _0x23BDE06596A22CEC(Ped ped, int p1, float p2, Any p3) { return invoke <void>(0x23BDE06596A22CEC, ped, p1, p2, p3); }
	static void _0xCDFB8C04D4C95D9B(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xCDFB8C04D4C95D9B, p0, p1, p2, p3); }
	static bool _GET_IS_PED_MOTIVATION_STATE_ENABLED(Ped ped, int motivationState) { return invoke <bool>(0x33FA048675821DA7, ped, motivationState); }
	static void _SET_PED_MOTIVATION_STATE_OVERRIDE(Ped ped, int motivationState, bool enabled) { return invoke <void>(0x2EB75FB86C41F026, ped, motivationState, enabled); }
	static void _SET_PED_MOTIVATION_MODIFIER(Ped ped, int motivationState, float modifier) { return invoke <void>(0xA1EB5D029E0191D3, ped, motivationState, modifier); }
	static void _0xFD8E853F0BC2E942(Any p0, Any p1) { return invoke <void>(0xFD8E853F0BC2E942, p0, p1); }
	static void _SET_PED_SCENT(Ped ped, float scent) { return invoke <void>(0x1B21B81865E2A1F, ped, scent); }
	static void _SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Ped ped, float p1) { return invoke <void>(0x5CE6AF4DF071D23, ped, p1); }
	static void _RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Ped ped) { return invoke <void>(0x801917E7D7BCE418, ped); }
	static void _0xC6C4E15CF7D52FEA(Any p0, Any p1) { return invoke <void>(0xC6C4E15CF7D52FEA, p0, p1); }
	static void _SET_PED_VOICE_VOLUME(Ped ped, float volume) { return invoke <void>(0xD05AD61F242C626B, ped, volume); }
	static void _0x0F967019CC853BCC(Any p0, Any p1) { return invoke <void>(0xF967019CC853BCC, p0, p1); }
	static bool _IS_PED_DRAGGING(Ped ped) { return invoke <bool>(0x226CF9B159E38F42, ped); }
	static bool IS_PED_BEING_DRAGGED(Ped ped) { return invoke <bool>(0xEF3A8772F085B4AA, ped); }
	static void _0x070A3841406C43D5(Any p0, Any p1) { return invoke <void>(0x70A3841406C43D5, p0, p1); }
	static bool _ADD_PED_STAY_OUT_VOLUME(Ped ped, Volume volume) { return invoke <bool>(0xE9B168527B337BF0, ped, volume); }
	static bool _REMOVE_PED_STAY_OUT_VOLUME(Ped ped, Volume volume) { return invoke <bool>(0xCAB404CD2DB41F5, ped, volume); }
	static void _0x9E66708B2B41F14A(Any p0, Any p1) { return invoke <void>(0x9E66708B2B41F14A, p0, p1); }
	static void _0xF634E2892220EF34(Ped ped, Any p1) { return invoke <void>(0xF634E2892220EF34, ped, p1); }
	static void _0xAAC0EE3B4999ABB5(Ped ped, Ped targetPed) { return invoke <void>(0xAAC0EE3B4999ABB5, ped, targetPed); }
	static Entity GET_PED_MOTION_FOCUS_ENTITY(Ped ped) { return invoke <Entity>(0x243E1B4607040057, ped); }
	static void _SET_CHAR_EXPRESSION(Ped ped, int index, float value) { return invoke <void>(0x5653AB26C82938CF, ped, index, value); }
	static float _GET_CHAR_EXPRESSION(Ped ped, int index) { return invoke <float>(0xFD1BA1EEF7985BB8, ped, index); }
	static void _0x5BB04BC74A474B47(Any p0, Any p1) { return invoke <void>(0x5BB04BC74A474B47, p0, p1); }
	static void _0x9078FB0557364099(Any p0) { return invoke <void>(0x9078FB0557364099, p0); }
	static bool IS_PED_FALLING_OVER(Ped ped) { return invoke <bool>(0x3E592D0486DEC0F6, ped); }
	static bool _HAS_PED_BEEN_SHOVED_RECENTLY(Ped ped, int ms) { return invoke <bool>(0x29FCE825613FEFCA, ped, ms); }
	static Ped _GET_PED_TRANQUILIZER(Ped ped) { return invoke <Ped>(0x65C75FDCCAC86464, ped); }
	static void _0x0D497AA69059FE40(Any p0, Any p1) { return invoke <void>(0xD497AA69059FE40, p0, p1); }
	static void _0xD7D2F45C56A4F4DF(Any p0, Any p1, Any p2) { return invoke <void>(0xD7D2F45C56A4F4DF, p0, p1, p2); }
	static void _SET_PED_CULL_RANGE(Ped ped, float p1, float p2) { return invoke <void>(0x8AC1D721B2097B6E, ped, p1, p2); }
	static void _0x1D23D3F70606D788(Any p0, Any p1) { return invoke <void>(0x1D23D3F70606D788, p0, p1); }
	static int _GET_META_PED_TYPE(Ped ped) { return invoke <int>(0xEC9A1261BF0CE510, ped); }
	static bool _IS_META_PED_USING_COMPONENT(Ped ped, Hash component) { return invoke <bool>(0xFB4891BD7578CDC1, ped, component); }
	static bool _0xBD0E4F52F6D95242(Ped ped) { return invoke <bool>(0xBD0E4F52F6D95242, ped); }
	static bool _IS_PED_CHILD(Ped ped) { return invoke <bool>(0x137772000DAF42C5, ped); }
	static void _0xFFA1594703ED27CA(Ped ped, int p1) { return invoke <void>(0xFFA1594703ED27CA, ped, p1); }
	static void _SET_META_PED_TAG(Ped ped, Hash drawable, Hash albedo, Hash normal, Hash material, Hash palette, int tint0, int tint1, int tint2) { return invoke <void>(0xBC6DF00D7A4A6819, ped, drawable, albedo, normal, material, palette, tint0, tint1, tint2); }
	static void REMOVE_TAG_FROM_META_PED(Ped ped, Hash component, int p2) { return invoke <void>(0xD710A5007C2AC539, ped, component, p2); }
	static void _0xA2B8E47442C76CEC(Any p0, Any p1) { return invoke <void>(0xA2B8E47442C76CEC, p0, p1); }
	static int _GET_NUM_COMPONENT_CATEGORIES_IN_PED(Ped ped) { return invoke <int>(0xA622E66EEE92A08D, ped); }
	static Hash _GET_PED_COMPONENT_CATEGORY_BY_INDEX(Ped ped, int index) { return invoke <Hash>(0xCCB97B51893C662F, ped, index); }
	static int _GET_NUM_COMPONENTS_IN_PED(Ped ped) { return invoke <int>(0x90403E8107B60E81, ped); }
	static Any _0x9B90842304C938A7(Any p0, Any p1, Any p2) { return invoke <Any>(0x9B90842304C938A7, p0, p1, p2); }
	static void _UPDATE_PED_VARIATION(Ped ped, bool p1, bool p2, bool p3, bool p4, bool p5) { return invoke <void>(0xCC8CA3E88256E58F, ped, p1, p2, p3, p4, p5); }
	static void _0xCB1A3864C524F784(Any p0, Any p1) { return invoke <void>(0xCB1A3864C524F784, p0, p1); }
	static void _0xFA0D206B489A6846(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0xFA0D206B489A6846, p0, p1, p2, p3, p4); }
	static Any _0xA4AC05B1A364EBC5(Any p0, Any p1, Any p2) { return invoke <Any>(0xA4AC05B1A364EBC5, p0, p1, p2); }
	static void _0x1298B3D8E4C2409F(Any p0) { return invoke <void>(0x1298B3D8E4C2409F, p0); }
	static Any _0xA274F51EF7E34B95(Any p0, Any p1) { return invoke <Any>(0xA274F51EF7E34B95, p0, p1); }
	static Any _0xC2EF407645BEECDC(Any p0) { return invoke <Any>(0xC2EF407645BEECDC, p0); }
	static void _EQUIP_META_PED_OUTFIT(Ped ped, Hash hash) { return invoke <void>(0x1902C4CFCC5BE57C, ped, hash); }
	static void _0xFA742B82D093D848(Any p0, Any p1, Any p2) { return invoke <void>(0xFA742B82D093D848, p0, p1, p2); }
	static Hash _GET_PED_META_OUTFIT_HASH(Ped ped) { return invoke <Hash>(0x30569F348D126A5A, ped); }
	static void _0xA2F8B3B5FEDFC100(Any p0, Any p1) { return invoke <void>(0xA2F8B3B5FEDFC100, p0, p1); }
	static void _EQUIP_META_PED_SUBOUTFIT(Ped ped, Hash suboutfit, int p2) { return invoke <void>(0x66FF395445A88A6E, ped, suboutfit, p2); }
	static bool _DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(Hash outfit, Hash model) { return invoke <bool>(0xC0E880B7A441164D, outfit, model); }
	static bool _DOES_META_PED_SUBOUTFIT_EXIST_FOR_PED_MODEL(Hash outfit, Hash suboutfit, Hash model) { return invoke <bool>(0x4FF3C2B4E6A196C1, outfit, suboutfit, model); }
	static Any _0x62FDF4E678E40CC6(Entity entity, Any p1) { return invoke <Any>(0x62FDF4E678E40CC6, entity, p1); }
	static void _RESET_PED_COMPONENTS(Ped ped) { return invoke <void>(0xBFA1BD465CDFEFD, ped); }
	static void _0x370A973252741AC4(Ped ped, bool p1) { return invoke <void>(0x370A973252741AC4, ped, p1); }
	static void _SET_RANDOM_OUTFIT_VARIATION(Ped ped, bool p1) { return invoke <void>(0x283978A15512B2FE, ped, p1); }
	static int GET_NUM_META_PED_OUTFITS(Ped ped) { return invoke <int>(0x10C70A515BC03707, ped); }
	static void _EQUIP_META_PED_OUTFIT_PRESET(Ped ped, int presetId, bool p2) { return invoke <void>(0x77FF8D35EEC6BBC4, ped, presetId, p2); }
	static void _EQUIP_META_PED_OUTFIT_EXTRA(Ped ped, int component, Any p2, Any p3) { return invoke <void>(0xA5BAE410B03E7371, ped, component, p2, p3); }
	static bool _IS_META_PED_OUTFIT_EQUIPPED(Ped ped, Hash outfit) { return invoke <bool>(0x98082246107A6ACF, ped, outfit); }
	static void _0x851966E1E35AF491(Any p0, Any p1) { return invoke <void>(0x851966E1E35AF491, p0, p1); }
	static void _SET_TEXTURE_OUTFIT_TINTS(Ped ped, Hash componentCategory, Hash palette, int tint0, int tint1, int tint2) { return invoke <void>(0x4EFC1F8FF1AD94DE, ped, componentCategory, palette, tint0, tint1, tint2); }
	static int _REQUEST_META_PED(Hash model, int p1) { return invoke <int>(0xF97C34C33487D569, model, p1); }
	static bool _HAS_META_PED_REQUEST_LOADED(int requestId) { return invoke <bool>(0xC0940AC858C1E126, requestId); }
	static bool _IS_META_PED_REQUEST_VALID(int requestId) { return invoke <bool>(0x43E4DA469541A9C9, requestId); }
	static Ped _CREATE_META_PED(int requestId, float x, float y, float z, float heading, bool p5, bool p6, bool p7, bool p8, bool p9) { return invoke <Ped>(0xBCD4091C8EABA42, requestId, x, y, z, heading, p5, p6, p7, p8, p9); }
	static void _RELEASE_META_PED_REQUEST(int requestId) { return invoke <void>(0x3972F78A78B5D9DF, requestId); }
	static int _REQUEST_META_PED_OUTFIT(Hash model, Hash outfit) { return invoke <int>(0x13154A76CE0CF9AB, model, outfit); }
	static Any _0x27E8A84C12B0B7D1(Any p0, Any p1, Any p2) { return invoke <Any>(0x27E8A84C12B0B7D1, p0, p1, p2); }
	static Any _0x273915CE30780986(Any p0, Any p1) { return invoke <Any>(0x273915CE30780986, p0, p1); }
	static void _RELEASE_META_PED_OUTFIT_REQUEST(int requestId) { return invoke <void>(0x4592B8B9B0EF5F48, requestId); }
	static int _0x3FCBB5FCFD968698(Hash drawable, Hash albedo, Hash normal, Hash material, Any p4) { return invoke <int>(0x3FCBB5FCFD968698, drawable, albedo, normal, material, p4); }
	static int _REQUEST_META_PED_ASSET_BUNDLE(Hash asset, int p1) { return invoke <int>(0x91FE941F9FCFB702, asset, p1); }
	static Any _REQUEST_META_PED_COMPONENT(int metaPedType, Any p1, int p2, int p3, int p4) { return invoke <Any>(0xF6D9E1F3560CBF8E, metaPedType, p1, p2, p3, p4); }
	static void _RELEASE_META_PED_ASSET_REQUEST(int requestId) { return invoke <void>(0x13E7320C762F0477, requestId); }
	static bool _HAS_META_PED_ASSET_LOADED(int requestId) { return invoke <bool>(0xB0B2C6D170B0E8E5, requestId); }
	static bool _IS_META_PED_ASSET_VALID(int requestId) { return invoke <bool>(0x93FFD92F05EC32FD, requestId); }
	static Entity _CREATE_META_PED_ASSET(Hash asset, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, bool p7, bool p8, bool p9) { return invoke <Entity>(0x9641A9A20310F6B8, asset, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9); }
	static bool _HAS_META_PED_OUTFIT_LOADED(int requestId) { return invoke <bool>(0x610438375E5D1801, requestId); }
	static bool _IS_META_PED_OUTFIT_REQUEST_VALID(int requestId) { return invoke <bool>(0xB25E57FC8E37114D, requestId); }
	static Ped _CREATE_META_PED_OUTFIT_PED(int requestId, float x, float y, float z, float heading, bool p5, bool p6, bool p7, bool p8) { return invoke <Ped>(0xEAF682A14F8E5F53, requestId, x, y, z, heading, p5, p6, p7, p8); }
	static bool _APPLY_PED_META_PED_OUTFIT(int requestId, Ped ped, bool p2, bool p3) { return invoke <bool>(0x74F512E29CB717E2, requestId, ped, p2, p3); }
	static void _SET_META_PED_WEARINESS(Ped ped, float weariness) { return invoke <void>(0x314C5465195F3B30, ped, weariness); }
	static void _0xF47D54B986F0A346(Ped ped, int danceIntensity) { return invoke <void>(0xF47D54B986F0A346, ped, danceIntensity); }
	static void _0x3EFED081B4834BA1(Any p0) { return invoke <void>(0x3EFED081B4834BA1, p0); }
	static void _0x0FB1BA7FF73B41E1(Any p0, Any p1, Any p2) { return invoke <void>(0xFB1BA7FF73B41E1, p0, p1, p2); }
	static Any _0xB292203008EBBAAC(Any p0) { return invoke <Any>(0xB292203008EBBAAC, p0); }
	static bool _0xD4D403EA031F351C(Ped ped) { return invoke <bool>(0xD4D403EA031F351C, ped); }
	static int _GET_PELT_FROM_HORSE(Ped horse, int index) { return invoke <int>(0xCEEB6F4780B1F2F, horse, index); }
	static void _SET_PELT_FOR_HORSE(Ped horse, int peltId) { return invoke <void>(0xA73F50E8796150D5, horse, peltId); }
	static void _0xC412AA1C73111FE0(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0xC412AA1C73111FE0, p0, p1, p2, p3, p4); }
	static void _CLEAR_PELT_FROM_HORSE(Ped horse, int peltId) { return invoke <void>(0x627F7F3A0C4C51FF, horse, peltId); }
	static void _SET_PED_LIGHTS(Ped ped, bool toggle) { return invoke <void>(0x13A210949FCBD92B, ped, toggle); }
	static void _0xD049FDAF089FDDB0(Ped ped, Hash p1, float p2) { return invoke <void>(0xD049FDAF089FDDB0, ped, p1, p2); }
	static void _0xDD9540E7B1C9714F(Ped ped, Hash p1, float r, float g, float b) { return invoke <void>(0xDD9540E7B1C9714F, ped, p1, r, g, b); }
	static void _0x55546004A244302A(Any p0, Any p1) { return invoke <void>(0x55546004A244302A, p0, p1); }
	static void _SET_HEALTH_RECHARGE_MULTIPLIER(Ped ped, int multiplier) { return invoke <void>(0xDE1B1907A83A1550, ped, multiplier); }
	static float _GET_HEALTH_RECHARGE_MULTIPLIER(Ped ped) { return invoke <float>(0x95B8E397B8F4360F, ped); }
	static void _SET_STAMINA_DEPLETION_MULTIPLIER(Ped ped, int multiplier) { return invoke <void>(0xEF5A3D2285D8924B, ped, multiplier); }
	static float _GET_STAMINA_DEPLETION_MULTIPLIER(Ped ped) { return invoke <float>(0x825F6DD559A0895B, ped); }
	static void _SET_STAMINA_RECHARGE_MULTIPLIER(Ped ped, int multiplier) { return invoke <void>(0x345C9F993A8AB4A4, ped, multiplier); }
	static float _GET_STAMINA_RECHARGE_MULTIPLIER(Ped ped) { return invoke <float>(0xE7687EB2F634ABF0, ped); }
	static bool _CHANGE_PED_STAMINA(Ped ped, float amount) { return invoke <bool>(0xC3D4B754C0E86B9E, ped, amount); }
	static float _GET_PED_STAMINA(Ped ped) { return invoke <float>(0x775A1CA7893AA8B5, ped); }
	static float _GET_PED_STAMINA_NORMALIZED(Ped ped) { return invoke <float>(0x22F2A386D43048A9, ped); }
	static float _GET_PED_MAX_STAMINA(Ped ped) { return invoke <float>(0xCB42AFE2B613EE55, ped); }
	static void _0x36513AFFC703C60D(Any p0) { return invoke <void>(0x36513AFFC703C60D, p0); }
	static void _RESTORE_PED_STAMINA(Ped ped, float stamina) { return invoke <void>(0x675680D089BFA21F, ped, stamina); }
	static int _0xFC3B580C4380B5B7(Ped ped) { return invoke <int>(0xFC3B580C4380B5B7, ped); }
	static void _0xEA8763E505AFD49A(Any p0, Any p1, Any p2) { return invoke <void>(0xEA8763E505AFD49A, p0, p1, p2); }
	static void _0xE4EF4382E22C780C(Any p0) { return invoke <void>(0xE4EF4382E22C780C, p0); }
	static void _0xD61FCF9FCFD515B7(Any p0, Any p1, Any p2) { return invoke <void>(0xD61FCF9FCFD515B7, p0, p1, p2); }
	static void _0x8D9DB115FBA8E23D(Any p0) { return invoke <void>(0x8D9DB115FBA8E23D, p0); }
	static Any _GET_NUM_RESERVED_HEALTH(Ped ped) { return invoke <Any>(0x16F2C8C084AB2092, ped); }
	static Any _0xD97BC27AC039F681(Any p0, Any p1, Any p2, Any p3) { return invoke <Any>(0xD97BC27AC039F681, p0, p1, p2, p3); }
	static Any _0xF6A8C4B4A11AE89C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <Any>(0xF6A8C4B4A11AE89C, p0, p1, p2, p3, p4, p5); }
	static void _0xE4C95E0AE31C6512(Ped ped, Any p1) { return invoke <void>(0xE4C95E0AE31C6512, ped, p1); }
	static Object _GET_PED_LAST_DROPPED_HAT(Ped ped) { return invoke <Object>(0x1F714E7A9DADFC42, ped); }
	static void _0x5D4CD22A8C82A81A(Ped ped, bool p1) { return invoke <void>(0x5D4CD22A8C82A81A, ped, p1); }
	static void _0xBF567DF2BEF211A6(Any p0, Any p1) { return invoke <void>(0xBF567DF2BEF211A6, p0, p1); }
	static int _CREATE_GRAVITY_WELL(float xPos, float yPos, float zPos, float heading, float radius, float p5, float p6, float p7, bool stopAtDestination) { return invoke <int>(0x4F5EBE70081E5A20, xPos, yPos, zPos, heading, radius, p5, p6, p7, stopAtDestination); }
	static void _REMOVE_GRAVITY_WELL(int handle) { return invoke <void>(0x87247BC60B60BED8, handle); }
	static bool _IS_PED_INTIMIDATED(Ped ped) { return invoke <bool>(0x57779B55B83E2BEA, ped); }
	static bool _0x7EE3A8660F38797E(Ped ped) { return invoke <bool>(0x7EE3A8660F38797E, ped); }
	static Any _0xA180FBD502A03125(Any p0, Any p1, Any p2) { return invoke <Any>(0xA180FBD502A03125, p0, p1, p2); }
	static int _REQUEST_TEXTURE(Hash albedoHash, Hash normalHash, Hash materialHash) { return invoke <int>(0xC5E7204F322E49EB, albedoHash, normalHash, materialHash); }
	static void _APPLY_TEXTURE_ON_PED(Ped ped, Hash componentHash, int textureId) { return invoke <void>(0xB46E25761519058, ped, componentHash, textureId); }
	static void _RELEASE_TEXTURE(int textureId) { return invoke <void>(0x6BEFAA907B076859, textureId); }
	static void _UPDATE_PED_TEXTURE(int textureId) { return invoke <void>(0x92DAABA2C1C10B0E, textureId); }
	static void _RESET_PED_TEXTURE(int textureId) { return invoke <void>(0x8472A1789478F82F, textureId); }
	static bool _IS_TEXTURE_VALID(int textureId) { return invoke <bool>(0x31DC8D3F216D8509, textureId); }
	static int _ADD_TEXTURE_LAYER(int textureId, Hash albedoHash, Hash normalHash, Hash materialHash, int blendType, float texAlpha, int sheetGridIndex) { return invoke <int>(0x86BB5FF45F193A02, textureId, albedoHash, normalHash, materialHash, blendType, texAlpha, sheetGridIndex); }
	static void _REMOVE_PED_OVERLAY(int textureId, int overlayId) { return invoke <void>(0x96C349DE04C49011, textureId, overlayId); }
	static void _SET_TEXTURE_LAYER_SHEET_GRID_INDEX(int textureId, int layerId, int sheetGridIndex) { return invoke <void>(0x3329AAE2882FC8E4, textureId, layerId, sheetGridIndex); }
	static void _SET_TEXTURE_LAYER_ALPHA(int textureId, int layerId, float texAlpha) { return invoke <void>(0x6C76BC24F8BB709A, textureId, layerId, texAlpha); }
	static void _SET_TEXTURE_LAYER_ROUGHNESS(int textureId, int layerId, float texRough) { return invoke <void>(0x57C4F092E2298BE, textureId, layerId, texRough); }
	static void _SET_TEXTURE_LAYER_PALLETE(int textureId, int layerId, Hash paletteHash) { return invoke <void>(0x1ED8588524AC9BE1, textureId, layerId, paletteHash); }
	static void _SET_TEXTURE_LAYER_TINT(int textureId, int layerId, int tint0, int tint1, int tint2) { return invoke <void>(0x2DF59FFE6FFD6044, textureId, layerId, tint0, tint1, tint2); }
	static void _SET_TEXTURE_LAYER_MOD(int textureId, int layerId, Hash modTextureHash, float modAlpha, int modChannel) { return invoke <void>(0xF2EA041F1146D75B, textureId, layerId, modTextureHash, modAlpha, modChannel); }
	static void _SET_TEXTURE_LAYER_TEXTURE_MAP(int textureId, int layerId, Hash albedoHash, Hash normalHash, Hash materialHash) { return invoke <void>(0x253A63B5BADBC398, textureId, layerId, albedoHash, normalHash, materialHash); }
	static void _CLEAR_PED_TEXTURE(int textureId) { return invoke <void>(0xB63B9178D0F58D82, textureId); }
	static void _0xC991EF46FE323867(Ped ped, Any p1) { return invoke <void>(0xC991EF46FE323867, ped, p1); }
	static void _0x1F8215D0E446F593(Any p0, Any p1, Any p2) { return invoke <void>(0x1F8215D0E446F593, p0, p1, p2); }
	static bool IS_LOCATION_SPAWN_SAFE(Ped ped, float p1) { return invoke <bool>(0xFB1E7998B8595825, ped, p1); }
	static void _0x53BA7D96B9A421D9(Any p0, Any p1) { return invoke <void>(0x53BA7D96B9A421D9, p0, p1); }
	static void _0x96C7B659854DE629(Any p0, Any p1) { return invoke <void>(0x96C7B659854DE629, p0, p1); }
	static void SET_HORSE_AVOIDANCE_LEVEL(Ped horse, int avoidanceLevel) { return invoke <void>(0xDDCF6FEA5D7ACC17, horse, avoidanceLevel); }
	static void RESET_HORSE_AVOIDANCE_LEVEL_TO_DEFAULT(Ped horse) { return invoke <void>(0x2A5AFD2B8381A6E1, horse); }
	static Any _SET_PED_USE_HORSE_MAP_COLLISION(Ped ped, bool toggle) { return invoke <Any>(0xEB72453B6F5B45B0, ped, toggle); }
	static void _0x5B73975B4F12F7F3(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x5B73975B4F12F7F3, p0, p1, p2, p3, p4); }
	static bool GET_META_PED_ASSET_GUIDS(Ped ped, int index, Hash* drawable, Hash* albedo, Hash* normal, Hash* material) { return invoke <bool>(0xA9C28516A6DC9D56, ped, index, drawable, albedo, normal, material); }
	static bool GET_META_PED_ASSET_TINT(Ped ped, int index, Hash* pallete, int* tint0, int* tint1, int* tint2) { return invoke <bool>(0xE7998FEC53A33BBE, ped, index, pallete, tint0, tint1, tint2); }
	static void _SET_PED_BLACKBOARD_INT(Ped ped, const char* variableName, int value, int removeTimer) { return invoke <void>(0x5F53010C4C3F6BAF, ped, variableName, value, removeTimer); }
	static void _SET_PED_BLACKBOARD_BOOL(Ped ped, const char* variableName, bool value, int removeTimer) { return invoke <void>(0xCB9401F918CB0F75, ped, variableName, value, removeTimer); }
	static void _SET_PED_BLACKBOARD_FLOAT(Ped ped, const char* variableName, float value, int removeTimer) { return invoke <void>(0x437C08DB4FEBE2BD, ped, variableName, value, removeTimer); }
	static void _SET_PED_BLACKBOARD_HASH(Ped ped, const char* variableName, const char* value, int removeTimer) { return invoke <void>(0xA762C9D6CF165E0D, ped, variableName, value, removeTimer); }
	static void _REMOVE_PED_BLACKBOARD_INT(Ped ped, const char* variableName) { return invoke <void>(0x81B75428A7813E67, ped, variableName); }
	static void _REMOVE_PED_BLACKBOARD_BOOL(Ped ped, const char* variableName) { return invoke <void>(0xA6F67BEC53379A32, ped, variableName); }
	static void _REMOVE_PED_BLACKBOARD_FLOAT(Ped ped, const char* variableName) { return invoke <void>(0x411189E51B8020BA, ped, variableName); }
	static void _REMOVE_PED_BLACKBOARD_HASH(Ped ped, const char* variableName) { return invoke <void>(0xE17378642156790, ped, variableName); }
	static bool _GET_PED_BLACKBOARD_BOOL(Ped ped, const char* variableName) { return invoke <bool>(0x498F2E77982D6945, ped, variableName); }
	static float _GET_PED_BLACKBOARD_FLOAT(Ped ped, const char* variableName) { return invoke <float>(0x56E58D4D118FB45E, ped, variableName); }
	static Hash _GET_PED_BLACKBOARD_HASH(Ped ped, const char* variableName) { return invoke <Hash>(0xBF5E791BBBF90A3C, ped, variableName); }
	static int GET_PED_BLACKBOARD_SCRIPT_INT(Ped ped, const char* variableName) { return invoke <int>(0xB71B91B398F8F067, ped, variableName); }
	static bool GET_PED_BLACKBOARD_SCRIPT_BOOL(Ped ped, const char* variableName) { return invoke <bool>(0x4912DFE492DB98CD, ped, variableName); }
	static float GET_PED_BLACKBOARD_SCRIPT_FLOAT(Ped ped, const char* variableName) { return invoke <float>(0xA29FD00D45311EB7, ped, variableName); }
	static void _SET_TANK_ATTRIBUTE_SIZE(Ped ped, int attributeIndex, float size) { return invoke <void>(0x7FF72DE061DF55E2, ped, attributeIndex, size); }
	static Any _0xA31D350D66FA1855(Any p0) { return invoke <Any>(0xA31D350D66FA1855, p0); }
	static bool _IS_USING_SLIPSTREAM(Ped ped) { return invoke <bool>(0xAF61B3CD8C3B82C3, ped); }
	static void _0xEEDC9B29314B2733(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke <void>(0xEEDC9B29314B2733, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _0x5C90E20C25E6D83C(Any p0) { return invoke <void>(0x5C90E20C25E6D83C, p0); }
	static void _0x10F96086123B939F(Ped legendaryPed, Ped preyPed, float p2) { return invoke <void>(0x10F96086123B939F, legendaryPed, preyPed, p2); }
	static void _0x3FDBB99EFD8CE4AF(Any p0, Any p1, Any p2) { return invoke <void>(0x3FDBB99EFD8CE4AF, p0, p1, p2); }
	static void _0x7E8F9949B7AABBF0(Any p0, Any p1, Any p2) { return invoke <void>(0x7E8F9949B7AABBF0, p0, p1, p2); }
	static Any _0x5DA36CCCB63C0895(Any p0, Any p1, Any p2) { return invoke <Any>(0x5DA36CCCB63C0895, p0, p1, p2); }
	static void _0x56076667E7C2DCD6(Any p0, Any p1) { return invoke <void>(0x56076667E7C2DCD6, p0, p1); }
	static void _APPLY_SHOP_ITEM_TO_PED(Ped ped, Hash componentHash, bool immediately, bool isMp, bool p4) { return invoke <void>(0xD3A7B003ED343FD9, ped, componentHash, immediately, isMp, p4); }
	static void _REMOVE_SHOP_ITEM_FROM_PED(Ped ped, Hash componentHash, int p2, bool p3) { return invoke <void>(0xD7FFA1B2F69ED82, ped, componentHash, p2, p3); }
	static void REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Ped ped, Hash componentCategory, int p2, bool p3) { return invoke <void>(0xDF631E4BCE1B1FC4, ped, componentCategory, p2, p3); }
	static void _UPDATE_SHOP_ITEM_WEARABLE_STATE(Ped ped, Hash componentHash, Hash wearableState, int p3, bool p4, int p5) { return invoke <void>(0x66B957AAC2EAAEAB, ped, componentHash, wearableState, p3, p4, p5); }
	static Hash _GET_SHOP_ITEM_COMPONENT_AT_INDEX(Ped ped, int index, bool p2, void* argStruct, void* argStruct2) { return invoke <Hash>(0x77BA37622E22023B, ped, index, p2, argStruct, argStruct2); }
	static int _GET_SHOP_ITEM_NUM_WEARABLE_STATES(Hash componentHash, bool isMpFemale, bool p2) { return invoke <int>(0xFFCC2DB2D9953401, componentHash, isMpFemale, p2); }
	static Hash _GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(Hash componentHash, int wearableStateIndex, bool isMpFemale, bool p3) { return invoke <Hash>(0x6243635AF2F1B826, componentHash, wearableStateIndex, isMpFemale, p3); }
	static Hash _GET_SHOP_ITEM_COMPONENT_CATEGORY(Hash componentHash, int metapedType, bool isMP) { return invoke <Hash>(0x5FF9A878C3D115B8, componentHash, metapedType, isMP); }
	static Any _0x31B2E7F2E3C58B89(Any p0, Any p1, Any p2, Any p3) { return invoke <Any>(0x31B2E7F2E3C58B89, p0, p1, p2, p3); }
	static bool _GET_SHOP_ITEM_BASE_LAYERS(Hash shopItem, Any p1, Ped ped, int metapedType, bool p4, Hash* drawable, Hash* albedo, Hash* normal, Hash* material, Hash* p9, Hash* p10, Hash* p11, Hash* p12) { return invoke <bool>(0x63342C50EC115CE8, shopItem, p1, ped, metapedType, p4, drawable, albedo, normal, material, p9, p10, p11, p12); }
	static Any _0xAAB86462966168CE(Ped ped, bool isMP) { return invoke <Any>(0xAAB86462966168CE, ped, isMP); }
	static Any _GET_SHOP_ITEM_HAT_COMPONENT(Ped ped, int metapedType, bool p2) { return invoke <Any>(0x7E02E4218D916B94, ped, metapedType, p2); }
	static void _REFRESH_META_PED_SHOP_ITEMS(Ped ped, int p1) { return invoke <void>(0x59BD177A1A48600A, ped, p1); }
	static void _0xD103F6DBB5442BE8(Ped ped, int p1) { return invoke <void>(0xD103F6DBB5442BE8, ped, p1); }
	static void _SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(Ped ped, Hash gxtEntryHash) { return invoke <void>(0xFCA8FB9E15FA80D3, ped, gxtEntryHash); }
	static void _SET_PED_PROMPT_NAME(Ped ped, const char* name) { return invoke <void>(0x4A48B6E03BABB4AC, ped, name); }
	static void _SET_PED_PROMPT_NAME_FROM_GXT_ENTRY_2(Ped ped, Hash gxtEntryHash) { return invoke <void>(0xC2745D9261664901, ped, gxtEntryHash); }
	static void _SET_PED_PROMPT_NAME_2(Ped ped, const char* name) { return invoke <void>(0x19B14E04B009E28B, ped, name); }
	static void _0xF917F92BF22ECBAB(Any p0) { return invoke <void>(0xF917F92BF22ECBAB, p0); }
	static void _0x49DADFC4CD808B0A(Any p0, Any p1, Any p2) { return invoke <void>(0x49DADFC4CD808B0A, p0, p1, p2); }
	static bool _HAS_PED_TAKEN_GORE_DAMAGE(Ped ped, int limb) { return invoke <bool>(0xBA208A8D6399A3AC, ped, limb); }
	static void _0x704C908E9C405136(Ped ped) { return invoke <void>(0x704C908E9C405136, ped); }
	static void _0x7406C71F4AC2FFCC(Any p0) { return invoke <void>(0x7406C71F4AC2FFCC, p0); }
	static void _0x28508173C6A7CC18(Any p0) { return invoke <void>(0x28508173C6A7CC18, p0); }
	static Any _0x52250B92EA70BE3D(Any p0) { return invoke <Any>(0x52250B92EA70BE3D, p0); }
	static void _SET_PED_QUALITY(Ped ped, int quality) { return invoke <void>(0xCE6B874286D640BB, ped, quality); }
	static int _GET_PED_QUALITY(Ped ped) { return invoke <int>(0x7BCC6087D130312A, ped); }
	static void _0xCE7A6C1D5CDE1F9D(Ped ped, Object object, const char* propName, const char* animName) { return invoke <void>(0xCE7A6C1D5CDE1F9D, ped, object, propName, animName); }
	static void _0x604E1010E3162E86(Any p0, Any p1, Any p2) { return invoke <void>(0x604E1010E3162E86, p0, p1, p2); }
	static void _0xE8ABE3B73FC7FE17(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xE8ABE3B73FC7FE17, p0, p1, p2, p3); }
	static void _REMOVE_PED_PROP(Ped ped, const char* propName) { return invoke <void>(0x3A50753042B6891B, ped, propName); }
	static void _SET_TOTAL_PED_DAMAGE_FALLOFF_BONUS(Ped ped, float bonus) { return invoke <void>(0x932786CE3C76477C, ped, bonus); }
	static Any _0x095C2277FED731DB(Any p0) { return invoke <Any>(0x95C2277FED731DB, p0); }
	static void _0x09171A6F8FDE5DC1(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x9171A6F8FDE5DC1, p0, p1, p2, p3, p4); }
	static void _0x09E378C52B1433B5(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x9E378C52B1433B5, p0, p1, p2, p3, p4); }
	static bool _0x6507AC3BD7C99009(float x, float y, float z, float p3) { return invoke <bool>(0x6507AC3BD7C99009, x, y, z, p3); }
	static float _GET_PLAYER_PED_WATER_DEPTH(Ped ped) { return invoke <float>(0x2942457417A5FD24, ped); }
	static void _SET_PED_TRAIL_EFFECT(Ped ped, bool p1, float duration) { return invoke <void>(0xA5950E16B8F31052, ped, p1, duration); }
	static bool _0xEBAAC9A750E7563B(Ped ped) { return invoke <bool>(0xEBAAC9A750E7563B, ped); }
	static void _0x992187D975635DF5(Any p0, Any p1) { return invoke <void>(0x992187D975635DF5, p0, p1); }
	static void _0x0B787A37EEDD226F(Any p0, Any p1) { return invoke <void>(0xB787A37EEDD226F, p0, p1); }
}

namespace PERSCHAR
{
	static void _0x63AA2B8EB087886A(Any p0, Any p1) { return invoke <void>(0x63AA2B8EB087886A, p0, p1); }
	static Hash _GET_PERSCHAR_MODEL_NAME(Hash persCharHash) { return invoke <Hash>(0xA00DF706C60173D1, persCharHash); }
	static void _0x8BC555034A5A5E8C(Any p0, Any p1) { return invoke <void>(0x8BC555034A5A5E8C, p0, p1); }
	static void _0x70605812ABC9FF0F(Any p0, Any p1) { return invoke <void>(0x70605812ABC9FF0F, p0, p1); }
	static Any _0xDC9655D47DEC0353(Any p0) { return invoke <Any>(0xDC9655D47DEC0353, p0); }
	static void _0x2DF89CD2ED1D0BDE(Any p0, Any p1) { return invoke <void>(0x2DF89CD2ED1D0BDE, p0, p1); }
	static void _0x535A66AAD2BF68F9(Any p0, Any p1) { return invoke <void>(0x535A66AAD2BF68F9, p0, p1); }
	static Any _0xCEB40B678E403759(Any p0) { return invoke <Any>(0xCEB40B678E403759, p0); }
	static void _SET_PERSCHAR_SCHEDULE(Hash persCharHash, const char* schedule) { return invoke <void>(0x187D65F3AEC5D679, persCharHash, schedule); }
	static void _0x8B44273A92CD406C(Any p0) { return invoke <void>(0x8B44273A92CD406C, p0); }
	static void _0xE0E65E0D261F7507(Any p0) { return invoke <void>(0xE0E65E0D261F7507, p0); }
	static Any _0x112DDF56300BC6E5(Any p0) { return invoke <Any>(0x112DDF56300BC6E5, p0); }
	static PersChar _CREATE_PERSISTENT_CHARACTER(Hash hash) { return invoke <PersChar>(0x4F76E3676583D951, hash); }
	static bool _IS_PERSISTENT_CHARACTER_VALID(PersChar persChar) { return invoke <bool>(0x800DF3FC913355F3, persChar); }
	static void _DELETE_PERSCHAR(PersChar persChar) { return invoke <void>(0xFC77C5B44D5FF7C0, persChar); }
	static Vector3 _0x5EE6FCCC9C832CA2(Any p0) { return invoke <Vector3>(0x5EE6FCCC9C832CA2, p0); }
	static void _0x59C7AD6FEA2AC449(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x59C7AD6FEA2AC449, p0, p1, p2, p3); }
	static void _0xBB68908CD11AEBDC(PersChar persChar) { return invoke <void>(0xBB68908CD11AEBDC, persChar); }
	static Vector3 _0x94995829ED15A598(Any p0) { return invoke <Vector3>(0x94995829ED15A598, p0); }
	static Ped _GET_PERSCHAR_PED_INDEX(PersChar persChar) { return invoke <Ped>(0x31C70A716CAE1FEE, persChar); }
	static PersChar _GET_PERSCHAR_INDEX_FROM_PED_INDEX(Ped ped) { return invoke <PersChar>(0x32A1E3B83D501096, ped); }
	static Any _0xF8DE7154F7D1458F(Any p0) { return invoke <Any>(0xF8DE7154F7D1458F, p0); }
	static void _0x669C25840C6F7AE2(Any p0, Any p1) { return invoke <void>(0x669C25840C6F7AE2, p0, p1); }
	static void _RETASK_PERSISTENT_CHARACTER(PersChar persChar) { return invoke <void>(0x631CD2D77FDC0316, persChar); }
	static void _0x0B3A99AB6713AA52(Any p0) { return invoke <void>(0xB3A99AB6713AA52, p0); }
	static bool _IS_PERSISTENT_CHARACTER_DEAD(PersChar persChar) { return invoke <bool>(0xEB98B38CA60742D7, persChar); }
	static bool _REVIVE_PERSCHAR(PersChar persChar) { return invoke <bool>(0x49A8C2CD97815215, persChar); }
	static void _0xD4B614179BCD0654(Any p0) { return invoke <void>(0xD4B614179BCD0654, p0); }
	static void _0x406808610220405B(Any p0) { return invoke <void>(0x406808610220405B, p0); }
	static void _0xA2B18FF8D39F6D87(Any p0) { return invoke <void>(0xA2B18FF8D39F6D87, p0); }
	static Any _0xE4C51A8A3BD1664C(Any p0) { return invoke <Any>(0xE4C51A8A3BD1664C, p0); }
	static void _0x8AE4EFA464DAE42D(Any p0, Any p1) { return invoke <void>(0x8AE4EFA464DAE42D, p0, p1); }
	static void _0xA4DCB3F0DD7488BD(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0xA4DCB3F0DD7488BD, p0, p1, p2, p3, p4); }
	static void _0xD95D777F828B2BBB(Any p0) { return invoke <void>(0xD95D777F828B2BBB, p0); }
	static void _0x92690B0822493CE0() { return invoke <void>(0x92690B0822493CE0); }
	static void _0xEFC5C6670E0B99BA() { return invoke <void>(0xEFC5C6670E0B99BA); }
	static void _0x2E957AA81F2C61C9() { return invoke <void>(0x2E957AA81F2C61C9); }
	static void _0xB173599D61FAEB31() { return invoke <void>(0xB173599D61FAEB31); }
	static Entity _0x08FC896D2CB31FCC(Any p0, bool p1) { return invoke <Entity>(0x8FC896D2CB31FCC, p0, p1); }
	static Entity _FORCE_SPAWN_PERSCHAR(PersChar persChar, bool p1) { return invoke <Entity>(0xCADC3A977997472, persChar, p1); }
	static void _FORCE_DESPAWN_PERSCHAR(PersChar persChar) { return invoke <void>(0x7B204F88F6C3D287, persChar); }
	static void _0xFCC6DB8DBE709BC8(PersChar persChar) { return invoke <void>(0xFCC6DB8DBE709BC8, persChar); }
	static void _0xA8C406C2A56EDC16(PersChar persChar) { return invoke <void>(0xA8C406C2A56EDC16, persChar); }
	static void _0x4F81EAD1DE8FA19B(PersChar persChar) { return invoke <void>(0x4F81EAD1DE8FA19B, persChar); }
	static void _0x6759BEE6762E140B(PersChar persChar) { return invoke <void>(0x6759BEE6762E140B, persChar); }
	static void _0xB65E7F733956CF25(PersChar persChar) { return invoke <void>(0xB65E7F733956CF25, persChar); }
	static Any _0x4AFC7288C77238B3(Any p0) { return invoke <Any>(0x4AFC7288C77238B3, p0); }
	static Any _0xA8120EBEAF290C7A(Any p0) { return invoke <Any>(0xA8120EBEAF290C7A, p0); }
	static Any _0x69786495C92A3044(Any p0) { return invoke <Any>(0x69786495C92A3044, p0); }
	static Any _0xEC254C2C9B0F08F1(Any p0, Any p1) { return invoke <Any>(0xEC254C2C9B0F08F1, p0, p1); }
	static Any _0x9C7F95946E304778(Any p0, Any p1) { return invoke <Any>(0x9C7F95946E304778, p0, p1); }
}

namespace PERSISTENCE
{
	static void _0x7A1BD123E5CDB6E5() { return invoke <void>(0x7A1BD123E5CDB6E5); }
	static void PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(float x, float y, float z, float radius) { return invoke <void>(0x9D16896F0DBE78A2, x, y, z, radius); }
	static void _0x065887B694359799(Any p0) { return invoke <void>(0x65887B694359799, p0); }
	static void _0xFC9806DA9A460093(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke <void>(0xFC9806DA9A460093, x1, y1, z1, x2, y2, z2); }
	static void _0xB03140014ACA6C40(Any p0, Any p1) { return invoke <void>(0xB03140014ACA6C40, p0, p1); }
	static void _0xE225CEF1901F6108(Any p0, Any p1) { return invoke <void>(0xE225CEF1901F6108, p0, p1); }
	static void _0x8DE104BEC243A73B(Any p0) { return invoke <void>(0x8DE104BEC243A73B, p0); }
	static void _PERSISTENCE_REFRESH_TOWN_VOLUME(Volume volume) { return invoke <void>(0xEFB5F34CC0953B27, volume); }
	static Any _0xBA2C49EA6A8D24FF(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <Any>(0xBA2C49EA6A8D24FF, p0, p1, p2, p3, p4, p5, p6); }
	static Any _0x2E545965DF98D476(Any p0) { return invoke <Any>(0x2E545965DF98D476, p0); }
	static void _0xF5622FA6ACFCA7DB(Any p0, Any p1) { return invoke <void>(0xF5622FA6ACFCA7DB, p0, p1); }
	static void _0x3CA5E58C9731A16B(Any p0, Any p1) { return invoke <void>(0x3CA5E58C9731A16B, p0, p1); }
	static void _0xDC0A1F0ECEC9F0C0(Any p0, Any p1) { return invoke <void>(0xDC0A1F0ECEC9F0C0, p0, p1); }
	static Any _0x5A79220F6D38D7C3(Any p0) { return invoke <Any>(0x5A79220F6D38D7C3, p0); }
	static Any _0xCFDA2518F322D836(Any p0) { return invoke <Any>(0xCFDA2518F322D836, p0); }
	static Any _0x1F56FB3FDB4EAF65(Any p0) { return invoke <Any>(0x1F56FB3FDB4EAF65, p0); }
	static void _0x291CC21D1FB6790E(Any p0) { return invoke <void>(0x291CC21D1FB6790E, p0); }
	static void PERSISTENCE_ADD_SCENARIO_LOOTED(int scenario) { return invoke <void>(0x8245C1F3262F4AC2, scenario); }
	static bool _PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED(int scenario) { return invoke <bool>(0xFB7CF1DE938A3E22, scenario); }
	static bool _PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS(float x, float y, float z) { return invoke <bool>(0xB6E1A185C2B9319A, x, y, z); }
	static bool _PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS_WITH_MODEL(float x, float y, float z, Hash model) { return invoke <bool>(0x188313616D184213, x, y, z, model); }
	static void _0x66DAA3A9274E8E82() { return invoke <void>(0x66DAA3A9274E8E82); }
}

namespace PHYSICS
{
	static int ADD_ROPE(float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float len, int ropeType, float maxLength, float minLength, float p10, bool p11, bool p12, bool rigid, float p14, bool breakWhenShot, void* unkPtr, bool p17) { return invoke <int>(0xE832D760399EB220, posX, posY, posZ, rotX, rotY, rotZ, len, ropeType, maxLength, minLength, p10, p11, p12, rigid, p14, breakWhenShot, unkPtr, p17); }
	static int _ADD_ROPE_2(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, bool isNetworked, int p9, float p10) { return invoke <int>(0xE9C59F6809373A99, x, y, z, rotX, rotY, rotZ, length, ropeType, isNetworked, p9, p10); }
	static void DELETE_ROPE(int* ropeID) { return invoke <void>(0x52B4829281364649, ropeID); }
	static void _RELEASE_ROPE(int ropeId) { return invoke <void>(0x6076213101A47B3B, ropeId); }
	static void DELETE_CHILD_ROPE(int ropeID) { return invoke <void>(0xAA5D6B1888E4DB20, ropeID); }
	static void _BREAK_ROPE(int* ropeId, int* ropeTop, int* ropeBottom, float offsetX, float offsetY, float offsetZ, int p6) { return invoke <void>(0x4CFA2B7FAE115ECB, ropeId, ropeTop, ropeBottom, offsetX, offsetY, offsetZ, p6); }
	static bool DOES_ROPE_EXIST(int ropeID) { return invoke <bool>(0xFD5448BE3111ED96, ropeID); }
	static bool _IS_ROPE_BROKEN(int ropeId) { return invoke <bool>(0x79C2BEC82CFD7F7F, ropeId); }
	static void _ROPE_CHANGE_VISIBILITY(int* ropeId, bool visible) { return invoke <void>(0x7A54D82227A139DB, ropeId, visible); }
	static void ROPE_DRAW_SHADOW_ENABLED(int* ropeID, bool isDrawEnabled) { return invoke <void>(0xF159A63806BB5BA8, ropeID, isDrawEnabled); }
	static int GET_ROPE_VERTEX_COUNT(int ropeID) { return invoke <int>(0x3655F544CD30F0B5, ropeID); }
	static void _0xE54BF2CE6C7D23A9(int ropeId, int p1, float x, float y, float z) { return invoke <void>(0xE54BF2CE6C7D23A9, ropeId, p1, x, y, z); }
	static void _0x9C24846D0A4A2776(Any p0) { return invoke <void>(0x9C24846D0A4A2776, p0); }
	static void _0x0CB16D05E03FB525(Any p0) { return invoke <void>(0xCB16D05E03FB525, p0); }
	static void _0xF27F1A8DE4F50A1B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0xF27F1A8DE4F50A1B, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x21D0890D88DFB0B0(int ropeId, bool p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, int p10) { return invoke <void>(0x21D0890D88DFB0B0, ropeId, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static void ATTACH_ENTITIES_TO_ROPE(int ropeID, Entity iEntityAID, Entity iEntityBID, float worldPositionAX, float worldPositionAY, float worldPositionAZ, float worldPositionBX, float worldPositionBY, float worldPositionBZ, float ropeLength, int componentPartA, int componentPartB, const char* boneNamePartA, const char* boneNamePartB, bool p14, int boneId1, int boneId2, int alwaysZero3, int alwaysZero4, bool p19, bool p20) { return invoke <void>(0x3D95EC8B6D940AC3, ropeID, iEntityAID, iEntityBID, worldPositionAX, worldPositionAY, worldPositionAZ, worldPositionBX, worldPositionBY, worldPositionBZ, ropeLength, componentPartA, componentPartB, boneNamePartA, boneNamePartB, p14, boneId1, boneId2, alwaysZero3, alwaysZero4, p19, p20); }
	static void _ATTACH_ENTITIES_TO_ROPE_2(int ropeId, Entity entity1, Entity entity2, float ent1X, float ent1Y, float ent1Z, float ent2X, float ent2Y, float ent2Z, const char* boneName1, const char* boneName2) { return invoke <void>(0x462FF2A432733A44, ropeId, entity1, entity2, ent1X, ent1Y, ent1Z, ent2X, ent2Y, ent2Z, boneName1, boneName2); }
	static void _ATTACH_ENTITES_TO_ROPE_3(int ropeId, Entity entity1, Entity entity2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, Any p10) { return invoke <void>(0xE9CD9A67834985A7, ropeId, entity1, entity2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static void _0x69C810B72291D831(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0x69C810B72291D831, p0, p1, p2, p3, p4, p5, p6); }
	static void _0xB7469CB9AC3C0FD4(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke <void>(0xB7469CB9AC3C0FD4, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0xC64E7A62632AD2FE(int ropeId, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke <void>(0xC64E7A62632AD2FE, ropeId, p1, p2, p3, p4, p5, p6, p7); }
	static bool _IS_ROPE_ATTACHED_TO_ENTITY(int ropeId, Entity entity) { return invoke <bool>(0x9B4F7E3E4F9C77B3, ropeId, entity); }
	static void DETACH_ROPE_FROM_ENTITY(int ropeID, Entity iEntityID) { return invoke <void>(0xBCF3026912A8647D, ropeID, iEntityID); }
	static void _HITCH_HORSE(Ped horse, float x, float y, float z) { return invoke <void>(0x6AADE17334F7A40, horse, x, y, z); }
	static void _UNHITCH_HORSE(Ped horse) { return invoke <void>(0x348469DAA17576C, horse); }
	static void _0x6EA0E93CFFA472CC(Any p0) { return invoke <void>(0x6EA0E93CFFA472CC, p0); }
	static void _0xBDDA142759307528(Any p0) { return invoke <void>(0xBDDA142759307528, p0); }
	static void _0x32F4DBFDFCCCC735(Any p0, Any p1, Any p2) { return invoke <void>(0x32F4DBFDFCCCC735, p0, p1, p2); }
	static void _0xF8CA39D5C0D1D9A1(Any p0, Any p1) { return invoke <void>(0xF8CA39D5C0D1D9A1, p0, p1); }
	static void _0xEAF529446488EB18(Any p0) { return invoke <void>(0xEAF529446488EB18, p0); }
	static void _0x31160EC47E7C9549(Any p0, Any p1) { return invoke <void>(0x31160EC47E7C9549, p0, p1); }
	static void _0x5E981C764DF33117(Any p0, Any p1) { return invoke <void>(0x5E981C764DF33117, p0, p1); }
	static void ROPE_SET_UPDATE_ORDER(int ropeID, int iUpdateOrder) { return invoke <void>(0xDC57A637A20006ED, ropeID, iUpdateOrder); }
	static void _0xFB9153A54AC713E8(int ropeId, bool p1) { return invoke <void>(0xFB9153A54AC713E8, ropeId, p1); }
	static void _0xD699E688B49C0FD2(int ropeId, float p1, float p2, float p3, bool p4) { return invoke <void>(0xD699E688B49C0FD2, ropeId, p1, p2, p3, p4); }
	static void _0xBB3E9B073E66C3C9(int ropeId, bool p1, bool p2, bool p3, bool p4) { return invoke <void>(0xBB3E9B073E66C3C9, ropeId, p1, p2, p3, p4); }
	static void _0x522FA3F490E2F7AC(int ropeId, Any p1, Any p2) { return invoke <void>(0x522FA3F490E2F7AC, ropeId, p1, p2); }
	static void _0x3900491C0D61ED4B(Any p0, Any p1) { return invoke <void>(0x3900491C0D61ED4B, p0, p1); }
	static void _0xC89E7410A93AC19A(int ropeId, float p1) { return invoke <void>(0xC89E7410A93AC19A, ropeId, p1); }
	static void _0x1D97DA8ACB5D2582(int ropeId, int p1) { return invoke <void>(0x1D97DA8ACB5D2582, ropeId, p1); }
	static void _CREATE_ROPE_WINDING_ABILITY(int ropeId, const char* p1, const char* ropeModelType, float length, bool p4) { return invoke <void>(0x3C6490D940FF5D0B, ropeId, p1, ropeModelType, length, p4); }
	static Vector3 GET_ROPE_LAST_VERTEX_COORD(int ropeID) { return invoke <Vector3>(0x21BB0FBD3E217C2D, ropeID); }
	static Vector3 GET_ROPE_VERTEX_COORD(int ropeID, int vtxIndex) { return invoke <Vector3>(0xEA61CA8E80F09E4D, ropeID, vtxIndex); }
	static void START_ROPE_WINDING(int ropeID) { return invoke <void>(0x1461C72C889E343E, ropeID); }
	static void STOP_ROPE_WINDING(int ropeID) { return invoke <void>(0xCB2D4AB84A19AA7C, ropeID); }
	static void START_ROPE_UNWINDING_FRONT(int ropeID) { return invoke <void>(0x538D1179EC1AA9A9, ropeID); }
	static void STOP_ROPE_UNWINDING_FRONT(int ropeID) { return invoke <void>(0xFFF3A50779EFBBB3, ropeID); }
	static void _START_ROPE_UNWINDING_BACK(int ropeId) { return invoke <void>(0xF611A794A3C36E, ropeId); }
	static void _STOP_ROPE_UNWINDING_BACK(int ropeId) { return invoke <void>(0x10DAA76CB8A201A1, ropeId); }
	static void _0x461FCBDEB4D06717(int ropeId, bool p1) { return invoke <void>(0x461FCBDEB4D06717, ropeId, p1); }
	static void _0x423C6B1F3786D28B(Any p0, Any p1) { return invoke <void>(0x423C6B1F3786D28B, p0, p1); }
	static void _0x76BAD9D538BCA1AA(int ropeId, float p1) { return invoke <void>(0x76BAD9D538BCA1AA, ropeId, p1); }
	static void _0xB40EA9E0D2E2F7F3(int ropeId, float p1) { return invoke <void>(0xB40EA9E0D2E2F7F3, ropeId, p1); }
	static float _ROPE_GET_FORCED_LENGTH(int ropeId) { return invoke <float>(0x3D69537039F8D824, ropeId); }
	static void _0x751DF00EEFF122E3(Any p0) { return invoke <void>(0x751DF00EEFF122E3, p0); }
	static void ROPE_FORCE_LENGTH(int ropeID, float len) { return invoke <void>(0xD009F759A723DB1B, ropeID, len); }
	static void _0x8D59079C37C21D78(int ropeId, float p1) { return invoke <void>(0x8D59079C37C21D78, ropeId, p1); }
	static void _0x814D453FCFDF119F(Any p0, Any p1, Any p2) { return invoke <void>(0x814D453FCFDF119F, p0, p1, p2); }
	static void _0x1FC92BDBA1106BD2(int ropeId, float p1) { return invoke <void>(0x1FC92BDBA1106BD2, ropeId, p1); }
	static void _0xDEDE679ED29DD4E7(int ropeId, bool p1) { return invoke <void>(0xDEDE679ED29DD4E7, ropeId, p1); }
	static void _0xF1EA2A881EB7F2CD(int ropeId, bool p1) { return invoke <void>(0xF1EA2A881EB7F2CD, ropeId, p1); }
	static void _0x5A989B7EE3672A56(Any p0, Any p1) { return invoke <void>(0x5A989B7EE3672A56, p0, p1); }
	static void _0x483D4E917B0D35A9(Any p0, Any p1) { return invoke <void>(0x483D4E917B0D35A9, p0, p1); }
	static Player _ROPE_GET_BREAKER_OF_ROPE(int ropeId) { return invoke <Player>(0xEE360CFC80C8B2BC, ropeId); }
	static void SET_DAMPING(Entity entityID, int dampingType, float dampingValue) { return invoke <void>(0xEEA3B200A6FEB65B, entityID, dampingType, dampingValue); }
	static void ACTIVATE_PHYSICS(Entity entityID) { return invoke <void>(0x710311ADF0E20730, entityID); }
	static void BREAK_ENTITY_GLASS(Entity entityId, float impactPositionX, float impactPositionY, float impactPositionZ, float impactRadius, float impulseX, float impulseY, float impulseZ, float damage, int crackType, bool silent) { return invoke <void>(0x2E648D16F6E308F3, entityId, impactPositionX, impactPositionY, impactPositionZ, impactRadius, impulseX, impulseY, impulseZ, damage, crackType, silent); }
	static void _0x8EEDFD8921389928(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke <void>(0x8EEDFD8921389928, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void SET_DISABLE_BREAKING(Entity entityId, bool disableBreaking) { return invoke <void>(0x5CEC1A84620E7D5B, entityId, disableBreaking); }
	static void SET_DISABLE_FRAG_DAMAGE(Entity entityId, bool disableDamage) { return invoke <void>(0x1BA3AED21C16CFB, entityId, disableDamage); }
	static void _0x5BD7457221CC5FF4(Any p0, Any p1) { return invoke <void>(0x5BD7457221CC5FF4, p0, p1); }
}

namespace PLAYER
{
	static Ped GET_PLAYER_PED(Player PlayerIndex) { return invoke <Ped>(0x275F255ED201B937, PlayerIndex); }
	static Ped _GET_PLAYER_PED_2(Player player) { return invoke <Ped>(0x5EBE38A20BC51C27, player); }
	static void _0x325434C68358D282(bool toggle) { return invoke <void>(0x325434C68358D282, toggle); }
	static Ped GET_PLAYER_PED_SCRIPT_INDEX(Player PlayerIndex) { return invoke <Ped>(0x5C880F9056D784C8, PlayerIndex); }
	static void SET_PLAYER_MODEL(Player PlayerIndex, Hash PlayerModelHashKey, bool p2) { return invoke <void>(0xED40380076A31506, PlayerIndex, PlayerModelHashKey, p2); }
	static bool _NETWORK_HAS_PLAYER_VALID_PED(Player player) { return invoke <bool>(0x760D6F70EBCC05C, player); }
	static int GET_PLAYER_TEAM(Player PlayerIndex) { return invoke <int>(0xB464EB6A40C7975B, PlayerIndex); }
	static void SET_PLAYER_TEAM(Player PlayerIndex, int Team, bool bRestrictToThisScript) { return invoke <void>(0xE8DD8536F01DE600, PlayerIndex, Team, bRestrictToThisScript); }
	static const char* GET_PLAYER_NAME(Player PlayerIndex) { return invoke <const char*>(0x7124FD9AC0E01BA0, PlayerIndex); }
	static const char* _FORMAT_PLAYER_NAME_STRING(const char* string) { return invoke <const char*>(0x5B6193813E03E4E9, string); }
	static float GET_WANTED_LEVEL_RADIUS(int WantedLevel) { return invoke <float>(0x80B00EB26D9521C7, WantedLevel); }
	static int GET_WANTED_LEVEL_THRESHOLD(int wantedLevel) { return invoke <int>(0x1B1A3B358F7D8F07, wantedLevel); }
	static void SET_PLAYER_WANTED_LEVEL(Player PlayerIndex, int WantedLevel, bool bDelayLawResponse) { return invoke <void>(0x384D4765395E006C, PlayerIndex, WantedLevel, bDelayLawResponse); }
	static bool IS_PLAYER_WANTED_LEVEL_GREATER(Player PlayerIndex, int WantedLevel) { return invoke <bool>(0xE1C0AD4C24324C36, PlayerIndex, WantedLevel); }
	static void CLEAR_PLAYER_WANTED_LEVEL(Player PlayerIndex) { return invoke <void>(0x4E4B996C928C7AA6, PlayerIndex); }
	static bool IS_PLAYER_DEAD(Player PlayerIndex) { return invoke <bool>(0x2E9C3FCB6798F397, PlayerIndex); }
	static void SET_PLAYER_CONTROL(Player iPlayerIndex, bool bSetControlOn, int iFlags, bool bPreventHeadingChange) { return invoke <void>(0x4D51E59243281D80, iPlayerIndex, bSetControlOn, iFlags, bPreventHeadingChange); }
	static int GET_PLAYER_WANTED_LEVEL(Player PlayerIndex) { return invoke <int>(0xABC532F9098BFD9D, PlayerIndex); }
	static void SET_MAX_WANTED_LEVEL(int NewMaxLevel) { return invoke <void>(0x28A4BD2CEE236E19, NewMaxLevel); }
	static void _SET_MAX_WANTED_LEVEL_2(int maxWantedLevel) { return invoke <void>(0xEA6DE0CD15AECBE2, maxWantedLevel); }
	static void SET_POLICE_RADAR_BLIPS(bool bBlips) { return invoke <void>(0x6FD7DD6B63F2820E, bBlips); }
	static bool IS_PLAYER_PLAYING(Player PlayerIndex) { return invoke <bool>(0xBFFB35986CAAE58C, PlayerIndex); }
	static void SET_EVERYONE_IGNORE_PLAYER(Player PlayerIndex, bool IgnorePlayer) { return invoke <void>(0x34630A768925B852, PlayerIndex, IgnorePlayer); }
	static bool GET_IS_PLAYER_UI_PROMPT_ACTIVE(Player player, int p1) { return invoke <bool>(0x51BEA356B1C60225, player, p1); }
	static void _MODIFY_PLAYER_UI_PROMPT(Player player, int promptType, int promptMode, bool disabled) { return invoke <void>(0x751D461F06E41CE, player, promptType, promptMode, disabled); }
	static bool _GET_PLAYER_UI_PROMPT_IS_DISABLED(Player player, int promptType, int promptMode) { return invoke <bool>(0x6614F9039BD31931, player, promptType, promptMode); }
	static void _MODIFY_PLAYER_UI_PROMPT_FOR_PED(Player player, Ped ped, int promptType, int promptMode, bool enabled) { return invoke <void>(0xA3DB37EDF9A74635, player, ped, promptType, promptMode, enabled); }
	static bool _GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(Player player, Ped ped, int promptType, int promptMode) { return invoke <bool>(0xEA8F168A76A0B9BC, player, ped, promptType, promptMode); }
	static void _0x93624B36E8851B42(Player player) { return invoke <void>(0x93624B36E8851B42, player); }
	static void _0x9073EC5456651A90(Any p0, Any p1) { return invoke <void>(0x9073EC5456651A90, p0, p1); }
	static void _0x2E67707BEC52CA4B(Any p0) { return invoke <void>(0x2E67707BEC52CA4B, p0); }
	static void SET_ALL_RANDOM_PEDS_FLEE(Player PlayerIndex, bool PedsFlee) { return invoke <void>(0xE705309B8C6445A4, PlayerIndex, PedsFlee); }
	static void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(Player PlayerIndex) { return invoke <void>(0xD5C198A62F1DEB0A, PlayerIndex); }
	static void SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(Player PlayerIndex) { return invoke <void>(0x16752DAA7E6D3F72, PlayerIndex); }
	static void _0x1D256EED194F5B58(Any p0) { return invoke <void>(0x1D256EED194F5B58, p0); }
	static Any _0x5B7B97E99F84138B(Any p0) { return invoke <Any>(0x5B7B97E99F84138B, p0); }
	static void _SET_DISABLE_PLAYER_WANTED_LEVEL(Player player, bool disable) { return invoke <void>(0x8674D138391FFB1B, player, disable); }
	static float _GET_WANTED_LEVEL_MULTIPLIER() { return invoke <float>(0xA82964B9D8D6A983); }
	static void SET_WANTED_LEVEL_MULTIPLIER(float Multiplier) { return invoke <void>(0xD7FA719CB54866C2, Multiplier); }
	static void RESET_WANTED_LEVEL_DIFFICULTY(Player PlayerIndex) { return invoke <void>(0x62D14F18E8B0CAE, PlayerIndex); }
	static void UPDATE_WANTED_POSITION_THIS_FRAME(Player PlayerIndex) { return invoke <void>(0xD0B0B044112BF424, PlayerIndex); }
	static void SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME(Player PlayerIndex) { return invoke <void>(0x96722257E5381E00, PlayerIndex); }
	static void REPORT_POLICE_SPOTTED_PLAYER(Player PlayerIndex) { return invoke <void>(0xCBCCF73FFA69CC6B, PlayerIndex); }
	static void SET_LAW_RESPONSE_DELAY_OVERRIDE(float fLawResponseDelay) { return invoke <void>(0xD2DFC9CCA5596A11, fLawResponseDelay); }
	static void RESET_LAW_RESPONSE_DELAY_OVERRIDE() { return invoke <void>(0x5CE5CACC01D0F985); }
	static bool CAN_PLAYER_START_MISSION(Player PlayerIndex) { return invoke <bool>(0x2DF170B1185AF777, PlayerIndex); }
	static bool IS_PLAYER_READY_FOR_CUTSCENE(Player PlayerIndex) { return invoke <bool>(0xAA67BCB0097F2FA3, PlayerIndex); }
	static bool IS_PLAYER_TARGETTING_ENTITY(Player PlayerIndex, Entity EntityIndex, bool p2) { return invoke <bool>(0x27F89FDC16688A7A, PlayerIndex, EntityIndex, p2); }
	static bool GET_PLAYER_TARGET_ENTITY(Player PlayerIndex, Entity* EntityIndex) { return invoke <bool>(0xAE663DDD99C8A670, PlayerIndex, EntityIndex); }
	static bool _0x927861B2C08DBEA5(Player player) { return invoke <bool>(0x927861B2C08DBEA5, player); }
	static bool _IS_PLAYER_FREE_FOCUSING(Player player) { return invoke <bool>(0x1A51BFE60708E482, player); }
	static bool GET_PLAYER_INTERACTION_TARGET_ENTITY(Player player, Entity* outEntity, bool p2, bool p3) { return invoke <bool>(0x3EE1F7A8C32F24E1, player, outEntity, p2, p3); }
	static Any _0xBEA3A6E5F5F79A6F(Any p0, Any p1) { return invoke <Any>(0xBEA3A6E5F5F79A6F, p0, p1); }
	static bool _IS_PLAYER_IN_SCOPE(Player player) { return invoke <bool>(0x4D7F33640662FA2, player); }
	static bool IS_PLAYER_FREE_AIMING(Player PlayerIndex) { return invoke <bool>(0x936F967D4BE1CE9D, PlayerIndex); }
	static bool IS_PLAYER_FREE_AIMING_AT_ENTITY(Player PlayerIndex, Entity EntityIndex) { return invoke <bool>(0x8C67C11C68713D25, PlayerIndex, EntityIndex); }
	static bool GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(Player PlayerIndex, Entity* EntityIndex) { return invoke <bool>(0xA6817C110B830EAD, PlayerIndex, EntityIndex); }
	static void _0x3DAABE78A23694BC(Any p0, Any p1) { return invoke <void>(0x3DAABE78A23694BC, p0, p1); }
	static bool _0x7AE93C45EC14A166(Player player, Ped* ped) { return invoke <bool>(0x7AE93C45EC14A166, player, ped); }
	static void SET_PLAYER_LOCKON_RANGE_OVERRIDE(Player PlayerIndex, float Range) { return invoke <void>(0x3A3CD06597388322, PlayerIndex, Range); }
	static void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(Player PlayerIndex, bool bCanBeHassled) { return invoke <void>(0xC7FE774412046825, PlayerIndex, bCanBeHassled); }
	static void SET_PLAYER_CAN_USE_COVER(Player PlayerIndex, bool CanUseCover) { return invoke <void>(0x5EDA520F7A3BAF4E, PlayerIndex, CanUseCover); }
	static void _0xD1A70C1E8D1031FE(Any p0, Any p1) { return invoke <void>(0xD1A70C1E8D1031FE, p0, p1); }
	static void _0xACA45DDCEF6071C4(Player player, bool p1) { return invoke <void>(0xACA45DDCEF6071C4, player, p1); }
	static void _0xA0C683284DF027C7(Player player, int p1, bool enable) { return invoke <void>(0xA0C683284DF027C7, player, p1, enable); }
	static void _SET_PLAYER_CAN_MERCY_KILL(Player player, bool toggle) { return invoke <void>(0x39363DFD04E91496, player, toggle); }
	static void _0x4EC8BE63B8A5D4EF(Player player, int p1) { return invoke <void>(0x4EC8BE63B8A5D4EF, player, p1); }
	static int GET_MAX_WANTED_LEVEL() { return invoke <int>(0xD04CFAD1E2B7984A); }
	static bool IS_PLAYER_TARGETTING_ANYTHING(Player PlayerIndex) { return invoke <bool>(0x4605C66E0F935F83, PlayerIndex); }
	static void RESTORE_PLAYER_STAMINA(Player PlayerIndex, float fPercent) { return invoke <void>(0xC41F4B6E23FE6A4A, PlayerIndex, fPercent); }
	static void _0x8591EE69CC3ED257(Player player, bool toggle) { return invoke <void>(0x8591EE69CC3ED257, player, toggle); }
	static int GET_PLAYER_GROUP(Player PlayerIndex) { return invoke <int>(0x9BAB31815159ABCF, PlayerIndex); }
	static void _0x3D9DA5C9EFD20D88(Any p0, Any p1) { return invoke <void>(0x3D9DA5C9EFD20D88, p0, p1); }
	static void _0x2BEED53B912537D0(Any p0, Any p1, Any p2) { return invoke <void>(0x2BEED53B912537D0, p0, p1, p2); }
	static void _0x908D4B72854C8F62(Any p0) { return invoke <void>(0x908D4B72854C8F62, p0); }
	static Any _0xD1F6B912785BFD35(Any p0) { return invoke <Any>(0xD1F6B912785BFD35, p0); }
	static void _0xC4873B053054C04B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke <void>(0xC4873B053054C04B, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _0xCA59808E51FD67C4(Any p0, Any p1) { return invoke <void>(0xCA59808E51FD67C4, p0, p1); }
	static void _0xBA5CA1FEB5DE0DF6(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <void>(0xBA5CA1FEB5DE0DF6, p0, p1, p2, p3, p4, p5); }
	static void _0x0869D499A7848309(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke <void>(0x869D499A7848309, p0, p1, p2, p3, p4, p5, p6, p7); }
	static bool _0xB331D8A73F9D2BDF(Player player, void* p1) { return invoke <bool>(0xB331D8A73F9D2BDF, player, p1); }
	static void _ADD_PLAYER_AS_FOLLOW_TARGET(Player player, Ped ped, float p2, float p3, int followMode, int followPriority, bool p6) { return invoke <void>(0xAC22AA6DF4D1C1DE, player, ped, p2, p3, followMode, followPriority, p6); }
	static void _REMOVE_PLAYER_AS_FOLLOW_TARGET(Player player, Ped ped) { return invoke <void>(0xC6B89876262A99D, player, ped); }
	static void _0x12E09E278C6C29B7(Any p0) { return invoke <void>(0x12E09E278C6C29B7, p0); }
	static void _0xDD33A82352C4652F(Player player, Ped ped, int p2) { return invoke <void>(0xDD33A82352C4652F, player, ped, p2); }
	static void _0x1FDA57E8908F2609(Player player, Ped ped, bool useSteerassist) { return invoke <void>(0x1FDA57E8908F2609, player, ped, useSteerassist); }
	static void _0x84481018E668E1B8(Player player, Ped ped, Any p2) { return invoke <void>(0x84481018E668E1B8, player, ped, p2); }
	static bool _0x2009F8AB7A5E9D6D(Player player) { return invoke <bool>(0x2009F8AB7A5E9D6D, player); }
	static bool _IS_PLAYER_FOLLOWING_TARGET(Player player, Ped ped) { return invoke <bool>(0xE24C64D9ADED2EF5, player, ped); }
	static bool _0xE7F8707269544B29(Player player, Ped ped) { return invoke <bool>(0xE7F8707269544B29, player, ped); }
	static Any _0xE631EAF35828FA67(Any p0) { return invoke <Any>(0xE631EAF35828FA67, p0); }
	static void _0x086549F3B0381CB1(Any p0, Any p1) { return invoke <void>(0x86549F3B0381CB1, p0, p1); }
	static bool IS_PLAYER_CONTROL_ON(Player PlayerIndex) { return invoke <bool>(0x7964097FCE4C244B, PlayerIndex); }
	static bool IS_PLAYER_SCRIPT_CONTROL_ON(Player PlayerIndex) { return invoke <bool>(0xB78350754157C00F, PlayerIndex); }
	static bool IS_PLAYER_CLIMBING(Player PlayerIndex) { return invoke <bool>(0xB8A70C22FD48197A, PlayerIndex); }
	static void _0xEBB6E27AC2FF32DA(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0xEBB6E27AC2FF32DA, p0, p1, p2, p3, p4); }
	static Any _0xB15CD2F9932C9AB5(Any p0) { return invoke <Any>(0xB15CD2F9932C9AB5, p0); }
	static bool _0x621D1B289CAF5978(Player player) { return invoke <bool>(0x621D1B289CAF5978, player); }
	static bool IS_PLAYER_BEING_ARRESTED(Player PlayerIndex, bool CheckBustedTask) { return invoke <bool>(0xC8183AE963C58374, PlayerIndex, CheckBustedTask); }
	static void RESET_PLAYER_ARREST_STATE(Player PlayerIndex) { return invoke <void>(0x12917931C31F1750, PlayerIndex); }
	static void _0xCBB54CC7FFFFAB86(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xCBB54CC7FFFFAB86, p0, p1, p2, p3); }
	static void _0xBED386157F65942C(Any p0, Any p1) { return invoke <void>(0xBED386157F65942C, p0, p1); }
	static Any _0xDAB6A2FC56B7DE65(Any p0) { return invoke <Any>(0xDAB6A2FC56B7DE65, p0); }
	static Any _0x0F4EAF69DA41AF43(Any p0) { return invoke <Any>(0xF4EAF69DA41AF43, p0); }
	static void _SET_BOUNTY_TARGET(Player player, Player target) { return invoke <void>(0x6ADF821FBF21920E, player, target); }
	static void _CLEAR_BOUNTY_TARGET(Player player) { return invoke <void>(0x8F2A81C09DA9124A, player); }
	static Vehicle GET_PLAYERS_LAST_VEHICLE() { return invoke <Vehicle>(0x2F96E7720B0B19EA); }
	static Player GET_PLAYER_INDEX() { return invoke <Player>(0x47E385B0D957C8D4); }
	static Player INT_TO_PLAYERINDEX(int Arg) { return invoke <Player>(0x748B3A65C2604C33, Arg); }
	static int INT_TO_PARTICIPANTINDEX(int Arg) { return invoke <int>(0x58FF971FC8F2702C, Arg); }
	static Player PLAYER_ID() { return invoke <Player>(0x217E9DC48139933D); }
	static Ped PLAYER_PED_ID() { return invoke <Ped>(0x96275889B8E0EE0); }
	static int NETWORK_PLAYER_ID_TO_INT() { return invoke <int>(0x8A9386F0749A17FA); }
	static bool HAS_FORCE_CLEANUP_OCCURRED(int ForceCleanupBitField) { return invoke <bool>(0xC11469DCA6FC3BB5, ForceCleanupBitField); }
	static void FORCE_CLEANUP(int ForceCleanupBitField) { return invoke <void>(0x768C017FB878E4F4, ForceCleanupBitField); }
	static void FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(const char* pName, int ForceCleanupBitField) { return invoke <void>(0xDAACAF8B687F2353, pName, ForceCleanupBitField); }
	static void FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(int Thread_Id, int ForceCleanupBitField) { return invoke <void>(0xF4C9512A2F0A3031, Thread_Id, ForceCleanupBitField); }
	static int GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() { return invoke <int>(0x84E8E29EBD4A46D2); }
	static void _SET_PLAYER_MOOD(Player player, int mood) { return invoke <void>(0x39BED552DB46FFA9, player, mood); }
	static int _GET_PLAYER_MOOD(Player player) { return invoke <int>(0x54473164C012699, player); }
	static void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(Player PlayerIndex, Vehicle iVehicleID) { return invoke <void>(0xDA35A134038557EC, PlayerIndex, iVehicleID); }
	static void _0xC71D07C96946E263(Any p0, Any p1) { return invoke <void>(0xC71D07C96946E263, p0, p1); }
	static void SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(Player PlayerIndex) { return invoke <void>(0xBEC463B3A11C909E, PlayerIndex); }
	static bool IS_SYSTEM_UI_BEING_DISPLAYED() { return invoke <bool>(0x908258B6209E71F7); }
	static void _0xD48227263E3D06AE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke <void>(0xD48227263E3D06AE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _0x3946FC742AC305CD(Player player, Ped ped, const char* p2, float x, float y, float z, Entity targetEntity, const char* p7) { return invoke <void>(0x3946FC742AC305CD, player, ped, p2, x, y, z, targetEntity, p7); }
	static void _0xA28056CD1B04B250(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoke <void>(0xA28056CD1B04B250, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static void _0xC67A4910425F11F1(Player player, const char* name) { return invoke <void>(0xC67A4910425F11F1, player, name); }
	static void SET_PLAYER_INVINCIBLE(Player PlayerIndex, bool Invincible) { return invoke <void>(0xFEBEEBC9CBDF4B12, PlayerIndex, Invincible); }
	static bool GET_PLAYER_INVINCIBLE(Player PlayerIndex) { return invoke <bool>(0xCBBCB2CCFA7DC4E, PlayerIndex); }
	static void SET_PLAYER_LOCKON(Player PlayerIndex, bool bActive) { return invoke <void>(0x462AA1973CBBA75E, PlayerIndex, bActive); }
	static void SET_LOCKON_TO_FRIENDLY_PLAYERS(Player player, bool toggle) { return invoke <void>(0x4A056257802DD3E5, player, toggle); }
	static void SET_PLAYER_TARGETING_MODE(int TargetMode) { return invoke <void>(0xD66A941F401E7302, TargetMode); }
	static void _SET_PLAYER_IN_VEHICLE_TARGETING_MODE(int targetMode) { return invoke <void>(0x19B4F71703902238, targetMode); }
	static Any _0x747257807B8721CE(Any p0, Any p1) { return invoke <Any>(0x747257807B8721CE, p0, p1); }
	static Any _0x8702D9150D9FBB3D(Any p0, Any p1) { return invoke <Any>(0x8702D9150D9FBB3D, p0, p1); }
	static void _0xCB0B9506BC91E441(Any p0, Any p1) { return invoke <void>(0xCB0B9506BC91E441, p0, p1); }
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(Player PlayerIndex) { return invoke <void>(0x270B63A641BE32F2, PlayerIndex); }
	static bool HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Player PlayerIndex) { return invoke <bool>(0xDA4A4B9B96E20092, PlayerIndex); }
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player PlayerIndex) { return invoke <void>(0x361096D6CE4372C, PlayerIndex); }
	static bool HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player PlayerIndex) { return invoke <bool>(0x16C8D205DD5A2E90, PlayerIndex); }
	static void _0xEACEBAAE0A33FB3F(Any p0) { return invoke <void>(0xEACEBAAE0A33FB3F, p0); }
	static bool _0x72AD59F7B7FB6E24(Player player, int p1) { return invoke <bool>(0x72AD59F7B7FB6E24, player, p1); }
	static bool _0x1A6E84F13C952094(Player player, int p1, void* p2) { return invoke <bool>(0x1A6E84F13C952094, player, p1, p2); }
	static void _SET_PLAYER_DAMAGE_INFO_OVERRIDE(Player player, const char* damageInfo) { return invoke <void>(0x78B3D19AF6391A55, player, damageInfo); }
	static void _0x1F488807BC8E0630(Player player) { return invoke <void>(0x1F488807BC8E0630, player); }
	static void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(Player PlayerIndex, float fDragMult) { return invoke <void>(0x5DA6500FE849DA16, PlayerIndex, fDragMult); }
	static void SET_SWIM_MULTIPLIER_FOR_PLAYER(Player PlayerIndex, float fMultiplier) { return invoke <void>(0xBFCEABDE34DA5085, PlayerIndex, fMultiplier); }
	static bool _0x73EB2EF2E92D23BF() { return invoke <bool>(0x73EB2EF2E92D23BF); }
	static void SET_PLAYER_FORCED_AIM(Player PlayerIndex, bool ForcedAim, Ped ped, int p3, bool p4) { return invoke <void>(0xD5FCC166AEB2FD0F, PlayerIndex, ForcedAim, ped, p3, p4); }
	static void _0x310CE349E0C0EC4B(Player player, Ped ped, int p2) { return invoke <void>(0x310CE349E0C0EC4B, player, ped, p2); }
	static void DISABLE_PLAYER_FIRING(Player PlayerIndex, bool disable) { return invoke <void>(0x2970929FD5F9FC89, PlayerIndex, disable); }
	static void _0xEBFF94328FF7A18A(Any p0, Any p1) { return invoke <void>(0xEBFF94328FF7A18A, p0, p1); }
	static void _0xF993373285053D77(Any p0, Any p1, Any p2) { return invoke <void>(0xF993373285053D77, p0, p1, p2); }
	static Any _0xE956C2340A76272E(Any p0) { return invoke <Any>(0xE956C2340A76272E, p0); }
	static void _ENABLE_CUSTOM_DEADEYE_ABILITY(Player player, bool enable) { return invoke <void>(0x95EE1DEE1DCD9070, player, enable); }
	static Any _0xDE6C85975F9D4894(Any p0) { return invoke <Any>(0xDE6C85975F9D4894, p0); }
	static void _0xBBA140062B15A8AC(Player player) { return invoke <void>(0xBBA140062B15A8AC, player); }
	static void _SPECIAL_ABILITY_SET_DISABLED(Player player, bool disabled) { return invoke <void>(0xAE637BB8EF017875, player, disabled); }
	static bool _IS_SPECIAL_ABILITY_ACTIVE(Player player) { return invoke <bool>(0xB16223CB7DA965F0, player); }
	static void _MODIFY_INFINITE_TRAIL_VISION(Player player, bool toggle) { return invoke <void>(0x28A13BF6B05C3D83, player, toggle); }
	static void _SPECIAL_ABILITY_SET_EAGLE_EYE_DISABLED(Player player) { return invoke <void>(0xC0B21F235C02139C, player); }
	static void _SPECIAL_ABILITY_RESTORE_BY_AMOUNT(Player player, float amount, int p2, int p3, int p4) { return invoke <void>(0x51345AE20F22C261, player, amount, p2, p3, p4); }
	static void _0xFA437FA0738C370C(Player player, float p1, int p2, int p3, int p4) { return invoke <void>(0xFA437FA0738C370C, player, p1, p2, p3, p4); }
	static void _SPECIAL_ABILITY_RESTORE_OUTER_RING(Player player, float amount) { return invoke <void>(0x2498035289B5688F, player, amount); }
	static float _GET_PLAYER_REQUIRED_DEAD_EYE_AMOUNT(Player player) { return invoke <float>(0x811A748B1BE231BA, player); }
	static float _SPECIAL_ABILITY_GET_AMOUNT_CACHED(Player player) { return invoke <float>(0x29884FB65821B07, player); }
	static void _SPECIAL_ABILITY_DRAIN_BY_AMOUNT(Player player, float amount, Any p2) { return invoke <void>(0x200114E99552462B, player, amount, p2); }
	static void _SPECIAL_ABILITY_START_RESTORE(Player player, int p1, bool p2) { return invoke <void>(0x1D77B47AFA584E90, player, p1, p2); }
	static void _SET_SPECIAL_ABILITY_MULTIPLIER(Player player, float multiplier) { return invoke <void>(0x5A498FCA232F71E1, player, multiplier); }
	static float _GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(Player player) { return invoke <float>(0xAB3773E7AA1E9DCC, player); }
	static void _SET_SPECIAL_ABILITY_TYPE(Player player, int type) { return invoke <void>(0xBA333DA05ADC23, player, type); }
	static void _0x22B3CABEDDB538B2(Player player, float p1) { return invoke <void>(0x22B3CABEDDB538B2, player, p1); }
	static void _SET_SPECIAL_ABILITY_DURATION_COST(Player player, float durationCost) { return invoke <void>(0xB783F75940B23014, player, durationCost); }
	static void _SET_SPECIAL_ABILITY_DISABLE_TIMER(Player player, float timer) { return invoke <void>(0xC0B1C05B313693D1, player, timer); }
	static Any _0x57D9991DC1334151(Any p0) { return invoke <Any>(0x57D9991DC1334151, p0); }
	static Any _0x21091B4BEB6376EE(Any p0) { return invoke <Any>(0x21091B4BEB6376EE, p0); }
	static void _SET_SPECIAL_ABILITY_ACTIVATION_COST(Player player, float activationCost, int p2) { return invoke <void>(0xAE4BCC79C587EBBF, player, activationCost, p2); }
	static void _0x4D1699543B1C023C(Player player, float p1) { return invoke <void>(0x4D1699543B1C023C, player, p1); }
	static float _GET_PLAYER_DEAD_EYE_METER_LEVEL(Player player, bool p1) { return invoke <float>(0x3A6AE4EEE30370FE, player, p1); }
	static float _GET_PLAYER_DEAD_EYE(Player player) { return invoke <float>(0xA81D24AE0AF99A5E, player); }
	static float _GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(Player player) { return invoke <float>(0xDF66A37936D5F3D9, player); }
	static float _GET_PLAYER_MAX_DEAD_EYE(Player player, Any p1) { return invoke <float>(0x592F58BC4D2A2CF3, player, p1); }
	static float _GET_PLAYER_HEALTH(Player player) { return invoke <float>(0x317C947D062854E, player); }
	static float _GET_PLAYER_STAMINA(Player player) { return invoke <float>(0xFF421E467373FCF, player); }
	static void _SET_PLAYER_STAT_FLAG_HASH(Player player, Hash p1) { return invoke <void>(0x768E81AE285A4B67, player, p1); }
	static void _SET_USED_ITEM_EFFECT(float health, float stamina, float deadeye, int healthCore, int staminaCore, int deadeyeCore) { return invoke <void>(0xE1DB1F8F5B561DC, health, stamina, deadeye, healthCore, staminaCore, deadeyeCore); }
	static void _0x08E22898A6AF4905(Any p0, Any p1) { return invoke <void>(0x8E22898A6AF4905, p0, p1); }
	static Any _0xBEFED69CE8317F91(Any p0) { return invoke <Any>(0xBEFED69CE8317F91, p0); }
	static void _ENABLE_EAGLEEYE(Player player, bool enable) { return invoke <void>(0xA63FCAD3A6FEC6D2, player, enable); }
	static bool _IS_SECONDARY_SPECIAL_ABILITY_ENABLED(Player player) { return invoke <bool>(0xE022CC1B545F1D9F, player); }
	static void _SECONDARY_SPECIAL_ABILITY_SET_ACTIVE(Player player) { return invoke <void>(0x1710BC33CFB83634, player); }
	static void _SECONDARY_SPECIAL_ABILITY_SET_DISABLED(Player player, bool disabled) { return invoke <void>(0x64FF4BF9AF59E139, player, disabled); }
	static bool _IS_SECONDARY_SPECIAL_ABILITY_ACTIVE(Player player) { return invoke <bool>(0x45AB66D02B601FA7, player); }
	static void _0x107F2A66E1C4C83A(Any p0) { return invoke <void>(0x107F2A66E1C4C83A, p0); }
	static void START_PLAYER_TELEPORT(Player PlayerIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float heading, bool p5, bool p6, bool p7, bool p8) { return invoke <void>(0xDF8822C55EDDA65B, PlayerIndex, VecCoorsX, VecCoorsY, VecCoorsZ, heading, p5, p6, p7, p8); }
	static void _0x2C2D287748E8E9B7(bool p0) { return invoke <void>(0x2C2D287748E8E9B7, p0); }
	static bool UPDATE_PLAYER_TELEPORT(Player PlayerIndex) { return invoke <bool>(0xC39DCE4672CBFBC1, PlayerIndex); }
	static void STOP_PLAYER_TELEPORT() { return invoke <void>(0x858B86146601BE8); }
	static bool IS_PLAYER_TELEPORT_ACTIVE() { return invoke <bool>(0x85EEAEB8783FEB5); }
	static float GET_PLAYER_CURRENT_STEALTH_NOISE(Player PlayerIndex) { return invoke <float>(0xD7ECC25E176ECBA5, PlayerIndex); }
	static void SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(Player PlayerIndex, float Mult) { return invoke <void>(0x8899C244EBCF70DE, PlayerIndex, Mult); }
	static float _GET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(Player player) { return invoke <float>(0x22CD23BB0C45E0CD, player); }
	static void _SET_PLAYER_HEALTH_RECHARGE_TIME_MODIFIER(Player player, float modifier) { return invoke <void>(0x535ED4605F89AB6E, player, modifier); }
	static void SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(Player player, float multiplier) { return invoke <void>(0xFECA17CF3343694B, player, multiplier); }
	static float _GET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(Player player) { return invoke <float>(0x617D3494AD58200F, player); }
	static void _SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER(Player player, float multiplier) { return invoke <void>(0xBBADFB5E5E5766FB, player, multiplier); }
	static float _GET_PLAYER_STAMINA_DEPLETION_MULTIPLIER(Player player) { return invoke <float>(0x68A0389E0718AC8F, player); }
	static void _SET_PED_ACTIVE_PLAYER_HORSE(Player player, Ped horse) { return invoke <void>(0x8FBF9EDB378CCB8C, player, horse); }
	static Ped _GET_ACTIVE_HORSE_FOR_PLAYER(Player player) { return invoke <Ped>(0x46FA0AE18F4C7FA9, player); }
	static void _SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(Player player, Ped mount) { return invoke <void>(0xD2CB0FB0FDCB473D, player, mount); }
	static Ped _GET_SADDLE_HORSE_FOR_PLAYER(Player player) { return invoke <Ped>(0xB48050D326E9A2F3, player); }
	static bool SET_PED_AS_TEMP_PLAYER_HORSE(Player player, Ped horse) { return invoke <bool>(0x227B06324234FB09, player, horse); }
	static Ped _GET_TEMP_PLAYER_HORSE(Player player) { return invoke <Ped>(0xD3F7445CEA2E5035, player); }
	static void _0x77B0B6D17A3AC9AA(Any p0, Any p1) { return invoke <void>(0x77B0B6D17A3AC9AA, p0, p1); }
	static void _SET_PLAYER_MOUNT_STATE_ACTIVE(Player player, bool active) { return invoke <void>(0xDF93973251FB2CA5, player, active); }
	static void _0x694FFA4308060CD1(Any p0, Any p1) { return invoke <void>(0x694FFA4308060CD1, p0, p1); }
	static void BOOST_PLAYER_HORSE_SPEED_FOR_TIME(Player player, float speedBoost, int duration) { return invoke <void>(0x9C28F828EE674FA, player, speedBoost, duration); }
	static void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(Player PlayerIndex, float Modifier) { return invoke <void>(0x94D529F7B73D7A85, PlayerIndex, Modifier); }
	static void SET_PLAYER_WEAPON_DEFENSE_MODIFIER(Player PlayerIndex, float Modifier) { return invoke <void>(0xD15CC2D493160BE3, PlayerIndex, Modifier); }
	static void _0x818241B3EDA84191(Player player, bool p1) { return invoke <void>(0x818241B3EDA84191, player, p1); }
	static void SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(Player PlayerIndex, float Modifier) { return invoke <void>(0xE4CB5A3F18170381, PlayerIndex, Modifier); }
	static void _SET_PLAYER_EXPLOSIVE_WEAPON_DAMAGE_MODIFIER(Player player, float modifier) { return invoke <void>(0x2D3ACE3DE0A2B622, player, modifier); }
	static void _0x83C989D5B5B5B466(Any p0, Any p1) { return invoke <void>(0x83C989D5B5B5B466, p0, p1); }
	static Any _0x03B4B759A8990505(Any p0) { return invoke <Any>(0x3B4B759A8990505, p0); }
	static void _0x67659A8F248E0141(Any p0, Any p1) { return invoke <void>(0x67659A8F248E0141, p0, p1); }
	static void _SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(Player player, float damageDecrease) { return invoke <void>(0xB427911EA6DFFEF3, player, damageDecrease); }
	static void _SET_AI_PLAYER_DEFENSE_MODIFIER_AGAINST_AI(Player player, float modifier) { return invoke <void>(0x914071FF93AF2692, player, modifier); }
	static float _GET_AI_PLAYER_DEFENSE_MODIFIER_AGAINST_AI(Player player) { return invoke <float>(0x2E78D822208E740A, player); }
	static Any _0x19B2C7A6C34FAD54(Any p0, Any p1) { return invoke <Any>(0x19B2C7A6C34FAD54, p0, p1); }
	static Any _0x9422743A5BA50E10(Any p0) { return invoke <Any>(0x9422743A5BA50E10, p0); }
	static void _SET_PLAYER_DEFENSE_MODIFIER(Player player, float weaponDefenseMod, float meleeDefenseMod) { return invoke <void>(0x497A6539BB0E8787, player, weaponDefenseMod, meleeDefenseMod); }
	static void _SET_PLAYER_DEFENSE_TYPE_MODIFIER(Player player, int type, float defenseModifier) { return invoke <void>(0x93F499CAE53FCD05, player, type, defenseModifier); }
	static void SET_PLAYER_WEAPON_TYPE_DAMAGE_MODIFIER(Player player, Hash weaponHash, float damageModifier) { return invoke <void>(0xD04AD186CE8BB129, player, weaponHash, damageModifier); }
	static float _GET_PLAYER_WEAPON_DAMAGE(Player player, Hash weaponHash) { return invoke <float>(0xFE0304050261442C, player, weaponHash); }
	static void _0x5C2E5E3CAEEB1F58(Any p0, Any p1, Any p2) { return invoke <void>(0x5C2E5E3CAEEB1F58, p0, p1, p2); }
	static void _SET_PLAYER_WEAPON_GROUP_DAMAGE_MODIFIER(Player player, Hash weaponGroup, float modifier) { return invoke <void>(0xFC79DCC94D0A5897, player, weaponGroup, modifier); }
	static void _SET_PLAYER_WEAPON_GROUP_AS_INSTANT_KILL(Player player, Hash weaponGroup, bool toggle) { return invoke <void>(0x59F0AFF3E0A1B019, player, weaponGroup, toggle); }
	static void _SET_PLAYER_TRAMPLE_DAMAGE_MODIFIER(Player player, float modifier) { return invoke <void>(0xAF341032E97FB061, player, modifier); }
	static void _SET_PLAYER_LASSO_DAMAGE_PER_SECOND(Player player, float damage) { return invoke <void>(0x43F50A7CD2482156, player, damage); }
	static void _SET_PLAYER_TOTAL_ACCURACY_MODIFIER(Player player, float accuracy) { return invoke <void>(0x967FF5BC0CFE6D26, player, accuracy); }
	static void _SET_PLAYER_LOCAL_ACCURACY_FLOOR_MODIFIER(Player player, float accuracy) { return invoke <void>(0x4EA69188FBCE6A7D, player, accuracy); }
	static void _SET_PLAYER_REMOTE_ACCURACY_FLOOR_MODIFIER(Player player, float accuracy) { return invoke <void>(0xDEE80FEDFDD43C9B, player, accuracy); }
	static void _0x3AD212429E095EFB(Any p0, Any p1) { return invoke <void>(0x3AD212429E095EFB, p0, p1); }
	static void SET_PLAYER_NOISE_MULTIPLIER(Player PlayerIndex, float Mult) { return invoke <void>(0xB5EC6BDAEBCA454C, PlayerIndex, Mult); }
	static void _0x113EF458AB6CDA67(Any p0, Any p1) { return invoke <void>(0x113EF458AB6CDA67, p0, p1); }
	static void SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(Player PlayerIndex, float Mult) { return invoke <void>(0x4DE44FA389DCA565, PlayerIndex, Mult); }
	static void SIMULATE_PLAYER_INPUT_GAIT(Player playerIdx, float moveBlendRatio, int timer, float heading, bool useRelativeHeading, bool noInputInterruption) { return invoke <void>(0xFA0C063C422C4355, playerIdx, moveBlendRatio, timer, heading, useRelativeHeading, noInputInterruption); }
	static void RESET_PLAYER_INPUT_GAIT(Player playerIdx) { return invoke <void>(0x61A2EECAB274829B, playerIdx); }
	static void SET_PLAYER_SIMULATE_AIMING(Player PlayerIndex, bool SimulateAiming) { return invoke <void>(0xE0447DEF81CCDFD2, PlayerIndex, SimulateAiming); }
	static void SET_PLAYER_CLOTH_PIN_FRAMES(Player PlayerIndex, int pinFrames) { return invoke <void>(0xD0D9317DFEEF9A66, PlayerIndex, pinFrames); }
	static bool HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE(Player PlayerIndex) { return invoke <bool>(0xC932F57F31EA9152, PlayerIndex); }
	static bool GET_PLAYER_RECEIVED_BATTLE_EVENT_RECENTLY(Player PlayerIndex, int nTime, bool bIncludeLocalEvents) { return invoke <bool>(0xFB6EB8785F808551, PlayerIndex, nTime, bIncludeLocalEvents); }
	static void _SET_MOUNT_PROMPT_DISABLED(bool disabled) { return invoke <void>(0x5B9813ECF7633FE8, disabled); }
	static bool IS_PLAYER_RIDING_TRAIN(Player PlayerIndex) { return invoke <bool>(0x2FB0ACADA6A238DD, PlayerIndex); }
	static void _0x9AFCF9FE1884BF62(Any p0, Any p1) { return invoke <void>(0x9AFCF9FE1884BF62, p0, p1); }
	static Any _0x1E8099F449ABB0BA(Any p0) { return invoke <Any>(0x1E8099F449ABB0BA, p0); }
	static int _GET_DEADEYE_ABILITY_LEVEL(Player player) { return invoke <int>(0xCCE7C695C164C35F, player); }
	static void _SET_DEADEYE_ABILITY_LEVEL(Player player, int level) { return invoke <void>(0xF0FE8E790BFEB5BB, player, level); }
	static bool _IS_DEADEYE_ABILITY_LOCKED(Player player, int abilityType) { return invoke <bool>(0x8A0643B0B4CA276B, player, abilityType); }
	static void _SET_DEADEYE_ABILITY_LOCKED(Player player, int abilityType, bool toggle) { return invoke <void>(0x2797B8D66DD0EBB8, player, abilityType, toggle); }
	static void _SET_DEADEYE_TAGGING_ENABLED(Player player, bool toggle) { return invoke <void>(0x6B5DDFB967E5073D, player, toggle); }
	static bool _GET_IS_DEADEYE_TAGGING_ENABLED(Player player) { return invoke <bool>(0x32348719DCED2969, player); }
	static void _0x3C4AE8506638C7E2(Any p0, Any p1) { return invoke <void>(0x3C4AE8506638C7E2, p0, p1); }
	static Any _0x51139D8C17B16FBC(Any p0) { return invoke <Any>(0x51139D8C17B16FBC, p0); }
	static void _0x8F44EBB3BA8F6D44(Any p0, Any p1) { return invoke <void>(0x8F44EBB3BA8F6D44, p0, p1); }
	static void _SET_DEADEYE_TAGGING_CONFIG(Player player, int filter) { return invoke <void>(0x83FCD6921FC8FD05, player, filter); }
	static Any _0xE92261BD28C0878F(Any p0) { return invoke <Any>(0xE92261BD28C0878F, p0); }
	static void _SET_DEADEYE_ABILITY_DEPLETION_DELAY(Player player, float delay) { return invoke <void>(0x870634493CB4372C, player, delay); }
	static Any _0xA54000D4BFD90BDE(Any p0) { return invoke <Any>(0xA54000D4BFD90BDE, p0); }
	static void _0x6EDB5D08CB03E763(Any p0, Any p1) { return invoke <void>(0x6EDB5D08CB03E763, p0, p1); }
	static Any _0x27AD7162D3FED01E(Any p0, Any p1) { return invoke <Any>(0x27AD7162D3FED01E, p0, p1); }
	static int _GET_NUM_MARKED_DEADEYE_TARGETS(Player player) { return invoke <int>(0xCCD9B77F70D31C9D, player); }
	static Any _0xC93A9A45430D484E(Any p0) { return invoke <Any>(0xC93A9A45430D484E, p0); }
	static void _0x570A13A4CA2799BB(Player player, bool p1) { return invoke <void>(0x570A13A4CA2799BB, player, p1); }
	static void _0x3ACAC8832E77BC93(Player player, bool p1) { return invoke <void>(0x3ACAC8832E77BC93, player, p1); }
	static void _0x2B12B6FC8B8772AB(Player player, int p1) { return invoke <void>(0x2B12B6FC8B8772AB, player, p1); }
	static void _0xE910932F4B30BE23(Player player) { return invoke <void>(0xE910932F4B30BE23, player); }
	static void _0x131E294EF60160DF(Player player, float p1, float p2, float p3, float p4, Any p5) { return invoke <void>(0x131E294EF60160DF, player, p1, p2, p3, p4, p5); }
	static void _0x0E9057A9DA78D0F8(Player player, int bitflag) { return invoke <void>(0xE9057A9DA78D0F8, player, bitflag); }
	static void _0x263D69767F76059C(Player player, int p1) { return invoke <void>(0x263D69767F76059C, player, p1); }
	static void _REGISTER_EAGLE_EYE_FOR_ENTITY(Player player, Entity entity, bool p2) { return invoke <void>(0x543DFE14BE720027, player, entity, p2); }
	static void _REGISTER_EAGLE_EYE_TRAILS_FOR_ENTITY(Player player, Entity entity, Any p2) { return invoke <void>(0xAC67098A1E54ABB0, player, entity, p2); }
	static void _UNREGISTER_EAGLE_EYE_FOR_ENTITY(Player player, Entity entity) { return invoke <void>(0x9DAE1380CC5C6451, player, entity); }
	static void _UNREGISTER_EAGLE_EYE_TRAILS_FOR_ENTITY(Player player, Entity entity, Any p2) { return invoke <void>(0x9A957912CE2EABD1, player, entity, p2); }
	static void _0xE5D3EB37ABC1EB03(Player player) { return invoke <void>(0xE5D3EB37ABC1EB03, player); }
	static bool _IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(Player player, Entity entity) { return invoke <bool>(0xE6846476906C9DD, player, entity); }
	static Any _0x6852288340B43239(Any p0, Any p1) { return invoke <Any>(0x6852288340B43239, p0, p1); }
	static Any _0xE50A67C33514A390(Any p0, Any p1) { return invoke <Any>(0xE50A67C33514A390, p0, p1); }
	static void _0xD288E02E364972D2(Any p0, Any p1, Any p2) { return invoke <void>(0xD288E02E364972D2, p0, p1, p2); }
	static void _EAGLE_EYE_DISABLE_TRACKING_TRAIL(Entity entity, const char* trail, Any p2, Any p3) { return invoke <void>(0x40AB73092C95B5F5, entity, trail, p2, p3); }
	static void _0x6ECFC621A168424C(Entity entity1, Entity entity2, Any p2, float p3) { return invoke <void>(0x6ECFC621A168424C, entity1, entity2, p2, p3); }
	static void _0xDC5E09D012D759C4(Entity entity1, Entity entity2, Any p2) { return invoke <void>(0xDC5E09D012D759C4, entity1, entity2, p2); }
	static void _0x00B156AFEBCC5AE0(Any p0) { return invoke <void>(0xB156AFEBCC5AE0, p0); }
	static void _0xC58CE6824E604DEC(Any p0) { return invoke <void>(0xC58CE6824E604DEC, p0); }
	static void _0x330CA55A3647FA1C(Any p0, Any p1) { return invoke <void>(0x330CA55A3647FA1C, p0, p1); }
	static Any _0xA62BBAAE67A05BB0(Any p0) { return invoke <Any>(0xA62BBAAE67A05BB0, p0); }
	static void _EAGLE_EYE_SET_COLOR(Player player, bool p1, void* p2) { return invoke <void>(0x2C41D93F550D5E37, player, p1, p2); }
	static void _0x22C8B10802301381(Any p0, Any p1) { return invoke <void>(0x22C8B10802301381, p0, p1); }
	static void _EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(Player player, float modifier) { return invoke <void>(0xE0D6C2A146A5C993, player, modifier); }
	static void _0x06E1FB78B1E59CA5(Ped ped, bool p1) { return invoke <void>(0x6E1FB78B1E59CA5, ped, p1); }
	static void _EAGLE_EYE_SET_PLUS_FLAG_DISABLED(Ped ped, bool disabled) { return invoke <void>(0xCE285A4413B00B7F, ped, disabled); }
	static Any _0x3813E11A378958A5(Any p0) { return invoke <Any>(0x3813E11A378958A5, p0); }
	static void _EAGLE_EYE_SET_FOCUS_ON_ASSOCIATED_CLUE_TRAIL(Player player, Entity linkedWaypointPed) { return invoke <void>(0x2AF423D6ECB2C485, player, linkedWaypointPed); }
	static void _0x0F9CF06986300875(Any p0) { return invoke <void>(0xF9CF06986300875, p0); }
	static void _EAGLE_EYE_SET_TRACKING_UPGRADE(Player player, float p1) { return invoke <void>(0xDFC85C5199045026, player, p1); }
	static void _EAGLE_EYE_SET_TRACKING_UPGRADE_2(Player player, float p1) { return invoke <void>(0x6FA957D1B55941C1, player, p1); }
	static Any _0x1DA5C5B0923E1B85(Any p0) { return invoke <Any>(0x1DA5C5B0923E1B85, p0); }
	static Any _0xAAED694CE814817F(Any p0) { return invoke <Any>(0xAAED694CE814817F, p0); }
	static void EAGLE_EYE_SET_CUSTOM_ENTITY_TINT(Entity entity, int red, int green, int blue) { return invoke <void>(0x62ED71E133B6C9F1, entity, red, green, blue); }
	static void _0xBC02B3D151D3859F(Entity entity, Any p1) { return invoke <void>(0xBC02B3D151D3859F, entity, p1); }
	static void _EAGLE_EYE_SET_CUSTOM_DISTANCE(Entity entity, float distance) { return invoke <void>(0x907B16B3834C69E2, entity, distance); }
	static void _0xF21C7A3F3FFBA629(Player player) { return invoke <void>(0xF21C7A3F3FFBA629, player); }
	static void _SET_PLAYER_MANAGE_BUFF_SUPER_JUMP(Player player, float p1) { return invoke <void>(0x292F0B6EDC82E3A4, player, p1); }
	static void _SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG(int flagId, bool toggle) { return invoke <void>(0x7146CF430965927C, flagId, toggle); }
	static void _SET_PLAYER_MAX_AMMO_OVERRIDE_FOR_AMMO_TYPE(Player player, Hash ammoType, int amount) { return invoke <void>(0xE133C1EC5300F740, player, ammoType, amount); }
	static void _0xC900A465364A85D6(Player player) { return invoke <void>(0xC900A465364A85D6, player); }
	static void _0xCFB2EED4FCB7BD77(Any p0, Any p1, Any p2) { return invoke <void>(0xCFB2EED4FCB7BD77, p0, p1, p2); }
	static void _0x2BB8D58E88777499(Any p0) { return invoke <void>(0x2BB8D58E88777499, p0); }
	static void _0x00EB5A760638DB55(Any p0, Any p1, Any p2) { return invoke <void>(0xEB5A760638DB55, p0, p1, p2); }
	static void _0x65887EAC535A0B0C(Any p0) { return invoke <void>(0x65887EAC535A0B0C, p0); }
	static void _SET_WEAPON_DEGRADATION_MODIFIER(Player player, float modifier) { return invoke <void>(0x11A7FF918EF6BC66, player, modifier); }
	static void _SET_BOW_DRAW_REDUCTION_TIME_IN_DEADEYE(Player player, float drawReductionTime) { return invoke <void>(0xBE0C524970892D41, player, drawReductionTime); }
	static void _SET_BOW_STAMINA_DRAIN_SPEED(Player player, float staminaDrain) { return invoke <void>(0xFE7C9CF376D23342, player, staminaDrain); }
	static void _SET_DAMAGE_CLOSE_DISTANCE_BONUS(Player player, float closeRangeLowerBound, float closeRangeUpperBound) { return invoke <void>(0x7761A30432C91297, player, closeRangeLowerBound, closeRangeUpperBound); }
	static void _SET_DAMAGE_CLOSE_DISTANCE_BONUS_TOTAL(Player player, float closeDamageBonus) { return invoke <void>(0x5006C36652D6EC56, player, closeDamageBonus); }
	static void _SET_DAMAGE_FAR_DISTANCE_BONUS(Player player, float farRangeLowerBound, float farRangeUpperBound) { return invoke <void>(0xED591CB17C8BA216, player, farRangeLowerBound, farRangeUpperBound); }
	static void _SET_DAMAGE_FAR_DISTANCE_BONUS_TOTAL(Player player, float farDamageBonus) { return invoke <void>(0x1F0E3A4434565F8F, player, farDamageBonus); }
	static Any _0x6C54E69516CC56BD(Any p0) { return invoke <Any>(0x6C54E69516CC56BD, p0); }
	static void _0x3A8611BD7BDE84F7(Any p0, Any p1) { return invoke <void>(0x3A8611BD7BDE84F7, p0, p1); }
	static void _0xC177C827CEFC0AA4(Any p0, Any p1) { return invoke <void>(0xC177C827CEFC0AA4, p0, p1); }
	static void _0xBD96185264DDAAEA(Any p0, Any p1) { return invoke <void>(0xBD96185264DDAAEA, p0, p1); }
	static void _0x628E742FE1F79C4A(Any p0, Any p1) { return invoke <void>(0x628E742FE1F79C4A, p0, p1); }
	static void _SET_PLAYER_INTERACTION_POSITIVE_RESPONSE(Player player, const char* speech) { return invoke <void>(0xC6366A585659D15C, player, speech); }
	static void _SET_PLAYER_INTERACTION_NEGATIVE_RESPONSE(Player player, const char* speech) { return invoke <void>(0x98CD760DE43B612E, player, speech); }
	static void _0x216BC0D3D2E413D2(Player player, Any p1) { return invoke <void>(0x216BC0D3D2E413D2, player, p1); }
	static void _0x45EF176B532CA851(Any p0, Any p1) { return invoke <void>(0x45EF176B532CA851, p0, p1); }
	static void _0xA342495F93B7B838(Any p0, Any p1) { return invoke <void>(0xA342495F93B7B838, p0, p1); }
	static void _0x3BB84F812E052C90(Any p0) { return invoke <void>(0x3BB84F812E052C90, p0); }
	static void _0x9FC5A003FB76EDBD(Any p0, Any p1) { return invoke <void>(0x9FC5A003FB76EDBD, p0, p1); }
	static void _0x0FAF95D71ED67ADE(Player player, const char* p1) { return invoke <void>(0xFAF95D71ED67ADE, player, p1); }
	static void _0x988C9045531B9FCE(Player player, const char* p1) { return invoke <void>(0x988C9045531B9FCE, player, p1); }
	static void _0x06C3DB00B69D5435(Player player, const char* p1) { return invoke <void>(0x6C3DB00B69D5435, player, p1); }
	static void _0xBB6EA5D59E926095(int category, Hash emote) { return invoke <void>(0xBB6EA5D59E926095, category, emote); }
	static bool _0xE1D356F5A66D0FFA(Hash emote) { return invoke <bool>(0xE1D356F5A66D0FFA, emote); }
	static void _0x929DDD5538F3DF1F(Any p0, Any p1) { return invoke <void>(0x929DDD5538F3DF1F, p0, p1); }
	static void _0xFA7DAAE3959E6C7B(Any p0, Any p1) { return invoke <void>(0xFA7DAAE3959E6C7B, p0, p1); }
	static void _0x9461A8FAB0378E5B(Any p0, Any p1) { return invoke <void>(0x9461A8FAB0378E5B, p0, p1); }
	static void _0xCB61A63AA53D7D22(Any p0, Any p1) { return invoke <void>(0xCB61A63AA53D7D22, p0, p1); }
	static void _0xCFFC3ECCD7A5CCEB(Player player, Hash weapon, bool p2) { return invoke <void>(0xCFFC3ECCD7A5CCEB, player, weapon, p2); }
	static void _0x76F7E1BCD623A429(Any p0) { return invoke <void>(0x76F7E1BCD623A429, p0); }
	static void _0x585CE159DB46FADB(Any p0, Any p1) { return invoke <void>(0x585CE159DB46FADB, p0, p1); }
	static void _SET_PLAYER_RESET_FLAG(Player player, int playerResetFlag, bool p2) { return invoke <void>(0x9F9A829C6751F3C7, player, playerResetFlag, p2); }
	static bool _GET_PLAYER_RESET_FLAG(Player player, int playerResetFlag) { return invoke <bool>(0xFE691E89C08937B6, player, playerResetFlag); }
	static Ped GET_MOUNT_OWNED_BY_PLAYER(Player player) { return invoke <Ped>(0xF49F14462F0AE27C, player); }
	static Player _GET_PLAYER_OWNER_OF_MOUNT(Ped mount) { return invoke <Player>(0xAD03B03737CE6810, mount); }
	static void _SET_PLAYER_OWNS_MOUNT(Player player, Ped mount) { return invoke <void>(0xE6D4E435B56D5BD0, player, mount); }
	static Vehicle _GET_VEHICLE_OWNED_BY_PLAYER(Player player) { return invoke <Vehicle>(0xB9050A97594C8832, player); }
	static Player _GET_PLAYER_OWNER_OF_VEHICLE(Vehicle vehicle) { return invoke <Player>(0x7C803BDC8343228D, vehicle); }
	static void _SET_PLAYER_OWNS_VEHICLE(Player player, Vehicle vehicle) { return invoke <void>(0xD0E02AA618020D17, player, vehicle); }
	static Vehicle _GET_PLAYER_HUNTING_WAGON(Player player) { return invoke <Vehicle>(0x5CA6BBD4A7D8145E, player); }
	static void _SET_PLAYER_HUNTING_WAGON(Player player, Vehicle wagon) { return invoke <void>(0x6A4404BDFA62CE2C, player, wagon); }
	static void _0x9044835BE9D9DBFE(Any p0, Any p1) { return invoke <void>(0x9044835BE9D9DBFE, p0, p1); }
	static Hash GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(Entity entity, Hash* type) { return invoke <Hash>(0x139637A3BFF8B6D, entity, type); }
	static Hash _GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(Hash p0, bool model, bool outfit) { return invoke <Hash>(0x8E84119A23C16623, p0, model, outfit); }
	static Hash GET_TARGET_CHARACTER_NAME_SCRIPT_OVERRIDE_HASH(Ped ped) { return invoke <Hash>(0x335106F3ACABBED, ped); }
	static const char* GET_TARGET_CHARACTER_NAME_SCRIPT_OVERRIDE_RAW_STRING(Ped ped) { return invoke <const char*>(0x755E08680F21EF30, ped); }
	static Hash GET_TARGET_CHARACTER_NAME_FOR_LOCAL_PLAYER(Ped ped) { return invoke <Hash>(0x36E3D8B5A6552FE8, ped); }
	static Any _0xDA9D7BE231FE865F(Any p0, Any p1, Any p2) { return invoke <Any>(0xDA9D7BE231FE865F, p0, p1, p2); }
	static void _SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(Player player, int p1, Hash discoveryHash) { return invoke <void>(0x946D46CD6DFB9742, player, p1, discoveryHash); }
	static bool _GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_SP(Player player, int p1, Hash discoveryHash) { return invoke <bool>(0x772F87D7B07719A, player, p1, discoveryHash); }
	static void _0xCDDD4B74660E2335(Any p0, Any p1, Any p2) { return invoke <void>(0xCDDD4B74660E2335, p0, p1, p2); }
	static void _0x77E83C315A3B31CA(Any p0) { return invoke <void>(0x77E83C315A3B31CA, p0); }
	static void _SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP(Hash discoveryHash) { return invoke <void>(0x7C32191D9FB2BDEA, discoveryHash); }
	static bool GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(Hash discoveryHash) { return invoke <bool>(0x354F689C4FFAAB37, discoveryHash); }
	static void _MODIFY_PLAYER_DISCOVERED_CHARACTER_NAME_MP_SET_UNDISCOVERED(Hash discoveryHash) { return invoke <void>(0xFB0E622B401884D3, discoveryHash); }
	static void _SET_SHOW_INFO_CARD(Player player, bool showingInfoCard) { return invoke <void>(0xDC68829BB3F37023, player, showingInfoCard); }
	static void _0x4DBC4873707E8FD6(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x4DBC4873707E8FD6, p0, p1, p2, p3); }
	static void _0xCEDC16930526F728(Any p0) { return invoke <void>(0xCEDC16930526F728, p0); }
	static void _0x14E57F88BA0A07FC(Hash location) { return invoke <void>(0x14E57F88BA0A07FC, location); }
	static Any _0x2E1ABE627C95ED9B() { return invoke <Any>(0x2E1ABE627C95ED9B); }
	static void _0x497A18F8F88AA9D8() { return invoke <void>(0x497A18F8F88AA9D8); }
	static void _0x4F0D2256AAE94EDA(int p0) { return invoke <void>(0x4F0D2256AAE94EDA, p0); }
	static void _SET_LOCKON_FOCUS_FIRE_VFX(Player player, const char* p1) { return invoke <void>(0x5F8E0303C229C84B, player, p1); }
	static Any _0x0B7803F6F7BB43E0() { return invoke <Any>(0xB7803F6F7BB43E0); }
	static Any _0xC74EB3F2EC169F6B(Any p0) { return invoke <Any>(0xC74EB3F2EC169F6B, p0); }
	static void _0x3B296934DB026873(Any p0, Any p1) { return invoke <void>(0x3B296934DB026873, p0, p1); }
	static void SET_MIN_TIME_BEFORE_HORSE_BUCKING(Ped mount, int iMinBuckTime) { return invoke <void>(0x506CE71FB6E8CF5E, mount, iMinBuckTime); }
	static Any _0xF4CB347D7B5EB0FD() { return invoke <Any>(0xF4CB347D7B5EB0FD); }
	static void _0xCD7CA3013FD12749(Any p0, Any p1) { return invoke <void>(0xCD7CA3013FD12749, p0, p1); }
	static void _FORCE_REST_SCENARIO(bool toggle) { return invoke <void>(0xE5A3DD2FF84E1A4B, toggle); }
	static bool _0x57028FD99886F6F9() { return invoke <bool>(0x57028FD99886F6F9); }
	static void _0x35A33783EC3C3448(Any p0) { return invoke <void>(0x35A33783EC3C3448, p0); }
	static void _0x39D8D7082BC34B72(Any p0) { return invoke <void>(0x39D8D7082BC34B72, p0); }
	static void _0x1AD8AD999C27F44A(Any p0) { return invoke <void>(0x1AD8AD999C27F44A, p0); }
}

namespace POPULATION
{
	static int GET_NUM_MODELS_IN_POPULATION_SET(Hash popSetHash) { return invoke <int>(0xA1E3171ED0E47564, popSetHash); }
	static Hash GET_PED_MODEL_NAME_IN_POPULATION_SET(Hash popSetHash, int index) { return invoke <Hash>(0x3EAFA1C533B7139E, popSetHash, index); }
	static Hash GET_RANDOM_MODEL_FROM_POPULATION_SET(Hash popSetHash, int flags, Hash p2, bool p3, bool p4, float x, float y, float z) { return invoke <Hash>(0x6B12ED8C77E8567B, popSetHash, flags, p2, p3, p4, x, y, z); }
	static PopZone _CREATE_POPZONE_FROM_VOLUME(Volume volume) { return invoke <PopZone>(0x9AC1C64FE46B6D09, volume); }
	static void _DELETE_SCRIPT_POPZONE(PopZone popZone) { return invoke <void>(0xA6E6A66FC4CA4224, popZone); }
	static bool _IS_POPZONE_VALID(PopZone popZone) { return invoke <bool>(0xA5BD585005EFCAD4, popZone); }
	static void SET_POPZONE_POPULATION_SET(PopZone popZone, Hash populationSetHash) { return invoke <void>(0x3E6A49D9B519E85C, popZone, populationSetHash); }
	static void _0x7E6BC0B94F5928F0(PopZone popZone, int p1, int p2) { return invoke <void>(0x7E6BC0B94F5928F0, popZone, p1, p2); }
	static void _0x578E2FA64E847C60(PopZone popZone, int p1) { return invoke <void>(0x578E2FA64E847C60, popZone, p1); }
	static void _0x08892122769770D5(PopZone popZone, bool p1) { return invoke <void>(0x8892122769770D5, popZone, p1); }
	static void _0x0F1861101C9A9944(PopZone popZone, bool p1) { return invoke <void>(0xF1861101C9A9944, popZone, p1); }
	static void SET_SPAWNER_INFO_PRIORITY(Hash p0, Hash p1, int priority) { return invoke <void>(0x60CDE717A6D47769, p0, p1, priority); }
	static void CLEAR_SPAWNER_INFO_PRIORITY(Hash p0, Hash p1) { return invoke <void>(0x217A54DE2D200305, p0, p1); }
	static void _0x638FCFC6042A9473(Any p0, Any p1) { return invoke <void>(0x638FCFC6042A9473, p0, p1); }
	static void _ADD_AMBIENT_AVOIDANCE_RESTRICTION(Volume volume, int includeFlags, int excludeFlags, Hash p3, Hash p4, Hash p5, int p6) { return invoke <void>(0xB56D41A694E42E86, volume, includeFlags, excludeFlags, p3, p4, p5, p6); }
	static void _REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Volume volume) { return invoke <void>(0x74C2B3DC0B294102, volume); }
	static void _ADD_AMBIENT_SPAWN_RESTRICTION(Volume volume, int includeFlags, int excludeFlags, Hash p3, Hash p4, Hash p5, int p6) { return invoke <void>(0x18262CAFEBB5FBE1, volume, includeFlags, excludeFlags, p3, p4, p5, p6); }
	static void _REMOVE_AMBIENT_SPAWN_RESTRICTION(Volume volume) { return invoke <void>(0xA1CFB35069D23C23, volume); }
	static void _0x2161278C6322F740(int includeFlags, int excludeFlags, int p2, Hash p3, int p4, Volume volume) { return invoke <void>(0x2161278C6322F740, includeFlags, excludeFlags, p2, p3, p4, volume); }
	static void _0xF45E46DEECF7DF6E(int bitFlag, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0xF45E46DEECF7DF6E, bitFlag, p1, p2, p3, p4); }
	static void _0x8EC7CD701F872F87(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <void>(0x8EC7CD701F872F87, p0, p1, p2, p3, p4, p5); }
	static void _0xC4533E3E87125C9E(Any p0) { return invoke <void>(0xC4533E3E87125C9E, p0); }
	static void _SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Ped ped, int p1) { return invoke <void>(0xF74E134F40192884, ped, p1); }
	static void _0xDBBF12EA7C1029B2(Any p0, Any p1) { return invoke <void>(0xDBBF12EA7C1029B2, p0, p1); }
	static void _0x247F86595D396344(Any p0) { return invoke <void>(0x247F86595D396344, p0); }
	static void _0x324AB2A68AD8AEE5() { return invoke <void>(0x324AB2A68AD8AEE5); }
	static void DISABLE_AMBIENT_ROAD_POPULATION(bool unk) { return invoke <void>(0xC6DCC2A3A8825C85, unk); }
	static void ENABLE_AMBIENT_ROAD_POPULATION() { return invoke <void>(0xBC90BDF4E5228EA1); }
	static void _0x2660E7720EDC4BD0(Any p0, Any p1, Any p2) { return invoke <void>(0x2660E7720EDC4BD0, p0, p1, p2); }
	static Hash _GET_RANDOM_FISH_TYPE_FOR_LOCATION() { return invoke <Hash>(0x595478B3BBC3076D); }
	static void _0xEC116EDB683AD479(bool p0) { return invoke <void>(0xEC116EDB683AD479, p0); }
}

namespace POSSE
{
	static Any _0xC086FF658B2E51DB() { return invoke <Any>(0xC086FF658B2E51DB); }
	static Any _0xC086FF658B2E51DA(Any p0) { return invoke <Any>(0xC086FF658B2E51DA, p0); }
	static Any _0xC087FF658B2E51DA(Any p0, Any p1) { return invoke <Any>(0xC087FF658B2E51DA, p0, p1); }
	static int POSSE_GET_POSSE_MEMBERSHIP_COUNT() { return invoke <int>(0xC088FF658B2E51DA); }
	static Any _0xC089FF658B2E51DA(Any p0, Any p1) { return invoke <Any>(0xC089FF658B2E51DA, p0, p1); }
	static void _0xC08AFF658B2E51DA(Any p0) { return invoke <void>(0xC08AFF658B2E51DA, p0); }
	static Any _0xC08BFF658B2E51DA(Any p0) { return invoke <Any>(0xC08BFF658B2E51DA, p0); }
	static void _0xC08AFF658B2E51DB(Any p0) { return invoke <void>(0xC08AFF658B2E51DB, p0); }
	static Any _0xC08CFF658B2E51DA(Any p0, Any p1) { return invoke <Any>(0xC08CFF658B2E51DA, p0, p1); }
	static Any _0xC09CFF658B2E51DA(Any p0, Any p1, Any p2) { return invoke <Any>(0xC09CFF658B2E51DA, p0, p1, p2); }
	static Any _0xC08DEF658B2E51DA(Any p0) { return invoke <Any>(0xC08DEF658B2E51DA, p0); }
	static Any _0xC08DFF658B2E51DA() { return invoke <Any>(0xC08DFF658B2E51DA); }
	static Any _0xC08DFF658B2E51DB(Any p0) { return invoke <Any>(0xC08DFF658B2E51DB, p0); }
	static Any _0xC08EFF658B2E51DB(Any p0, Any p1) { return invoke <Any>(0xC08EFF658B2E51DB, p0, p1); }
	static Any _0xC08FFF658B2E51DA() { return invoke <Any>(0xC08FFF658B2E51DA); }
	static Any _0xC08FFF658B2E51DB(Any p0) { return invoke <Any>(0xC08FFF658B2E51DB, p0); }
	static Any _0xC084FF658B2E61DA(Any p0) { return invoke <Any>(0xC084FF658B2E61DA, p0); }
	static Any _0xC084FF658B2E71DA(Any p0, Any p1, Any p2) { return invoke <Any>(0xC084FF658B2E71DA, p0, p1, p2); }
	static Any _0xC084FF658B2E81DA(Any p0, Any p1, Any p2) { return invoke <Any>(0xC084FF658B2E81DA, p0, p1, p2); }
	static Any _0xC084FF658B2E52DA(Any p0) { return invoke <Any>(0xC084FF658B2E52DA, p0); }
	static Any _0xC084FF658B2E53DA() { return invoke <Any>(0xC084FF658B2E53DA); }
	static Any _0xC084FF658B2E54DA(Any p0) { return invoke <Any>(0xC084FF658B2E54DA, p0); }
	static Any _0xC084FF658B2E55DA(Any p0, Any p1) { return invoke <Any>(0xC084FF658B2E55DA, p0, p1); }
	static void _0xC484FF658B2E55DA(Any p0) { return invoke <void>(0xC484FF658B2E55DA, p0); }
	static void _0xC584FF658B2E55DA(Any p0) { return invoke <void>(0xC584FF658B2E55DA, p0); }
	static void _0xC684FF658B2E55DA(Any p0) { return invoke <void>(0xC684FF658B2E55DA, p0); }
	static Any _0xC184FF658B2E55DA(Any p0, Any p1) { return invoke <Any>(0xC184FF658B2E55DA, p0, p1); }
	static Any _0xC284FF658B2E55DA(Any p0, Any p1, Any p2) { return invoke <Any>(0xC284FF658B2E55DA, p0, p1, p2); }
	static Any _0xC394FF658B2E55DA(Any p0, Any p1, Any p2, Any p3) { return invoke <Any>(0xC394FF658B2E55DA, p0, p1, p2, p3); }
	static Any _0xC07CFF658B2E51DA(Any p0, Any p1) { return invoke <Any>(0xC07CFF658B2E51DA, p0, p1); }
	static Any _0xC06CFF658B2E51DA(Any p0, Any p1, Any p2) { return invoke <Any>(0xC06CFF658B2E51DA, p0, p1, p2); }
}

namespace PROPSET
{
	static bool _REQUEST_PROP_SET(Hash hash) { return invoke <bool>(0xF3DE57A46D5585E9, hash); }
	static bool _REQUEST_PROP_SET_2(Hash hash) { return invoke <bool>(0xE72F591958F3ACAB, hash); }
	static bool _HAS_PROP_SET_LOADED(Hash hash) { return invoke <bool>(0x48A88FC684C55FDC, hash); }
	static bool _HAS_PROP_SET_LOADED_2(Hash hash) { return invoke <bool>(0xD090ABEF4D6A7D96, hash); }
	static void _SET_PROP_SET_AS_NO_LONGER_NEEDED(PropSet propSet) { return invoke <void>(0x909E3C7FAE539FB1, propSet); }
	static void _DELETE_PROP_SET(PropSet propSet, bool p1, bool p2) { return invoke <void>(0x58AC173A55D9D7B4, propSet, p1, p2); }
	static bool _RELEASE_PROP_SET(Hash hash) { return invoke <bool>(0xB1964A83B345B4AB, hash); }
	static PropSet _CREATE_PROP_SET(Hash propsetType, float x, float y, float z, int placementType, float heading, float zProbe, bool p7, bool useVegMod) { return invoke <PropSet>(0xE65C5CBA95F0E510, propsetType, x, y, z, placementType, heading, zProbe, p7, useVegMod); }
	static PropSet _CREATE_PROP_SET_2(Hash propsetType, float x, float y, float z, int placementType, float heading, float zProbe, bool p7, bool useVegMod) { return invoke <PropSet>(0x899C97A1CCE7D483, propsetType, x, y, z, placementType, heading, zProbe, p7, useVegMod); }
	static PropSet CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY(Hash hash, float x, float y, float z, Entity entity, float p5, bool p6, int p7, bool p8) { return invoke <PropSet>(0x9609DBDDE18FAD8C, hash, x, y, z, entity, p5, p6, p7, p8); }
	static PropSet _CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY_2(Hash hash, float x, float y, float z, Entity entity, float p5, bool p6, int p7, bool p8) { return invoke <PropSet>(0xACA7FB30269096D4, hash, x, y, z, entity, p5, p6, p7, p8); }
	static bool DOES_PROP_SET_EXIST(PropSet propSet) { return invoke <bool>(0x7DDDCF815E650FF5, propSet); }
	static bool _DOES_PROP_SET_OF_TYPE_EXIST_NEAR_COORDS(Hash propsetHash, float x, float y, float z) { return invoke <bool>(0x72068021F498E6E3, propsetHash, x, y, z); }
	static bool IS_PROP_SET_FULLY_LOADED(PropSet propSet) { return invoke <bool>(0xF42DB680A8B2A4D9, propSet); }
	static void _SET_PROP_SET_VISIBLE(PropSet propSet, bool toggle) { return invoke <void>(0x9D096A5BD02F953E, propSet, toggle); }
	static bool _IS_PROP_SET_VISIBLE(PropSet propSet) { return invoke <bool>(0xCE8AAFE9E433A23, propSet); }
	static Hash _GET_PROP_SET_MODEL(PropSet propSet) { return invoke <Hash>(0xA6A9712955F53D9C, propSet); }
	static Hash _GET_VEHICLE_PROP_SET_HASH(Vehicle vehicle) { return invoke <Hash>(0x36F69E7A22655653, vehicle); }
	static int _GET_ENTITIES_FROM_PROP_SET(PropSet propSet, ItemSet itemSet, Hash model, bool p3, bool p4) { return invoke <int>(0x738271B660FE0695, propSet, itemSet, model, p3, p4); }
	static void _0xC4B67EF3FD65622D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <void>(0xC4B67EF3FD65622D, p0, p1, p2, p3, p4, p5); }
	static void _0x58E0B01D45CA7357(Any p0) { return invoke <void>(0x58E0B01D45CA7357, p0); }
	static void _SET_PROP_SET_FLAG(PropSet propSet, int flag) { return invoke <void>(0xC1AB7EEFD3E6EE49, propSet, flag); }
	static PropSet _GET_VEHICLE_PROP_SET(Vehicle vehicle) { return invoke <PropSet>(0xCE2ACD6F602803E5, vehicle); }
	static bool _DOES_VEHICLE_HAVE_ANY_PROP_SET(Vehicle vehicle) { return invoke <bool>(0x53784CEA0159439B, vehicle); }
	static void _ADD_PROP_SET_FOR_VEHICLE(Vehicle vehicle, Hash propset) { return invoke <void>(0xD80FAF919A2E56EA, vehicle, propset); }
	static void _REMOVE_VEHICLE_PROP_SETS(Vehicle vehicle) { return invoke <void>(0x3BCF32FF37EA9F1D, vehicle); }
	static bool _IS_VEHICLE_PROP_SET_LOADED(Vehicle vehicle) { return invoke <bool>(0x155B2FBE72D7D1D0, vehicle); }
	static void _ADD_ADDITIONAL_PROP_SET_FOR_VEHICLE(Vehicle vehicle, Hash propset) { return invoke <void>(0x75F90E4051CC084C, vehicle, propset); }
	static bool _IS_VEHICLE_PROP_SET_LOADED_ADDITIONAL(Vehicle vehicle) { return invoke <bool>(0x7264F9CA87A9830B, vehicle); }
	static PropSet _GET_VEHICLE_LIGHT_PROP_SET(Vehicle vehicle) { return invoke <PropSet>(0xA079300AF757FB1A, vehicle); }
	static bool _DOES_VEHICLE_HAVE_ANY_LIGHT_PROP_SET(Vehicle vehicle) { return invoke <bool>(0xC9B4B3A36F81FD75, vehicle); }
	static void _ADD_LIGHT_PROP_SET_TO_VEHICLE(Vehicle vehicle, Hash lightPropset) { return invoke <void>(0xC0F0417A90402742, vehicle, lightPropset); }
	static void _REMOVE_VEHICLE_LIGHT_PROP_SETS(Vehicle vehicle) { return invoke <void>(0xE31C0CB1C3186D40, vehicle); }
	static bool _IS_VEHICLE_LIGHT_PROP_SET_LOADED(Vehicle vehicle) { return invoke <bool>(0x790473EEE1977D3, vehicle); }
	static PropSet _GET_TRAIN_CARRIAGE_PROP_SET(Entity trainCarriage) { return invoke <PropSet>(0xCFC0BD09BB1B73FF, trainCarriage); }
	static bool _HAS_VEHICLE_TRAILER_PROP_SET_LOADED(Vehicle vehicle, int wagonIndex) { return invoke <bool>(0x8F3333F0A6900B3C, vehicle, wagonIndex); }
	static PropSet _GET_PROP_SET_AT_COORDS(Hash propsetHash, float x, float y, float z) { return invoke <PropSet>(0xC061E50F8D299F95, propsetHash, x, y, z); }
}

namespace QUEUE
{
	static bool _EVENT_QUEUE_IS_EMPTY(Hash hash) { return invoke <bool>(0x402B5D7D269FF796, hash); }
	static void _EVENT_QUEUE_POP(Hash hash) { return invoke <void>(0xD87DF294B049211D, hash); }
}

namespace RECORDING
{
	static void REPLAY_PREVENT_RECORDING_THIS_FRAME() { return invoke <void>(0xA8C44C13419634F2); }
}

namespace REPLAY
{
	static bool REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP() { return invoke <bool>(0xF838D47DE58EDB2); }
	static void SET_SCRIPTS_HAVE_CLEANED_UP_FOR_REPLAY_SYSTEM() { return invoke <void>(0x57C6525034E76EB0); }
	static bool OPEN_VIDEO_EDITOR() { return invoke <bool>(0xB3F2829907403C13); }
	static bool CLOSE_VIDEO_EDITOR(Any p0) { return invoke <bool>(0xCEEC64BD27A59312, p0); }
	static bool IS_VIDEO_EDITOR_RUNNING() { return invoke <bool>(0x9EEB007317FA3B9C); }
}

namespace SCRIPTS
{
	static void _SET_PLAYER_BIT_AT_INDEX(void* value, int bitIndex) { return invoke <void>(0x31010318BA9897AC, value, bitIndex); }
	static void _CLEAR_PLAYER_BIT_AT_INDEX(void* value, int bitIndex) { return invoke <void>(0xD426E2E3288469D6, value, bitIndex); }
	static void _0xE4ABE20DCE7C7CFE(Any p0, Any p1, Any p2) { return invoke <void>(0xE4ABE20DCE7C7CFE, p0, p1, p2); }
	static void _0xFFDDF802279BE128(Any p0, Any p1, Any p2) { return invoke <void>(0xFFDDF802279BE128, p0, p1, p2); }
	static void _0x64F765D9A1F8F02C(void* p0, void* p1, void* p2) { return invoke <void>(0x64F765D9A1F8F02C, p0, p1, p2); }
	static void _SET_ALL_PLAYER_BITS(void* value) { return invoke <void>(0x20F4CB76689ACDBC, value); }
	static void _CLEAR_ALL_PLAYER_BITS(void* value) { return invoke <void>(0xDE544B7EC0C187CC, value); }
	static bool _IS_PLAYER_BIT_SET_AT_INDEX(void* value, int bitIndex) { return invoke <bool>(0x72B2E00C9BAC6789, value, bitIndex); }
	static bool _IS_ANY_PLAYER_BIT_SET(int* playerBits) { return invoke <bool>(0x179A6F0EE2E79026, playerBits); }
	static int GET_BLOCK_OF_PLAYER_BITS(void* value, int p1) { return invoke <int>(0xFA3B530A5CC693D5, value, p1); }
	static void SET_BLOCK_OF_PLAYER_BITS(void* value, int p1, int p2) { return invoke <void>(0xC6DFB8C04C86D5A5, value, p1, p2); }
	static int COUNT_PLAYER_BITS(void* value) { return invoke <int>(0x462C687BEA254BD9, value); }
	static void _0x1BDB5A07307F6929(Any p0, Any p1) { return invoke <void>(0x1BDB5A07307F6929, p0, p1); }
	static void _0x1C5EB3C27F7508CB(Any p0, Any p1) { return invoke <void>(0x1C5EB3C27F7508CB, p0, p1); }
	static void _0x42A429CDFED6D99D(Any p0, Any p1, Any p2) { return invoke <void>(0x42A429CDFED6D99D, p0, p1, p2); }
	static void _0x5827BE85A87B073D(Any p0) { return invoke <void>(0x5827BE85A87B073D, p0); }
	static Any _0x0A79C81C418F5D38(Any p0, Any p1) { return invoke <Any>(0xA79C81C418F5D38, p0, p1); }
	static Any _0xA88E1D7FA1E20080(Any p0) { return invoke <Any>(0xA88E1D7FA1E20080, p0); }
	static int COUNT_PARTICIPANT_BITS(void* value) { return invoke <int>(0x2F050A3FF8738245, value); }
	static void REQUEST_SCRIPT(const char* scriptname) { return invoke <void>(0x46ED607DDD40D7FE, scriptname); }
	static void SET_SCRIPT_AS_NO_LONGER_NEEDED(const char* scriptname) { return invoke <void>(0x86D3067E1CFD1C, scriptname); }
	static bool HAS_SCRIPT_LOADED(const char* scriptname) { return invoke <bool>(0xE97BD36574F8B0A6, scriptname); }
	static bool DOES_SCRIPT_EXIST(const char* scriptname) { return invoke <bool>(0x552B171E3F69E5AE, scriptname); }
	static void REQUEST_SCRIPT_WITH_NAME_HASH(Hash hashOfScriptName) { return invoke <void>(0xF6B9CE3F8D5B9B74, hashOfScriptName); }
	static void SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Hash hashOfScriptName) { return invoke <void>(0x50723A1567C8361E, hashOfScriptName); }
	static bool HAS_SCRIPT_WITH_NAME_HASH_LOADED(Hash hashOfScriptName) { return invoke <bool>(0xA5D8E0C2F3C7EEBC, hashOfScriptName); }
	static bool DOES_SCRIPT_WITH_NAME_HASH_EXIST(Hash hashOfScriptName) { return invoke <bool>(0xA34E89749F628284, hashOfScriptName); }
	static void TERMINATE_THREAD(int thread) { return invoke <void>(0x87ED52AE40EA1A52, thread); }
	static bool IS_THREAD_ACTIVE(int thread, bool ignoreKilledState) { return invoke <bool>(0x46E9AE36D8FA6417, thread, ignoreKilledState); }
	static bool DOES_THREAD_EXIST(int threadId) { return invoke <bool>(0xFF975BC4435A0FA3, threadId); }
	static void GET_THREAD_EXISTENCE_DETAILS(int threadId, bool* threadExists, bool* hasScriptHandler) { return invoke <void>(0xD92FA81B64920E85, threadId, threadExists, hasScriptHandler); }
	static Hash _GET_HASH_OF_THREAD(int threadId) { return invoke <Hash>(0x724CB89D35B283D0, threadId); }
	static void SCRIPT_THREAD_ITERATOR_RESET() { return invoke <void>(0x39382EB8DCD8684D); }
	static int SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID() { return invoke <int>(0x3CE3FB167E837D7C); }
	static bool _IS_BACKGROUND_SCRIPT(int threadId) { return invoke <bool>(0x20B7F69B40C6B755, threadId); }
	static int GET_ID_OF_THIS_THREAD() { return invoke <int>(0x55525C346BEF6960); }
	static void TERMINATE_THIS_THREAD() { return invoke <void>(0x5E8B6D17FF91CD59); }
	static int GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Hash HashOfScriptName) { return invoke <int>(0x8E34C953364A76DD, HashOfScriptName); }
	static void _REQUEST_THREAD_EXIT(int threadId) { return invoke <void>(0x7DE4643157AD646C, threadId); }
	static void _REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(Hash nameHash) { return invoke <void>(0x7423F7835770F619, nameHash); }
	static bool IS_THREAD_EXIT_REQUESTED() { return invoke <bool>(0x9E4EF615E307FBBE); }
	static bool _IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(int threadId) { return invoke <bool>(0x30BED53646C86D11, threadId); }
	static int _GET_THREAD_EXIT_REASON() { return invoke <int>(0x54AE4FDEEFEAB77E); }
	static Hash GET_HASH_OF_THIS_SCRIPT_NAME() { return invoke <Hash>(0xBC2C927F5C264960); }
	static int GET_NUMBER_OF_EVENTS(int eventQueue) { return invoke <int>(0x5CE8DE5909565748, eventQueue); }
	static bool GET_EVENT_EXISTS(int eventQueue, Hash eventType) { return invoke <bool>(0xC9F59C0A710ECD34, eventQueue, eventType); }
	static Hash GET_EVENT_AT_INDEX(int eventQueue, int eventIndex) { return invoke <Hash>(0xA85E614430EFF816, eventQueue, eventIndex); }
	static bool GET_EVENT_DATA(int eventQueue, int eventIndex, void* data, int dataSize) { return invoke <bool>(0x57EC5FA4D4D6AFCA, eventQueue, eventIndex, data, dataSize); }
	static void SET_EVENT_FLAG_FOR_DELETION(int eventGroup, int eventIndex, bool p2) { return invoke <void>(0x4768D5252EAEB76F, eventGroup, eventIndex, p2); }
	static void TRIGGER_SCRIPT_EVENT(int eventQueue, void* data, int sizeOfData, int scriptMetadataIndex, int* playerBits) { return invoke <void>(0x5AE99C571D5BBE5D, eventQueue, data, sizeOfData, scriptMetadataIndex, playerBits); }
	static void _TRIGGER_SCRIPT_EVENT_2(void* eventData, int eventDataSize, int scriptMetadataIndex, int threadId) { return invoke <void>(0x8B61C950A148FFA2, eventData, eventDataSize, scriptMetadataIndex, threadId); }
	static Any _0xE7282390542F570D(Any p0) { return invoke <Any>(0xE7282390542F570D, p0); }
	static void _0x11B0A0B282FA9B10(bool p0) { return invoke <void>(0x11B0A0B282FA9B10, p0); }
	static void _0x6F700A4BF7C3331B(bool p0) { return invoke <void>(0x6F700A4BF7C3331B, p0); }
	static void _0xF9E951A1E5517C06() { return invoke <void>(0xF9E951A1E5517C06); }
	static void _0x76CBCD9EADC00955() { return invoke <void>(0x76CBCD9EADC00955); }
	static void SHUTDOWN_LOADING_SCREEN() { return invoke <void>(0xFC179D7E8886DADF); }
	static void SET_NO_LOADING_SCREEN(bool state) { return invoke <void>(0x5CB83156AA038F95, state); }
	static bool GET_NO_LOADING_SCREEN() { return invoke <bool>(0x323DAF00687E0F28); }
	static void _DISPLAY_LOADING_SCREENS(Hash p0, Hash p1, Hash p2, const char* gamemodeName, const char* title, const char* subtitle) { return invoke <void>(0x1E5B70E53DB661E5, p0, p1, p2, gamemodeName, title, subtitle); }
	static void _0x29FB4CE89472C3CB(Any p0, Any p1, float p2, float p3, const char* p4, const char* p5, const char* p6, int p7) { return invoke <void>(0x29FB4CE89472C3CB, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void STOP_DISPLAYING_MP_TRANSITION_LOADING_SCREENS(Any p0) { return invoke <void>(0x778D4733E0F2F265, p0); }
	static bool IS_LOADING_SCREEN_VISIBLE() { return invoke <bool>(0xB54ADBE65D528FCB); }
	static void BAIL_TO_LANDING_PAGE(int bailCode) { return invoke <void>(0xBC2C927F5C264243, bailCode); }
	static void BAIL_WITH_PASS_THROUGH_PARAMS(const char* params) { return invoke <void>(0xE98204D3C25AE14C, params); }
	static bool BG_IS_EXITFLAG_SET() { return invoke <bool>(0x2238EC3EC631AB1F); }
	static void BG_SET_EXITFLAG_RESPONSE() { return invoke <void>(0x4858148E3B8A75D0); }
	static void BG_START_CONTEXT_HASH(Hash context) { return invoke <void>(0x2EB67D564DCC09D5, context); }
	static void BG_END_CONTEXT_HASH(Hash context) { return invoke <void>(0x6D1431744182CDE8, context); }
	static void BG_START_CONTEXT(const char* context) { return invoke <void>(0x49BA5678BA040CA7, context); }
	static void BG_END_CONTEXT(const char* context) { return invoke <void>(0x3ABF7BA1C3E2C8CF, context); }
	static bool BG_DOES_LAUNCH_PARAM_EXIST(int bgScriptId, const char* paramName) { return invoke <bool>(0x4AE1DFF337A86FDE, bgScriptId, paramName); }
	static int BG_GET_LAUNCH_PARAM_VALUE(int bgScriptId, const char* paramName) { return invoke <int>(0x55C40B7592BAD213, bgScriptId, paramName); }
	static int BG_GET_SCRIPT_ID_FROM_NAME_HASH(Hash scriptNameHash) { return invoke <int>(0x829CD22E043A2577, scriptNameHash); }
	static void _BG_RELOAD_ALL_BACKGROUND_SCRIPTS() { return invoke <void>(0xBE7D814CFA181B56); }
	static void _ACTIVATE_GOAL_CONTEXT(Hash goalContext) { return invoke <void>(0x7D654266025E921B, goalContext); }
	static void _DEACTIVATE_GOAL_CONTEXT(Hash goalContext) { return invoke <void>(0x50B72A754EE64A71, goalContext); }
	static bool _IS_GOAL_CONTEXT_ACTIVE(Hash goalContext) { return invoke <bool>(0x7409669C5ED50144, goalContext); }
	static const char* _NET_RPC_GUID_TO_STRING(void* netRpcGuid) { return invoke <const char*>(0xAC9FF854BD4BA9B5, netRpcGuid); }
	static bool AWARDS_GET_RESULT_ITEM(void* rpcGuid, Hash awardHash, int itemIndex, void* outResultItem) { return invoke <bool>(0xAC8FAB22A914AE34, rpcGuid, awardHash, itemIndex, outResultItem); }
	static bool _AWARDS_GET_UNLOCK_CLAIM_DATA(void* rpcGuid, Hash awardHash, int dataIndex, void* outUnlockData) { return invoke <bool>(0xB9467E41DAB1CF2C, rpcGuid, awardHash, dataIndex, outUnlockData); }
	static bool _LOOT_GET_RESULT_ITEM(void* rpcGuid, int itemIndex, void* outResultItem) { return invoke <bool>(0x4293B44A855F82CC, rpcGuid, itemIndex, outResultItem); }
	static bool _LOOT_GET_LOOT_CLAIM_DATA(void* rpcGuid, int dataIndex, void* outLootData) { return invoke <bool>(0xF1E9045F5AA9E428, rpcGuid, dataIndex, outLootData); }
	static bool _STORE_GLOBAL_BLOCK(int index) { return invoke <bool>(0xB952A3AC41D58F2F, index); }
	static bool _RESTORE_GLOBAL_BLOCK(int index) { return invoke <bool>(0xDC3914A99B4A5FDF, index); }
	static bool _DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(int index) { return invoke <bool>(0x66EE5B93C308F734, index); }
	static void _SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(int index, bool toggle) { return invoke <void>(0xE66F392BFCE734AF, index, toggle); }
	static bool _GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(int index) { return invoke <bool>(0x42A7EB5C814C2DE0, index); }
	static void _SET_ALL_GLOBAL_BLOCKS_HAVE_BEEN_LOADED(bool toggle) { return invoke <void>(0x11986B05885564D2, toggle); }
	static bool HAVE_ALL_CHILD_SCRIPTS_TERMINATED(int p0) { return invoke <bool>(0x380FFA15B72408FB, p0); }
	static int START_NEW_SCRIPT(const char* pScriptName, int stackSize) { return invoke <int>(0xE81651AD79516E48, pScriptName, stackSize); }
	static int START_NEW_SCRIPT_WITH_ARGS(const char* pScriptName, void* args, int argCount, int stackSize) { return invoke <int>(0xB8BA7F44DF1575E1, pScriptName, args, argCount, stackSize); }
	static int START_NEW_SCRIPT_WITH_NAME_HASH(Hash scriptHash, int stackSize) { return invoke <int>(0xEB1C67C3A5333A92, scriptHash, stackSize); }
	static int START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Hash scriptHash, void* args, int argCount, int stackSize) { return invoke <int>(0xC4BB298BD441BE78, scriptHash, args, argCount, stackSize); }
}

namespace SAVE
{
	static void _0x4FB5869E2B37FC00() { return invoke <void>(0x4FB5869E2B37FC00); }
	static bool SAVEGAME_SAVE_SP(Hash savegameType) { return invoke <bool>(0x62C9EB51656D68CE, savegameType); }
	static bool SAVEGAME_SAVE_MP(Hash savegameType) { return invoke <bool>(0x1840F3B30ED0105F, savegameType); }
	static bool SAVEGAME_IS_SAVE_PENDING() { return invoke <bool>(0x3CF46F55C6585590); }
	static Any _0x1431540BCA1A1BD2() { return invoke <Any>(0x1431540BCA1A1BD2); }
	static Any _0xA7ECEBAFBAF997A5(Hash savegameType) { return invoke <Any>(0xA7ECEBAFBAF997A5, savegameType); }
	static void _0xED4B0C1057892B2E(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xED4B0C1057892B2E, p0, p1, p2, p3); }
	static void _0x9BB83C4DD7BE0802(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x9BB83C4DD7BE0802, p0, p1, p2, p3, p4); }
	static void _0xE8346E62FD7FB962() { return invoke <void>(0xE8346E62FD7FB962); }
	static void _0xC0ABF784590798A9(Any p0) { return invoke <void>(0xC0ABF784590798A9, p0); }
	static Any _0xB00CE33465B5406D(Any p0, Any p1) { return invoke <Any>(0xB00CE33465B5406D, p0, p1); }
	static void _SAVEGAME_GET_INT_2(void* p0, const char* variableName) { return invoke <void>(0x529B9CCD0972AF4D, p0, variableName); }
	static void _SAVEGAME_GET_INT(void* p0, const char* variableName) { return invoke <void>(0x529B9CCD0972AF4E, p0, variableName); }
	static void _SAVEGAME_GET_INT_3(void* p0, const char* variableName) { return invoke <void>(0xB25B5A375BE5BE26, p0, variableName); }
	static void _SAVEGAME_GET_FLOAT(void* p0, const char* variableName) { return invoke <void>(0x35DEFECAE36D4FAE, p0, variableName); }
	static void _SAVEGAME_GET_BOOL(void* p0, const char* variableName) { return invoke <void>(0xBB7F4273C186BC4B, p0, variableName); }
	static void _SAVEGAME_GET_TEXT_LABEL_23(void* p0, const char* variableName) { return invoke <void>(0x5A10D6506B2F2C63, p0, variableName); }
	static void _SAVEGAME_GET_TEXT_LABEL_31(void* p0, const char* variableName) { return invoke <void>(0x4845E7E7643A908C, p0, variableName); }
	static void _SAVEGAME_GET_TEXT_LABEL_63(void* p0, const char* variableName) { return invoke <void>(0x186608A2AC6F9E88, p0, variableName); }
	static void _0x443174C20B8B9E7F(Any p0, Any p1, Any p2) { return invoke <void>(0x443174C20B8B9E7F, p0, p1, p2); }
	static void _0x8E8FFB9E4AD051D2(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x8E8FFB9E4AD051D2, p0, p1, p2, p3); }
	static void _0xE0B45E983BFC0768() { return invoke <void>(0xE0B45E983BFC0768); }
	static void _0x81F4E92BE3958364(Any p0, Any p1, Any p2) { return invoke <void>(0x81F4E92BE3958364, p0, p1, p2); }
	static void _0xA844FEB5C22C2C74() { return invoke <void>(0xA844FEB5C22C2C74); }
}

namespace SHAPETEST
{
	static ScrHandle START_SHAPE_TEST_LOS_PROBE(float VecStartPosX, float VecStartPosY, float VecStartPosZ, float VecEndPosX, float VecEndPosY, float VecEndPosZ, int LOSFlags, Entity ExcludeEntityIndex, int Options) { return invoke <ScrHandle>(0x7EE9F5D83DD4F90E, VecStartPosX, VecStartPosY, VecStartPosZ, VecEndPosX, VecEndPosY, VecEndPosZ, LOSFlags, ExcludeEntityIndex, Options); }
	static Any _0x04AA59CA40571C2E(Any p0, Any p1) { return invoke <Any>(0x4AA59CA40571C2E, p0, p1); }
	static ScrHandle START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(float VecStartPosX, float VecStartPosY, float VecStartPosZ, float VecEndPosX, float VecEndPosY, float VecEndPosZ, int LOSFlags, Entity ExcludeEntityIndex, int Options) { return invoke <ScrHandle>(0x377906D8A31E5586, VecStartPosX, VecStartPosY, VecStartPosZ, VecEndPosX, VecEndPosY, VecEndPosZ, LOSFlags, ExcludeEntityIndex, Options); }
	static ScrHandle START_SHAPE_TEST_BOX(float scrVecPosX, float scrVecPosY, float scrVecPosZ, float scrVecDimsX, float scrVecDimsY, float scrVecDimsZ, float eulerAnglesX, float eulerAnglesY, float eulerAnglesZ, int RotOrder, int LOSFlags, Entity ExcludeEntityIndex, int Options) { return invoke <ScrHandle>(0xFE466162C4401D18, scrVecPosX, scrVecPosY, scrVecPosZ, scrVecDimsX, scrVecDimsY, scrVecDimsZ, eulerAnglesX, eulerAnglesY, eulerAnglesZ, RotOrder, LOSFlags, ExcludeEntityIndex, Options); }
	static ScrHandle START_SHAPE_TEST_CAPSULE(float scrVecPosX, float scrVecPosY, float scrVecPosZ, float scrVecEndPosX, float scrVecEndPosY, float scrVecEndPosZ, float fRadius, int LOSFlags, Entity ExcludeEntityIndex, int Options) { return invoke <ScrHandle>(0x28579D1B8F8AAC80, scrVecPosX, scrVecPosY, scrVecPosZ, scrVecEndPosX, scrVecEndPosY, scrVecEndPosZ, fRadius, LOSFlags, ExcludeEntityIndex, Options); }
	static ScrHandle START_SHAPE_TEST_SWEPT_SPHERE(float scrVecPosX, float scrVecPosY, float scrVecPosZ, float scrVecEndPosX, float scrVecEndPosY, float scrVecEndPosZ, float fRadius, int LOSFlags, Entity ExcludeEntityIndex, int Options) { return invoke <ScrHandle>(0xAA5B7C8309F73230, scrVecPosX, scrVecPosY, scrVecPosZ, scrVecEndPosX, scrVecEndPosY, scrVecEndPosZ, fRadius, LOSFlags, ExcludeEntityIndex, Options); }
	static ScrHandle START_SHAPE_TEST_MOUSE_CURSOR_LOS_PROBE(Vector3* vProbeStartPosOut, Vector3* vProbeEndPosOut, int LOSFlags, Entity ExcludeEntityIndex, int Options) { return invoke <ScrHandle>(0x9839013D8B6014F1, vProbeStartPosOut, vProbeEndPosOut, LOSFlags, ExcludeEntityIndex, Options); }
	static int GET_SHAPE_TEST_RESULT(ScrHandle shapeTestGuid, int* bHitSomething, Vector3* vPos, Vector3* vNormal, Entity* EntityIndex) { return invoke <int>(0xEDE8AC7C5108FB1D, shapeTestGuid, bHitSomething, vPos, vNormal, EntityIndex); }
}

namespace SOCIALCLUB
{
	static int SC_INBOX_GET_TOTAL_NUM_MESSAGES() { return invoke <int>(0x8EF0F633280C0663); }
	static Hash SC_INBOX_GET_MESSAGE_TYPE_AT_INDEX(int msgIndex) { return invoke <Hash>(0xFF92537C4DDC1241, msgIndex); }
	static bool SC_INBOX_GET_MESSAGE_IS_READ_AT_INDEX(int msgIndex) { return invoke <bool>(0x74CF39E030A382C4, msgIndex); }
	static bool SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(int msgIndex) { return invoke <bool>(0x63CAC501FFF66DC4, msgIndex); }
	static bool SC_INBOX_MESSAGE_GET_DATA_INT(int msgIndex, const char* name, int* value) { return invoke <bool>(0x95BB39C4DA99F348, msgIndex, name, value); }
	static bool SC_INBOX_MESSAGE_GET_DATA_STRING(int msgIndex, const char* name, char* value) { return invoke <bool>(0x66F77FD58506FF6B, msgIndex, name, value); }
	static const char* SC_INBOX_MESSAGE_GET_RAW_TYPE_AT_INDEX(int msgIndex) { return invoke <const char*>(0x176D077685CD83E4, msgIndex); }
	static bool SC_PRESENCE_ATTR_SET_FLOAT(Hash valueId, float value) { return invoke <bool>(0xA31DAFCDC33775E9, valueId, value); }
	static bool SC_PRESENCE_ATTR_SET_INT_EX(const char* attrName, int value, bool p2) { return invoke <bool>(0x85488C49, attrName, value, p2); }
	static bool SC_PRESENCE_ATTR_SET_FLOAT_EX(const char* attrName, float value, bool p2) { return invoke <bool>(0x467F4CAA, attrName, value, p2); }
	static bool SC_PRESENCE_ATTR_SET_STRING_EX(const char* attrName, const char* value, bool p2) { return invoke <bool>(0xEB2D93B3, attrName, value, p2); }
	static bool SC_PROFANITY_CHECK_STRING(const char* textString, int* outToken) { return invoke <bool>(0x9C74AC9D87B3FFF4, textString, outToken); }
	static bool SC_PROFANITY_GET_CHECK_IS_VALID(int token) { return invoke <bool>(0x8C8052AF40C4247, token); }
	static bool SC_PROFANITY_GET_CHECK_IS_PENDING(int token) { return invoke <bool>(0x3A10BCD0C8AA0B82, token); }
	static bool SC_PROFANITY_GET_STRING_PASSED(int token) { return invoke <bool>(0xF302973BB8BE70E6, token); }
	static int SC_PROFANITY_GET_STRING_STATUS(int token) { return invoke <int>(0xCF3BFB99EBBE5B1, token); }
	static bool SC_COMMUNITY_EVENT_IS_ACTIVE() { return invoke <bool>(0xCBF743C984695CF3); }
	static int SC_COMMUNITY_EVENT_GET_EVENT_ID() { return invoke <int>(0xD635DF6BAA5A6017); }
	static bool SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT(const char* name, int* value) { return invoke <bool>(0xB4411D4D6B81438E, name, value); }
	static bool SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT(const char* name, float* value) { return invoke <bool>(0x60BBAD634C2B44B, name, value); }
	static bool SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING(const char* name, char* value) { return invoke <bool>(0x9F6DCD0C939C71E9, name, value); }
	static bool SC_COMMUNITY_EVENT_GET_DISPLAY_NAME(char* value) { return invoke <bool>(0x89D9BDE7334B110F, value); }
	static bool SC_COMMUNITY_EVENT_IS_ACTIVE_FOR_TYPE(const char* eventType) { return invoke <bool>(0x9937EB0CEBC2F9F, eventType); }
	static int SC_COMMUNITY_EVENT_GET_EVENT_ID_FOR_TYPE(const char* eventType) { return invoke <int>(0x3C03ABBABBEF752, eventType); }
	static bool SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_FOR_TYPE(const char* name, int* value, const char* eventType) { return invoke <bool>(0x3519CC3525319A96, name, value, eventType); }
	static bool SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_FOR_TYPE(const char* name, float* value, const char* eventType) { return invoke <bool>(0x1BDB56DB258F052D, name, value, eventType); }
	static bool SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_FOR_TYPE(const char* name, char* value, const char* eventType) { return invoke <bool>(0xC8FC3B2432E8229D, name, value, eventType); }
	static bool SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_FOR_TYPE(char* value, const char* p1) { return invoke <bool>(0x85EA0BEC7B1F7622, value, p1); }
	static bool SC_COMMUNITY_EVENT_IS_ACTIVE_BY_ID(int eventId) { return invoke <bool>(0x62B384FEFDE06817, eventId); }
	static bool SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_BY_ID(int eventId, const char* name, int* value) { return invoke <bool>(0x7C981DE05A7403A0, eventId, name, value); }
	static bool SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_BY_ID(int eventId, const char* name, float* value) { return invoke <bool>(0x91C9E2A0F9DD6DD4, eventId, name, value); }
	static bool SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_BY_ID(int eventId, const char* name, char* value) { return invoke <bool>(0x49D2196D9D11184, eventId, name, value); }
	static bool SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_BY_ID(int eventID, char* value) { return invoke <bool>(0x11EA52CAD1B55910, eventID, value); }
}

namespace SOCIALCLUBFEED
{
	static int _SC_FEED_SUBMIT_PRESET_MESSAGE(int type, int subType) { return invoke <int>(0xEFB64240F6B17817, type, subType); }
	static bool SC_FEED_HUB_HAS_NEW_DATA() { return invoke <bool>(0x68332D20CB6F897); }
}

namespace SPACTIONPROXY
{
	static bool _SPACTIONPROXY_START_MANAGER() { return invoke <bool>(0x1F471B79ACC91BEE); }
	static bool _SPACTIONPROXY_MANAGER_IS_READY() { return invoke <bool>(0x1F471B79ACC91BED); }
	static bool _SPACTIONPROXY_MANAGER_IS_FAILED() { return invoke <bool>(0x1F471B79ACC91BEC); }
	static bool _SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION(void* data) { return invoke <bool>(0x1F471B79ACC97BEF, data); }
	static bool _SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(void* data) { return invoke <bool>(0x1F471B79ACC98BEF, data); }
	static bool _SPACTIONPROXY_PROCESS_ACTION(Any p0, bool p1) { return invoke <bool>(0x1F471B79ACC94BEF, p0, p1); }
}

namespace STATS
{
	static bool STAT_ID_IS_VALID(void* statId) { return invoke <bool>(0xC48FE1971C9743FF, statId); }
	static bool STAT_ID_SET_INT(void* statId, int value, bool p2) { return invoke <bool>(0xA4DDF5DF95E65EEE, statId, value, p2); }
	static bool STAT_ID_SET_FLOAT(void* statId, float value, bool p2) { return invoke <bool>(0x481BDF6A10C5EF68, statId, value, p2); }
	static bool STAT_ID_SET_BOOL(void* statId, bool value, bool p2) { return invoke <bool>(0x3B5107353267D7A1, statId, value, p2); }
	static bool STAT_ID_SET_GXT_LABEL(void* statId, const char* label, bool p2) { return invoke <bool>(0x5060A54834F2382, statId, label, p2); }
	static bool STAT_ID_SET_DATE(void* statId, void* date, bool p2) { return invoke <bool>(0x1FAE9B2FAA2DFE06, statId, date, p2); }
	static bool STAT_ID_GET_INT(void* statId, int* p1) { return invoke <bool>(0x767FBC2AC802EF3E, statId, p1); }
	static bool STAT_ID_GET_FLOAT(void* statId, float* value) { return invoke <bool>(0xD7AE6C9C9C6AC54D, statId, value); }
	static bool STAT_ID_GET_BOOL(void* statId, bool* value) { return invoke <bool>(0x11B5E6D2AE73F48F, statId, value); }
	static bool STAT_ID_GET_DATE(void* statId, void* date) { return invoke <bool>(0x8B0FACEFC36C824C, statId, date); }
	static void _0x0FEE2561120F3333(void* statId) { return invoke <void>(0xFEE2561120F3333, statId); }
	static void _STAT_ID_INCREMENT_INT(void* statId, int value) { return invoke <void>(0x6A0184E904CDF25E, statId, value); }
	static void _STAT_ID_INCREMENT_FLOAT(void* statId, float value) { return invoke <void>(0x4A47E38EA3D60939, statId, value); }
	static void _STAT_ID_DECREMENT_INT(void* statId, int value) { return invoke <void>(0xBD861AE8A5181ED7, statId, value); }
	static void _0x91A4F58E01ED5E4C(void* statId, int value) { return invoke <void>(0x91A4F58E01ED5E4C, statId, value); }
	static void _0xE141F6B40B1E3683(void* statId, float value) { return invoke <void>(0xE141F6B40B1E3683, statId, value); }
	static void STAT_ID_SET_TO_POSSE_ID(void* statId) { return invoke <void>(0x34B22DE38477EDB4, statId); }
	static int _STAT_CALCULATE_COOLDOWN(int value) { return invoke <int>(0x1E7384AB5D4F4581, value); }
	static bool _STAT_PHEROMONE_COOLDOWN_LEGENDARY_ANIMAL(Entity entity, void* statId) { return invoke <bool>(0x5420D398A42917FC, entity, statId); }
	static void _STAT_ITEM_FISH_CAUGHT(Ped fish, float weight, Hash category, Hash subcategory) { return invoke <void>(0xDA26263C87CCE9C1, fish, weight, category, subcategory); }
	static void _STAT_CARRIED_SATCHEL_ITEM_FROM_PED(Ped ped) { return invoke <void>(0x831BF01C56149A8A, ped); }
	static void _STAT_DONATE_INCREMENT_ITEM(int item, int slot, Any p2, Any p3) { return invoke <void>(0x7C2ABF6E556B21FC, item, slot, p2, p3); }
	static void _0x8312F09C56149A8A(Hash animalType) { return invoke <void>(0x8312F09C56149A8A, animalType); }
	static void _0x378D3B1B11D9385B(int p0) { return invoke <void>(0x378D3B1B11D9385B, p0); }
	static void _0xDA26263C07CCE9C2(int p0) { return invoke <void>(0xDA26263C07CCE9C2, p0); }
	static void _0xD64DBC8B0424135F(Ped ped, Hash animalType) { return invoke <void>(0xD64DBC8B0424135F, ped, animalType); }
	static void _0xA59590050F80FF2E(Any p0, bool p1, bool p2, bool p3) { return invoke <void>(0xA59590050F80FF2E, p0, p1, p2, p3); }
	static void _STAT_ADD_ANIMAL_SAMPLE_TARGET(Hash animalType) { return invoke <void>(0x90E9A5DADBABC918, animalType); }
	static void _0xF8181B5EF156862C(Ped ped) { return invoke <void>(0xF8181B5EF156862C, ped); }
	static void STAT_ADD_BOUNTY_TARGET(Hash unlockHash, Ped ped) { return invoke <void>(0x6B1044FDC2B09101, unlockHash, ped); }
	static void _0x8C889E4CBB4B2356(Any p0, Ped ped) { return invoke <void>(0x8C889E4CBB4B2356, p0, ped); }
	static void STAT_BOUNTY_CAPTURED(Entity entity) { return invoke <void>(0x262EF7CF49CF1EB9, entity); }
	static void _0xA596890CF55B5095(Ped ped, bool p1) { return invoke <void>(0xA596890CF55B5095, ped, p1); }
	static void STAT_BOUNTY_ESCAPED(Ped ped) { return invoke <void>(0xB22F05732F72F70C, ped); }
	static void _0xF21A5D66874FCEDD(Any p0, Hash p1, Hash p2) { return invoke <void>(0xF21A5D66874FCEDD, p0, p1, p2); }
	static void _0x3EB2791A1FBC8A42(Hash statItem, int p1) { return invoke <void>(0x3EB2791A1FBC8A42, statItem, p1); }
	static void _0xDF95DF488A645CE7() { return invoke <void>(0xDF95DF488A645CE7); }
	static void STAT_PHOTOGRAPH_TAKEN(ItemSet itemset) { return invoke <void>(0x4D31051A4CA83787, itemset); }
	static void _0xBE66B26B6529E943(Hash unlockHash, Ped ped, Hash animalType) { return invoke <void>(0xBE66B26B6529E943, unlockHash, ped, animalType); }
	static void _0xF2B5ABDE09958689(Hash unlockHash, Ped ped1, Ped ped2) { return invoke <void>(0xF2B5ABDE09958689, unlockHash, ped1, ped2); }
	static void STAT_REGISTER_LEGENDARY_ANIMAL_DEED(Hash deedHash) { return invoke <void>(0xCD0D69C65BB0E8B9, deedHash); }
	static bool _0x302E71C1D9EE75B9(void* statId, Hash p1, int* p2) { return invoke <bool>(0x302E71C1D9EE75B9, statId, p1, p2); }
	static bool STATSTRACKER_IS_INITIALIZED(Hash p0) { return invoke <bool>(0x1F4D242765C6B24, p0); }
	static void _0x6123E2832C34243D(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x6123E2832C34243D, p0, p1, p2, p3, p4); }
	static void _0xCA41E86545413B5B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0xCA41E86545413B5B, p0, p1, p2, p3, p4, p5, p6); }
	static void STATSTRACKER_DEED_STARTED(Hash p0, Any p1) { return invoke <void>(0xB2A38826E5886E83, p0, p1); }
	static void _STATSTRACKER_DEED_STATUS(int deedType, Hash deedHash, int missionStatus, void* data) { return invoke <void>(0xD5910ECF81A2278C, deedType, deedHash, missionStatus, data); }
	static void _0x99230691875FC218(Any p0, Hash p1, float x, float y, float z) { return invoke <void>(0x99230691875FC218, p0, p1, x, y, z); }
	static void _0x025E98E317652CDD(int p0) { return invoke <void>(0x25E98E317652CDD, p0); }
	static void _0xE5A680A5D8B1F687(int p0) { return invoke <void>(0xE5A680A5D8B1F687, p0); }
	static bool _0x4DAC398297981B87(int p0) { return invoke <bool>(0x4DAC398297981B87, p0); }
	static bool CHAL_IS_GOAL_ACTIVE(Hash chalHash, Hash goalHash) { return invoke <bool>(0x4DAC3929796EB87, chalHash, goalHash); }
	static void CHAL_SET_GOAL_DISABLED(Hash chalHash, Hash goalHash, bool disabled) { return invoke <void>(0xF63DF9EE16393343, chalHash, goalHash, disabled); }
	static int CHAL_GET_NUM_RANKS_COMPLETED(Hash chalHash) { return invoke <int>(0x58CB53DB63F84DE9, chalHash); }
	static int CHAL_GET_MAX_RANKS(Hash chalHash) { return invoke <int>(0x58CB53DB63F84DEA, chalHash); }
	static void CHAL_ADD_GOAL_PROGRESS_INT(Hash chalHash, Hash goalHash, int value) { return invoke <void>(0xDDBD560745B1EE9A, chalHash, goalHash, value); }
	static void CHAL_ADD_GOAL_PROGRESS_FLOAT(Hash chalHash, Hash goalHash, float value) { return invoke <void>(0x86922D8C02FB7703, chalHash, goalHash, value); }
	static void CHAL_SET_GOAL_PROGRESS_INT(Hash chalHash, Hash goalHash, int value) { return invoke <void>(0xDDBD560745B1EE9B, chalHash, goalHash, value); }
	static void CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(Hash p0, int value) { return invoke <void>(0xDDBD560745B1EE9C, p0, value); }
	static void CHAL_ADD_GOAL_PROGRESS_FLOAT_BY_SCORE_ID(Hash p0, float value) { return invoke <void>(0x86922D8C02FB7705, p0, value); }
	static bool CHAL_ACHIEVEMENT_IS_COMPLETE(Hash p0, Hash p1) { return invoke <bool>(0x77B97A827739D434, p0, p1); }
	static int CHAL_ACHIEVEMENT_GET_PROGRESS_INT(Hash p0, Hash p1) { return invoke <int>(0x808712E428F697B8, p0, p1); }
	static void CHAL_NET_START_CHAL(Hash chalHash) { return invoke <void>(0x4ABF7E4DB6279E8F, chalHash); }
	static void CHAL_NET_STOP_CHAL(Hash chalHash) { return invoke <void>(0x43B0163154A50C86, chalHash); }
	static void CHAL_NET_START_GOAL(Hash chalHash, Hash goalHash) { return invoke <void>(0xC3FCB47344DCB638, chalHash, goalHash); }
	static void CHAL_NET_STOP_GOAL(Hash chalHash, Hash goalHash) { return invoke <void>(0xCE6A93324A590B, chalHash, goalHash); }
	static int _0xDDBD560745B1EE98(Hash chalHash, Hash goalHash, Player player) { return invoke <int>(0xDDBD560745B1EE98, chalHash, goalHash, player); }
	static const char* _0xB112B9262EC29C20(Hash p0, int p1) { return invoke <const char*>(0xB112B9262EC29C20, p0, p1); }
	static void _0x4FCBCC0584CD08E9(Hash p0) { return invoke <void>(0x4FCBCC0584CD08E9, p0); }
	static bool _0xCA1F0B5103936891(Hash p0) { return invoke <bool>(0xCA1F0B5103936891, p0); }
	static Hash _0x8BA3D7B1E83EF803(Hash p0) { return invoke <Hash>(0x8BA3D7B1E83EF803, p0); }
	static int CHAL_MISSION_GET_NUM_GOALS(Hash missionHash) { return invoke <int>(0xB0576DD3A75E58D, missionHash); }
	static int CHAL_MISSION_GET_NUM_GOALS_COMPLETE(Hash missionHash) { return invoke <int>(0xA785A52B59B7E7B2, missionHash); }
	static bool CHAL_MISSION_IS_GOAL_COMPLETE(Hash missionHash, Hash goalHash) { return invoke <bool>(0xC0BB774787BBF301, missionHash, goalHash); }
	static void CHAL_MISSION_ADD_GOAL_PROGRESS_INT(Hash missionHash, Hash goalHash, int value) { return invoke <void>(0x97E18E7C098626DE, missionHash, goalHash, value); }
	static float _0x9D0F5D2E1951CD84() { return invoke <float>(0x9D0F5D2E1951CD84); }
	static void _0x218F7710A139D012() { return invoke <void>(0x218F7710A139D012); }
	static bool _0x3AEABAE3F3C7600C() { return invoke <bool>(0x3AEABAE3F3C7600C); }
	static const char* _0x3F6FD87D2030ADC6() { return invoke <const char*>(0x3F6FD87D2030ADC6); }
	static Any _0xA2E2BEA4E83F6270(Hash p0) { return invoke <Any>(0xA2E2BEA4E83F6270, p0); }
	static bool _0xB5E2EDA2135E0FA1(Hash p0, int p1, Hash* scheduleLocation) { return invoke <bool>(0xB5E2EDA2135E0FA1, p0, p1, scheduleLocation); }
	static int WEEKLY_COLLECTIBLE_GET_NUM_SETS(Hash chalHash) { return invoke <int>(0x8F5317729F791D10, chalHash); }
	static Hash WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(Hash chalHash, int index) { return invoke <Hash>(0x610783F646894D25, chalHash, index); }
	static Hash WEEKLY_COLLECTIBLE_GET_ITEM_SET_LABEL(Hash chalHash, int index) { return invoke <Hash>(0xBFFA88522FF0F730, chalHash, index); }
	static int WEEKLY_COLLECTIBLE_GET_NUM_ITEMS_IN_SET(Hash chalHash, int index) { return invoke <int>(0x7D675C9DDDB365BE, chalHash, index); }
	static bool WEEKLY_COLLECTIBLE_GET_ITEM_IN_SET(Hash chalHash, int setIndex, int itemIndex, Hash* p3, int* p4) { return invoke <bool>(0xBA61BA6205A3F5A8, chalHash, setIndex, itemIndex, p3, p4); }
	static void _0x4F2D5FA23DB992DE() { return invoke <void>(0x4F2D5FA23DB992DE); }
	static void _0x4E463A3CDEFFFE96() { return invoke <void>(0x4E463A3CDEFFFE96); }
}

namespace STREAMING
{
	static void REQUEST_MODEL(Hash ModelIndex, bool p1) { return invoke <void>(0xFA28FE3A6246FC30, ModelIndex, p1); }
	static bool HAS_MODEL_LOADED(Hash ModelIndex) { return invoke <bool>(0x1283B8B89DD5D1B6, ModelIndex); }
	static void SET_MODEL_AS_NO_LONGER_NEEDED(Hash ModelIndex) { return invoke <void>(0x4AD96EF928BD4F9A, ModelIndex); }
	static bool IS_MODEL_IN_CDIMAGE(Hash ModelIndex) { return invoke <bool>(0xD6F3B6D7716CFF8E, ModelIndex); }
	static bool IS_MODEL_VALID(Hash modelHash) { return invoke <bool>(0x392C8D8E07B70EFC, modelHash); }
	static bool IS_MODEL_A_PED(Hash model) { return invoke <bool>(0xC3F09DE9D6D17DDA, model); }
	static bool IS_MODEL_A_VEHICLE(Hash ModelHashKey) { return invoke <bool>(0x354F62672DE7DB0A, ModelHashKey); }
	static bool _IS_MODEL_AN_OBJECT(Hash model) { return invoke <bool>(0x274EE1B90CFA669E, model); }
	static bool _HAS_COLLISION_LOADED_AT_COORD(float x, float y, float z) { return invoke <bool>(0xDA8B2EAF29E872E2, x, y, z); }
	static void _0x80B3E0597366ADF1() { return invoke <void>(0x80B3E0597366ADF1); }
	static void REQUEST_COLLISION_AT_COORD(float VecCoorsX, float VecCoorsY, float VecCoorsZ) { return invoke <void>(0xA3720F162A033C9, VecCoorsX, VecCoorsY, VecCoorsZ); }
	static void _REQUEST_METADATA_AT_COORD(float x, float y, float z) { return invoke <void>(0xA8432A14D4DC2101, x, y, z); }
	static void REQUEST_COLLISION_FOR_MODEL(Hash ModelIndex) { return invoke <void>(0xF1767BE37F661551, ModelIndex); }
	static bool HAS_COLLISION_FOR_MODEL_LOADED(Hash ModelIndex) { return invoke <bool>(0x210A79C9EC89778F, ModelIndex); }
	static void REQUEST_ADDITIONAL_COLLISION_AT_COORD(float VecX, float VecY, float VecZ) { return invoke <void>(0x83A8D71650D1894F, VecX, VecY, VecZ); }
	static bool DOES_ANIM_DICT_EXIST(const char* animSetName) { return invoke <bool>(0x537F44CB0D7F150D, animSetName); }
	static void REQUEST_ANIM_DICT(const char* animDictionaryName) { return invoke <void>(0xA862A2AD321F94B4, animDictionaryName); }
	static bool HAS_ANIM_DICT_LOADED(const char* animDictionaryName) { return invoke <bool>(0x27FF6FE8009B40CA, animDictionaryName); }
	static void REMOVE_ANIM_DICT(const char* animDictionaryName) { return invoke <void>(0x4763145053A33D46, animDictionaryName); }
	static void REQUEST_MOVE_NETWORK_DEF(const char* name) { return invoke <void>(0x2B6529C54D29037A, name); }
	static bool HAS_MOVE_NETWORK_DEF_LOADED(const char* name) { return invoke <bool>(0x2C04D89A0FB4E244, name); }
	static void REMOVE_MOVE_NETWORK_DEF(const char* name) { return invoke <void>(0x57A197AD83F66BBF, name); }
	static void REQUEST_CLIP_SET(const char* animSetName) { return invoke <void>(0xEF7611B57A820126, animSetName); }
	static bool HAS_CLIP_SET_LOADED(const char* animSetName) { return invoke <bool>(0x1F23D6B6DA1CC3B2, animSetName); }
	static void REMOVE_CLIP_SET(const char* animSetName) { return invoke <void>(0x817FA1B1EE7CD6F0, animSetName); }
	static void _REQUEST_CLIP_SET_BY_HASH(Hash clipSetHash) { return invoke <void>(0xAC37644A538F7524, clipSetHash); }
	static void _0x03DDBF2D73799F9E(Any p0) { return invoke <void>(0x3DDBF2D73799F9E, p0); }
	static Any _0x85B8F04555AB49B8(Any p0) { return invoke <Any>(0x85B8F04555AB49B8, p0); }
	static void _0x9F348DE670423460(Any p0) { return invoke <void>(0x9F348DE670423460, p0); }
	static Any _0x5288B7F0690F7C1F(Any p0) { return invoke <Any>(0x5288B7F0690F7C1F, p0); }
	static int _REQUEST_SCENARIO_TYPE(Hash scenarioType, int p1, Any p2, Any p3) { return invoke <int>(0x19A6BE7D9C6884D3, scenarioType, p1, p2, p3); }
	static bool _HAS_SCENARIO_TYPE_LOADED(Hash scenarioType, bool p1) { return invoke <bool>(0x9427C94D2E4094A4, scenarioType, p1); }
	static Any _REMOVE_SCENARIO_ASSET(Hash scenarioType) { return invoke <Any>(0x4EDDD9E9CA5AF985, scenarioType); }
	static Any _0xB223249B7798EEED(Any p0, Any p1, Any p2, Any p3) { return invoke <Any>(0xB223249B7798EEED, p0, p1, p2, p3); }
	static Any _0xA0AE7653E8181725(Any p0) { return invoke <Any>(0xA0AE7653E8181725, p0); }
	static Any _0x66BC28E50E85270E(Any p0) { return invoke <Any>(0x66BC28E50E85270E, p0); }
	static bool _GET_IPL_BOUNDING_SPHERE(Hash iplHash, Vector3* position, float* radius) { return invoke <bool>(0x9C77964B0E07B633, iplHash, position, radius); }
	static void REQUEST_IPL_HASH(Hash iplHash) { return invoke <void>(0x59767C5A7A9AE6DA, iplHash); }
	static void REQUEST_IPL_BY_HASH(Hash iplHash) { return invoke <void>(0x9E211A378F95C97C, iplHash); }
	static void REMOVE_IPL_HASH(Hash iplHash) { return invoke <void>(0x5A3E5CF7B4014B96, iplHash); }
	static void REMOVE_IPL_BY_HASH(Hash iplHash) { return invoke <void>(0x431E3AB760629B34, iplHash); }
	static bool IS_IPL_ACTIVE_HASH(Hash iplHash) { return invoke <bool>(0xD779B9B910BD3B7C, iplHash); }
	static bool IS_IPL_ACTIVE_BY_HASH(Hash iplHash) { return invoke <bool>(0x93AC1B91CB6D9913, iplHash); }
	static bool _IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(Hash iplHash, float x, float y, float z) { return invoke <bool>(0x73B40D97D7BAAD77, iplHash, x, y, z); }
	static void _0xDEEE1F265B7ECEF5() { return invoke <void>(0xDEEE1F265B7ECEF5); }
	static void SET_GAME_PAUSES_FOR_STREAMING(bool bAllowPause) { return invoke <void>(0xB3BC8250F4FE8B63, bAllowPause); }
	static int GET_NUMBER_OF_STREAMING_REQUESTS() { return invoke <int>(0x30CCCC4D88E654CA); }
	static void REQUEST_PTFX_ASSET() { return invoke <void>(0x1FF43843028E0C); }
	static bool HAS_PTFX_ASSET_LOADED() { return invoke <bool>(0x13A3F30A9ED0BC31); }
	static void REMOVE_PTFX_ASSET() { return invoke <void>(0x42F9049EA419E86); }
	static void REQUEST_NAMED_PTFX_ASSET(Hash fxNameHash) { return invoke <void>(0xF2B2353BBC0D4E8F, fxNameHash); }
	static bool HAS_NAMED_PTFX_ASSET_LOADED(Hash fxNameHash) { return invoke <bool>(0x65BB72F29138F5D6, fxNameHash); }
	static void REMOVE_NAMED_PTFX_ASSET(Hash fxNameHash) { return invoke <void>(0xF20866829E1C81A2, fxNameHash); }
	static void SET_POPULATION_BUDGET_MULTIPLIER(float fBudgetMultiplier) { return invoke <void>(0x2F9AC754FE179D58, fBudgetMultiplier); }
	static float GET_POPULATION_BUDGET_MULTIPLIER() { return invoke <float>(0x8A3945405B31048F); }
	static Any _0x071769BCB24379E5() { return invoke <Any>(0x71769BCB24379E5); }
	static void CLEAR_FOCUS() { return invoke <void>(0x86CCAF7CE493EFBE); }
	static void SET_FOCUS_POS_AND_VEL(float posX, float posY, float posZ, float velX, float velY, float velZ) { return invoke <void>(0x25F6EF88664540E2, posX, posY, posZ, velX, velY, velZ); }
	static void SET_FOCUS_ENTITY(Entity entityIndex) { return invoke <void>(0x955AEDD58F4BD309, entityIndex); }
	static bool IS_ENTITY_FOCUS(Entity entityIndex) { return invoke <bool>(0xF87DE697E9A06EC6, entityIndex); }
	static void SET_MAPDATACULLBOX_ENABLED(const char* boxName, bool bEnabled) { return invoke <void>(0x3CACC83F6FED837C, boxName, bEnabled); }
	static void SET_ALL_MAPDATA_CULLED(bool bCulled) { return invoke <void>(0x19ABCC581D28E6F9, bCulled); }
	static void _0xF01D21DF39554115(Any p0) { return invoke <void>(0xF01D21DF39554115, p0); }
	static bool LOAD_SCENE_START(float posX, float posY, float posZ, float offsetX, float offsetY, float offsetZ, float radius, int p7) { return invoke <bool>(0x387AD749E3B69B70, posX, posY, posZ, offsetX, offsetY, offsetZ, radius, p7); }
	static bool LOAD_SCENE_START_SPHERE(float x, float y, float z, float radius, Any p4) { return invoke <bool>(0x513F8AA5BF2F17CF, x, y, z, radius, p4); }
	static void LOAD_SCENE_STOP() { return invoke <void>(0x5A8B01199C3E79C3); }
	static bool IS_LOAD_SCENE_ACTIVE() { return invoke <bool>(0xCF45DF50C7775F2A); }
	static bool IS_LOAD_SCENE_LOADED() { return invoke <bool>(0x909F71B5C070797); }
	static bool IS_RENDERED_SCENE_LOADED() { return invoke <bool>(0x45BF3A6239A576B7); }
	static bool IS_PLAYER_SWITCH_IN_PROGRESS() { return invoke <bool>(0xED20CB1F5297791D); }
	static void SET_SCENE_STREAMING_TRACKS_CAM_POS_THIS_FRAME() { return invoke <void>(0xA03A6812529AD9C8); }
	static void IPL_GROUP_SWAP_START(const char* iplGroupBefore, const char* iplGroupAfter) { return invoke <void>(0x20D504994FDC4412, iplGroupBefore, iplGroupAfter); }
	static void IPL_GROUP_SWAP_CANCEL() { return invoke <void>(0x31108BB5715D035F); }
	static bool IPL_GROUP_SWAP_IS_READY() { return invoke <bool>(0xC2C05DEFE85A0B64); }
	static void IPL_GROUP_SWAP_FINISH() { return invoke <void>(0x40EE319EFD1D3B5); }
	static bool IPL_GROUP_SWAP_IS_ACTIVE() { return invoke <bool>(0xFC464598F6EE97B0); }
	static void PREFETCH_SRL(const char* cutsceneName) { return invoke <void>(0x354837E5A5BAA5AF, cutsceneName); }
	static void _0xAE00387E53B1E9FC() { return invoke <void>(0xAE00387E53B1E9FC); }
	static void _0xEF1A8A484118735E() { return invoke <void>(0xEF1A8A484118735E); }
	static void _0xD9F2FF4AF394D926() { return invoke <void>(0xD9F2FF4AF394D926); }
	static bool IS_SRL_LOADED() { return invoke <bool>(0x5C2C88512CF6DAFB); }
	static void BEGIN_SRL() { return invoke <void>(0x360710033BE60D9); }
	static void END_SRL() { return invoke <void>(0x1CE71FB33CA079FE); }
	static void SET_SRL_TIME(float time) { return invoke <void>(0x18231AEF458BCFF2, time); }
	static void SET_SRL_READAHEAD_TIMES(int prestreamMap, int prestreamAssets, int playbackMap, int playbackAssets) { return invoke <void>(0xD346248C1DCE0D76, prestreamMap, prestreamAssets, playbackMap, playbackAssets); }
	static void SET_SRL_LONG_JUMP_MODE(bool enableLongJumpMode) { return invoke <void>(0x7C907E8A725E5FD2, enableLongJumpMode); }
	static void SET_HD_AREA(float positionX, float positionY, float positionZ, float radius) { return invoke <void>(0xB88B905AFA35CB4D, positionX, positionY, positionZ, radius); }
	static void CLEAR_HD_AREA() { return invoke <void>(0xD83B22434E52728D); }
	static void _0x09FBF15D73EFC900() { return invoke <void>(0x9FBF15D73EFC900); }
	static void _0xF11D7CB962FCD747(Any p0) { return invoke <void>(0xF11D7CB962FCD747, p0); }
	static void _0xB9B9E47EDB9D63DB() { return invoke <void>(0xB9B9E47EDB9D63DB); }
	static void _0xBE8DAA9D8D01DA6A(Any p0, Any p1, Any p2) { return invoke <void>(0xBE8DAA9D8D01DA6A, p0, p1, p2); }
	static Any _0x53764309C4618087(Any p0) { return invoke <Any>(0x53764309C4618087, p0); }
	static void _0x032A14D082A9B269(Hash p0) { return invoke <void>(0x32A14D082A9B269, p0); }
	static void _0xAFA87A7D41EE346A(Any p0) { return invoke <void>(0xAFA87A7D41EE346A, p0); }
	static void _0x6A6E79FBE8678C98() { return invoke <void>(0x6A6E79FBE8678C98); }
	static void _0xCC61D8D6C19D9F14(Any p0) { return invoke <void>(0xCC61D8D6C19D9F14, p0); }
	static Any _0xDA7FDEFF4DE86839() { return invoke <Any>(0xDA7FDEFF4DE86839); }
	static Any _0x5D5E2102B174B8D2() { return invoke <Any>(0x5D5E2102B174B8D2); }
	static Any _0x7B8C2B846C05E5AD() { return invoke <Any>(0x7B8C2B846C05E5AD); }
	static void _0x62D5F0588915B277() { return invoke <void>(0x62D5F0588915B277); }
	static Any _0x2F4D53023F826FF0() { return invoke <Any>(0x2F4D53023F826FF0); }
	static Any _0xDABFE48BA0D457AA() { return invoke <Any>(0xDABFE48BA0D457AA); }
	static Any _0xE5B76E5B56CD77DD() { return invoke <Any>(0xE5B76E5B56CD77DD); }
	static Any _0x27AF48C62B281341() { return invoke <Any>(0x27AF48C62B281341); }
	static Any _0x99F92061EFE908BA() { return invoke <Any>(0x99F92061EFE908BA); }
	static Any _0x05DD384F39DE1C8C(Any p0, Any p1) { return invoke <Any>(0x5DD384F39DE1C8C, p0, p1); }
	static Any _0x198B85CC3C7A4593(Any p0, Any p1) { return invoke <Any>(0x198B85CC3C7A4593, p0, p1); }
	static Any _0x2A6D1DAAB9EBB262(Any p0) { return invoke <Any>(0x2A6D1DAAB9EBB262, p0); }
	static void _0x07559B29950301FF(Any p0, Any p1) { return invoke <void>(0x7559B29950301FF, p0, p1); }
	static Any _0xD6E39DC5D46DF4AB(Any p0) { return invoke <Any>(0xD6E39DC5D46DF4AB, p0); }
	static Any _0x8D56BDA343D9519F(Any p0) { return invoke <Any>(0x8D56BDA343D9519F, p0); }
	static void _0xD840C130D7AACFA5(Any p0, Any p1, Any p2) { return invoke <void>(0xD840C130D7AACFA5, p0, p1, p2); }
	static void _0x2E24C27B112B5B12(Any p0) { return invoke <void>(0x2E24C27B112B5B12, p0); }
	static void _SET_GUARMA_WORLDHORIZON_ACTIVE(bool toggle) { return invoke <void>(0x74E2261D2A66849A, toggle); }
}

namespace TASK
{
	static void TASK_PAUSE(Ped PedIndex, int Time) { return invoke <void>(0xE73A266DB0CA9042, PedIndex, Time); }
	static void TASK_STAND_STILL(Ped PedIndex, int Time) { return invoke <void>(0x919BE13EED931959, PedIndex, Time); }
	static void TASK_JUMP(Ped PedIndex, bool unused) { return invoke <void>(0xAE4086104E067B1, PedIndex, unused); }
	static void _TASK_JUMP_2(Ped ped, float x, float y, float z, Entity entity) { return invoke <void>(0x91083103137D7254, ped, x, y, z, entity); }
	static void TASK_COWER(Ped PedIndex, int Time, Ped pedToCowerFrom, const char* p3) { return invoke <void>(0x3EB1FE9E8E908E15, PedIndex, Time, pedToCowerFrom, p3); }
	static void TASK_HANDS_UP(Ped PedIndex, int Time, Ped PedToFaceIndex, int TimeToFacePed, int Flags) { return invoke <void>(0xF2EAB31979A7F910, PedIndex, Time, PedToFaceIndex, TimeToFacePed, Flags); }
	static void TASK_KNOCKED_OUT(Ped ped, float p1, bool permanently) { return invoke <void>(0xF90427F00A495A28, ped, p1, permanently); }
	static void TASK_KNOCKED_OUT_AND_HOGTIED(Ped ped, float p1, int p2) { return invoke <void>(0x42AC6401ABB8C7E5, ped, p1, p2); }
	static void _0xFFB520A3E16F7B7B(Ped ped, float p1) { return invoke <void>(0xFFB520A3E16F7B7B, ped, p1); }
	static void _0x8B1FDF63C3193EDA(Ped ped, float p1) { return invoke <void>(0x8B1FDF63C3193EDA, ped, p1); }
	static void UPDATE_TASK_HANDS_UP_DURATION(Ped PedIndex, int Time) { return invoke <void>(0xA98FCAFD7893C834, PedIndex, Time); }
	static void _0x28EF780BDEA8A639(Ped ped, int p1) { return invoke <void>(0x28EF780BDEA8A639, ped, p1); }
	static void TASK_DUCK(Ped ped, int p1) { return invoke <void>(0xA14B5FBF986BAC23, ped, p1); }
	static void _TASK_BOARD_VEHICLE(Ped ped, Vehicle vehicle, Any p2, Any p3, Any p4, Any p5) { return invoke <void>(0xE53D17AD837CBF7C, ped, vehicle, p2, p3, p4, p5); }
	static void _TASK_DISEMBARK_VEHICLE(Any p0, Vehicle vehicle, int p2, Any p3, float p4, Any p5) { return invoke <void>(0xA7C6854BB5A4192A, p0, vehicle, p2, p3, p4, p5); }
	static void _TASK_BOARD_VEHICLE_2(Ped ped, Any p1, Any p2, float p3, int flags) { return invoke <void>(0xE41A09C8DDFF7AA4, ped, p1, p2, p3, flags); }
	static void TASK_DISEMBARK_NEAREST_TRAIN_CARRIAGE(Ped ped, float p1, int flags) { return invoke <void>(0xA11F3BDEC03ED5F, ped, p1, flags); }
	static void TASK_ENTER_VEHICLE(Ped PedIndex, Vehicle VehicleIndex, int Time, int seat, float MoveBlendRatio, int iFlags, const char* OverridenClipSet) { return invoke <void>(0xC20E50AA46D09CA8, PedIndex, VehicleIndex, Time, seat, MoveBlendRatio, iFlags, OverridenClipSet); }
	static void TASK_LEAVE_VEHICLE(Ped PedIndex, Vehicle VehicleIndex, int iFlags, Ped unkPed) { return invoke <void>(0xD3DBCE61A490BE02, PedIndex, VehicleIndex, iFlags, unkPed); }
	static void TASK_MOUNT_ANIMAL(Ped ped, Ped mount, int timer, int seatIndex, float pedSpeed, int mountStyle, Any p6, Any p7) { return invoke <void>(0x92DB0739813C5186, ped, mount, timer, seatIndex, pedSpeed, mountStyle, p6, p7); }
	static void TASK_DISMOUNT_ANIMAL(Ped rider, int taskFlag, Any p2, Any p3, Any p4, Ped targetPed) { return invoke <void>(0x48E92D3DDE23C23A, rider, taskFlag, p2, p3, p4, targetPed); }
	static void TASK_HITCH_ANIMAL(Ped ped, int scenarioPoint, int flag) { return invoke <void>(0x9030AD4B6207BFE8, ped, scenarioPoint, flag); }
	static void _0xE05A5D39BE6E93AF(Any p0) { return invoke <void>(0xE05A5D39BE6E93AF, p0); }
	static void TASK_VEHICLE_DRIVE_TO_COORD(Ped PedIndex, Vehicle VehicleIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float Speed, int Style, Hash CarModel, int Mode, float TargetRadius, float StraightLineDist) { return invoke <void>(0xE2A2AA2F659D77A7, PedIndex, VehicleIndex, VecCoorsX, VecCoorsY, VecCoorsZ, Speed, Style, CarModel, Mode, TargetRadius, StraightLineDist); }
	static void _TASK_VEHICLE_DRIVE_TO_COORD_2(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke <void>(0xF0108F01FB105DA2, ped, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void TASK_VEHICLE_DRIVE_WANDER(Ped PedIndex, Vehicle VehicleIndex, float CruiseSpeed, int Mode) { return invoke <void>(0x480142959D337D00, PedIndex, VehicleIndex, CruiseSpeed, Mode); }
	static void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Ped PedIndex, Entity EntityIndex, float VecOffsetX, float VecOffsetY, float VecOffsetZ, float MoveBlendRatio, int Time, float Radius, bool persistFollowing, bool p9, bool walkOnly, bool p11, bool p12, bool p13) { return invoke <void>(0x304AE42E357B8C7E, PedIndex, EntityIndex, VecOffsetX, VecOffsetY, VecOffsetZ, MoveBlendRatio, Time, Radius, persistFollowing, p9, walkOnly, p11, p12, p13); }
	static void TASK_FOLLOW_TO_OFFSET_OF_COORD(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { return invoke <void>(0x2E3676282C18A692, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
	static void _0x3FFCD7BBA074CC80(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke <void>(0x3FFCD7BBA074CC80, ped, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void TASK_GO_STRAIGHT_TO_COORD(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float MoveBlendRatio, int Time, float FinalHeading, float TargetRadius, int p8) { return invoke <void>(0xD76B57B44F1E6F8B, PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, MoveBlendRatio, Time, FinalHeading, TargetRadius, p8); }
	static void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Ped PedIndex, Entity EntityIndex, float VecOffsetX, float VecOffsetY, float VecOffsetZ, float MoveBlendRatio, int Time, Any p7) { return invoke <void>(0x61E360B7E040D12E, PedIndex, EntityIndex, VecOffsetX, VecOffsetY, VecOffsetZ, MoveBlendRatio, Time, p7); }
	static void TASK_MOVE_IN_TRAFFIC(Ped ped, Any p1, Any p2, Any p3) { return invoke <void>(0x8AA1593AEC087A29, ped, p1, p2, p3); }
	static void TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke <void>(0xDCA3A13F7A45338B, ped, p1, p2, p3, p4, p5, p6, p7); }
	static void TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(Ped ped, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x13DED0BC45600FE1, ped, p1, p2, p3, p4); }
	static void _0xBAAB791AA72C2821(Any p0, Any p1) { return invoke <void>(0xBAAB791AA72C2821, p0, p1); }
	static void TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(Ped ped, float moveBlendRatio, float x, float y, float z, Any p5) { return invoke <void>(0x79482C12482A860D, ped, moveBlendRatio, x, y, z, p5); }
	static void TASK_ACHIEVE_HEADING(Ped PedIndex, float heading, int Time) { return invoke <void>(0x93B93A37987F1F3D, PedIndex, heading, Time); }
	static void TASK_FLUSH_ROUTE() { return invoke <void>(0x841142A1376E9006); }
	static void TASK_EXTEND_ROUTE(float VecCoorsX, float VecCoorsY, float VecCoorsZ) { return invoke <void>(0x1E7889778264843A, VecCoorsX, VecCoorsY, VecCoorsZ); }
	static void TASK_FOLLOW_POINT_ROUTE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <void>(0xE14C5550DC3CD1D, ped, p1, p2, p3, p4, p5); }
	static void TASK_ENTER_ANIM_SCENE(Ped ped, AnimScene animScene, const char* entityName, const char* playbackListName, float enterSpeed, bool bAutoStart, int flag, int p7, float p8) { return invoke <void>(0xC2329B0206426644, ped, animScene, entityName, playbackListName, enterSpeed, bAutoStart, flag, p7, p8); }
	static void TASK_MOVE_BE_IN_FORMATION(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0x4AA5AA97C65E4A2F, ped, p1, p2, p3, p4, p5, p6); }
	static void TASK_GO_TO_ENTITY(Ped PedIndex, Entity EntityIndex, int Time, float SeekRadius, float MoveBlendRatio, float SlowDownDistance, int GotoFlags) { return invoke <void>(0x6A071245EB0D1882, PedIndex, EntityIndex, Time, SeekRadius, MoveBlendRatio, SlowDownDistance, GotoFlags); }
	static void TASK_FOLLOW_AND_CONVERSE_WITH_PED(Ped ped, Ped targetPed, Any p2, Any p3, float p4, float p5, int p6, Any p7, Any p8, float p9, float p10) { return invoke <void>(0x489FFCCCE7392B55, ped, targetPed, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static void _0xA052608A12559BBB(Any p0, Any p1) { return invoke <void>(0xA052608A12559BBB, p0, p1); }
	static void TASK_WANDER_AND_CONVERSE_WITH_PED(Ped ped, Any p1, Any p2, Any p3) { return invoke <void>(0x8AC76D1408731732, ped, p1, p2, p3); }
	static void TASK_LEAD_AND_CONVERSE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke <void>(0xAA19711D33C6708C, ped, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void _0xDE0C8B145EA466FF(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <void>(0xDE0C8B145EA466FF, p0, p1, p2, p3, p4, p5); }
	static void TASK_SEEK_CLEAR_LOS_TO_ENTITY(Ped ped, Entity entity, float p2, float p3, float p4) { return invoke <void>(0x8D7F2A63688C20A4, ped, entity, p2, p3, p4); }
	static void TASK_GO_TO_WHISTLE(Ped ped, Ped p1, int whistleType) { return invoke <void>(0xBAD6545608CECA6E, ped, p1, whistleType); }
	static Any _0xEB67D4E056C85A81(Any p0) { return invoke <Any>(0xEB67D4E056C85A81, p0); }
	static Any _0x78D8C1D4EB80C588(Any p0) { return invoke <Any>(0x78D8C1D4EB80C588, p0); }
	static void TASK_LEAD_HORSE(Ped ped, Ped horse) { return invoke <void>(0x9A7A4A54596FE09D, ped, horse); }
	static void TASK_STOP_LEADING_HORSE(Ped ped) { return invoke <void>(0xED27560703F37258, ped); }
	static void _TASK_FLEE_FROM_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoke <void>(0x6879FF208ED87F2A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	static void _TASK_FLEE_FROM_PED(Ped ped, Ped fleeFromTarget, float x, float y, float z, float distance, int p6, int p7, float p8, Ped targetPed) { return invoke <void>(0x7B74D8EEDE9B5727, ped, fleeFromTarget, x, y, z, distance, p6, p7, p8, targetPed); }
	static void TASK_SMART_FLEE_COORD(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float SafeDistance, int FleeTime, int fleeType, float fleeSpeed) { return invoke <void>(0x94587F17E9C365D5, PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, SafeDistance, FleeTime, fleeType, fleeSpeed); }
	static void TASK_SMART_FLEE_PED(Ped PedIndex, Ped OtherPedIndex, float SafeDistance, int FleeTime, int fleeType, float fleeSpeed, Ped targetPed) { return invoke <void>(0x22B0D0E37CCB840D, PedIndex, OtherPedIndex, SafeDistance, FleeTime, fleeType, fleeSpeed, targetPed); }
	static void _0x673A8779D229BA5A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <void>(0x673A8779D229BA5A, p0, p1, p2, p3, p4, p5); }
	static void _0x2E1D6D87346BB7D2(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x2E1D6D87346BB7D2, p0, p1, p2, p3); }
	static void TASK_FLEE_COORD(Ped ped, float x, float y, float z, int fleeStyle, int p5, float p6, int duration, int p8) { return invoke <void>(0x58428248BF4B64E4, ped, x, y, z, fleeStyle, p5, p6, duration, p8); }
	static void TASK_FLEE_PED(Ped ped, Ped fleeFromTarget, int fleeStyle, int flag, float p4, int p5, int p6) { return invoke <void>(0xFD45175A6DFD7CE9, ped, fleeFromTarget, fleeStyle, flag, p4, p5, p6); }
	static void TASK_FLEE_COORD_VIA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoke <void>(0x390E0B697D25EAF5, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	static void TASK_FLEE_PED_VIA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke <void>(0x5802E0F910E4CF1D, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _ADD_FLEE_TARGET_COORDS(Ped ped, float x, float y, float z, float p4) { return invoke <void>(0xE8F1A5B4CED3725A, ped, x, y, z, p4); }
	static void ADD_FLEE_TARGET_PED(Ped ped, Ped targetPed, float p2) { return invoke <void>(0x3923EC958249657D, ped, targetPed, p2); }
	static void _0xA42DC7919159CCCF(Any p0) { return invoke <void>(0xA42DC7919159CCCF, p0); }
	static void TASK_FLY_AWAY(Ped ped, Ped fleeFromTarget) { return invoke <void>(0xE86A537B5A3C297C, ped, fleeFromTarget); }
	static void TASK_FLY_TO_COORD(Ped ped, float travelMbr, float x, float y, float z, bool p5, bool p6) { return invoke <void>(0xD6CFC2D59DA72042, ped, travelMbr, x, y, z, p5, p6); }
	static void TASK_FLYING_CIRCLE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0x72997893BFB8ECCC, ped, p1, p2, p3, p4, p5, p6); }
	static void TASK_WALK_AWAY(Ped ped, Entity entity) { return invoke <void>(0x4ACFAC71E6858F9, ped, entity); }
	static void TASK_SHOCKING_EVENT_REACT(Ped PedIndex, int shockingEventId, Any p2) { return invoke <void>(0x452419CBD838065B, PedIndex, shockingEventId, p2); }
	static void TASK_REACT(Ped ped, Entity reactingTo, float x, float y, float z, const char* reactionName, float p6, float p7, int p8) { return invoke <void>(0xC4C32C31920E1B70, ped, reactingTo, x, y, z, reactionName, p6, p7, p8); }
	static void TASK_WANDER_IN_AREA(Ped PedIndex, float VecCenterX, float VecCenterY, float VecCenterZ, float Radius, float MinWaitTime, float MaxWaitTime, int p7) { return invoke <void>(0xE054346CA3A0F315, PedIndex, VecCenterX, VecCenterY, VecCenterZ, Radius, MinWaitTime, MaxWaitTime, p7); }
	static void TASK_WANDER_IN_VOLUME(Ped ped, Volume volume, float p2, float p3, int p4) { return invoke <void>(0x9FDA168777B28424, ped, volume, p2, p3, p4); }
	static void TASK_WANDER_STANDARD(Ped PedIndex, float Heading, int WanderFlags) { return invoke <void>(0xBB9CE077274F6A1B, PedIndex, Heading, WanderFlags); }
	static void TASK_WANDER_SWIM(Ped ped, Any p1) { return invoke <void>(0x527EA3DB8BC7F03B, ped, p1); }
	static void TASK_PLANT_BOMB(Ped PedIndex, float vTargetPositionX, float vTargetPositionY, float vTargetPositionZ, float fTargetHeading) { return invoke <void>(0x965FEC691D55E9BF, PedIndex, vTargetPositionX, vTargetPositionY, vTargetPositionZ, fTargetHeading); }
	static void TASK_HORSE_ACTION(Ped ped, int action, Ped targetPed, Any p3) { return invoke <void>(0xA09CFD29100F06C3, ped, action, targetPed, p3); }
	static void TASK_ANIMAL_INTERACTION(Ped ped, Ped targetPed, Hash interactionType, Hash interactionModel, bool skipIdleAnimationClip) { return invoke <void>(0xCD181A959CFDD7F4, ped, targetPed, interactionType, interactionModel, skipIdleAnimationClip); }
	static void TASK_COMBAT_ANIMAL_WARN(Ped ped, Any p1, Any p2) { return invoke <void>(0xF960F3D57B660E96, ped, p1, p2); }
	static void TASK_COMBAT_ANIMAL_CHARGE_PED(Ped ped, Ped targetPed, bool p2, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0xEE3AA414CF99F368, ped, targetPed, p2, p3, p4, p5, p6); }
	static Any _0x76610D12A838EBDE(Any p0) { return invoke <Any>(0x76610D12A838EBDE, p0); }
	static void TASK_AMBIENT_ANIMAL_STALK(Ped ped, Any p1, Any p2) { return invoke <void>(0x37C13863ABA1B4A3, ped, p1, p2); }
	static void TASK_AMBIENT_ANIMAL_HUNT(Ped ped, Any p1, Any p2) { return invoke <void>(0x4B39D8F9D0FE7749, ped, p1, p2); }
	static void TASK_ANIMAL_UNALERTED(Ped ped, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x21FDF9A25CFE1CE5, ped, p1, p2, p3, p4); }
	static void TASK_ANIMAL_ALERTED(Ped ped, Any p1, Any p2) { return invoke <void>(0x979D93372FC8C565, ped, p1, p2); }
	static void TASK_ANIMAL_FLEE(Ped ped, Ped targetPed, Any p2) { return invoke <void>(0xA899B61C66F09134, ped, targetPed, p2); }
	static Any _0x244430C13BA5258E(Any p0, Any p1, Any p2, Any p3) { return invoke <Any>(0x244430C13BA5258E, p0, p1, p2, p3); }
	static void TASK_EAT(Ped ped, Any p1, Any p2) { return invoke <void>(0xBD7949BD07299672, ped, p1, p2); }
	static void TASK_BARK(Ped ped, Ped barkAtTarget, Hash mood) { return invoke <void>(0x83BFC1F836B2F3F2, ped, barkAtTarget, mood); }
	static void TASK_FOLLOW_PAVEMENT_TO_COORD(Ped ped, void* args) { return invoke <void>(0x1B1475414E70DD8E, ped, args); }
	static void TASK_FOLLOW_NAV_MESH_TO_COORD(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float MoveBlendRatio, int Time, float Radius, int NavFlags, float FinalHeading) { return invoke <void>(0x15D3A79D4E44B913, PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, MoveBlendRatio, Time, Radius, NavFlags, FinalHeading); }
	static void TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float MoveBlendRatio, int Time, float Radius, int iNavFlags, float m_fSlideToCoordHeading, float m_fMaxSlopeNavigable, float m_fClampMaxSearchDistance, Entity entity, float FinalHeading) { return invoke <void>(0x17F58B88D085DBAC, PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, MoveBlendRatio, Time, Radius, iNavFlags, m_fSlideToCoordHeading, m_fMaxSlopeNavigable, m_fClampMaxSearchDistance, entity, FinalHeading); }
	static void SET_PED_PATH_CAN_USE_CLIMBOVERS(Ped PedIndex, bool bUseClimbovers) { return invoke <void>(0x8E06A6FE76C9EFF4, PedIndex, bUseClimbovers); }
	static void SET_PED_PATH_CAN_USE_LADDERS(Ped PedIndex, bool bUseLadders) { return invoke <void>(0x77A5B103C87F476E, PedIndex, bUseLadders); }
	static void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Ped PedIndex, bool bDrop) { return invoke <void>(0xE361C5C71C431A4F, PedIndex, bDrop); }
	static Any _0xE6A151364C600B24(Any p0) { return invoke <Any>(0xE6A151364C600B24, p0); }
	static void _0x1632EB9386CDBE64(Any p0, Any p1) { return invoke <void>(0x1632EB9386CDBE64, p0, p1); }
	static void SET_PED_PATH_CLIMB_COST_MODIFIER(Ped PedIndex, float fClimbModifier) { return invoke <void>(0x88E32DB8C1A4AA4B, PedIndex, fClimbModifier); }
	static void SET_PED_PATH_DEEP_SNOW_COST_MODIFIER(Ped ped, float modifier) { return invoke <void>(0xE8C296B75EACC357, ped, modifier); }
	static void SET_PED_PATH_FOLIAGE_COST_MODIFIER(Ped ped, float modifier) { return invoke <void>(0x3AD8EFF9703BE657, ped, modifier); }
	static void _0x8798CF6815B8FE0F(Any p0, Any p1) { return invoke <void>(0x8798CF6815B8FE0F, p0, p1); }
	static void _0x5B68D0007D9C92EB(Any p0, Any p1) { return invoke <void>(0x5B68D0007D9C92EB, p0, p1); }
	static void _0x82ED59F095056550(Any p0, Any p1) { return invoke <void>(0x82ED59F095056550, p0, p1); }
	static void _0xE01C8DC8EDD28D31(Any p0, Any p1) { return invoke <void>(0xE01C8DC8EDD28D31, p0, p1); }
	static void _0x098CAA6DBE7D8D82(Any p0, Any p1) { return invoke <void>(0x98CAA6DBE7D8D82, p0, p1); }
	static bool _GET_PED_IS_IGNORING_DEAD_BODIES(Ped ped) { return invoke <bool>(0x1948BBE561A2375A, ped); }
	static void _SET_PED_IGNORE_DEAD_BODIES(Ped ped, bool toggle) { return invoke <void>(0x13A7BA5015C1372, ped, toggle); }
	static void _SET_PED_PATH_LADDER_COST_MODIFIER(Ped ped, float modifier) { return invoke <void>(0x70F7A1EAB1AE3AA8, ped, modifier); }
	static void SET_PED_PATH_MAY_ENTER_WATER(Ped PedIndex, bool bMayEnter) { return invoke <void>(0xF35425A4204367EC, PedIndex, bMayEnter); }
	static void _SET_PED_PATH_MAY_ENTER_DEEP_WATER(Ped ped, bool mayEnterDeepWater) { return invoke <void>(0x9DE63896B176EA94, ped, mayEnterDeepWater); }
	static void _0xC6170856E54557B2(Any p0, Any p1, Any p2) { return invoke <void>(0xC6170856E54557B2, p0, p1, p2); }
	static void _0xF948F4356F010F11(Any p0, Any p1, Any p2) { return invoke <void>(0xF948F4356F010F11, p0, p1, p2); }
	static void SET_PED_PATH_PREFER_TO_AVOID_WATER(Ped PedIndex, bool bPreferToAvoid, float p2) { return invoke <void>(0x38FE1EC73743793C, PedIndex, bPreferToAvoid, p2); }
	static void _0x8BB283A7888AD1AD(Any p0, Any p1, Any p2) { return invoke <void>(0x8BB283A7888AD1AD, p0, p1, p2); }
	static void _0x12990818C1D35886(Any p0, Any p1, Any p2) { return invoke <void>(0x12990818C1D35886, p0, p1, p2); }
	static void _0x7C015D8BCEC72CF4(Any p0, Any p1) { return invoke <void>(0x7C015D8BCEC72CF4, p0, p1); }
	static void SET_PED_PATH_AVOID_FIRE(Ped PedIndex, bool bAvoid) { return invoke <void>(0x4455517B28441E60, PedIndex, bAvoid); }
	static void _0x42CFD8FD8CC8DC69(Any p0, Any p1) { return invoke <void>(0x42CFD8FD8CC8DC69, p0, p1); }
	static void _0x216343750545A486(Any p0, Any p1, Any p2) { return invoke <void>(0x216343750545A486, p0, p1, p2); }
	static void _0x06ECF3925BC2ABAE(Any p0, Any p1) { return invoke <void>(0x6ECF3925BC2ABAE, p0, p1); }
	static void _0xFA30E2254461ADEB(Any p0, Any p1) { return invoke <void>(0xFA30E2254461ADEB, p0, p1); }
	static void TASK_GO_TO_COORD_ANY_MEANS(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float MoveBlendRatio, Vehicle VehicleIndex, bool p6, int DrivingFlags, float MaxRangeToShootTargets) { return invoke <void>(0x5BC448CB78FA3E88, PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, MoveBlendRatio, VehicleIndex, p6, DrivingFlags, MaxRangeToShootTargets); }
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float MoveBlendRatio, Vehicle VehicleIndex, bool p6, int DrivingFlags, float MaxRangeToShootTargets, float fExtraVehToTargetDistToPreferVeh, float fDriveStraightLineDistance, int iExtraFlags, float fWarpTimerMS) { return invoke <void>(0x1DD45F9ECFDB1BC9, PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, MoveBlendRatio, VehicleIndex, p6, DrivingFlags, MaxRangeToShootTargets, fExtraVehToTargetDistToPreferVeh, fDriveStraightLineDistance, iExtraFlags, fWarpTimerMS); }
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float MoveBlendRatio, Vehicle VehicleIndex, bool p6, int DrivingFlags, float MaxRangeToShootTargets, float fExtraVehToTargetDistToPreferVeh, float fDriveStraightLineDistance, int iExtraFlags, float fCruiseSpeed, float fTargetArriveDist, Any p14) { return invoke <void>(0xB8ECD61F531A7B02, PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, MoveBlendRatio, VehicleIndex, p6, DrivingFlags, MaxRangeToShootTargets, fExtraVehToTargetDistToPreferVeh, fDriveStraightLineDistance, iExtraFlags, fCruiseSpeed, fTargetArriveDist, p14); }
	static void TASK_PLAY_ANIM(Ped PedIndex, const char* pAnimDictName, const char* pAnimName, float fBlendInDelta, float fBlendOutDelta, int nTimeToPlay, int AnimFlags, float startPhase, bool phaseControlled, int ikFlags, bool bAllowOverrideCloneUpdate, const char* taskFilter, bool p12) { return invoke <void>(0xEA47FE3719165B94, PedIndex, pAnimDictName, pAnimName, fBlendInDelta, fBlendOutDelta, nTimeToPlay, AnimFlags, startPhase, phaseControlled, ikFlags, bAllowOverrideCloneUpdate, taskFilter, p12); }
	static void TASK_PLAY_ANIM_ADVANCED(Ped PedIndex, const char* pAnimDictName, const char* pAnimName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fBlendInDelta, float fBlendOutDelta, int nTimeToPlay, int AnimFlags, float startPhase, int RotOrder, int p15, bool p16) { return invoke <void>(0x83CDB10EA29B370B, PedIndex, pAnimDictName, pAnimName, posX, posY, posZ, rotX, rotY, rotZ, fBlendInDelta, fBlendOutDelta, nTimeToPlay, AnimFlags, startPhase, RotOrder, p15, p16); }
	static void TASK_PLAY_UPPER_ANIM_FACING_ENTITY(Ped ped, const char* animDict, const char* animName, Entity entity, int p4, float p5, float p6, int p7, float p8, bool p9, bool p10, float p11, const char* p12, int p13, float p14) { return invoke <void>(0xAD67214236AB1CFE, ped, animDict, animName, entity, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
	static void STOP_ANIM_TASK(Entity EntityIndex, const char* pAnimDictName, const char* pAnimName, float fBlendOutDelta) { return invoke <void>(0x97FF36A1D40EA00A, EntityIndex, pAnimDictName, pAnimName, fBlendOutDelta); }
	static void TASK_SCRIPTED_ANIMATION(Ped PedIndex, void* args) { return invoke <void>(0x126EF75F1E17ABE5, PedIndex, args); }
	static void PLAY_ENTITY_SCRIPTED_ANIM(Entity EntityIndex, void* args) { return invoke <void>(0x77A1EEC547E7FCF1, EntityIndex, args); }
	static void STOP_ANIM_PLAYBACK(Entity EntityIndex, int priority, bool secondary) { return invoke <void>(0xEE08C992D238C5D1, EntityIndex, priority, secondary); }
	static void SET_ANIM_FILTER(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x87B66D77D545DB66, p0, p1, p2, p3); }
	static void SET_ANIM_RATE(Entity EntityIndex, float rate, int priority, bool secondary) { return invoke <void>(0x32D49C5E359C847, EntityIndex, rate, priority, secondary); }
	static bool CAN_START_ITEM_INTERACTION(Ped ped, Hash itemHash, Hash interactionAnimHash, int p3) { return invoke <bool>(0x2D19BC4DF626CBE7, ped, itemHash, interactionAnimHash, p3); }
	static void START_TASK_ITEM_INTERACTION(Ped ped, Hash itemHash, Hash interactionAnimHash, int p3, int flag, float p5) { return invoke <void>(0xAE72E7DF013AAA61, ped, itemHash, interactionAnimHash, p3, flag, p5); }
	static void _TASK_ITEM_INTERACTION_2(Ped ped, Hash propNameGxt, Object prop, Hash propId, Hash itemInteractionState, int p5, Any p6, float p7) { return invoke <void>(0x72F52AA2D2B172CC, ped, propNameGxt, prop, propId, itemInteractionState, p5, p6, p7); }
	static void _TASK_ITEM_INTERACTION_3(Ped ped, Hash item, void* guid, Any p3, Any p4, Any p5, float p6) { return invoke <void>(0xD61D5E1AD9876DEB, ped, item, guid, p3, p4, p5, p6); }
	static void _0xB35370D5353995CB(Ped ped, Hash item, float p2) { return invoke <void>(0xB35370D5353995CB, ped, item, p2); }
	static Hash GET_ITEM_INTERACTION_STATE(Ped ped) { return invoke <Hash>(0x6AA3DCA2C6F5EB6D, ped); }
	static Hash GET_ITEM_INTERACTION_ITEM_ID(Ped ped) { return invoke <Hash>(0x804425C4BBD00883, ped); }
	static bool IS_PED_RUNNING_INSPECTION_TASK(Ped ped) { return invoke <bool>(0x38B1F1674F0E242, ped); }
	static bool IS_PED_RUNNING_TASK_ITEM_INTERACTION(Ped ped) { return invoke <bool>(0xEC7E480FF8BD0BED, ped); }
	static Entity _GET_ITEM_INTERACTION_ENTITY_FROM_PED(Ped ped, Hash item) { return invoke <Entity>(0x5A0100EA714DB68, ped, item); }
	static float GET_ITEM_INTERACTION_PROMPT_PROGRESS(Ped ped, Hash inputContext) { return invoke <float>(0xBC864A70AD55E0C1, ped, inputContext); }
	static Object _0x678D3226CF70B9C8(Ped ped, bool p1) { return invoke <Object>(0x678D3226CF70B9C8, ped, p1); }
	static void TASK_EVASIVE_ANIM(Ped ped1, Ped ped2, int p2) { return invoke <void>(0x5F22926E1BCE9B08, ped1, ped2, p2); }
	static void TASK_LOOK_AT_COORD(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, int time, int LookFlags, int p6, bool p7) { return invoke <void>(0x6FA46612594F7973, PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, time, LookFlags, p6, p7); }
	static void TASK_LOOK_AT_ENTITY(Ped PedIndex, Entity EntityIndex, int time, int p3, int p4, int p5) { return invoke <void>(0x69F4BE8C8CC4796C, PedIndex, EntityIndex, time, p3, p4, p5); }
	static void TASK_CLEAR_LOOK_AT(Ped PedIndex) { return invoke <void>(0xF804F1DB19B9689, PedIndex); }
	static bool _0x508F5053E3F6F0C4(Ped ped, float x, float y, float z, float p4) { return invoke <bool>(0x508F5053E3F6F0C4, ped, x, y, z, p4); }
	static void _0x23767D80C7EED7C6(Any p0, Any p1) { return invoke <void>(0x23767D80C7EED7C6, p0, p1); }
	static void OPEN_SEQUENCE_TASK(int* Sequence) { return invoke <void>(0xE8854A4326B9E12B, Sequence); }
	static void CLOSE_SEQUENCE_TASK(int Sequence) { return invoke <void>(0x39E72BC99E6360CB, Sequence); }
	static void TASK_PERFORM_SEQUENCE(Ped PedIndex, int Sequence) { return invoke <void>(0x5ABA3986D90D8A3B, PedIndex, Sequence); }
	static void _TASK_PERFORM_SEQUENCE_2(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x4FC0AF869D6E309D, p0, p1, p2, p3); }
	static void CLEAR_SEQUENCE_TASK(int* Sequence) { return invoke <void>(0x3841422E9C488D8C, Sequence); }
	static void SET_SEQUENCE_TO_REPEAT(int Sequence, int DoRepeat) { return invoke <void>(0x58C70CF3A41E4AE7, Sequence, DoRepeat); }
	static int GET_SEQUENCE_PROGRESS(Ped PedIndex) { return invoke <int>(0xA9010CFE1E3533, PedIndex); }
	static bool GET_IS_TASK_ACTIVE(Ped PedIndex, int TaskID) { return invoke <bool>(0xB0760331C7AA4155, PedIndex, TaskID); }
	static int GET_SCRIPT_TASK_STATUS(Ped PedIndex, Hash TaskName, bool p2) { return invoke <int>(0x77F1BEB8863288D5, PedIndex, TaskName, p2); }
	static Any _0x9FF5F9B24E870748(Any p0) { return invoke <Any>(0x9FF5F9B24E870748, p0); }
	static float _GET_SCRIPT_TASK_ACTION_TIME(Ped ped, Hash task) { return invoke <float>(0xA710DC5D25F8B942, ped, task); }
	static void REACT_LOOK_AT(Ped ped, Ped targetPed, int lookIntensity, int exitAnimation, float duration, int p5, Ped targetPed2, Any p7, Any p8) { return invoke <void>(0xE7FA07624574B79A, ped, targetPed, lookIntensity, exitAnimation, duration, p5, targetPed2, p7, p8); }
	static void REACT_LOOK_AT_END(Ped ped, int exitAnimation, bool p2) { return invoke <void>(0x541E5B41DCA45828, ped, exitAnimation, p2); }
	static bool IS_PED_SCENARIO_REACT_LOOKING(Ped ped, bool p1) { return invoke <bool>(0x916B8E075ABC8B4E, ped, p1); }
	static int GET_ACTIVE_VEHICLE_MISSION_TYPE(Vehicle vehIndex) { return invoke <int>(0x534AEBA6E5ED4CAB, vehIndex); }
	static void TASK_LEAVE_ANY_VEHICLE(Ped PedIndex, int DelayTime, int iFlags) { return invoke <void>(0x504D54DF3F6F2247, PedIndex, DelayTime, iFlags); }
	static Any _0xBD70108D01875299(Any p0) { return invoke <Any>(0xBD70108D01875299, p0); }
	static void TASK_USE_RANDOM_SCENARIO_IN_GROUP(Ped ped, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x14747F4A5971DE4E, ped, p1, p2, p3, p4); }
	static void TASK_AIM_GUN_AT_ENTITY(Ped PedIndex, Entity EntityIndex, int Duration, bool InstantBlendToAim, int p4) { return invoke <void>(0x9B53BB6E8943AF53, PedIndex, EntityIndex, Duration, InstantBlendToAim, p4); }
	static void TASK_TURN_PED_TO_FACE_ENTITY(Ped PedIndex, Entity EntityIndex, int Time, float p3, float p4, float p5) { return invoke <void>(0x5AD23D40115353AC, PedIndex, EntityIndex, Time, p3, p4, p5); }
	static void TASK_AIM_GUN_AT_COORD(Ped PedIndex, float VecTargetCoorsX, float VecTargetCoorsY, float VecTargetCoorsZ, int Duration, bool InstantBlendToAim, bool PlayAimIntro) { return invoke <void>(0x6671F3EEC681BDA1, PedIndex, VecTargetCoorsX, VecTargetCoorsY, VecTargetCoorsZ, Duration, InstantBlendToAim, PlayAimIntro); }
	static void TASK_AIM_AT_COORD(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0x4AF1D73861212F52, ped, p1, p2, p3, p4, p5, p6); }
	static void TASK_AIM_AT_ENTITY(Ped ped, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0xCF7569BD0FB480A0, ped, p1, p2, p3, p4); }
	static void TASK_SHOOT_AT_COORD(Ped PedIndex, float VecTargetCoorsX, float VecTargetCoorsY, float VecTargetCoorsZ, int Duration, Hash FiringType, Any p6) { return invoke <void>(0x46A6CC01E0826106, PedIndex, VecTargetCoorsX, VecTargetCoorsY, VecTargetCoorsZ, Duration, FiringType, p6); }
	static void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Ped PedIndex, Vehicle VehicleIndex) { return invoke <void>(0x7AA80209BDA643EB, PedIndex, VehicleIndex); }
	static void CLEAR_PED_TASKS(Ped PedIndex, bool p1, bool p2) { return invoke <void>(0xE1EF3C1216AFF2CD, PedIndex, p1, p2); }
	static void _0x1A7D63CB1B0BB223(Any p0) { return invoke <void>(0x1A7D63CB1B0BB223, p0); }
	static void _0xB2D15D3551FE4FAE(Any p0) { return invoke <void>(0xB2D15D3551FE4FAE, p0); }
	static void _0xDF94844D474F31E5(Ped ped) { return invoke <void>(0xDF94844D474F31E5, ped); }
	static void _0xEBA2081E0A5F4D17(Any p0) { return invoke <void>(0xEBA2081E0A5F4D17, p0); }
	static void _0x141BC64C8D7C5529(Vehicle vehicle) { return invoke <void>(0x141BC64C8D7C5529, vehicle); }
	static void CLEAR_PED_SECONDARY_TASK(Ped PedIndex) { return invoke <void>(0x176CECF6F920D707, PedIndex); }
	static void TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER(Vehicle vehicle, bool p1) { return invoke <void>(0x6F1C49F275BD25B3, vehicle, p1); }
	static void TASK_INVESTIGATE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <void>(0x5C8514540D27FBFB, ped, p1, p2, p3, p4, p5); }
	static void TASK_GOTO_ENTITY_OFFSET(Ped PedIndex, Entity EntityIndex, int Time, float SeekRadius, float SeekAngle, float MoveBlendRatio, int OffsetFlags) { return invoke <void>(0xE39B4FF4FDEBDE27, PedIndex, EntityIndex, Time, SeekRadius, SeekAngle, MoveBlendRatio, OffsetFlags); }
	static void TASK_GOTO_ENTITY_OFFSET_XY(Ped PedIndex, Entity EntityIndex, int Time, float fTargetRadius, float fXOffset, float fYOffset, float MoveBlendRatio, int OffsetFlags) { return invoke <void>(0x338E7EF52B6095A9, PedIndex, EntityIndex, Time, fTargetRadius, fXOffset, fYOffset, MoveBlendRatio, OffsetFlags); }
	static void TASK_GOTO_ENTITY_OFFSET_XYZ(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke <void>(0xFA6DA9D151769392, ped, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void TASK_GOTO_ENTITY_OFFSET_XY_AIMING(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke <void>(0x901BD69984400F62, ped, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void TASK_GOTO_ENTITY_OFFSET_XYZ_AIMING(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke <void>(0x41B0832CA96B5351, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke <void>(0x2D532EAA142CF83F, ped, p1, p2, p3, p4, p5, p6, p7); }
	static void TASK_TURN_PED_TO_FACE_COORD(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, int Time) { return invoke <void>(0x1DDA930A0AC38571, PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, Time); }
	static void TASK_VEHICLE_TEMP_ACTION(Ped PedIndex, Vehicle VehicleIndex, int Action, int Time) { return invoke <void>(0xC429DCEEB339E129, PedIndex, VehicleIndex, Action, Time); }
	static void TASK_VEHICLE_MISSION(Ped PedIndex, Vehicle VehicleIndex, Vehicle TargetVehicleIndex, int Mission, float CruiseSpeed, int mode, float TargetReachedDist, float StraightLineDist, bool DriveAgainstTraffic) { return invoke <void>(0x659427E0EF36BCDE, PedIndex, VehicleIndex, TargetVehicleIndex, Mission, CruiseSpeed, mode, TargetReachedDist, StraightLineDist, DriveAgainstTraffic); }
	static void TASK_VEHICLE_DRIVE_TO_DESTINATION(Ped driver, Vehicle vehicle, float x, float y, float z, float speed, int drivingFlags, int p7, float stoppingRange1, float stoppingRange2, bool p10) { return invoke <void>(0x7F241A0D14354583, driver, vehicle, x, y, z, speed, drivingFlags, p7, stoppingRange1, stoppingRange2, p10); }
	static void _TASK_VEHICLE_DRIVE_TO_DESTINATION_2(Vehicle vehicle, float x, float y, float z, float speed, int p5, int p6, float p7, float p8) { return invoke <void>(0x391073B9D3CCE2BA, vehicle, x, y, z, speed, p5, p6, p7, p8); }
	static void _TASK_VEHICLE_FLEE_ON_CLEANUP(Vehicle vehicle, float p1, float p2, float p3, float speed, Hash type) { return invoke <void>(0x55CD5FDDD4335C1E, vehicle, p1, p2, p3, speed, type); }
	static void TASK_VEHICLE_DRIVE_STRAIGHT_TO_POINT(Ped driver, Vehicle vehicle, float x, float y, float z, float p5, float p6, int flag) { return invoke <void>(0x89FF2FB965F0A29, driver, vehicle, x, y, z, p5, p6, flag); }
	static void _TASK_VEHICLE_DRIVE_TO_POINT_2(Vehicle vehicle, float x, float y, float z, float p4, float p5, Any p6) { return invoke <void>(0x6524A8981E8BE7C9, vehicle, x, y, z, p4, p5, p6); }
	static void _0x1D125814EBC517EB(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x1D125814EBC517EB, p0, p1, p2, p3); }
	static bool _0x583AE9AF9CEE0958(Vehicle vehicle, float x, float y, float z) { return invoke <bool>(0x583AE9AF9CEE0958, vehicle, x, y, z); }
	static void TASK_VEHICLE_MISSION_PED_TARGET(Ped PedIndex, Vehicle VehicleIndex, Ped TargetPedIndex, int Mission, float CruiseSpeed, int mode, float TargetReachedDist, float StraightLineDist, bool DriveAgainstTraffic) { return invoke <void>(0x9454528DF15D657A, PedIndex, VehicleIndex, TargetPedIndex, Mission, CruiseSpeed, mode, TargetReachedDist, StraightLineDist, DriveAgainstTraffic); }
	static void _0xA263ADBBC8056214(Any p0, Any p1) { return invoke <void>(0xA263ADBBC8056214, p0, p1); }
	static void TASK_VEHICLE_ESCORT(Ped PedIndex, Vehicle VehicleIndex, Entity EscortEntityIndex, int EscortType, float CruiseSpeed, int mode, float CustomOffset, int MinHeightAboveTerrain, float StraightLineDistance) { return invoke <void>(0xFA6E4B75F302400, PedIndex, VehicleIndex, EscortEntityIndex, EscortType, CruiseSpeed, mode, CustomOffset, MinHeightAboveTerrain, StraightLineDistance); }
	static void TASK_BOAT_MISSION(Ped PedIndex, Vehicle BoatIndex, Vehicle TargetVehicleIndex, Ped TargetPedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, int Mission, float CruiseSpeed, int mode, float TargetReachedDist, int BoatFlags) { return invoke <void>(0x15C86013127CE63F, PedIndex, BoatIndex, TargetVehicleIndex, TargetPedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, Mission, CruiseSpeed, mode, TargetReachedDist, BoatFlags); }
	static void TASK_WEAPON(Ped ped) { return invoke <void>(0x7157B82D60E4BC46, ped); }
	static void TASK_DRIVE_BY(Ped PedIndex, Ped OtherPedIndex, Vehicle TargetVehicleIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float AbortRange, int FrequencyPercentage, bool bPushUnderneathDrivingTaskIfDriving, Hash FiringPatternHash) { return invoke <void>(0x2F8AF0E82773A171, PedIndex, OtherPedIndex, TargetVehicleIndex, VecCoorsX, VecCoorsY, VecCoorsZ, AbortRange, FrequencyPercentage, bPushUnderneathDrivingTaskIfDriving, FiringPatternHash); }
	static void SET_DRIVEBY_TASK_TARGET(Ped PedIndex, Ped OtherPedIndex, Vehicle TargetVehicleIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ) { return invoke <void>(0xE5B302114D8162EE, PedIndex, OtherPedIndex, TargetVehicleIndex, VecCoorsX, VecCoorsY, VecCoorsZ); }
	static void CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped PedIndex) { return invoke <void>(0xC35B5CDB2824CF69, PedIndex); }
	static bool IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped PedIndex) { return invoke <bool>(0x8785E6E40C7A8818, PedIndex); }
	static bool GET_IS_PED_AIMING_IN_THE_AIR(Ped ped) { return invoke <bool>(0x8785E6E40C7A8819, ped); }
	static void _SET_PED_CLEAR_AIMING_IN_THE_AIR(Ped ped, Any p1) { return invoke <void>(0x34C0010188D7C54A, ped, p1); }
	static bool IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(Ped PedIndex) { return invoke <bool>(0xA320EF046186FA3B, PedIndex); }
	static void TASK_WARP_PED_INTO_VEHICLE(Ped Ped, Vehicle VehicleIndex, int seat) { return invoke <void>(0x9A7D091411C5F684, Ped, VehicleIndex, seat); }
	static void TASK_SHOOT_AT_ENTITY(Ped PedIndex, Entity EntityIndex, int Time, Hash FiringType, bool affectCockedState) { return invoke <void>(0x8DA95E8298AE772, PedIndex, EntityIndex, Time, FiringType, affectCockedState); }
	static void TASK_SHOOT_WITH_WEAPON(Ped ped, void* args) { return invoke <void>(0x8AA95E8298AE772, ped, args); }
	static void _0x2416EC2F31F75266(Entity entity, Entity targetEntity, int duration, Any p3, Any p4) { return invoke <void>(0x2416EC2F31F75266, entity, targetEntity, duration, p3, p4); }
	static void _0x41323F4E0C4AE94B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0x41323F4E0C4AE94B, p0, p1, p2, p3, p4, p5, p6); }
	static Any _0x5EA655F01D93667A(Any p0) { return invoke <Any>(0x5EA655F01D93667A, p0); }
	static void TASK_CLIMB(Ped PedIndex, bool UsePlayerLaunchForce) { return invoke <void>(0x89D9FCC2435112F1, PedIndex, UsePlayerLaunchForce); }
	static void _TASK_CLIMB_2(Ped ped, float heading) { return invoke <void>(0xDF1D85BCAF60D537, ped, heading); }
	static void TASK_CLIMB_LADDER(Ped PedIndex, float p1, bool p2, bool p3) { return invoke <void>(0xB6C987F9285A3814, PedIndex, p1, p2, p3); }
	static void CLEAR_PED_TASKS_IMMEDIATELY(Ped PedIndex, bool p1, bool resetCrouch) { return invoke <void>(0xAAA34F8A7CB32098, PedIndex, p1, resetCrouch); }
	static void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Ped PedIndex, int TaskIndex, int Progress1, int Progress2) { return invoke <void>(0x89221B16730234F0, PedIndex, TaskIndex, Progress1, Progress2); }
	static void SET_PED_DESIRED_MOVE_BLEND_RATIO(Ped PedIndex, float MoveBlendRatio) { return invoke <void>(0x1E982AC8716912C5, PedIndex, MoveBlendRatio); }
	static float GET_PED_DESIRED_MOVE_BLEND_RATIO(Ped PedIndex) { return invoke <float>(0x8517D4A6CA8513ED, PedIndex); }
	static void TASK_GOTO_ENTITY_AIMING(Ped PedIndex, Entity EntityIndex, float SeekRadius, float AimRadius) { return invoke <void>(0xA9DA48FAB8A76C12, PedIndex, EntityIndex, SeekRadius, AimRadius); }
	static void TASK_SET_SPHERE_DEFENSIVE_AREA(Ped PedIndex, float vCentreX, float vCentreY, float vCentreZ, float fRadius) { return invoke <void>(0x933C06518B52A9A4, PedIndex, vCentreX, vCentreY, vCentreZ, fRadius); }
	static void TASK_CLEAR_DEFENSIVE_AREA(Ped PedIndex) { return invoke <void>(0x95A6C46A31D1917D, PedIndex); }
	static void TASK_PED_SLIDE_TO_COORD(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float headingDegrees, float speed) { return invoke <void>(0xD04FE6765D990A06, PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, headingDegrees, speed); }
	static Any _0x9420FB11B8D77948(Any p0) { return invoke <Any>(0x9420FB11B8D77948, p0); }
	static Any _0x6BA606AB3A83BC4D(Any p0) { return invoke <Any>(0x6BA606AB3A83BC4D, p0); }
	static ScrHandle ADD_COVER_POINT(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float direction, int usage, int height, int arc, bool isPriorityToPlayer) { return invoke <ScrHandle>(0xD5C12A75C7B9497F, VecCoorsX, VecCoorsY, VecCoorsZ, direction, usage, height, arc, isPriorityToPlayer); }
	static Any _0x59872EA4CBD11C56(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke <Any>(0x59872EA4CBD11C56, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void REMOVE_COVER_POINT(ScrHandle index) { return invoke <void>(0xAE287C923D891715, index); }
	static bool DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(float VecCoorsX, float VecCoorsY, float VecCoorsZ, Any p3) { return invoke <bool>(0xA98B8E3C088E5A31, VecCoorsX, VecCoorsY, VecCoorsZ, p3); }
	static Vector3 GET_SCRIPTED_COVER_POINT_COORDS(ScrHandle index) { return invoke <Vector3>(0x594A1028FC2A3E85, index); }
	static Vector3 _0xE116F6F2DA2D777E(Any p0) { return invoke <Vector3>(0xE116F6F2DA2D777E, p0); }
	static void _0x50AA09A0DA64E73C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0x50AA09A0DA64E73C, p0, p1, p2, p3, p4, p5, p6); }
	static void _0xE5831AA1E2FD147C(Any p0) { return invoke <void>(0xE5831AA1E2FD147C, p0); }
	static void TASK_COMBAT_PED(Ped PedIndex, Ped OtherPedIndex, int CombatFlags, int TaskThreatResponseFlags) { return invoke <void>(0xF166E48407BAC484, PedIndex, OtherPedIndex, CombatFlags, TaskThreatResponseFlags); }
	static void TASK_COMBAT_PED_TIMED(Ped PedIndex, Ped OtherPedIndex, int Time, int Flags) { return invoke <void>(0x944F30DCB7096BDE, PedIndex, OtherPedIndex, Time, Flags); }
	static void _TASK_COMBAT_PED_3(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <void>(0xC624414FA748B9BA, p0, p1, p2, p3, p4, p5); }
	static void TASK_SEEK_COVER_FROM_POS(Ped PedIndex, float VecFromCoorsX, float VecFromCoorsY, float VecFromCoorsZ, int Time, bool p5, bool p6, bool p7) { return invoke <void>(0x75AC2B60386D89F2, PedIndex, VecFromCoorsX, VecFromCoorsY, VecFromCoorsZ, Time, p5, p6, p7); }
	static void TASK_SEEK_COVER_FROM_PED(Ped PedIndex, Ped OtherPedIndex, int Time, bool p3, bool p4, bool p5) { return invoke <void>(0x84D32B3BEC531324, PedIndex, OtherPedIndex, Time, p3, p4, p5); }
	static void TASK_SEEK_COVER_TO_COVER_POINT(Ped PedIndex, ScrHandle CoverIndex, float VecFromCoorsX, float VecFromCoorsY, float VecFromCoorsZ, int Time, Any p6, Any p7, Any p8) { return invoke <void>(0xD43D95C7A869447F, PedIndex, CoverIndex, VecFromCoorsX, VecFromCoorsY, VecFromCoorsZ, Time, p6, p7, p8); }
	static void TASK_SEEK_COVER_TO_COORDS(Ped PedIndex, float VecCooverCoorsX, float VecCooverCoorsY, float VecCooverCoorsZ, float VecFromCoorsX, float VecFromCoorsY, float VecFromCoorsZ, int Time, Any p8, Any p9, Any p10) { return invoke <void>(0x39246A6958EF072C, PedIndex, VecCooverCoorsX, VecCooverCoorsY, VecCooverCoorsZ, VecFromCoorsX, VecFromCoorsY, VecFromCoorsZ, Time, p8, p9, p10); }
	static void TASK_PUT_PED_DIRECTLY_INTO_COVER(Ped PedIndex, float vCoverPosX, float vCoverPosY, float vCoverPosZ, int Time, bool CanPeekAndAim, float BlendInDuration, Any p7, Any p8, ScrHandle coverpoint, bool p10, bool p11, Any p12) { return invoke <void>(0x4172393E6BE1FECE, PedIndex, vCoverPosX, vCoverPosY, vCoverPosZ, Time, CanPeekAndAim, BlendInDuration, p7, p8, coverpoint, p10, p11, p12); }
	static void _TASK_PUT_PED_DIRECTLY_INTO_COVER_FROM_COORDS(Ped ped, float x, float y, float z, float fromX, float fromY, float fromZ, int timeout, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17) { return invoke <void>(0xDF8A5855B9F9A97B, ped, x, y, z, fromX, fromY, fromZ, timeout, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17); }
	static void TASK_PUT_PED_DIRECTLY_INTO_MELEE(Ped PedIndex, Ped PedTargetIndex, Hash meleeStyle, float p3, float animBlendRatio, bool p5, int AiCombatFlags) { return invoke <void>(0x1C6CD14A876FFE39, PedIndex, PedTargetIndex, meleeStyle, p3, animBlendRatio, p5, AiCombatFlags); }
	static void TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(Ped ped, Ped grappleTarget, Hash grappleStyle, float p3, float p4, bool p5, int p6) { return invoke <void>(0xA05F3F20889D7A5B, ped, grappleTarget, grappleStyle, p3, p4, p5, p6); }
	static void TASK_COMPANION_AMBIENT(Ped ped, Any p1) { return invoke <void>(0xE017CF6E2527FE4F, ped, p1); }
	static void _0x098036CAB8373D36(Any p0) { return invoke <void>(0x98036CAB8373D36, p0); }
	static void _0x10C44F633E2D6D9E(Any p0) { return invoke <void>(0x10C44F633E2D6D9E, p0); }
	static void _0x7FB78B2199C10E92(Any p0) { return invoke <void>(0x7FB78B2199C10E92, p0); }
	static void TASK_GUARD(Ped ped, Any p1, Any p2) { return invoke <void>(0xB9FB242EACCAF30F, ped, p1, p2); }
	static void TASK_GUARD_CURRENT_POSITION(Ped PedIndex, float fMaxPatrolProximity, float GuardAreaRadius, bool bSetDefensiveArea) { return invoke <void>(0x4A58A47A72E3FCB4, PedIndex, fMaxPatrolProximity, GuardAreaRadius, bSetDefensiveArea); }
	static void _TASK_GUARD_ASSIGNED_DEFENSIVE_AREA_2(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke <void>(0x1FC9B33976BACD6C, ped, p1, p2, p3, p4, p5, p6, p7); }
	static void TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(Ped PedIndex, float vDefendPositionX, float vDefendPositionY, float vDefendPositionZ, float fHeading, float fMaxPatrolProximity, int nTimer) { return invoke <void>(0xD2A207EEBDF9889B, PedIndex, vDefendPositionX, vDefendPositionY, vDefendPositionZ, fHeading, fMaxPatrolProximity, nTimer); }
	static void TASK_STAND_GUARD(Ped PedIndex, float vDefendPositionX, float vDefendPositionY, float vDefendPositionZ, float fHeading, const char* context) { return invoke <void>(0xAE032F8BBA959E90, PedIndex, vDefendPositionX, vDefendPositionY, vDefendPositionZ, fHeading, context); }
	static void SET_DRIVE_TASK_CRUISE_SPEED(Ped PedIndex, float CruiseSpeed) { return invoke <void>(0x5C9B84BD7D31D908, PedIndex, CruiseSpeed); }
	static void SET_DRIVE_TASK_MAX_CRUISE_SPEED(Ped PedIndex, float MaxCruiseSpeed) { return invoke <void>(0x404A5AA9B9F0B746, PedIndex, MaxCruiseSpeed); }
	static void ADD_COVER_BLOCKING_AREA(float vStartX, float vStartY, float vStartZ, float vEndX, float vEndY, float vEndZ, bool bBlockObjects, bool bBlockVehicles, bool bBlockMap, bool bBlockPlayer) { return invoke <void>(0x45C597097DD7CB81, vStartX, vStartY, vStartZ, vEndX, vEndY, vEndZ, bBlockObjects, bBlockVehicles, bBlockMap, bBlockPlayer); }
	static void _ADD_COVER_BLOCKING_VOLUME(Volume volume, bool p1, bool p2, bool p3, bool p4) { return invoke <void>(0xEB2ED1DC3AEC0654, volume, p1, p2, p3, p4); }
	static void REMOVE_ALL_COVER_BLOCKING_AREAS() { return invoke <void>(0xDB6708C0B46F56D8); }
	static void _0x2A10538D0A005E81(Any p0, Any p1) { return invoke <void>(0x2A10538D0A005E81, p0, p1); }
	static void _0x4F57397388E1DFF8() { return invoke <void>(0x4F57397388E1DFF8); }
	static void TASK_ROB_PED(Ped ped, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x7BB967F85D8CCBDB, ped, p1, p2, p3, p4); }
	static bool _0xBEDBE39B5FD98FD6(Ped ped) { return invoke <bool>(0xBEDBE39B5FD98FD6, ped); }
	static int CREATE_SCENARIO_POINT_HASH(Hash scenarioHash, float x, float y, float z, float heading, Any p5, Any p6, bool p7) { return invoke <int>(0x94B745CE41DB58A1, scenarioHash, x, y, z, heading, p5, p6, p7); }
	static int CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(Entity entity, Hash scenarioHash, float x, float y, float z, float heading, Any p6, Any p7, bool p8) { return invoke <int>(0x794AB1379A74064D, entity, scenarioHash, x, y, z, heading, p6, p7, p8); }
	static bool _DOES_SCENARIO_POINT_HAVE_PROPS(int scenario) { return invoke <bool>(0xEA31F199A73801D3, scenario); }
	static Entity GET_PROP_FOR_SCENARIO_POINT(int scenarioPoint, const char* name) { return invoke <Entity>(0x295514F198EFD0CA, scenarioPoint, name); }
	static bool _ASSOCIATE_PROP_WITH_SCENARIO(int scenario, Entity entity, const char* propName, bool p3) { return invoke <bool>(0x8360C47380B6F351, scenario, entity, propName, p3); }
	static void _SET_SCENARIO_POINT_FLAG(int scenario, int flag, bool value) { return invoke <void>(0x5AF19B6CC2115D34, scenario, flag, value); }
	static bool _IS_SCENARIO_POINT_FLAG_SET(int scenario, int flag) { return invoke <bool>(0x8569C38D2FB80650, scenario, flag); }
	static void _0xADC45010BC17AF0E(Any p0, Any p1) { return invoke <void>(0xADC45010BC17AF0E, p0, p1); }
	static Any _0x974DA3408DEC4E79(Any p0) { return invoke <Any>(0x974DA3408DEC4E79, p0); }
	static bool _DISASSOCIATE_PROP_FROM_SCENARIO(int scenario, const char* propName) { return invoke <bool>(0x6EF4E31B4D5D2DA0, scenario, propName); }
	static bool DOES_SCENARIO_POINT_EXIST(int scenario) { return invoke <bool>(0x841475AC96E794D1, scenario); }
	static Any _0x22CD2C33ED4467A1(Any p0) { return invoke <Any>(0x22CD2C33ED4467A1, p0); }
	static Entity _GET_SCENARIO_POINT_ENTITY(int scenario) { return invoke <Entity>(0x7467165EE97D3C68, scenario); }
	static Ped _GET_PED_USING_SCENARIO_POINT(int scenario) { return invoke <Ped>(0x5BA659955369B0E2, scenario); }
	static Vector3 _GET_SCENARIO_POINT_COORDS(int scenario, bool p1) { return invoke <Vector3>(0xA8452DD321607029, scenario, p1); }
	static Vector3 _0x91CB5E431F579BA1(Any p0) { return invoke <Vector3>(0x91CB5E431F579BA1, p0); }
	static Any _0x370F57C47F68EBCA(Any p0) { return invoke <Any>(0x370F57C47F68EBCA, p0); }
	static float _GET_SCENARIO_POINT_HEADING(int scenario, bool p1) { return invoke <float>(0xB93EA7184BAA85C3, scenario, p1); }
	static float _GET_SCENARIO_POINT_RADIUS(int scenario) { return invoke <float>(0x6718F40313A2B5A6, scenario); }
	static void _SET_SCENARIO_POINT_COORDS(int scenario, float xPos, float yPos, float zPos, bool p4) { return invoke <void>(0x2056AB38DF06825C, scenario, xPos, yPos, zPos, p4); }
	static void _SET_SCENARIO_POINT_HEADING(int scenario, float heading, bool p2) { return invoke <void>(0xD3A0DA8F91612C6E, scenario, heading, p2); }
	static void _SET_SCENARIO_POINT_RADIUS(int scenario, float radius) { return invoke <void>(0xC47D9080A9A8856A, scenario, radius); }
	static void _0xA7479FB665361EDB(Any p0, Any p1) { return invoke <void>(0xA7479FB665361EDB, p0, p1); }
	static void _0xE69FDA40AAC3EFC0(Any p0, Any p1) { return invoke <void>(0xE69FDA40AAC3EFC0, p0, p1); }
	static int GET_SCENARIO_POINTS_IN_AREA(float posX, float posY, float posZ, float radius, void* scenariosInRadius, int size) { return invoke <int>(0x345EC3B7EBDE1CB5, posX, posY, posZ, radius, scenariosInRadius, size); }
	static Any _0xEFD875C2791EBEFD(Any p0, Any p1, Any p2, Any p3) { return invoke <Any>(0xEFD875C2791EBEFD, p0, p1, p2, p3); }
	static Any _0x152664AA3188B193(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <Any>(0x152664AA3188B193, p0, p1, p2, p3, p4, p5); }
	static Any _0xE7BBC4E56B989449(Any p0, Any p1, Any p2) { return invoke <Any>(0xE7BBC4E56B989449, p0, p1, p2); }
	static int _GET_SCENARIO_POINT_PED_IS_USING(Ped ped, bool p1) { return invoke <int>(0xDF7993356F52359A, ped, p1); }
	static Any GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Ped ped) { return invoke <Any>(0xD04241BBF6D03A5E, ped); }
	static void _SET_SCENARIO_CONTAINER_OPENING_STATE(Entity entity, bool open) { return invoke <void>(0x188F8071F244B9B8, entity, open); }
	static Any _0xA9E7672F8C6C6F74(Any p0) { return invoke <Any>(0xA9E7672F8C6C6F74, p0); }
	static Any _0x0A98A362C5A19A43(Any p0) { return invoke <Any>(0xA98A362C5A19A43, p0); }
	static Any _0x849791EBBDBA0362(Any p0) { return invoke <Any>(0x849791EBBDBA0362, p0); }
	static Any _0x640A602946A8C972(Any p0) { return invoke <Any>(0x640A602946A8C972, p0); }
	static Any _0x01AF8A3729231A43(Any p0) { return invoke <Any>(0x1AF8A3729231A43, p0); }
	static bool _GET_SCENARIO_CONTAINER_OPENING_STATE(Entity entity) { return invoke <bool>(0xB219612B5568E9EC, entity); }
	static void _RESET_SCENARIO_FOR_ENTITY(int scenario, Entity entity) { return invoke <void>(0x2E20878FD208A68E, scenario, entity); }
	static void _0x4161648394262FDF(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x4161648394262FDF, p0, p1, p2, p3); }
	static void _0x9C8F42A5D1859DC1(Any p0) { return invoke <void>(0x9C8F42A5D1859DC1, p0); }
	static void _DELETE_SCENARIO_POINT(int scenario) { return invoke <void>(0x81948DFE4F5A0283, scenario); }
	static void TASK_USE_SCENARIO_POINT(Ped ped, int scenario, const char* conditionalAnim, int p3, bool p4, bool p5, Hash p6, bool p7, float p8, bool p9) { return invoke <void>(0xCCDAE6324B6A821C, ped, scenario, conditionalAnim, p3, p4, p5, p6, p7, p8, p9); }
	static void _TASK_USE_SCENARIO_POINT_2(Ped ped, Ped ped2, Any p2, const char* p3, int p4, Hash p5, float p6, bool p7) { return invoke <void>(0xF6641449DD86FBE, ped, ped2, p2, p3, p4, p5, p6, p7); }
	static void TASK_START_SCENARIO_IN_PLACE_HASH(Ped ped, Hash scenarioHash, int duration, bool playEnterAnim, Hash conditionalHash, float heading, bool p6) { return invoke <void>(0x524B54361229154F, ped, scenarioHash, duration, playEnterAnim, conditionalHash, heading, p6); }
	static void _TASK_START_SCENARIO_IN_PLACE_2(Ped ped, Any p1, const char* p2, int p3, bool p4, float p5, bool p6) { return invoke <void>(0xA917E39F2CEFD215, ped, p1, p2, p3, p4, p5, p6); }
	static void TASK_START_SCENARIO_AT_POSITION(Ped ped, Hash scenarioHash, float x, float y, float z, float heading, int duration, bool sittingScenario, bool teleport, const char* p9, float p10, bool p11) { return invoke <void>(0x4D1F61FC34AF3CD1, ped, scenarioHash, x, y, z, heading, duration, sittingScenario, teleport, p9, p10, p11); }
	static Any _0xF97F462779B31786(Any p0) { return invoke <Any>(0xF97F462779B31786, p0); }
	static Any _0x6C269F673C47031E(Any p0) { return invoke <Any>(0x6C269F673C47031E, p0); }
	static void _0x9667CCE29BFA0780(Any p0) { return invoke <void>(0x9667CCE29BFA0780, p0); }
	static Any _0x00FFE0F85253C572(Any p0) { return invoke <Any>(0xFFE0F85253C572, p0); }
	static void _TASK_USE_NEAREST_SCENARIO_TO_COORD(Ped ped, float x, float y, float z, float distance, int duration, bool p6, bool p7, bool p8, bool p9) { return invoke <void>(0x322BFDEA666E2B0E, ped, x, y, z, distance, duration, p6, p7, p8, p9); }
	static void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Ped PedIndex, float vPositionX, float vPositionY, float vPositionZ, float fRange, int iTimeToLeaveMS, bool p6, bool p7, bool p8, bool p9) { return invoke <void>(0x58E2E0F23F6B76C3, PedIndex, vPositionX, vPositionY, vPositionZ, fRange, iTimeToLeaveMS, p6, p7, p8, p9); }
	static void TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Ped ped, float x, float y, float z, float distance) { return invoke <void>(0x3774B03456DD6106, ped, x, y, z, distance); }
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Ped PedIndex, float vPositionX, float vPositionY, float vPositionZ, float fRange, bool p5, bool p6, bool p7, bool p8) { return invoke <void>(0x9FDA1B3D7E7028B3, PedIndex, vPositionX, vPositionY, vPositionZ, fRange, p5, p6, p7, p8); }
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Ped PedIndex, float vPositionX, float vPositionY, float vPositionZ, float fRange, bool p5, bool p6, bool p7, bool p8) { return invoke <void>(0x97A28E63F0BA5631, PedIndex, vPositionX, vPositionY, vPositionZ, fRange, p5, p6, p7, p8); }
	static Any _0xFDECCA06E8B81346(Ped ped) { return invoke <Any>(0xFDECCA06E8B81346, ped); }
	static Any _0x2D657B10F211C572(Ped ped, float p1) { return invoke <Any>(0x2D657B10F211C572, ped, p1); }
	static void TASK_RIDE_TRAIN(Ped ped, Vehicle train, int scenarioPoint, Hash scenarioHash) { return invoke <void>(0x37FB1C870E2EC2C6, ped, train, scenarioPoint, scenarioHash); }
	static Any _0x79197F7D2BB5E73A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <Any>(0x79197F7D2BB5E73A, p0, p1, p2, p3, p4, p5); }
	static bool DOES_SCENARIO_EXIST_IN_AREA(float vPositionX, float vPositionY, float vPositionZ, float fRange, bool p4, Any p5, bool p6) { return invoke <bool>(0x5A59271FFADD33C1, vPositionX, vPositionY, vPositionZ, fRange, p4, p5, p6); }
	static bool DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA_HASH(float x, float y, float z, Hash typeHash, float radius, bool p5) { return invoke <bool>(0x6EEAD6AF637DA752, x, y, z, typeHash, radius, p5); }
	static int FIND_SCENARIO_OF_TYPE_HASH(float xPos, float yPos, float zPos, Hash scenarioType, float distance, Any p5, bool p6) { return invoke <int>(0xF533D68FF970D190, xPos, yPos, zPos, scenarioType, distance, p5, p6); }
	static void _0x0D322AEF8878B8FE(Any p0, Any p1) { return invoke <void>(0xD322AEF8878B8FE, p0, p1); }
	static Any _0xD508FA229F1C4900(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <Any>(0xD508FA229F1C4900, p0, p1, p2, p3, p4, p5); }
	static void _0xB8E213D02F37947D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0xB8E213D02F37947D, p0, p1, p2, p3, p4, p5, p6); }
	static bool IS_SCENARIO_OCCUPIED(float vPositionX, float vPositionY, float vPositionZ, float fRange, bool bOnlyUsersActuallyAtScenario) { return invoke <bool>(0x788756D73AC2E07C, vPositionX, vPositionY, vPositionZ, fRange, bOnlyUsersActuallyAtScenario); }
	static Any _0x1ACBC313966C21F3(int scenario) { return invoke <Any>(0x1ACBC313966C21F3, scenario); }
	static bool PED_HAS_USE_SCENARIO_TASK(Ped PedIndex) { return invoke <bool>(0x295E3CCEC879CCD7, PedIndex); }
	static bool _PED_IS_IN_SCENARIO_BASE(Ped ped) { return invoke <bool>(0x2EBBB3989B7E695, ped); }
	static Any _0x90703A8F75EE4ABD(Any p0, Any p1) { return invoke <Any>(0x90703A8F75EE4ABD, p0, p1); }
	static void _0xD999E379265A4501(Any p0, Any p1, Any p2) { return invoke <void>(0xD999E379265A4501, p0, p1, p2); }
	static void PLAY_ANIM_ON_RUNNING_SCENARIO(Ped PedIndex, const char* clipSet, const char* clip) { return invoke <void>(0x748040460F8DF5DC, PedIndex, clipSet, clip); }
	static Any _0x74F0209674864CBD() { return invoke <Any>(0x74F0209674864CBD); }
	static Any _0xE1C105E6BBA48270() { return invoke <Any>(0xE1C105E6BBA48270); }
	static Any _0x1AC5A8AB50CFAA33(Any p0) { return invoke <Any>(0x1AC5A8AB50CFAA33, p0); }
	static void _0xBEEFBB608D2AA68A(Any p0) { return invoke <void>(0xBEEFBB608D2AA68A, p0); }
	static void _0x19BC99C678FBA139(Any p0, Any p1, Any p2) { return invoke <void>(0x19BC99C678FBA139, p0, p1, p2); }
	static void _0x5D9B0BAAF04CF65B(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x5D9B0BAAF04CF65B, p0, p1, p2, p3); }
	static void _0x9B6A58FDB0024F12(Any p0, Any p1) { return invoke <void>(0x9B6A58FDB0024F12, p0, p1); }
	static void _0xBC3F847AE2C3DC65(Any p0, Any p1) { return invoke <void>(0xBC3F847AE2C3DC65, p0, p1); }
	static void _0x450080DDEDB91258(Any p0, Any p1) { return invoke <void>(0x450080DDEDB91258, p0, p1); }
	static void _0x954451EA2D2120FB(Any p0, Any p1) { return invoke <void>(0x954451EA2D2120FB, p0, p1); }
	static void _0x0F4F6C4CE471259D(Any p0, Any p1) { return invoke <void>(0xF4F6C4CE471259D, p0, p1); }
	static void _0xB8E3486D107F4194(Any p0, Any p1) { return invoke <void>(0xB8E3486D107F4194, p0, p1); }
	static void _0x827A58CED9D4D5B4(Any p0, Any p1) { return invoke <void>(0x827A58CED9D4D5B4, p0, p1); }
	static void _0x4A7D73989F52EB37(Any p0, Any p1) { return invoke <void>(0x4A7D73989F52EB37, p0, p1); }
	static void _0xB79817DB31FF72B9(Any p0, Any p1) { return invoke <void>(0xB79817DB31FF72B9, p0, p1); }
	static void _0x65D281985F2BDFC2(Any p0, Any p1) { return invoke <void>(0x65D281985F2BDFC2, p0, p1); }
	static void _0x885D19AC2B6FBFF4(Any p0, Any p1) { return invoke <void>(0x885D19AC2B6FBFF4, p0, p1); }
	static void _0x2064B33F6E6B92D4(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x2064B33F6E6B92D4, p0, p1, p2, p3); }
	static void _0xCE4E669400E5F8AA(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xCE4E669400E5F8AA, p0, p1, p2, p3); }
	static void _0x2EB977293923C723(Any p0, Any p1) { return invoke <void>(0x2EB977293923C723, p0, p1); }
	static void _0xE9225354FB7437A7(Any p0, Any p1) { return invoke <void>(0xE9225354FB7437A7, p0, p1); }
	static void _0x764DB5A48390FBAD(Any p0, Any p1) { return invoke <void>(0x764DB5A48390FBAD, p0, p1); }
	static void _0x8F8C84363810691A(Any p0, Any p1) { return invoke <void>(0x8F8C84363810691A, p0, p1); }
	static void _0xFF8AFCA532B500D4(Any p0, Any p1) { return invoke <void>(0xFF8AFCA532B500D4, p0, p1); }
	static Any _0xFE5D28B9B7837CC1(Any p0, Any p1, Any p2, Any p3) { return invoke <Any>(0xFE5D28B9B7837CC1, p0, p1, p2, p3); }
	static void _0x2B8AF29A78024BD3(Any p0) { return invoke <void>(0x2B8AF29A78024BD3, p0); }
	static Any _0x0365000D8BF86531(Any p0) { return invoke <Any>(0x365000D8BF86531, p0); }
	static Vector3 _0x865732725536EE39(Any p0) { return invoke <Vector3>(0x865732725536EE39, p0); }
	static void _0x0E184495B27BB57D() { return invoke <void>(0xE184495B27BB57D); }
	static bool DOES_SCENARIO_GROUP_EXIST(const char* scenarioGroupName) { return invoke <bool>(0xF9034C136C9E00D3, scenarioGroupName); }
	static bool _DOES_SCENARIO_GROUP_EXIST_HASH(Hash scenarioGroup) { return invoke <bool>(0x76E98B52369A289C, scenarioGroup); }
	static bool IS_SCENARIO_GROUP_ENABLED(const char* scenarioGroupName) { return invoke <bool>(0x367A09DED4E05B99, scenarioGroupName); }
	static bool _IS_SCENARIO_GROUP_ENABLED_HASH(Hash scenarioGroup) { return invoke <bool>(0xDCC374913DE6AAA6, scenarioGroup); }
	static void SET_SCENARIO_GROUP_ENABLED(const char* scenarioGroupName, bool enabled) { return invoke <void>(0x2C8E5B49848664E, scenarioGroupName, enabled); }
	static void _SET_SCENARIO_GROUP_ENABLED_HASH(Hash scenarioGroup, bool toggle) { return invoke <void>(0x9925EDDB6EAB88CD, scenarioGroup, toggle); }
	static void RESET_SCENARIO_GROUPS_ENABLED() { return invoke <void>(0xDD902D0349AFAD3A); }
	static void _0x358A1A751B335A11(Any p0) { return invoke <void>(0x358A1A751B335A11, p0); }
	static void FORCE_SCENARIO_GROUP_PRIORITY(Any p0, Any p1) { return invoke <void>(0x444C910A5058E568, p0, p1); }
	static Any _0xE55478C5EDF70AC2(Any p0) { return invoke <Any>(0xE55478C5EDF70AC2, p0); }
	static bool _IS_SCENARIO_POINT_ACTIVE(int scenario) { return invoke <bool>(0xCC36D4156006509, scenario); }
	static void _SET_SCENARIO_POINT_ACTIVE(int scenario, bool active) { return invoke <void>(0xEEE4829304F93EEE, scenario, active); }
	static void _RESET_SCENARIO_SCRIPT(int scenario) { return invoke <void>(0x5A40040BB5AE3EA2, scenario); }
	static bool IS_SCENARIO_TYPE_ENABLED(const char* scenarioTypeName) { return invoke <bool>(0x3A815DB3EA088722, scenarioTypeName); }
	static void SET_SCENARIO_TYPE_ENABLED(const char* scenarioTypeName, bool enabled) { return invoke <void>(0xEB47EC4E34FB7EE1, scenarioTypeName, enabled); }
	static void _SET_SCENARIO_TYPE_ENABLED_HASH(Hash scenarioType, bool toggle) { return invoke <void>(0xD00E50E673802D71, scenarioType, toggle); }
	static void RESET_SCENARIO_TYPES_ENABLED() { return invoke <void>(0xD40EE2A7F2B2D6D); }
	static int _GET_SCENARIO_POINT_TYPE_PED_IS_USING(Ped ped) { return invoke <int>(0x2D0571BB55879DA2, ped); }
	static Hash _GET_SCENARIO_POINT_TYPE(int scenario) { return invoke <Hash>(0xA92450B5AE687AAF, scenario); }
	static bool IS_PED_ACTIVE_IN_SCENARIO(Ped PedIndex, int scenario) { return invoke <bool>(0xAA135F9482C82CC3, PedIndex, scenario); }
	static bool IS_PED_EXITING_SCENARIO(Ped ped, bool p1) { return invoke <bool>(0xC3CB2E600C8977D, ped, p1); }
	static Any _0x2C497BDEF897C6DF(Any p0) { return invoke <Any>(0x2C497BDEF897C6DF, p0); }
	static void TASK_COMBAT_HATED_TARGETS_IN_AREA(Ped PedIndex, float vPositionX, float vPositionY, float vPositionZ, float fRange, int Flags, Any p6) { return invoke <void>(0x4CF5F55DAC3280A0, PedIndex, vPositionX, vPositionY, vPositionZ, fRange, Flags, p6); }
	static void TASK_COMBAT_HATED_TARGETS_NO_LOS_TEST(Ped ped, float radius) { return invoke <void>(0xB5BC69D9C4060BC3, ped, radius); }
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED(Ped PedIndex, float fRange, int Flags, Any p3) { return invoke <void>(0x7BF835BB9E2698C8, PedIndex, fRange, Flags, p3); }
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(Ped PedIndex, float fRange, int iTime, int Flags) { return invoke <void>(0x2BBA30B854534A0C, PedIndex, fRange, iTime, Flags); }
	static void TASK_COMBAT_HATED_TARGETS(Ped ped, float radius) { return invoke <void>(0x8182B561A29BD597, ped, radius); }
	static void _0x30B391915538EBE2(Any p0) { return invoke <void>(0x30B391915538EBE2, p0); }
	static void TASK_THROW_PROJECTILE(Ped PedIndex, float ThrowAtCoordX, float ThrowAtCoordY, float ThrowAtCoordZ) { return invoke <void>(0x7285951DBF6B5A51, PedIndex, ThrowAtCoordX, ThrowAtCoordY, ThrowAtCoordZ); }
	static void _TASK_THROW_PROJECTILE_2(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x7282356DFF6B5A51, p0, p1, p2, p3); }
	static void TASK_WHISTLE_ANIM(Ped ped, Hash audPedWhistleType, Hash p2) { return invoke <void>(0xD6401A1B2F63BED6, ped, audPedWhistleType, p2); }
	static void TASK_SWAP_WEAPON(Ped PedIndex, bool p1, bool p2, bool p3, bool p4) { return invoke <void>(0xA21C51255B205245, PedIndex, p1, p2, p3, p4); }
	static void _0x0000A8ACDC2E1B6A(Any p0, Any p1) { return invoke <void>(0xA8ACDC2E1B6A, p0, p1); }
	static void TASK_RELOAD_WEAPON(Ped PedIndex, bool bDrawWeapon) { return invoke <void>(0x62D2916F56B9CD2D, PedIndex, bDrawWeapon); }
	static void TASK_PICK_UP_WEAPON(Ped ped, Any p1) { return invoke <void>(0x55B0ECFD98596624, ped, p1); }
	static bool IS_PED_GETTING_UP(Ped PedIndex) { return invoke <bool>(0x2A74E1D5F2F00EEC, PedIndex); }
	static void TASK_ANIMAL_WRITHE(Ped ped, Any p1, Any p2) { return invoke <void>(0x8C038A39C4A4B6D6, ped, p1, p2); }
	static void _TASK_ANIMAL_BLEED_OUT(Ped ped, Ped killer, bool p2, Hash weaponHash, int p4, int p5) { return invoke <void>(0x30A768C30D385EC5, ped, killer, p2, weaponHash, p4, p5); }
	static bool IS_PED_IN_WRITHE(Ped PedIndex) { return invoke <bool>(0xDEB6D52126E7D640, PedIndex); }
	static Any _0x3F8387DB1B9F31B7(Any p0, Any p1) { return invoke <Any>(0x3F8387DB1B9F31B7, p0, p1); }
	static Any _0x756C7B4C43DF0422(Any p0) { return invoke <Any>(0x756C7B4C43DF0422, p0); }
	static Any _0x351F74ED6177EBE7() { return invoke <Any>(0x351F74ED6177EBE7); }
	static Any _0x6C50B9DCCCA70023(Any p0) { return invoke <Any>(0x6C50B9DCCCA70023, p0); }
	static void TASK_REVIVE_TARGET(Ped ped, Ped reviver, Hash tool) { return invoke <void>(0x356088527D9EBAAD, ped, reviver, tool); }
	static void OPEN_PATROL_ROUTE(const char* RouteName) { return invoke <void>(0xA36BFB5EE89F3D82, RouteName); }
	static void CLOSE_PATROL_ROUTE() { return invoke <void>(0xB043ECA801B8CBC1); }
	static void ADD_PATROL_ROUTE_NODE(int NodeId, const char* NodeType, float vNodePositionX, float vNodePositionY, float vNodePositionZ, float NodeLookAtPosX, float NodeLookAtPosY, float NodeLookAtPosZ, int Duration, bool p9) { return invoke <void>(0x8EDF950167586B7C, NodeId, NodeType, vNodePositionX, vNodePositionY, vNodePositionZ, NodeLookAtPosX, NodeLookAtPosY, NodeLookAtPosZ, Duration, p9); }
	static void ADD_PATROL_ROUTE_LINK(int NodeId1, int NodeId2) { return invoke <void>(0x23083260DEC3A551, NodeId1, NodeId2); }
	static void CREATE_PATROL_ROUTE() { return invoke <void>(0xAF8A443CCC8018DC); }
	static void DELETE_PATROL_ROUTE(const char* RouteName) { return invoke <void>(0x7767DD9D65E91319, RouteName); }
	static Any _0x643FD1556F621772(Any p0, Any p1, Any p2) { return invoke <Any>(0x643FD1556F621772, p0, p1, p2); }
	static void TASK_PATROL(Ped Ped, const char* RouteName, int PedAlertState, bool CanChatToPeds, bool CanUseHeadLookAtAlongRoute) { return invoke <void>(0xBDA5DF49D080FE4E, Ped, RouteName, PedAlertState, CanChatToPeds, CanUseHeadLookAtAlongRoute); }
	static void _TASK_PATROL_2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke <void>(0x964B06C88E4C86DB, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void TASK_STAY_IN_COVER(Ped Ped) { return invoke <void>(0xE5DA8615A6180789, Ped); }
	static void TASK_VEHICLE_SHOOT_AT_PED(Ped PedIndex, Ped OtherPed, float FireTolerance) { return invoke <void>(0x10AB107B887214D8, PedIndex, OtherPed, FireTolerance); }
	static void TASK_VEHICLE_AIM_AT_PED(Ped PedIndex, Ped OtherPed) { return invoke <void>(0xE41885592B08B097, PedIndex, OtherPed); }
	static void TASK_VEHICLE_SHOOT_AT_COORD(Ped PedIndex, float vPositionX, float vPositionY, float vPositionZ, float FireTolerance) { return invoke <void>(0x5190796ED39C9B6D, PedIndex, vPositionX, vPositionY, vPositionZ, FireTolerance); }
	static void _0xAF2EF28CE3084505(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xAF2EF28CE3084505, p0, p1, p2, p3); }
	static void TASK_VEHICLE_AIM_AT_COORD(Ped PedIndex, float vPositionX, float vPositionY, float vPositionZ) { return invoke <void>(0x447C1E9EF844BC0F, PedIndex, vPositionX, vPositionY, vPositionZ); }
	static void TASK_VEHICLE_GOTO_NAVMESH(Ped iPed, Vehicle VehicleIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float CruiseSpeed, int Mode, float TargetReachedDist) { return invoke <void>(0x195AEEB13CEFE2EE, iPed, VehicleIndex, VecCoorsX, VecCoorsY, VecCoorsZ, CruiseSpeed, Mode, TargetReachedDist); }
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Ped PedIndex, float GoToCoordX, float GoToCoordY, float GoToCoordZ, float AimAtCoordX, float AimAtCoordY, float AimAtCoordZ, float p7, bool p8, float p9, float p10, bool p11, Any p12, bool p13, Hash FiringPatternHash, Any p15) { return invoke <void>(0x11315AB3385B8AC0, PedIndex, GoToCoordX, GoToCoordY, GoToCoordZ, AimAtCoordX, AimAtCoordY, AimAtCoordZ, p7, p8, p9, p10, p11, p12, p13, FiringPatternHash, p15); }
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD_USING_COMBAT_STYLE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15) { return invoke <void>(0x639C0425A0B4E77E, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); }
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Ped PedIndex, float GoToCoordX, float GoToCoordY, float GoToCoordZ, Ped ped2, float p5, Any p6, float p7, float p8, Any p9, Any p10, Any p11, Hash firingPattern, int p13, Any p14) { return invoke <void>(0xB2A16444EAD9AE47, PedIndex, GoToCoordX, GoToCoordY, GoToCoordZ, ped2, p5, p6, p7, p8, p9, p10, p11, firingPattern, p13, p14); }
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { return invoke <void>(0x78426D0982D083C9, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Ped PedIndex, Entity GoToEntityIndex, Entity AimAtEntityIndex, float p3, Any p4, float p5, float p6, Any p7, Any p8, Hash FiringPatternHash, Any p10) { return invoke <void>(0x97465886D35210E9, PedIndex, GoToEntityIndex, AimAtEntityIndex, p3, p4, p5, p6, p7, p8, FiringPatternHash, p10); }
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoke <void>(0xCEF0117C233026AD, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Ped PedIndex, float GoToCoordX, float GoToCoordY, float GoToCoordZ, float AimNearCoordX, float AimNearCoordY, float AimNearCoordZ, float MoveBlendRatio, bool Shoot, float TargetDistance, float SlowDistance, bool UseNavMesh, int iNavFlags, int iTaskFlags, Hash FiringPatternHash) { return invoke <void>(0xA55547801EB331FC, PedIndex, GoToCoordX, GoToCoordY, GoToCoordZ, AimNearCoordX, AimNearCoordY, AimNearCoordZ, MoveBlendRatio, Shoot, TargetDistance, SlowDistance, UseNavMesh, iNavFlags, iTaskFlags, FiringPatternHash); }
	static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD_USING_COMBAT_STYLE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { return invoke <void>(0x87BD711FC31EA273, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
	static void SET_HIGH_FALL_TASK(Ped nPedIndex, int nMinTime, int nMaxTime, int type) { return invoke <void>(0x8C825BDC7741D37C, nPedIndex, nMinTime, nMaxTime, type); }
	static void _0x5217B7B6DB78E1F3(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x5217B7B6DB78E1F3, p0, p1, p2, p3, p4); }
	static void REQUEST_WAYPOINT_RECORDING(const char* RecordingName) { return invoke <void>(0x9EEFB62EB27B5792, RecordingName); }
	static bool GET_IS_WAYPOINT_RECORDING_LOADED(const char* RecordingName) { return invoke <bool>(0xCB4E8BE8A0063C5D, RecordingName); }
	static void REMOVE_WAYPOINT_RECORDING(const char* RecordingName) { return invoke <void>(0xFF1B8B4AA1C25DC8, RecordingName); }
	static void _0xF718931A82EEB898() { return invoke <void>(0xF718931A82EEB898); }
	static bool WAYPOINT_RECORDING_GET_NUM_POINTS(const char* RecordingName, int* iOutNumPoints) { return invoke <bool>(0x5343532C01A07234, RecordingName, iOutNumPoints); }
	static bool WAYPOINT_RECORDING_GET_COORD(const char* RecordingName, int iWaypoint, Vector3* vOutCoord) { return invoke <bool>(0x2FB897405C90B361, RecordingName, iWaypoint, vOutCoord); }
	static float WAYPOINT_RECORDING_GET_SPEED_AT_POINT(const char* RecordingName, int iWaypoint) { return invoke <float>(0x5622AEBC33ACA9, RecordingName, iWaypoint); }
	static bool WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(const char* RecordingName, float vPosX, float vPosY, float vPosZ, int* iOutWaypoint) { return invoke <bool>(0xB629A298081F876F, RecordingName, vPosX, vPosY, vPosZ, iOutWaypoint); }
	static void TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(Ped ped, Any p1) { return invoke <void>(0xCFC13EBC19BCA52, ped, p1); }
	static void TASK_FOLLOW_WAYPOINT_RECORDING(Ped iPed, const char* RecordingName, int iStartingProgress, int iFlags, int iTargetProgress, bool p5, Any p6, int p7) { return invoke <void>(0x759591819534F7B, iPed, RecordingName, iStartingProgress, iFlags, iTargetProgress, p5, p6, p7); }
	static void TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(Ped ped, const char* waypointRecording, float p2, int p3, int p4, int p5, bool p6) { return invoke <void>(0xBE9B0520BD7C445B, ped, waypointRecording, p2, p3, p4, p5, p6); }
	static void TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(Ped ped0, Ped ped1, const char* waypointRecording, float p3, float p4, int p5, int p6, int p7, bool p8) { return invoke <void>(0x4D2B787BAE9AB760, ped0, ped1, waypointRecording, p3, p4, p5, p6, p7, p8); }
	static bool IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Ped iPed, const char* waypointRecording) { return invoke <bool>(0xE03B3F2D3DC59B64, iPed, waypointRecording); }
	static int GET_PED_WAYPOINT_PROGRESS(Ped iPed) { return invoke <int>(0x2720AAA75001E094, iPed); }
	static float GET_PED_WAYPOINT_DISTANCE(Ped iPed) { return invoke <float>(0xE6A877C64CAF1BC5, iPed); }
	static bool SET_PED_WAYPOINT_ROUTE_OFFSET(Ped iPed, float vOffsetX, float vOffsetY, float vOffsetZ) { return invoke <bool>(0xED98E10B0AFCE4B4, iPed, vOffsetX, vOffsetY, vOffsetZ); }
	static float GET_WAYPOINT_DISTANCE_ALONG_ROUTE(const char* RecordingName, int iWaypoint) { return invoke <float>(0xA5B769058763E497, RecordingName, iWaypoint); }
	static float _0x3ACC128510142B9D(const char* waypointRecording, float x, float y, float z) { return invoke <float>(0x3ACC128510142B9D, waypointRecording, x, y, z); }
	static bool WAYPOINT_PLAYBACK_GET_IS_PAUSED(Ped iPed) { return invoke <bool>(0x701375A7D43F01CB, iPed); }
	static bool WAYPOINT_PLAYBACK_GET_IS_AIMING(Ped ped) { return invoke <bool>(0xD73A5D1F0325C71C, ped); }
	static bool WAYPOINT_PLAYBACK_GET_IS_SHOOTING(Ped ped) { return invoke <bool>(0xA5B94DF8AF058F46, ped); }
	static void WAYPOINT_PLAYBACK_PAUSE(Ped iPed, bool p1, bool p2, bool p3) { return invoke <void>(0xF342546AA06FED5, iPed, p1, p2, p3); }
	static void WAYPOINT_PLAYBACK_RESUME(Ped iPed, bool bAchieveHeadingFirst, int iProgressToContinueFrom, int iTimeBeforeResumingMs) { return invoke <void>(0x244F70C84C547D2D, iPed, bAchieveHeadingFirst, iProgressToContinueFrom, iTimeBeforeResumingMs); }
	static void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Ped iPed, float fMoveBlendRatio, bool p2, float p3, bool p4) { return invoke <void>(0x7D7D2B47FA788E85, iPed, fMoveBlendRatio, p2, p3, p4); }
	static void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Ped iPed) { return invoke <void>(0x6599D834B12D0800, iPed); }
	static float GET_PED_WAYPOINT_OVERRIDE_SPEED(Ped ped) { return invoke <float>(0xD39A2F3E7FCAFF08, ped); }
	static void USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(const char* RecordingName, bool bUseAsAssistedMovementRoute, float fPathWidth, float fTension, bool p4) { return invoke <void>(0x5A353B8E6B1095B5, RecordingName, bUseAsAssistedMovementRoute, fPathWidth, fTension, p4); }
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_PED(Ped iPed, Ped iTargetPed, bool bRunAndGun, Any p3) { return invoke <void>(0x20E330937C399D29, iPed, iTargetPed, bRunAndGun, p3); }
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_ENTITY(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x4F158205E0C74385, p0, p1, p2, p3); }
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Ped iPed, float vTargetCoordsX, float vTargetCoordsY, float vTargetCoordsZ, bool bRunAndGun, Any p5) { return invoke <void>(0x8968400D900ED8B3, iPed, vTargetCoordsX, vTargetCoordsY, vTargetCoordsZ, bRunAndGun, p5); }
	static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(Ped iPed, Ped iTargetPed, bool bRunAndGun, Hash FiringPatternHash, float p4) { return invoke <void>(0xE70BA7B90F8390DC, iPed, iTargetPed, bRunAndGun, FiringPatternHash, p4); }
	static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x4AF458F71C1196D2, p0, p1, p2, p3, p4); }
	static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Ped iPed, float vTargetCoordsX, float vTargetCoordsY, float vTargetCoordsZ, bool bRunAndGun, Hash FiringPatternHash, float p6) { return invoke <void>(0x57A25CFCC9DB671, iPed, vTargetCoordsX, vTargetCoordsY, vTargetCoordsZ, bRunAndGun, FiringPatternHash, p6); }
	static void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Ped iPed) { return invoke <void>(0x47EFA040EBB8E2EA, iPed); }
	static void ASSISTED_MOVEMENT_REMOVE_ROUTE(const char* RouteName) { return invoke <void>(0x3548536485DD792B, RouteName); }
	static bool _CREATE_WAYPOINT_PATH(const char* pathName, void* p1, int nodes, int p3) { return invoke <bool>(0x5C885E0978B6AD60, pathName, p1, nodes, p3); }
	static bool ASSISTED_MOVEMENT_IS_ROUTE_LOADED(const char* RouteName) { return invoke <bool>(0x60F9A4393A21F741, RouteName); }
	static void ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(const char* RouteName, int iFlags) { return invoke <void>(0xD5002D78B7162E1B, RouteName, iFlags); }
	static void SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(Any p0, Any p1) { return invoke <void>(0x295F03DC97BEEBC1, p0, p1); }
	static void SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke <void>(0xB5C51DD544F14F58, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Ped iPed, Vehicle VehicleIndex, const char* RecordingName, int Mode, Any p4, int eWaypoint, int iFlags, float MaxSpeed, bool DriveInLoop, float fTargetArriveDistance, bool p10) { return invoke <void>(0x3123FAA6DB1CF7ED, iPed, VehicleIndex, RecordingName, Mode, p4, eWaypoint, iFlags, MaxSpeed, DriveInLoop, fTargetArriveDistance, p10); }
	static void _TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING_2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke <void>(0x41D17A9E221AE30, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static bool IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Vehicle iVeh, Any p1) { return invoke <bool>(0xF5134943EA29868C, iVeh, p1); }
	static int GET_VEHICLE_WAYPOINT_PROGRESS(Vehicle iVeh) { return invoke <int>(0x9824CFF8FC66E159, iVeh); }
	static int GET_VEHICLE_WAYPOINT_TARGET_POINT(Vehicle iVeh) { return invoke <int>(0x416B62AC8B9E5BBD, iVeh); }
	static void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Vehicle iVeh) { return invoke <void>(0x8A4E6AC373666BC5, iVeh); }
	static Any VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED(Any p0) { return invoke <Any>(0x4D6D30AB18B0B089, p0); }
	static void VEHICLE_WAYPOINT_PLAYBACK_RESUME(Vehicle iVeh) { return invoke <void>(0xDC04FCAA7839D492, iVeh); }
	static void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Vehicle iVeh) { return invoke <void>(0x5CEB25A7D2848963, iVeh); }
	static void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Vehicle iVeh, float fSpeed) { return invoke <void>(0x121F0593E0A431D7, iVeh, fSpeed); }
	static Any GET_VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0) { return invoke <Any>(0x3DC971EB22F73447, p0); }
	static void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped PedIndex, bool bSet) { return invoke <void>(0x90D2156198831D69, PedIndex, bSet); }
	static void TASK_SET_STEALTH_MOVEMENT(Ped ped, bool p1, Any p2, bool p3) { return invoke <void>(0x4C3FA937B44A90FA, ped, p1, p2, p3); }
	static void TASK_SET_CROUCH_MOVEMENT(Ped ped, bool p1, Any p2, bool p3) { return invoke <void>(0x17293C633C8AC019, ped, p1, p2, p3); }
	static void TASK_FORCE_MOTION_STATE(Ped PedIndex, Hash motionState, bool bForceRestart) { return invoke <void>(0x4F056E1AFFEF17AB, PedIndex, motionState, bForceRestart); }
	static void TASK_MOVE_NETWORK_BY_NAME(Ped PedIndex, const char* network, float blendDuration, bool bAllowOverrideCloneUpdate, const char* animDictionary, int flags) { return invoke <void>(0x2D537BA194896636, PedIndex, network, blendDuration, bAllowOverrideCloneUpdate, animDictionary, flags); }
	static void TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(Ped ped, const char* moveNetworkDefName, void* taskData, float p3, bool p4, const char* animDict, int flags) { return invoke <void>(0x139805C2A67C4795, ped, moveNetworkDefName, taskData, p3, p4, animDict, flags); }
	static void TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Ped ped, const char* moveNetworkDefName, void* taskData, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, int p9, float p10, int p11, int p12, int flag, int p14) { return invoke <void>(0x7B6A04F98BBAFB2C, ped, moveNetworkDefName, taskData, xPos, yPos, zPos, xRot, yRot, zRot, p9, p10, p11, p12, flag, p14); }
	static void TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS_ATTACHED(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17) { return invoke <void>(0xF92171093BCABED4, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17); }
	static bool IS_TASK_MOVE_NETWORK_ACTIVE(Ped PedIndex) { return invoke <bool>(0x921CE12C489C4C41, PedIndex); }
	static Hash _GET_TASK_MOVE_NETWORK_ID(Ped ped) { return invoke <Hash>(0xCACC2F9D994504B7, ped); }
	static bool IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Ped PedIndex) { return invoke <bool>(0x30ED88D5E0C56A37, PedIndex); }
	static void REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Ped PedIndex, const char* StateName) { return invoke <void>(0xD01015C7316AE176, PedIndex, StateName); }
	static const char* GET_TASK_MOVE_NETWORK_STATE(Ped PedIndex) { return invoke <const char*>(0x717E4D1F2048376D, PedIndex); }
	static Any _0xE9A6400D1A0E7A55(Any p0) { return invoke <Any>(0xE9A6400D1A0E7A55, p0); }
	static void _0x615DC4A82E90BB48(Any p0, Any p1, Any p2) { return invoke <void>(0x615DC4A82E90BB48, p0, p1, p2); }
	static void SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Ped PedIndex, const char* signalName, float fSignal) { return invoke <void>(0xD5BB4025AE449A4E, PedIndex, signalName, fSignal); }
	static void _SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT_2(Ped ped, const char* signalName, float value) { return invoke <void>(0x99D4A855D53B03B, ped, signalName, value); }
	static void SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Ped PedIndex, const char* signalName, bool bSignal) { return invoke <void>(0xB0A6CFD2C69C1088, PedIndex, signalName, bSignal); }
	static void _SET_TASK_MOVE_NETWORK_SIGNAL_VECTOR(Ped ped, const char* signalName, float x, float y, float z) { return invoke <void>(0x4662BFE01938D98D, ped, signalName, x, y, z); }
	static float _GET_TASK_MOVE_NETWORK_PHASE_FLOAT(Ped ped, const char* phaseName) { return invoke <float>(0x844CEEE428EA35B0, ped, phaseName); }
	static bool GET_TASK_MOVE_NETWORK_EVENT(Ped PedIndex, const char* eventName) { return invoke <bool>(0xB4F47213DF45A64C, PedIndex, eventName); }
	static void _0x9585FF23C4B8EDE0(Any p0, Any p1) { return invoke <void>(0x9585FF23C4B8EDE0, p0, p1); }
	static void _0xEAF87DA2BE78A15B(Any p0, Any p1) { return invoke <void>(0xEAF87DA2BE78A15B, p0, p1); }
	static void _0x3BBEECC5B8F35318(Any p0, Any p1) { return invoke <void>(0x3BBEECC5B8F35318, p0, p1); }
	static bool IS_MOVE_BLEND_RATIO_STILL(float MoveBlendRatio) { return invoke <bool>(0x349CE7B56DAFD95C, MoveBlendRatio); }
	static bool IS_MOVE_BLEND_RATIO_WALKING(float MoveBlendRatio) { return invoke <bool>(0xF133BBBE91E1691F, MoveBlendRatio); }
	static bool IS_MOVE_BLEND_RATIO_RUNNING(float MoveBlendRatio) { return invoke <bool>(0xD4D8636C0199A939, MoveBlendRatio); }
	static bool IS_MOVE_BLEND_RATIO_SPRINTING(float MoveBlendRatio) { return invoke <bool>(0x24A2AD74FA9814E2, MoveBlendRatio); }
	static bool IS_PED_STILL(Ped PedIndex) { return invoke <bool>(0xAC29253EEF8F0180, PedIndex); }
	static bool IS_PED_WALKING(Ped PedIndex) { return invoke <bool>(0xDE4C184B2B9B071A, PedIndex); }
	static bool IS_PED_RUNNING(Ped PedIndex) { return invoke <bool>(0xC5286FFC176F28A2, PedIndex); }
	static bool IS_PED_SPRINTING(Ped PedIndex) { return invoke <bool>(0x57E457CD2C0FC168, PedIndex); }
	static bool IS_PED_IN_HIT_REACT(Ped ped) { return invoke <bool>(0xF330A5C062B29BED, ped); }
	static void TASK_ARREST_PED(Ped ArresterPedIndex, Ped ArresteePedIndex) { return invoke <void>(0xF3B9A78A178572B1, ArresterPedIndex, ArresteePedIndex); }
	static bool IS_PED_BEING_ARRESTED(Ped PedIndex) { return invoke <bool>(0x90A09F3A45FED688, PedIndex); }
	static bool _IS_PED_ARRESTING_ANY_PED(Ped ped) { return invoke <bool>(0xA9CC7856D52DBD25, ped); }
	static void _CUFF_PED(Ped ped) { return invoke <void>(0x7981037A96E7D174, ped); }
	static void UNCUFF_PED(Ped PedIndex) { return invoke <void>(0x67406F2C8F87FC4F, PedIndex); }
	static bool IS_PED_CUFFED(Ped PedIndex) { return invoke <bool>(0x74E559B3BC910685, PedIndex); }
	static bool _IS_PED_DUELLING(Ped ped) { return invoke <bool>(0xC8B29D18022EA2B7, ped); }
	static void TASK_DUEL(Ped ped, Any p1, float p2, Entity entity, float p4, int p5, float vPosOpponentX, float vPosOpponentY, float vPosOpponentZ, float fOpponentHead, int p10) { return invoke <void>(0x5D5B0D5BC3626E5A, ped, p1, p2, entity, p4, p5, vPosOpponentX, vPosOpponentY, vPosOpponentZ, fOpponentHead, p10); }
	static Any _0x908BB14BCE85C80E(Any p0) { return invoke <Any>(0x908BB14BCE85C80E, p0); }
	static Any _0x1F7A9A9C38C13A56(Any p0) { return invoke <Any>(0x1F7A9A9C38C13A56, p0); }
	static Any _0x3FEB770D8ED9047A(Any p0) { return invoke <Any>(0x3FEB770D8ED9047A, p0); }
	static Any _0x30146C25686B7836(Any p0, Any p1) { return invoke <Any>(0x30146C25686B7836, p0, p1); }
	static Any _0x59AE5CA4FFB4E378(Any p0, Any p1) { return invoke <Any>(0x59AE5CA4FFB4E378, p0, p1); }
	static void _0x748D5E0D2A1A4C61(Any p0, Any p1, Any p2) { return invoke <void>(0x748D5E0D2A1A4C61, p0, p1, p2); }
	static void END_DUEL(Ped ped, bool p1, float p2) { return invoke <void>(0xEED08A3A98B847E2, ped, p1, p2); }
	static void _0x651F0530083C0E5A(Any p0, Any p1) { return invoke <void>(0x651F0530083C0E5A, p0, p1); }
	static void TASK_CARRIABLE(Entity entity, Hash carryConfig, Ped carrier, int carriableSlot, int flags) { return invoke <void>(0xF0B4F759F35CC7F5, entity, carryConfig, carrier, carriableSlot, flags); }
	static void _0x9EBD34958AB6F824(Any p0) { return invoke <void>(0x9EBD34958AB6F824, p0); }
	static bool GET_IS_CARRIABLE_ENTITY(Entity entity) { return invoke <bool>(0xCCFE72B43C9CF96, entity); }
	static Any _0x10ADFDF07B7DFFBA(Any p0, Any p1, Any p2) { return invoke <Any>(0x10ADFDF07B7DFFBA, p0, p1, p2); }
	static void TASK_PLACE_CARRIED_ENTITY_AT_COORD(Ped ped, Entity entity, float x, float y, float z, float p5, int flags) { return invoke <void>(0xC7F0B43DCDC57E3D, ped, entity, x, y, z, p5, flags); }
	static void TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(Ped ped, Entity entity, Ped mount, float p3) { return invoke <void>(0x6D3D87C57B3D52C7, ped, entity, mount, p3); }
	static void TASK_DUMP_CARRIABLE_FROM_PARENT(Ped ped, Ped ped2, Entity entity) { return invoke <void>(0x17CA98707B15926A, ped, ped2, entity); }
	static void _DETACH_CARRIABLE_PED(Ped ped) { return invoke <void>(0x36D188AECB26094B, ped); }
	static void _0xE2CF104ADD49D4BF(Any p0) { return invoke <void>(0xE2CF104ADD49D4BF, p0); }
	static void TASK_PICKUP_CARRIABLE_ENTITY(Ped ped, Entity entity) { return invoke <void>(0x502EC17B1BED4BFA, ped, entity); }
	static void TASK_HOGTIE_TARGET_PED(Ped ped, Ped targetPed) { return invoke <void>(0x27829AFD3E03AC1A, ped, targetPed); }
	static void _TASK_CUT_FREE_HOGTIED_TARGET_PED(Ped ped, Ped targetPed) { return invoke <void>(0x81D16C4FF3A77ADF, ped, targetPed); }
	static void _TASK_CUT_FREE_HOGTIED_TARGET_PED_2(Ped ped, Ped targetPed, float p2) { return invoke <void>(0x525421A507216084, ped, targetPed, p2); }
	static void _SET_HOGTIE_ESCAPE_TIMER(Ped ped, float time) { return invoke <void>(0xAB591AE6B48B913E, ped, time); }
	static float _GET_HOGTIE_ESCAPE_TIMER(Ped ped) { return invoke <float>(0x4687E69D258BBE41, ped); }
	static Any _0x03D741CB4052E26C(Any p0) { return invoke <Any>(0x3D741CB4052E26C, p0); }
	static bool _REQUEST_HERB_COMPOSITE_ASSET(Hash asset) { return invoke <bool>(0x73F0D0327BFA0812, asset); }
	static bool ARE_COMPOSITE_LOOTABLE_ENTITY_DEF_ASSETS_LOADED(Hash asset) { return invoke <bool>(0x5E5D96BE25E9DF68, asset); }
	static int _CREATE_HERB_COMPOSITES(Hash asset, float x, float y, float z, float heading, int groundSetting, void* p6, int p7) { return invoke <int>(0x5B4BBE80AD5972DC, asset, x, y, z, heading, groundSetting, p6, p7); }
	static void _DELETE_PATCH_OBJECTS_FROM_HERB_COMPOSITES(int compositeId, bool p1) { return invoke <void>(0x5758B1EE0C3FD4AC, compositeId, p1); }
	static int _GET_HERB_COMPOSITE_NUM_ENTITIES(int compositeId, void* outEntities) { return invoke <int>(0x96C6ED22FB742C3E, compositeId, outEntities); }
	static Any _0xDF56A2B50C04DEA4(Any p0, Any p1) { return invoke <Any>(0xDF56A2B50C04DEA4, p0, p1); }
	static void TASK_LOOT_ENTITY(Ped ped, Entity entity) { return invoke <void>(0x48FAE038401A2888, ped, entity); }
	static void TASK_BREAK_VEHICLE_DOOR_LOCK(Ped ped, Vehicle vehicle) { return invoke <void>(0xBB28D1BC9EA8A6A5, ped, vehicle); }
	static void TASK_LOOT_NEAREST_ENTITY(Ped ped, float x, float y, float z, int p4, float p5) { return invoke <void>(0xCF1501CBC4059412, ped, x, y, z, p4, p5); }
	static void TASK_LASSO_PED(Ped ped, Ped targetPed) { return invoke <void>(0xC716EB2BD16370A3, ped, targetPed); }
	static void TASK_HOGTIEABLE(Ped ped) { return invoke <void>(0x6AFD8FE0D723328F, ped); }
	static void UNHOGTIE_PED(Ped ped, int flags, Hash getupSetHash, const char* p3, const char* p4, float p5) { return invoke <void>(0x79559BAD83CCD038, ped, flags, getupSetHash, p3, p4, p5); }
	static void _0x722D6A49200174FE(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x722D6A49200174FE, p0, p1, p2, p3, p4); }
	static void _MAKE_OBJECT_CARRIABLE(Object object) { return invoke <void>(0x78B4567E18B54480, object); }
	static void MAKE_OBJECT_NOT_CARRIABLE(Object object) { return invoke <void>(0x67BFCED22909834D, object); }
	static void _0x8E1DDE26D270CC5E(Any p0, Any p1) { return invoke <void>(0x8E1DDE26D270CC5E, p0, p1); }
	static void _0xA6A76D666A281F2D(Any p0, Hash item) { return invoke <void>(0xA6A76D666A281F2D, p0, item); }
	static void _0xA21AA2F0C2180125(Any p0, Any p1) { return invoke <void>(0xA21AA2F0C2180125, p0, p1); }
	static Hash _FIND_MODEL_FOR_ITEM(Hash item) { return invoke <Hash>(0xE47DD64B9F02677D, item); }
	static void _0xFF745B0346E19E2C(Any p0) { return invoke <void>(0xFF745B0346E19E2C, p0); }
	static Any _0xB8F52A3F84A7CC59(Any p0) { return invoke <Any>(0xB8F52A3F84A7CC59, p0); }
	static void _0x6AFDA2264925BD11(Any p0) { return invoke <void>(0x6AFDA2264925BD11, p0); }
	static void _0x816A3ACD265E2297(Any p0, Any p1) { return invoke <void>(0x816A3ACD265E2297, p0, p1); }
	static void _0x4E806A395D43A458(Any p0) { return invoke <void>(0x4E806A395D43A458, p0); }
	static void SET_TEAM_CARRIABLE_ENTITY(Any p0, Any p1, Any p2) { return invoke <void>(0x545BF19F86E80F11, p0, p1, p2); }
	static bool IS_TEAM_CARRIABLE_ENTITY(Any p0, Any p1) { return invoke <bool>(0x559A6F8C5133B4EE, p0, p1); }
	static bool _IS_HAT_BEING_PICKED_UP(Object hatObject) { return invoke <bool>(0x11CD066F54DA0133, hatObject); }
	static void _0x9ADDBB9242179D56(Object object, Ped ped) { return invoke <void>(0x9ADDBB9242179D56, object, ped); }
	static bool _IS_HAT_BEING_PICKED_UP_2(Object hatObject) { return invoke <bool>(0x4ECCC2815CA79AE2, hatObject); }
	static void _TASK_EQUIP_HAT(Object hatObject, Ped ped) { return invoke <void>(0xAA0AF6025160243A, hatObject, ped); }
	static Any _0x7CB99FADDE73CD1B(Any p0) { return invoke <Any>(0x7CB99FADDE73CD1B, p0); }
	static void _0xF3C3503276F4A034(Entity entity, Any p1) { return invoke <void>(0xF3C3503276F4A034, entity, p1); }
	static Any _0x6DAC799857EF3F11(Any p0, Any p1) { return invoke <Any>(0x6DAC799857EF3F11, p0, p1); }
	static Any _0x920684BE432875B1(Any p0) { return invoke <Any>(0x920684BE432875B1, p0); }
	static bool SET_ENHANCED_BREAK_FREE(Ped ped, bool p1, const char* clipset) { return invoke <bool>(0x1BF9D36A5EAFFBAE, ped, p1, clipset); }
	static Any _0x6AFD84AEAA3EA538(Any p0) { return invoke <Any>(0x6AFD84AEAA3EA538, p0); }
	static void _0xBD1C3C0F271C39D3(Any p0, Any p1) { return invoke <void>(0xBD1C3C0F271C39D3, p0, p1); }
	static void _0x1ECF56C040FD839C(Any p0, Any p1) { return invoke <void>(0x1ECF56C040FD839C, p0, p1); }
	static void _0xF40A109B4B79A848(Any p0, Any p1, Any p2) { return invoke <void>(0xF40A109B4B79A848, p0, p1, p2); }
	static bool _IS_PED_LEADING_HORSE(Ped ped) { return invoke <bool>(0xEFC4303DDC6E60D3, ped); }
	static Any _0xAC5045AB7F1A34FD(Any p0) { return invoke <Any>(0xAC5045AB7F1A34FD, p0); }
	static Ped _GET_LED_HORSE_FROM_PED(Ped ped) { return invoke <Ped>(0xED1F514AF4732258, ped); }
	static void TASK_TURN_TO_FACE_CLOSEST_PED(Ped ped, float p1, float p2, int p3) { return invoke <void>(0x84179419DBDD36F2, ped, p1, p2, p3); }
	static bool TASK_CONFRONT(Ped ped, Ped targetPed, int p2) { return invoke <bool>(0x3A2A2071DF5CC569, ped, targetPed, p2); }
	static bool TASK_POLICE(Ped ped, bool p1) { return invoke <bool>(0x87BE56724650408E, ped, p1); }
	static bool TASK_MELEE(Ped ped, Ped targetPed, Hash p2, Any p3, Any p4, float p5, Any p6, float p7) { return invoke <bool>(0x482C99D0B38D1B0A, ped, targetPed, p2, p3, p4, p5, p6, p7); }
	static bool TASK_GRAPPLE(Ped ped, Ped targetPed, Hash grappleStyle, int p3, float p4, int p5, int p6) { return invoke <bool>(0x779A2FFACEFAEA7B, ped, targetPed, grappleStyle, p3, p4, p5, p6); }
	static bool _TASK_INTIMIDATED(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <bool>(0x648B75D44930D6BD, p0, p1, p2, p3, p4); }
	static bool _TASK_INTIMIDATED_2(Ped victim, Ped attacker, int p2, bool p3, bool p4, bool everyFrame, bool p6, bool p7, int flag) { return invoke <bool>(0x933ACC1A1771A288, victim, attacker, p2, p3, p4, everyFrame, p6, p7, flag); }
	static void _0x2948235DB2058E99(Any p0, Any p1) { return invoke <void>(0x2948235DB2058E99, p0, p1); }
	static void _0xB2F47A1AFDFCC595(Any p0, Any p1) { return invoke <void>(0xB2F47A1AFDFCC595, p0, p1); }
	static void _0x41D1331AFAD5A091(Ped ped, int p1, Any p2) { return invoke <void>(0x41D1331AFAD5A091, ped, p1, p2); }
	static void _0x801BD27403F3CBA0(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x801BD27403F3CBA0, p0, p1, p2, p3); }
	static void _0x0FE797DD9F70DFA6(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xFE797DD9F70DFA6, p0, p1, p2, p3); }
	static void TASK_PERSISTENT_CHARACTER(Ped ped) { return invoke <void>(0x4391700CBD89C3D8, ped); }
	static void _0xFC7F71CF49F70B6B(Any p0) { return invoke <void>(0xFC7F71CF49F70B6B, p0); }
	static void _0xE01F55B2896F6B37(Any p0, Any p1) { return invoke <void>(0xE01F55B2896F6B37, p0, p1); }
	static Any _0xE62754D09354F6CF(Any p0) { return invoke <Any>(0xE62754D09354F6CF, p0); }
	static void _0x4BA972D0E5AD8122(Any p0, Any p1) { return invoke <void>(0x4BA972D0E5AD8122, p0, p1); }
	static bool _GET_TASK_FISHING(Ped ped, void* p1) { return invoke <bool>(0xF3735ACD11ACD500, ped, p1); }
	static bool _SET_TASK_FISHING(Ped ped, void* p1) { return invoke <bool>(0xF3735ACD11ACD501, ped, p1); }
	static void TASK_SWAP_FISHING_BAIT(Ped ped, const char* bait, bool withoutBuoy) { return invoke <void>(0x2C28AC30A72722DA, ped, bait, withoutBuoy); }
	static void _SET_FISHING_BAIT(Ped ped, const char* bait, bool withoutBuoy, bool instantly) { return invoke <void>(0x9B0C7FA063E67629, ped, bait, withoutBuoy, instantly); }
	static void _0x1F298C7BD30D1240(Ped ped) { return invoke <void>(0x1F298C7BD30D1240, ped); }
	static void _PED_FISHINGROD_HOOK_ENTITY(Ped ped, Entity entity) { return invoke <void>(0x1A52076D26E09004, ped, entity); }
	static void _PED_FISHINGROD_HOOK_OBJECT(Ped ped, Object object) { return invoke <void>(0xCE71C2F9BAA3F975, ped, object); }
	static bool _0xB520DBDA7FCF573F(Ped ped) { return invoke <bool>(0xB520DBDA7FCF573F, ped); }
	static void _0x31BB338F64D5C861(Ped ped, bool p1) { return invoke <void>(0x31BB338F64D5C861, ped, p1); }
	static void _0x517D01BF27B682D1(Ped ped, Entity entity, float p2, float p3, float p4, float p5, int p6) { return invoke <void>(0x517D01BF27B682D1, ped, entity, p2, p3, p4, p5, p6); }
	static void _0x88FD60D846D9CD63(Ped ped) { return invoke <void>(0x88FD60D846D9CD63, ped); }
	static void _0x9050DF2C53801208(Ped ped, float p1) { return invoke <void>(0x9050DF2C53801208, ped, p1); }
	static void _0x22CDBF317C40A122(Ped ped) { return invoke <void>(0x22CDBF317C40A122, ped); }
	static Any _0x5952DFA38FA529FE() { return invoke <Any>(0x5952DFA38FA529FE); }
	static void TASK_PLAY_EMOTE_WITH_HASH(Ped ped, int emoteType, int playbackMode, Hash emote, bool isSecondaryTask, bool canBreakOut, bool disableEarlyOutAnimTag, bool ignoreInvalidMainTask, bool destroyProps) { return invoke <void>(0xB31A277C1AC7B7FF, ped, emoteType, playbackMode, emote, isSecondaryTask, canBreakOut, disableEarlyOutAnimTag, ignoreInvalidMainTask, destroyProps); }
	static void _TASK_PLAY_EMOTE(Ped ped, int emoteType, int playbackMode, Hash emote, bool isSecondaryTask, bool canBreakOut, bool disableEarlyOutAnimTag, bool ignoreInvalidMainTask, bool destroyProps) { return invoke <void>(0x884E3436CC1F41DD, ped, emoteType, playbackMode, emote, isSecondaryTask, canBreakOut, disableEarlyOutAnimTag, ignoreInvalidMainTask, destroyProps); }
	static void _0x6A1AF481407BF6E9(Any p0) { return invoke <void>(0x6A1AF481407BF6E9, p0); }
	static void _TASK_EMOTE_OUTRO(Ped ped) { return invoke <void>(0xBDFEEB7600BCD938, ped); }
	static void _0xEC516FE805D2CB2D(Any p0) { return invoke <void>(0xEC516FE805D2CB2D, p0); }
	static void _0x59AEA4DC640814B9(Any p0, Any p1) { return invoke <void>(0x59AEA4DC640814B9, p0, p1); }
	static Any _0x11C7CE1AE38911B5(Any p0) { return invoke <Any>(0x11C7CE1AE38911B5, p0); }
	static Any _0xD0ABC4EA3B5E21A0(Any p0, Any p1) { return invoke <Any>(0xD0ABC4EA3B5E21A0, p0, p1); }
	static bool IS_EMOTE_TASK_RUNNING(Ped ped, Any p1) { return invoke <bool>(0xCF9B71C0AF824036, ped, p1); }
}

namespace TELEMETRY
{
	static void _TELEMETRY_SET_IS_FLOW(bool toggle) { return invoke <void>(0x9BEE018A63FFFAD9, toggle); }
	static void _0xEC0BD8736DCAF841(bool toggle) { return invoke <void>(0xEC0BD8736DCAF841, toggle); }
	static void _TELEMETRY_MISSION_STARTED(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x15B0CC1B36F1DE29, p0, p1, p2, p3); }
	static void _TELEMETRY_MISSION_OVER(Any p0, Any p1) { return invoke <void>(0xD894437E12C17AEC, p0, p1); }
	static void _TELEMETRY_MISSION_CHECKPOINT(Any p0, Any p1, Any p2) { return invoke <void>(0x8EC7890D446BD9C1, p0, p1, p2); }
	static void _TELEMETRY_PLAYER_SPAWNED(Ped ped) { return invoke <void>(0x5DA4718DF897EB25, ped); }
	static bool _TELEMETRY_CREATE_UUID(void* uuid) { return invoke <bool>(0xE692D336F8A2A97F, uuid); }
	static void _TELEMETRY_MATCH_QUEUE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0x4C08D2B6D8BE17E4, p0, p1, p2, p3, p4, p5, p6); }
	static void _TELEMETRY_MATCH_STARTED(void* p0, void* p1) { return invoke <void>(0xF620F47B4F4A78C4, p0, p1); }
	static void _TELEMETRY_MATCH_OVER(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0xA2058154357726BB, p0, p1, p2, p3, p4); }
	static void _TELEMETRY_MATCH_VOTE(void* p0, void* p1) { return invoke <void>(0xEF3C68F56BAD7B69, p0, p1); }
	static void _TELEMETRY_LOBBY_PROGRESSION(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xECD67E9FA677CCCF, p0, p1, p2, p3); }
	static void _TELEMETRY_GAME_PROGRESS(Any p0, Any p1) { return invoke <void>(0x51EC204A6E5B5A1A, p0, p1); }
	static void _TELEMETRY_HERB_PICKED(Hash herbType) { return invoke <void>(0xAE693EC3A178F6C2, herbType); }
	static void _TELEMETRY_ANIMAL_SKINNED(Hash type, void* items) { return invoke <void>(0x7581972ADF5D699A, type, items); }
	static void _TELEMETRY_CAMP_CREATED(Any p0) { return invoke <void>(0x565EAA726B2CE3B7, p0); }
	static void _TELEMETRY_CAMP_SUPPLIES(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x217F47761376E16E, p0, p1, p2, p3, p4); }
	static void _TELEMETRY_REGION(Hash regionHash) { return invoke <void>(0xCD6F8A0335D821F9, regionHash); }
	static void _TELEMETRY_SHOP_ENTRY(Any shopType, Any shopRegion, Any region, Any p3, Any p4, Any p5) { return invoke <void>(0x775B2ED944E44973, shopType, shopRegion, region, p3, p4, p5); }
	static void _TELEMETRY_SHOP_EXIT(Any p0, Any p1) { return invoke <void>(0xF78E669FDC202E73, p0, p1); }
	static void _TELEMETRY_SET_SHOP_FOR_TRANSACTION(int transactionId, Hash p1, Hash p2) { return invoke <void>(0xCA9E42F437625A85, transactionId, p1, p2); }
	static void _TELEMETRY_SHOP_PURCHASE(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x2A374E6F0075EE81, p0, p1, p2, p3, p4); }
	static void _TELEMETRY_SHOP_SELL(Any p0, Any p1, Any p2, Any p3, int centSalePrice) { return invoke <void>(0x9BD8A9D0A774A6F8, p0, p1, p2, p3, centSalePrice); }
	static void _TELEMETRY_GOLD_STORE(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x536B6025E94AC48F, p0, p1, p2, p3); }
	static void _CLEAR_TELEMETRY_SHOP_UI() { return invoke <void>(0x32D5898C4898CD95); }
	static void _TELEMETRY_SHOP_CUTSCENE(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xB0B19B56697836F5, p0, p1, p2, p3); }
	static void _TELEMETRY_AMBIENT_VIGNETTE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0x3145044F3990D321, p0, p1, p2, p3, p4, p5, p6); }
	static void _TELEMETRY_DISCOVERABLE(Any p0) { return invoke <void>(0xF5EAD898EF387E73, p0); }
	static void _TELEMETRY_HONOR(Any p0, Any p1) { return invoke <void>(0xE6B763C7F4902201, p0, p1); }
	static void _TELEMETRY_CRAFT_ITEM(Any p0, Any p1, Any p2, Any quantity) { return invoke <void>(0x78C2E029DB205A3A, p0, p1, p2, quantity); }
	static void TELEMETRY_CAMP_DONATE(Any transactionId, Any p1, Any p2, Any p3, Any p4, Hash slotId, Hash p6, Any p7, bool p8) { return invoke <void>(0xDF516E598D966D06, transactionId, p1, p2, p3, p4, slotId, p6, p7, p8); }
	static void _TELEMETRY_MOONSHINE_BREW(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoke <void>(0xB5013EFBB5516867, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static void _TELEMETRY_COLLECT(Any transactionId, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0xD6CB05DDAEE43AFD, transactionId, p1, p2, p3, p4, p5, p6); }
	static void _TELEMETRY_MISSION_ILO_OPTION(Any p0, Any p1) { return invoke <void>(0xEA323F5E1A4DA2F1, p0, p1); }
	static void _TELEMETRY_MISSION_FAILED_TO_LAUNCH(Any p0, Any p1, float x, float y, float z, int reason) { return invoke <void>(0x6571E4327390EC0B, p0, p1, x, y, z, reason); }
	static void _TELEMETRY_GANG_SHARES(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xE6DC9B21AC7A8729, p0, p1, p2, p3); }
	static void _TELEMETRY_FAST_TRAVEL(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x7CEF4AC79F7E7FAD, p0, p1, p2, p3, p4); }
	static void _TELEMETRY_NET_CAMP(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0xA72773C3134F9A57, p0, p1, p2, p3, p4, p5, p6); }
	static void _TELEMETRY_RPG_GLOBAL_CALCULATE_ATTRIBUTE_CORE_DELTA() { return invoke <void>(0x7E002A36AEFCFB55); }
	static void _TELEMETRY_SLEEP(Any p0) { return invoke <void>(0xF9F14080D80937BD, p0); }
	static void _TELEMETRY_PARLEY_FEUD(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0xF37A2149BC9A8A27, p0, p1, p2, p3, p4); }
	static void TELEMETRY_PLAYER_MENU_PIN(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x76C5843371EB889, p0, p1, p2, p3); }
	static void _TELEMETRY_NOTORIETY(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xE26970A7AE0F28E9, p0, p1, p2, p3); }
	static void _TELEMETRY_DEFENSIVE(Any p0, Any p1, Any p2) { return invoke <void>(0xE57529D23541D2DD, p0, p1, p2); }
	static void _TELEMETRY_LOOT(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xCF63EF77B0DF0397, p0, p1, p2, p3); }
	static void _TELEMETRY_EMOTE_ADD_CATEGORY_TO_SAVE(Any p0, Any p1, Hash emote) { return invoke <void>(0x2C24AF8EEEEF8A55, p0, p1, emote); }
	static void _TELEMETRY_FAVOR_EMOTE(Any p0, Any p1, Any p2) { return invoke <void>(0x16B23D4F7A1F50D9, p0, p1, p2); }
	static void _TELEMETRY_POKER_OVER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke <void>(0x8127C5AA05C5A210, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static bool _TELEMETRY_TRIGGER_TRANSACTION_REQUEST(void* requestId, void* transactionId) { return invoke <bool>(0x80A02D9F948A8BCA, requestId, transactionId); }
	static bool _TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(void* transactionId, void* requestId) { return invoke <bool>(0xF184B3ECE36219CF, transactionId, requestId); }
	static void _TELEMETRY_ROLE_BOUNTY(Any p0) { return invoke <void>(0xAB43D1C80B5E9500, p0); }
	static void _TELEMETRY_BOUNTY_TARGET(void* data) { return invoke <void>(0x52FA31DB8F3AD25D, data); }
	static void _TELEMETRY_PRISON(Any transactionId, Any bountyAmount, Ped ped, Any completionType, Any jailTimeServed, Any jailTimeLeft, Any posseRole) { return invoke <void>(0xB204BF9F30298D77, transactionId, bountyAmount, ped, completionType, jailTimeServed, jailTimeLeft, posseRole); }
	static void _TELEMETRY_ROLE_TRADER(Any p0, Any transactionId) { return invoke <void>(0x476038B5A0734C10, p0, transactionId); }
	static void _TELEMETRY_ROLE_MOONSHINER(Any p0, Any transactionId) { return invoke <void>(0x99D40C5D74BC88E9, p0, transactionId); }
	static void _TELEMETRY_ROLE_COLLECTOR(Any transactionId, Any collectible, Any category, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0x4AC38DFD286DAD14, transactionId, collectible, category, p3, p4, p5, p6); }
	static void _TELEMETRY_PHOTO(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xED22BE4C5A399E63, p0, p1, p2, p3); }
	static void _TELEMETRY_START_GUN_LOCKER_INTERACTION() { return invoke <void>(0xF0D54E0651DD7E07); }
	static void _TELEMETRY_GUN_LOCKER() { return invoke <void>(0x415FE28ED44BFF14); }
	static void _TELEMETRY_GUN_LOCKER_WEAPON_STORED(Hash p0) { return invoke <void>(0xC3ADF4880784FA9C, p0); }
	static void _TELEMETRY_GUN_LOCKER_WEAPON_REMOVED(Hash p0) { return invoke <void>(0x317D9C9560529CC2, p0); }
	static void _TELEMETRY_ROLE_TOKEN_TRANSACTION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <void>(0x32C2939564D74BFF, p0, p1, p2, p3, p4, p5); }
	static void _TELEMETRY_COUPON(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <void>(0x621D719C4836292B, p0, p1, p2, p3, p4, p5); }
	static void TELEMETRY_PERSONAL_VEHICLE_MOUNT(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xFF9052BC7A3B7D33, p0, p1, p2, p3); }
	static void _TELEMETRY_PERSONAL_VEHICLE_WAGON(Any p0, Any p1, Any p2) { return invoke <void>(0xE67AF24C5A3B6058, p0, p1, p2); }
	static void _TELEMETRY_MENU_NAVIGATION(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x3255D4D2082C6339, p0, p1, p2, p3); }
	static void _TELEMETRY_HUB_NAVIGATION(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x25CC50EC1A6F3A96, p0, p1, p2, p3); }
	static void _TELEMETRY_HUB_OFFERS(Any couponItem, Any p1) { return invoke <void>(0x37AA282163B0D2C4, couponItem, p1); }
	static void _TELEMETRY_SAMPLE(Any transactionId, Any animal, Any p2, Any bSampled, bool bTranq) { return invoke <void>(0x61559675D23D8BD1, transactionId, animal, p2, bSampled, bTranq); }
	static void _TELEMETRY_ROLE_NATURALIST(Any transactionId, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke <void>(0x6FB9EA308F302922, transactionId, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _TELEMETRY_PHOTO_CAM(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke <void>(0x777D65EE8A17517, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	static void _TELEMETRY_INTRO_SKIP(Any p0, Any p1, Any p2) { return invoke <void>(0x1B554723799245F4, p0, p1, p2); }
	static void ANALYTICS_PLAYTIME_FREEMODE_START() { return invoke <void>(0xE9F24081D84931B8); }
	static void ANALYTICS_PLAYTIME_FREEMODE_END() { return invoke <void>(0x3180E991D4B8F248); }
	static void _TELEMETRY_CUSTOM(void* args) { return invoke <void>(0x40914CCF2A1AB531, args); }
	static void _TELEMETRY_MATCH_NOMINATION(void* args) { return invoke <void>(0x330029E121380CEB, args); }
	static void _TELEMETRY_CHAR_CREATOR(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0x7207AD471BC9278C, p0, p1, p2, p3, p4, p5, p6); }
}

namespace TXD
{
	static bool DOES_STREAMED_TXD_EXIST(Hash txdHash) { return invoke <bool>(0xBA0163B277C2D2D0, txdHash); }
	static void REQUEST_STREAMED_TXD(Hash txdHash, bool p1) { return invoke <void>(0xDB1BD07FB464584D, txdHash, p1); }
	static bool HAS_STREAMED_TXD_LOADED(Hash txdHash) { return invoke <bool>(0xBE72591D1509FFE4, txdHash); }
	static void SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(Hash txdHash) { return invoke <void>(0x8232F37DF762ACB2, txdHash); }
	static bool DOES_STREAMED_TEXTURE_DICT_EXIST(const char* textureDict) { return invoke <bool>(0x7332461FC59EB7EC, textureDict); }
	static void REQUEST_STREAMED_TEXTURE_DICT(const char* TxdName, bool bPriority) { return invoke <void>(0xC1BA29DF5631B0F8, TxdName, bPriority); }
	static bool HAS_STREAMED_TEXTURE_DICT_LOADED(const char* TxdName) { return invoke <bool>(0x54D6900929CCF162, TxdName); }
	static void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(const char* TxdName) { return invoke <void>(0x4ACA10A91F66F1E2, TxdName); }
}

namespace UIAPPS
{
	static bool IS_UIAPP_ACTIVE_BY_HASH(Hash appNameHash) { return invoke <bool>(0x25B7A0206BDFAC76, appNameHash); }
	static bool IS_ANY_UIAPP_ACTIVE() { return invoke <bool>(0xAC959AB99AAF3D9F); }
	static bool IS_UIAPP_RUNNING_BY_HASH(Hash appNameHash) { return invoke <bool>(0x4E511D093A86AD49, appNameHash); }
	static bool IS_UIAPP_RUNNING(const char* appName) { return invoke <bool>(0xDE4A9B35D028979F, appName); }
	static bool IS_ANY_UIAPP_RUNNING() { return invoke <bool>(0xDB30BEC7A7A5CBD3); }
	static Hash _GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(Hash appNameHash) { return invoke <Hash>(0x96FD694FE5BE55DC, appNameHash); }
	static void _CLOSE_UIAPP_BY_HASH(Hash appNameHash) { return invoke <void>(0x2FF10C9C3F92277E, appNameHash); }
	static void _CLOSE_UIAPP_BY_HASH_IMMEDIATE(Hash appNameHash) { return invoke <void>(0x4428420A248A354, appNameHash); }
	static void _CLOSE_UIAPP(const char* appName) { return invoke <void>(0x818C6CA9B659E8EC, appName); }
	static void _CLOSE_UIAPP_IMMEDIATE(const char* appName) { return invoke <void>(0x3015635426D1B17C, appName); }
	static void _CLOSE_ALL_UIAPPS() { return invoke <void>(0xAD7B70F7230C5A12); }
	static void _CLOSE_ALL_UIAPPS_IMMEDIATE() { return invoke <void>(0x12769EEB8DBD7A7B); }
	static int LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(Hash appNameHash, Hash entryHash) { return invoke <int>(0xC1BCF31E975B3195, appNameHash, entryHash); }
	static int LAUNCH_UIAPP_BY_HASH(Hash appNameHash) { return invoke <int>(0xC8FC7F4E4CF4F581, appNameHash); }
	static int LAUNCH_UIAPP_WITH_ENTRY(const char* appName, const char* entry) { return invoke <int>(0x7B2027BAC5C8EC89, appName, entry); }
	static bool CAN_LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(Hash appNameHash, Hash entryHash) { return invoke <bool>(0x16F47D434B6086BF, appNameHash, entryHash); }
	static bool CAN_LAUNCH_UIAPP_BY_HASH(Hash appNameHash) { return invoke <bool>(0xE555EC27D65EDE80, appNameHash); }
	static bool REQUEST_UIAPP_TRANSITION_BY_HASH(Hash appNameHash, Hash transitionHash) { return invoke <bool>(0x7689CD255655BFD7, appNameHash, transitionHash); }
	static bool IS_UIAPP_TRANSITIONING_BY_HASH(Hash appNameHash) { return invoke <bool>(0x42095B886D30DE66, appNameHash); }
}

namespace UIDEBUG
{
	static void _BG_DISPLAY_TEXT(const char* text, float x, float y) { return invoke <void>(0x16794E044C9EFB58, text, x, y); }
	static void _BG_SET_TEXT_SCALE(float scaleX, float scaleY) { return invoke <void>(0xA1253A3C870B6843, scaleX, scaleY); }
	static void _BG_SET_TEXT_COLOR(int red, int green, int blue, int alpha) { return invoke <void>(0x16FA5CE47F184F1E, red, green, blue, alpha); }
}

namespace UIEVENTS
{
	static bool EVENTS_UI_IS_PENDING(Hash hash) { return invoke <bool>(0x67ED5A7963F2F722, hash); }
	static bool EVENTS_UI_GET_MESSAGE(Hash hash, void* eventData) { return invoke <bool>(0xE24E957294241444, hash, eventData); }
	static bool EVENTS_UI_PEEK_MESSAGE(Hash hash, void* eventData) { return invoke <bool>(0x90237103F27F7937, hash, eventData); }
	static void EVENTS_UI_POP_MESSAGE(Hash hash) { return invoke <void>(0x8E8A2369F48EC839, hash); }
}

namespace UIFEED
{
	static int _UI_FEED_POST_HELP_TEXT(void* p0, void* p1, bool p2) { return invoke <int>(0x49D5C615BD38BAD, p0, p1, p2); }
	static int _UI_FEED_POST_LOCATION_SHARD(void* duration, void* data, bool p2, bool p3) { return invoke <int>(0xD05590C1AB38F068, duration, data, p2, p3); }
	static int _UI_FEED_POST_OBJECTIVE(void* p0, void* p1, bool p2) { return invoke <int>(0xCEDBF17EFCC0E4A4, p0, p1, p2); }
	static int _UI_FEED_POST_FEED_TICKER(void* p0, void* p1, bool p2) { return invoke <int>(0xB2920B9760F0F36B, p0, p1, p2); }
	static int _UI_FEED_POST_SAMPLE_TOAST(void* p0, void* p1, bool p2, bool p3) { return invoke <int>(0x26E87218390E6729, p0, p1, p2, p3); }
	static int _0xAFF5BE9BA496CE40(void* p0, void* p1, bool p2, bool p3, Hash collectableCategory) { return invoke <int>(0xAFF5BE9BA496CE40, p0, p1, p2, p3, collectableCategory); }
	static int _UI_FEED_POST_SAMPLE_TOAST_WITH_APP_LINK(void* p0, void* p1, bool p2, bool p3, bool p4) { return invoke <int>(0x38838A646FB30AAE, p0, p1, p2, p3, p4); }
	static int _UI_FEED_POST_SAMPLE_NOTIFICATION(void* p0, void* p1, int p2, int p3) { return invoke <int>(0xC927890AA64E9661, p0, p1, p2, p3); }
	static int _UI_FEED_POST_RANKUP_TOAST(void* p0, void* p1, int p2, int p3) { return invoke <int>(0x3F9FDDBA79117C69, p0, p1, p2, p3); }
	static int _0x18D6869FBFFEC0F8(void* p0, void* p1, bool p2, bool p3) { return invoke <int>(0x18D6869FBFFEC0F8, p0, p1, p2, p3); }
	static int _UI_FEED_POST_SAMPLE_TOAST_RIGHT(void* p0, void* p1, bool p2) { return invoke <int>(0xB249EBCB30DD88E0, p0, p1, p2); }
	static int _UI_FEED_POST_MISSION_NAME(void* p0, void* p1, bool p2) { return invoke <int>(0x2024F4F333095FB1, p0, p1, p2); }
	static int _UI_FEED_POST_RETICLE_MESSAGE(void* p0, void* p1, bool p2) { return invoke <int>(0x893128CDB4B81FBB, p0, p1, p2); }
	static int _UI_FEED_POST_ONE_TEXT_SHARD(void* p0, void* p1, bool p2) { return invoke <int>(0x860DDFE97CC94DF0, p0, p1, p2); }
	static int _UI_FEED_POST_TWO_TEXT_SHARD(void* p0, void* p1, bool p2, bool p3) { return invoke <int>(0xA6F4216AB10EB08E, p0, p1, p2, p3); }
	static int _UI_FEED_POST_THREE_TEXT_SHARD(void* p0, void* p1, bool p2, bool p3, bool p4) { return invoke <int>(0x2BCC0FE9EBA3529, p0, p1, p2, p3, p4); }
	static int _UI_FEED_POST_GAME_UPDATE_SHARD(void* p0, void* p1, bool p2) { return invoke <int>(0x8D1249BD28791878, p0, p1, p2); }
	static int _UI_FEED_POST_VOICE_CHAT_FEED(void* p0, void* p1, bool p2) { return invoke <int>(0xC48152BC6B3E821C, p0, p1, p2); }
	static void UI_FEED_CLEAR_CHANNEL(int feedChannel, bool p1, bool p2) { return invoke <void>(0xDD1232B332CBB9E7, feedChannel, p1, p2); }
	static void _UI_FEED_CLEAR_ALL_CHANNELS() { return invoke <void>(0x6035E8FBCA32AC5E); }
	static void _UI_FEED_CLEAR_HELP_TEXT_FEED(int feedMessage, bool p1) { return invoke <void>(0x2F901291EF177B02, feedMessage, p1); }
	static void _0x6D85126F6CCF02C9(int feedChannel, int p1, bool p2) { return invoke <void>(0x6D85126F6CCF02C9, feedChannel, p1, p2); }
	static int _0x4E88A65968A55C78(void* p0, bool p1) { return invoke <int>(0x4E88A65968A55C78, p0, p1); }
	static int _0x0FD07141AD048AAE(void* p0, bool p1) { return invoke <int>(0xFD07141AD048AAE, p0, p1); }
	static int _UI_FEED_GET_MESSAGE_STATE(int feedMessage) { return invoke <int>(0x59FA676177DBE4C9, feedMessage); }
	static int UI_FEED_GET_CURRENT_MESSAGE(int feedChannel) { return invoke <int>(0xC17F69E1418CD11F, feedChannel); }
	static bool _0xB7223B91CD6B7E07(int feedChannel) { return invoke <bool>(0xB7223B91CD6B7E07, feedChannel); }
}

namespace UILOG
{
	static bool _UILOG_IS_ENTRY_REGISTERED(int p0, Hash p1) { return invoke <bool>(0xB8188CCF52202475, p0, p1); }
	static void _UILOG_ADD_ENTRY_HASH(int p0, int p1, float x, float y, float z, Hash p5, Hash p6, Any p7) { return invoke <void>(0x69D5479982355D8F, p0, p1, x, y, z, p5, p6, p7); }
	static void _UILOG_ADD_ITEM_TO_TASK_LIST(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke <void>(0x49C63FDF69744A27, p0, p1, p2, p3, p4, p5, p6, p7); }
	static void _UILOG_SET_ENTRY_ICON_TEXTURE(int p0, Hash p1, Hash icon, Hash iconDictionary) { return invoke <void>(0x6965469934958D8F, p0, p1, icon, iconDictionary); }
	static void _UILOG_SET_ENTRY_BRIEF_TEXTURE(int p0, Hash p1, Hash texture, Hash textureDictionary) { return invoke <void>(0x69684D9936958D8F, p0, p1, texture, textureDictionary); }
	static void _UILOG_UPDATE_ENTRY_SUBHEADER(int p0, Hash p1, const char* p2) { return invoke <void>(0x80D6524190258C3E, p0, p1, p2); }
	static void _UILOG_SET_ENTRY_PINNED(int p0, Hash p1, bool p2) { return invoke <void>(0x72A5CD214B342568, p0, p1, p2); }
	static void _UILOG_MARK_MISSION_COMPLETED(Hash p0) { return invoke <void>(0xDE31D66D1E54C471, p0); }
	static void _UILOG_MARK_ENTRY_AVAILABILITY(int p0, Hash p1, int p2, const char* p3) { return invoke <void>(0x13E8D7DD08543482, p0, p1, p2, p3); }
	static void _UILOG_MARK_ALL_ENTRIES_AVAILABILITY(int p0, const char* p1) { return invoke <void>(0x3920574CF0A2B7B6, p0, p1); }
	static void _UILOG_REMOVE_ENTRY(int p0, Hash p1) { return invoke <void>(0xD594A19BE09A75C6, p0, p1); }
	static void _UILOG_SET_DISPLAY_COMPLETION_RATING(int logEntryType, Hash p1, bool p2) { return invoke <void>(0xA31013798FADCADC, logEntryType, p1, p2); }
	static void _0xA49D6D503E3EA847(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0xA49D6D503E3EA847, p0, p1, p2, p3, p4); }
	static void _0x763637F9B838B0A7(int p0, Hash p1, const char* p2) { return invoke <void>(0x763637F9B838B0A7, p0, p1, p2); }
	static void _UILOG_CLEAR_ALL_ENTRIES() { return invoke <void>(0xB95B4EA6B1EDF035); }
	static void _UILOG_ADD_OR_UPDATE_OBJECTIVE(int p0, Hash p1, Hash p2, const char* p3, bool p4, bool p5, bool p6) { return invoke <void>(0xB43163388484CC87, p0, p1, p2, p3, p4, p5, p6); }
	static void _0xA20398536B7F1134(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <void>(0xA20398536B7F1134, p0, p1, p2, p3, p4, p5); }
	static void _UILOG_SET_CACHED_OBJECTIVE(const char* p0) { return invoke <void>(0xFA233F8FE190514C, p0); }
	static void _UILOG_CLEAR_CACHED_OBJECTIVE() { return invoke <void>(0xDFF0D417277B41F8); }
	static bool _UILOG_HAS_DISPLAYED_CACHED_OBJECTIVE() { return invoke <bool>(0xCC48FFBB45B54F71); }
	static void _UILOG_CLEAR_HAS_DISPLAYED_CACHED_OBJECTIVE() { return invoke <void>(0xA3108D6981A5CADB); }
	static void _UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE() { return invoke <void>(0xA3108D6981A5CADC); }
	static const char* _UILOG_GET_CACHED_OBJECTIVE() { return invoke <const char*>(0x15A4461BEB788096); }
	static void _UILOG_PRINT_CACHED_OBJECTIVE() { return invoke <void>(0xE9990552DEC71600); }
	static Any _UILOG_SET_PENDING_DETAILS_ID(int p0, Hash p1) { return invoke <Any>(0x136A027CF37B0A4F, p0, p1); }
	static Any _0x2A4765812202E671() { return invoke <Any>(0x2A4765812202E671); }
	static void _UILOG_ADD_TOTAL_TAKE_ENTRY(Hash p0, Hash p1, const char* p2, const char* p3, Hash p4) { return invoke <void>(0x60C59968E8E87E6B, p0, p1, p2, p3, p4); }
	static void _UILOG_SET_TOTAL_TAKE_SUMMARY(const char* p0, const char* p1) { return invoke <void>(0xD106B211EF1B8F04, p0, p1); }
	static int _UILOG_POST_NOTIFICATION(void* data) { return invoke <int>(0x49E58FE6EF40B987, data); }
	static void _0xDA0A30153FCC0FFD() { return invoke <void>(0xDA0A30153FCC0FFD); }
}

namespace UIPINNING
{
	static const char* _UIPINNING_GET_TOOLTIP_TEXT(Hash hash) { return invoke <const char*>(0x3138582E0A13BFAB, hash); }
}

namespace UITUTORIAL
{
	static bool _UITUTORIAL_GET_IS_THREAT_INDICATOR_CAPABLE_RADAR_SHOWN() { return invoke <bool>(0x2CC24A2A7A1489C4); }
	static bool _UITUTORIAL_GET_IS_THREAT_INDICATOR_ON() { return invoke <bool>(0xFC2E0A5E9ED4E1B4); }
	static void _UITUTORIAL_SET_RPG_ICON_VISIBILITY(int rpgIcon, int visibility) { return invoke <void>(0xC116E6DF68DCE667, rpgIcon, visibility); }
}

namespace UISTATEMACHINE
{
	static Any _UIFLOWBLOCK_REQUEST(Any p0) { return invoke <Any>(0xC0081B34E395CE48, p0); }
	static void _UIFLOWBLOCK_RELEASE(Any p0) { return invoke <void>(0xF320A77DD5F781DF, p0); }
	static Any _UIFLOWBLOCK_IS_LOADED(Any p0) { return invoke <Any>(0x10A93C057B6BD944, p0); }
	static Any _UIFLOWBLOCK_ENTER(Any p0, Any p1) { return invoke <Any>(0x3B7519720C9DCB45, p0, p1); }
	static Any UI_STATE_MACHINE_EXISTS(Any p0) { return invoke <Any>(0x5D15569C0FEBF757, p0); }
	static Any UI_STATE_MACHINE_CREATE(Any p0, Any p1) { return invoke <Any>(0x4C6F2C4B7A03A266, p0, p1); }
	static Any UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(Any p0) { return invoke <Any>(0xF7C180F57F85D0B8, p0); }
	static Any UI_STATE_MACHINE_REQUEST_TRANSITION(Any p0, Any p1) { return invoke <Any>(0x7EA9C3547E80350E, p0, p1); }
	static void UI_STATE_MACHINE_REQUEST_EXIT(Any p0, Any p1) { return invoke <void>(0x6B9FE4F0BA521A19, p0, p1); }
	static bool _UI_STATE_MACHINE_IS_EXITED(Hash p0) { return invoke <bool>(0x11E73195E735B25B, p0); }
	static void UI_STATE_MACHINE_DESTROY(Any p0) { return invoke <void>(0x4EB122210A90E2D8, p0); }
	static void UI_STATE_MACHINE_DESTROY_AND_CLEAR(void* p0) { return invoke <void>(0x2738D68D2B4E09E7, p0); }
}

namespace UISTICKYFEED
{
	static int _UI_STICKY_FEED_CREATE_ERROR_MESSAGE(void* p0, void* p1, bool p2) { return invoke <int>(0x9F2CC2439A04E7BA, p0, p1, p2); }
	static int _UI_STICKY_FEED_CREATE_DEATH_FAIL_MESSAGE(void* p0, void* p1, bool p2) { return invoke <int>(0x815C4065AE6E6071, p0, p1, p2); }
	static int _UI_STICKY_FEED_CREATE_WARNING_MESSAGE(void* p0, void* p1, bool p2) { return invoke <int>(0x339E16B41780FC35, p0, p1, p2); }
	static void _UI_STICKY_FEED_UPDATE_MESSAGE(int msgId, void* p1, bool p2) { return invoke <void>(0xBC6F454E310124DA, msgId, p1, p2); }
	static void _UI_STICKY_FEED_CLEAR_MESSAGE(int msgId) { return invoke <void>(0xA15B94CBA4F76F, msgId); }
	static bool _UI_STICKY_FEED_IS_CHANNEL_ACTIVE(int stickyFeedChannel) { return invoke <bool>(0xC5C395C60B542A3C, stickyFeedChannel); }
	static bool _UI_STICKY_FEED_IS_ALERT_SCREEN_ACTIVE() { return invoke <bool>(0xF8806EC3FF840FDC); }
	static int _UI_STICKY_FEED_GET_MESSAGE_STATE(int msgId) { return invoke <int>(0x7954320D77F6A3D, msgId); }
}

namespace UNLOCK
{
	static bool _UNLOCK_IS_UNLOCK_FLAG_SET(Hash unlockHash, int flag) { return invoke <bool>(0x6B6369647F26F09F, unlockHash, flag); }
	static bool UNLOCK_IS_UNLOCKED(Hash unlockHash) { return invoke <bool>(0xC4B660C7B6040E75, unlockHash); }
	static void UNLOCK_SET_UNLOCKED(Hash unlockHash, bool toggle) { return invoke <void>(0x1B7C5ADA8A6910A0, unlockHash, toggle); }
	static bool UNLOCK_IS_VISIBLE(Hash unlockHash) { return invoke <bool>(0x8588A14B75AF096B, unlockHash); }
	static void UNLOCK_SET_VISIBLE(Hash unlockHash, bool toggle) { return invoke <void>(0x46B901A8ECDB5A61, unlockHash, toggle); }
	static bool _UNLOCK_IS_NEW(Hash unlockHash) { return invoke <bool>(0x644166BA7AA49DEA, unlockHash); }
	static void _UNLOCK_SET_NEW(Hash unlockHash, bool toggle) { return invoke <void>(0xA6D79C7AEF870A99, unlockHash, toggle); }
	static bool _UNLOCK_IS_LOOTABLE(Hash unlockHash) { return invoke <bool>(0x66BF197E066050DE, unlockHash); }
	static void _UNLOCK_GET_ITEM_ROLE_UNLOCK_INFO(Hash unlockHash, void* outData) { return invoke <void>(0x7C1C2062CFAD06FE, unlockHash, outData); }
}

namespace VEHICLE
{
	static void _0x6355602C02EDC6DF(Entity entity, Any p1) { return invoke <void>(0x6355602C02EDC6DF, entity, p1); }
	static void _SET_VEHICLE_IS_IN_HURRY(Vehicle vehicle, bool enabled) { return invoke <void>(0xCE1531927AD6C9F8, vehicle, enabled); }
	static Vehicle CREATE_VEHICLE(Hash ModelHashKey, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float fVehicleHeading, bool RegisterAsNetworkObject, bool ScriptHostObject, bool bDontAutoCreateDraftAnimals, bool p8) { return invoke <Vehicle>(0xAF35D0D2583051B0, ModelHashKey, VecCoorsX, VecCoorsY, VecCoorsZ, fVehicleHeading, RegisterAsNetworkObject, ScriptHostObject, bDontAutoCreateDraftAnimals, p8); }
	static Vehicle _CREATE_DRAFT_VEHICLE(Hash modelHash, float x, float y, float z, float heading, bool isNetwork, bool bScriptHostVeh, bool bDontAutoCreateDraftAnimals, Hash draftAnimalPopGroup, bool p9) { return invoke <Vehicle>(0x214651FB1DFEBA89, modelHash, x, y, z, heading, isNetwork, bScriptHostVeh, bDontAutoCreateDraftAnimals, draftAnimalPopGroup, p9); }
	static void DELETE_VEHICLE(Vehicle* VehicleIndex) { return invoke <void>(0xE20A909D8C4A70F8, VehicleIndex); }
	static void _FADE_AND_DESTROY_VEHICLE(Vehicle* vehicle) { return invoke <void>(0x35DC1877312FBA0F, vehicle); }
	static bool _IS_VEHICLE_FADING_OUT(Vehicle vehicle) { return invoke <bool>(0x5136B284B67B35C7, vehicle); }
	static void SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(Vehicle VehicleIndex, bool bAllowHomingMissileLockon) { return invoke <void>(0x1240E8596A8308B9, VehicleIndex, bAllowHomingMissileLockon); }
	static void SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(Vehicle VehicleIndex, bool bAllowLockon) { return invoke <void>(0xECB9E9BC887E8060, VehicleIndex, bAllowLockon); }
	static bool IS_VEHICLE_MODEL(Vehicle VehicleIndex, Hash ModelHashKey) { return invoke <bool>(0x45A54EC7A22455, VehicleIndex, ModelHashKey); }
	static void _SET_ALL_VEHICLE_GENERATORS_DISABLED_FOR_VOLUME(Volume volume, bool toggle) { return invoke <void>(0x424FFCB9F0D2D4B5, volume, toggle); }
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, bool bActive, bool bSyncOverNetwork) { return invoke <void>(0xBBB134FB9D50C0CC, VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, bActive, bSyncOverNetwork); }
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE() { return invoke <void>(0x3D596E6E88A02C24); }
	static bool SET_VEHICLE_ON_GROUND_PROPERLY(Vehicle VehicleIndex, float hightSampleRangeUp) { return invoke <bool>(0x7263332501E07F52, VehicleIndex, hightSampleRangeUp); }
	static bool IS_VEHICLE_STOPPED(Vehicle VehicleIndex) { return invoke <bool>(0x78C3311A73135241, VehicleIndex); }
	static int GET_VEHICLE_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return invoke <int>(0x59F3F16577CD79B2, vehicle); }
	static int GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Vehicle VehicleIndex) { return invoke <int>(0xA9C55F1C15E62E06, VehicleIndex); }
	static int GET_VEHICLE_MODEL_NUMBER_OF_SEATS(Hash VehicleModelHashKey) { return invoke <int>(0x9A578736FF3A17C3, VehicleModelHashKey); }
	static bool IS_SEAT_WARP_ONLY(Vehicle VehicleIndex, int seat) { return invoke <bool>(0x7892685BF6D9775E, VehicleIndex, seat); }
	static bool _GET_VEHICLE_TURRET_SEAT(Vehicle vehicle, int* seatIndex) { return invoke <bool>(0xFF5791B7639C2A46, vehicle, seatIndex); }
	static Any _0xA9E185D498B9AC67(Any p0, Any p1) { return invoke <Any>(0xA9E185D498B9AC67, p0, p1); }
	static void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float DensityMultiplier) { return invoke <void>(0x606374EBFC27B133, DensityMultiplier); }
	static void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float DensityMultiplier) { return invoke <void>(0x1F91D44490E1EA0C, DensityMultiplier); }
	static void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float DensityMultiplier) { return invoke <void>(0xFEDFA97638D61D4A, DensityMultiplier); }
	static void SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(bool bVal) { return invoke <void>(0xD4288603E8766FF7, bVal); }
	static void SET_VEHICLE_DOORS_LOCKED(Vehicle VehicleIndex, int NewLockState) { return invoke <void>(0x96F78A6A075D55D9, VehicleIndex, NewLockState); }
	static void SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(Vehicle VehicleIndex, int DoorIndex, int NewLockState) { return invoke <void>(0xA9F1D75195CC40F6, VehicleIndex, DoorIndex, NewLockState); }
	static void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle VehicleIndex, Player PlayerIndex, bool Locked) { return invoke <void>(0x359A8EA1FB8D6F0F, VehicleIndex, PlayerIndex, Locked); }
	static bool GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle VehicleIndex, Player PlayerIndex) { return invoke <bool>(0xFA2CDDFEB8BC898B, VehicleIndex, PlayerIndex); }
	static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(Vehicle VehicleIndex, bool Locked) { return invoke <void>(0x2381977DA948F8DC, VehicleIndex, Locked); }
	static void SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(Vehicle VehicleIndex, int TeamIndex, bool Locked) { return invoke <void>(0xE712BC978770F105, VehicleIndex, TeamIndex, Locked); }
	static bool _GET_VEHICLE_DOORS_LOCKED_FOR_TEAM(Vehicle vehicle, int team) { return invoke <bool>(0xDD1E1393D966D39A, vehicle, team); }
	static void EXPLODE_VEHICLE(Vehicle VehicleIndex, bool isAudible, bool isInvisible, Any p3, Any p4) { return invoke <void>(0x75DCED9EEC5769D7, VehicleIndex, isAudible, isInvisible, p3, p4); }
	static void _0x750D42C013F64AE7(Any p0, Any p1) { return invoke <void>(0x750D42C013F64AE7, p0, p1); }
	static void _0xE78993FF9022C064(Any p0) { return invoke <void>(0xE78993FF9022C064, p0); }
	static void _0x9868C0D0134855F7(Any p0) { return invoke <void>(0x9868C0D0134855F7, p0); }
	static void _HIDE_HORSE_REINS(Vehicle vehicle) { return invoke <void>(0x201B8ED4FF7FE9F5, vehicle); }
	static void _SHOW_HORSE_REINS(Vehicle vehicle) { return invoke <void>(0x41CDA90EE3450921, vehicle); }
	static void _0xD21A3D421E7F09F7(Any p0, Any p1) { return invoke <void>(0xD21A3D421E7F09F7, p0, p1); }
	static void _0xA13028E22564A1BD(Any p0, Any p1) { return invoke <void>(0xA13028E22564A1BD, p0, p1); }
	static void _0x485B05EF05B9AEE9(Any p0, Any p1) { return invoke <void>(0x485B05EF05B9AEE9, p0, p1); }
	static void SET_BOAT_ANCHOR(Vehicle VehicleIndex, bool AnchoredFlag) { return invoke <void>(0xAEAB044F05B92659, VehicleIndex, AnchoredFlag); }
	static void _0x6B53F4B811E583D2(Vehicle vehicle, bool toggle) { return invoke <void>(0x6B53F4B811E583D2, vehicle, toggle); }
	static bool CAN_ANCHOR_BOAT_HERE(Vehicle VehicleIndex) { return invoke <bool>(0xC075176CFB8B4128, VehicleIndex); }
	static void SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(Vehicle VehicleIndex, bool ForcePlayerBoatAnchorFlag, bool p2) { return invoke <void>(0x286771F3059A37A7, VehicleIndex, ForcePlayerBoatAnchorFlag, p2); }
	static void SET_FORCE_LOW_LOD_ANCHOR_MODE(Vehicle VehicleIndex, bool ForcePlayerLowLodAnchorFlag) { return invoke <void>(0x75B49ACD73617437, VehicleIndex, ForcePlayerLowLodAnchorFlag); }
	static void SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(Vehicle VehicleIndex, float LodDistance) { return invoke <void>(0xE3261532550D6A9F, VehicleIndex, LodDistance); }
	static void SET_BOAT_SINKS_WHEN_WRECKED(Vehicle VehicleIndex, bool ShouldSink) { return invoke <void>(0x62A6D317A011EA1D, VehicleIndex, ShouldSink); }
	static void _SET_FORCE_HIGH_LOD_VEHICLE(Vehicle vehicle, bool p1) { return invoke <void>(0x1098CDA477890165, vehicle, p1); }
	static void _0x98A7598C579EE871(Any p0, Any p1, Any p2) { return invoke <void>(0x98A7598C579EE871, p0, p1, p2); }
	static void _0x9E8711C81AA17876(Vehicle vehicle, bool p1) { return invoke <void>(0x9E8711C81AA17876, vehicle, p1); }
	static void SET_VEHICLE_STRONG(Vehicle VehicleIndex, bool StrongFlag) { return invoke <void>(0xAB315515C9F8803D, VehicleIndex, StrongFlag); }
	static bool IS_VEHICLE_SEAT_FREE(Vehicle VehicleIndex, int seat) { return invoke <bool>(0xE052C1B1CAA4ECE4, VehicleIndex, seat); }
	static Ped GET_PED_IN_VEHICLE_SEAT(Vehicle VehicleIndex, int seat) { return invoke <Ped>(0xBB40DD2270B65366, VehicleIndex, seat); }
	static Ped GET_LAST_PED_IN_VEHICLE_SEAT(Vehicle VehicleIndex, int seat) { return invoke <Ped>(0x74583B19FEEAFDA7, VehicleIndex, seat); }
	static bool IS_DRAFT_VEHICLE(Vehicle vehicle) { return invoke <bool>(0xEA44E97849E9F3DD, vehicle); }
	static Ped _GET_PED_IN_DRAFT_HARNESS(Vehicle vehicle, int harnessId) { return invoke <Ped>(0xA8BA0BAE0173457B, vehicle, harnessId); }
	static void SET_VEHICLE_FORWARD_SPEED(Vehicle VehicleIndex, float CarSpeed) { return invoke <void>(0xF9F92AF49F12F6E7, VehicleIndex, CarSpeed); }
	static void BRING_VEHICLE_TO_HALT(Vehicle VehicleIndex, float StoppingDistance, int nTimeToStopFor, bool ControlVerticalVelocity) { return invoke <void>(0x260BE8F09E326A20, VehicleIndex, StoppingDistance, nTimeToStopFor, ControlVerticalVelocity); }
	static bool _IS_VEHICLE_BROUGHT_TO_HALT(Vehicle vehicle) { return invoke <bool>(0x404527BC03DA0E6C, vehicle); }
	static void STOP_BRINGING_VEHICLE_TO_HALT(Vehicle VehicleIndex) { return invoke <void>(0x7C06330BFDDA182E, VehicleIndex); }
	static void _0xE12F5ED49F44D40D(Any p0) { return invoke <void>(0xE12F5ED49F44D40D, p0); }
	static void _0xF6E3D38869D0F7AD(Any p0) { return invoke <void>(0xF6E3D38869D0F7AD, p0); }
	static void SET_VEHICLE_DOORS_SHUT(Vehicle VehicleIndex, bool bShutInstantly) { return invoke <void>(0xA4FFCD645B11F25A, VehicleIndex, bShutInstantly); }
	static void SET_VEHICLE_TYRES_CAN_BURST(Vehicle VehicleIndex, bool CanBurstTyresFlag) { return invoke <void>(0xEBD0A4E935106FE5, VehicleIndex, CanBurstTyresFlag); }
	static void SET_VEHICLE_WHEELS_CAN_BREAK(Vehicle VehicleIndex, bool CanBreakWheelsFlag) { return invoke <void>(0x839137C40275FB77, VehicleIndex, CanBreakWheelsFlag); }
	static void SET_VEHICLE_DOORS_TO_OPEN_AT_ANY_DISTANCE(Vehicle vehicle, bool toggle) { return invoke <void>(0x362CEDD2A41E0747, vehicle, toggle); }
	static void SET_VEHICLE_DOOR_OPEN(Vehicle VehicleIndex, int DoorNumber, bool SwingFree, bool Instant) { return invoke <void>(0x550CE392A4672412, VehicleIndex, DoorNumber, SwingFree, Instant); }
	static void REMOVE_VEHICLE_WINDOW(Vehicle VehicleIndex, int WindowNumber) { return invoke <void>(0x745F15A215F2DDF1, VehicleIndex, WindowNumber); }
	static void _0x8878FF3EEE2868A9(Any p0, Any p1) { return invoke <void>(0x8878FF3EEE2868A9, p0, p1); }
	static void _SET_VEHICLE_DIRT_LEVEL_2(Vehicle vehicle, float dirtLevel) { return invoke <void>(0xBAE0EEDF93F05EAA, vehicle, dirtLevel); }
	static void _SET_VEHICLE_MUD_LEVEL(Vehicle vehicle, float mudLevel) { return invoke <void>(0x4D15E49764CB328A, vehicle, mudLevel); }
	static void SET_VEHICLE_LIGHTS(Vehicle VehicleIndex, int CarLightSetting) { return invoke <void>(0x629F0A0E952CAE7D, VehicleIndex, CarLightSetting); }
	static void SET_RANDOM_TRAINS(bool RandomTrainsFlag) { return invoke <void>(0x1156C6EE7E82A98A, RandomTrainsFlag); }
	static int _0x331CBD247FC5DAA8(Hash configHash, float x, float y, float z, bool direction, bool p5) { return invoke <int>(0x331CBD247FC5DAA8, configHash, x, y, z, direction, p5); }
	static bool _0x0516FAE561276EFC(int trackIndex) { return invoke <bool>(0x516FAE561276EFC, trackIndex); }
	static int _GET_TRAIN_TRACK_FROM_TRAIN_VEHICLE(Vehicle train) { return invoke <int>(0x45853F4E17D847D5, train); }
	static Vehicle _GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(int trackIndex) { return invoke <Vehicle>(0x6E585A616ABB8401, trackIndex); }
	static void _0x15206E88FF7617DF(int trackIndex, float p1) { return invoke <void>(0x15206E88FF7617DF, trackIndex, p1); }
	static void _0xA7966807953A18EE(int trackIndex, float p1) { return invoke <void>(0xA7966807953A18EE, trackIndex, p1); }
	static void _0x6B34BE961F639E21(int trackIndex, int p1) { return invoke <void>(0x6B34BE961F639E21, trackIndex, p1); }
	static void _0xE6BD7DD3FD474415(Vehicle train, bool p1) { return invoke <void>(0xE6BD7DD3FD474415, train, p1); }
	static void _0x615B3B8E73634509(int trackIndex, float p1) { return invoke <void>(0x615B3B8E73634509, trackIndex, p1); }
	static void _0x38E7DD70A242D5CB(int trackIndex, int p1) { return invoke <void>(0x38E7DD70A242D5CB, trackIndex, p1); }
	static void _0x63509DDF102E08E8(int trackIndex, int p1) { return invoke <void>(0x63509DDF102E08E8, trackIndex, p1); }
	static void _0x7408B5C66BA31ADB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoke <void>(0x7408B5C66BA31ADB, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static void _0x41365DB586CD9E8E(int trackIndex, float p1) { return invoke <void>(0x41365DB586CD9E8E, trackIndex, p1); }
	static void _0xD0AABE5B9F8FA589(int trackIndex, float p1) { return invoke <void>(0xD0AABE5B9F8FA589, trackIndex, p1); }
	static void _0x427C919E9809E370(int trackIndex, int p1) { return invoke <void>(0x427C919E9809E370, trackIndex, p1); }
	static bool _DOES_TRAIN_EXIST_ON_TRACK(int trackIndex) { return invoke <bool>(0xC29996A337BDD099, trackIndex); }
	static Vector3 _GET_TRAIN_POSITION_ON_TRACK(int trackIndex) { return invoke <Vector3>(0x1E8A921112891651, trackIndex); }
	static bool _0xB4241AD8F5AEE9ED(int trackIndex) { return invoke <bool>(0xB4241AD8F5AEE9ED, trackIndex); }
	static void _0xA230A5DDE12ED374(Any p0) { return invoke <void>(0xA230A5DDE12ED374, p0); }
	static void _0x0D5FDF0D36FA10CD(int trackIndex) { return invoke <void>(0xD5FDF0D36FA10CD, trackIndex); }
	static void _0xE682002DB1F30669(Any p0) { return invoke <void>(0xE682002DB1F30669, p0); }
	static void _0x718EB706B6E998A0(int trackIndex) { return invoke <void>(0x718EB706B6E998A0, trackIndex); }
	static bool _0xF05DFAF1ADFEF2CD(Hash trainConfig, float x, float y, float z, bool direction, bool p5) { return invoke <bool>(0xF05DFAF1ADFEF2CD, trainConfig, x, y, z, direction, p5); }
	static Any _0xD1DF5E54F4ACBE1A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <Any>(0xD1DF5E54F4ACBE1A, p0, p1, p2, p3, p4, p5, p6); }
	static Any _0x0FDDEE66E3465726(Any p0) { return invoke <Any>(0xFDDEE66E3465726, p0); }
	static void _0x4C05B42A8D937796() { return invoke <void>(0x4C05B42A8D937796); }
	static void _0xB961DD799A837BD7() { return invoke <void>(0xB961DD799A837BD7); }
	static void _0x16B86A49E072AA85() { return invoke <void>(0x16B86A49E072AA85); }
	static void _0x2A7413168F6CD5A8() { return invoke <void>(0x2A7413168F6CD5A8); }
	static void _0xFFFE15B433300B8C(Any p0, Any p1, Any p2) { return invoke <void>(0xFFFE15B433300B8C, p0, p1, p2); }
	static void _0x6EA1273D525427F4(Any p0, Any p1, Any p2) { return invoke <void>(0x6EA1273D525427F4, p0, p1, p2); }
	static Any _0x7BE0746539DEF0C8(Any p0, Any p1) { return invoke <Any>(0x7BE0746539DEF0C8, p0, p1); }
	static void _0x3137EDC899E6DAE4(Any p0, Any p1) { return invoke <void>(0x3137EDC899E6DAE4, p0, p1); }
	static int _0x6C87F49BFA181DB5(float x, float y, float z) { return invoke <int>(0x6C87F49BFA181DB5, x, y, z); }
	static int _GET_TRACK_INDEX_FROM_COORDS(float x, float y, float z) { return invoke <int>(0x85D39F5E3B6D7EB0, x, y, z); }
	static Vector3 _GET_NEAREST_TRAIN_TRACK_POSITION(float x, float y, float z) { return invoke <Vector3>(0x6DE03BCC15E81710, x, y, z); }
	static void DELETE_ALL_TRAINS() { return invoke <void>(0xA3120A1385F17FF7); }
	static Any _0x0E558D3A49D759D6(Any p0, Any p1) { return invoke <Any>(0xE558D3A49D759D6, p0, p1); }
	static void _0xD4907EF4334C7602(Any p0, Any p1) { return invoke <void>(0xD4907EF4334C7602, p0, p1); }
	static void _0x68830738A6BFB370(Any p0, Any p1) { return invoke <void>(0x68830738A6BFB370, p0, p1); }
	static void SET_TRAIN_SPEED(Vehicle VehicleIndex, float NewTrainSpeed) { return invoke <void>(0xDFBA6BBFF7CCAFBB, VehicleIndex, NewTrainSpeed); }
	static void _SET_TRAIN_MAX_SPEED(Vehicle train, float speed) { return invoke <void>(0x9F29999DFDF2AEB8, train, speed); }
	static void SET_TRAIN_CRUISE_SPEED(Vehicle VehicleIndex, float NewTrainCruiseSpeed) { return invoke <void>(0x1021EB2E96B793C, VehicleIndex, NewTrainCruiseSpeed); }
	static int _GET_TRAIN_CARRIAGE_TRAILER_NUMBER(Vehicle train) { return invoke <int>(0x60B7D1DCC312697D, train); }
	static Hash _GET_TRAIN_MODEL_FROM_TRAIN_CONFIG_BY_CAR_INDEX(Hash trainConfig, int trainCarIndex) { return invoke <Hash>(0x8DF5F6A19F99F0D5, trainConfig, trainCarIndex); }
	static int _GET_NUM_CARS_FROM_TRAIN_CONFIG(Hash trainConfig) { return invoke <int>(0x635423D55CA84FC8, trainConfig); }
	static Entity _GET_TRAIN_CAR(Vehicle train) { return invoke <Entity>(0x671A07C9A1CD50A5, train); }
	static void _SET_TRAIN_STOPS_FOR_STATIONS(Vehicle train, bool toggle) { return invoke <void>(0x4182C037AA1F0091, train, toggle); }
	static void _0xDD100CE1EBBF37E3(Any p0, Any p1) { return invoke <void>(0xDD100CE1EBBF37E3, p0, p1); }
	static void _0x160C1B5AB48AB87C(Vehicle train, float p1) { return invoke <void>(0x160C1B5AB48AB87C, train, p1); }
	static bool IS_TRAIN_WAITING_AT_STATION(Vehicle train) { return invoke <bool>(0xE887BD31D97793F6, train); }
	static void _SET_TRAIN_HALT(Vehicle train) { return invoke <void>(0x3660BCAB3A6BB734, train); }
	static void _SET_TRAIN_LEAVE_STATION(Vehicle train) { return invoke <void>(0x787E43477746876F, train); }
	static void SET_RANDOM_BOATS(bool RandomBoatsFlag) { return invoke <void>(0xF44D446D4E36DB87, RandomBoatsFlag); }
	static void REQUEST_VEHICLE_RECORDING(int FileNumber, const char* pRecordingName) { return invoke <void>(0xC474CF16EDA45DC9, FileNumber, pRecordingName); }
	static bool HAS_VEHICLE_RECORDING_BEEN_LOADED(int FileNumber, const char* pRecordingName) { return invoke <bool>(0xBA9325BE372AB6EA, FileNumber, pRecordingName); }
	static void REMOVE_VEHICLE_RECORDING(int FileNumber, const char* pRecordingName) { return invoke <void>(0x139E35755418F6AA, FileNumber, pRecordingName); }
	static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(int iRecordingNumber, float fTime, const char* pRecordingName) { return invoke <Vector3>(0x1A00961A1BE94E5E, iRecordingNumber, fTime, pRecordingName); }
	static Vector3 GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(int iRecordingNumber, float fTime, const char* pRecordingName) { return invoke <Vector3>(0x61787DD28B8CC0D5, iRecordingNumber, fTime, pRecordingName); }
	static float GET_TIME_POSITION_IN_RECORDING(Vehicle VehicleIndex) { return invoke <float>(0x233B51C7913FA031, VehicleIndex); }
	static void START_PLAYBACK_RECORDED_VEHICLE(Vehicle VehicleIndex, int FileNumber, const char* pRecordingName, bool DoPlaceOnRoadAdjustment) { return invoke <void>(0x4932B84E3276508E, VehicleIndex, FileNumber, pRecordingName, DoPlaceOnRoadAdjustment); }
	static void FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Vehicle VehicleIndex, bool DoPlaceOnRoadAdjustment) { return invoke <void>(0x59ECA796021B0539, VehicleIndex, DoPlaceOnRoadAdjustment); }
	static void STOP_PLAYBACK_RECORDED_VEHICLE(Vehicle VehicleIndex) { return invoke <void>(0xBF9B4D6267E8C26D, VehicleIndex); }
	static bool IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Vehicle VehicleIndex) { return invoke <bool>(0x2774B3A9034278F, VehicleIndex); }
	static bool IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Vehicle VehicleIndex) { return invoke <bool>(0x5A7472606EC5B7C1, VehicleIndex); }
	static void SET_PLAYBACK_SPEED(Vehicle VehicleIndex, float PlaybackSpeed) { return invoke <void>(0xD78084EED4CD94C6, VehicleIndex, PlaybackSpeed); }
	static void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Vehicle VehicleIndex, float TimeSkip) { return invoke <void>(0x5F5E6379C59EFC56, VehicleIndex, TimeSkip); }
	static Vehicle GET_CLOSEST_VEHICLE(float CentreX, float CentreY, float CentreZ, float Radius, Hash VehicleModelHashKey, int SearchFlags) { return invoke <Vehicle>(0x52F45D033645181B, CentreX, CentreY, CentreZ, Radius, VehicleModelHashKey, SearchFlags); }
	static Vehicle GET_TRAIN_CARRIAGE(Vehicle TrainEngineIndex, int CarriageNumber) { return invoke <Vehicle>(0xD0FB093A4CDB932C, TrainEngineIndex, CarriageNumber); }
	static void DELETE_MISSION_TRAIN(Vehicle* TrainIndex) { return invoke <void>(0xD3630FB07E8B570, TrainIndex); }
	static void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(Vehicle* TrainIndex, int iFlags) { return invoke <void>(0xBBE7648349B49BE8, TrainIndex, iFlags); }
	static void SET_MISSION_TRAIN_COORDS(Vehicle TrainIndex, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ) { return invoke <void>(0x7632755962AB9922, TrainIndex, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ); }
	static void _SET_MISSION_TRAIN_WARP_TO_COORDS(Vehicle train, float x, float y, float z, bool direction) { return invoke <void>(0xC9EA26893C9E4024, train, x, y, z, direction); }
	static void _0xA72B1BF3857B94D7(Vehicle train, bool p1) { return invoke <void>(0xA72B1BF3857B94D7, train, p1); }
	static bool _IS_THIS_MODEL_A_DRAFT_VEHICLE(Hash model) { return invoke <bool>(0xB9D5BDDA88E1BB66, model); }
	static bool IS_THIS_MODEL_A_BOAT(Hash VehicleModelHashKey) { return invoke <bool>(0x799CFC7C5B743B15, VehicleModelHashKey); }
	static bool IS_THIS_MODEL_A_TRAIN(Hash VehicleModelHashKey) { return invoke <bool>(0xFC08C8F8C1EDF174, VehicleModelHashKey); }
	static void SET_VEHICLE_CAN_BE_TARGETTED(Vehicle VehicleIndex, bool CanBeTargettedFlag) { return invoke <void>(0x5254BA0B44ADC16, VehicleIndex, CanBeTargettedFlag); }
	static void SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(Vehicle VehicleIndex, bool DontAllowPlayerToEnter) { return invoke <void>(0x63DC1F22C903B709, VehicleIndex, DontAllowPlayerToEnter); }
	static void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Vehicle VehicleIndex, bool VisibleDamageFlag) { return invoke <void>(0x4BF8131AE811541C, VehicleIndex, VisibleDamageFlag); }
	static void SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Vehicle VehicleIndex, bool UnbreakableLightFlag) { return invoke <void>(0xC903855E028A05F2, VehicleIndex, UnbreakableLightFlag); }
	static void SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(Vehicle VehicleIndex, bool RespectLocks) { return invoke <void>(0x33992A808DF1C1BA, VehicleIndex, RespectLocks); }
	static void SET_VEHICLE_CAN_EJECT_PASSENGERS_IF_LOCKED(Vehicle VehicleIndex, bool RespectLocks) { return invoke <void>(0x65D03A9D6B2C6B5, VehicleIndex, RespectLocks); }
	static void SET_VEHICLE_DIRT_LEVEL(Vehicle VehicleIndex, float DirtLevel) { return invoke <void>(0x758C3460EE915D0A, VehicleIndex, DirtLevel); }
	static bool IS_VEHICLE_DOOR_FULLY_OPEN(Vehicle VehicleIndex, int DoorNumber) { return invoke <bool>(0x7AE191143C7A9107, VehicleIndex, DoorNumber); }
	static void SET_VEHICLE_ENGINE_ON(Vehicle VehicleIndex, bool EngineOnFlag, bool bNoDelay) { return invoke <void>(0xB64CFA14CB9A2E78, VehicleIndex, EngineOnFlag, bNoDelay); }
	static void SET_VEHICLE_UNDRIVEABLE(Vehicle VehicleIndex, bool UnDriveableFlag) { return invoke <void>(0x6E884BAB713A2A94, VehicleIndex, UnDriveableFlag); }
	static void SET_VEHICLE_PROVIDES_COVER(Vehicle VehicleIndex, bool ProvidesCoverFlag) { return invoke <void>(0x652712478F1721F4, VehicleIndex, ProvidesCoverFlag); }
	static void _0x3053064F909B5F42(Any p0, Any p1) { return invoke <void>(0x3053064F909B5F42, p0, p1); }
	static void SET_VEHICLE_DOOR_CONTROL(Vehicle VehicleIndex, int DoorNumber, int DoorStatus, float AngleRatio) { return invoke <void>(0xD57F10EBBA814ECF, VehicleIndex, DoorNumber, DoorStatus, AngleRatio); }
	static void SET_VEHICLE_DOOR_LATCHED(Vehicle VehicleIndex, int DoorNumber, bool SetLatched, bool WillAutoLatch, bool bApplyForceForDoorClosed) { return invoke <void>(0x6F8A202EB312A3C, VehicleIndex, DoorNumber, SetLatched, WillAutoLatch, bApplyForceForDoorClosed); }
	static void SET_VEHICLE_DOOR_SHUT(Vehicle VehicleIndex, int DoorNumber, bool bShutInstantly) { return invoke <void>(0x6A3C24B91FD0EA09, VehicleIndex, DoorNumber, bShutInstantly); }
	static void SET_VEHICLE_DOOR_BROKEN(Vehicle VehicleIndex, int DoorNumber, bool bDissapear) { return invoke <void>(0x9666CF20A1C6D780, VehicleIndex, DoorNumber, bDissapear); }
	static void SET_VEHICLE_CAN_BREAK(Vehicle VehicleIndex, bool bAllowBreaking) { return invoke <void>(0xC5ED9D59B4646611, VehicleIndex, bAllowBreaking); }
	static void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Vehicle VehicleIndex, bool ConsideredByPlayerFlag) { return invoke <void>(0x54800D386C5825E5, VehicleIndex, ConsideredByPlayerFlag); }
	static void SET_VEHICLE_MAY_BE_USED_BY_GOTO_POINT_ANY_MEANS(Vehicle VehicleIndex, bool bState) { return invoke <void>(0x7549B9E841940695, VehicleIndex, bState); }
	static int GET_VEHICLE_DOOR_LOCK_STATUS(Vehicle VehicleIndex) { return invoke <int>(0xC867FD144F2469D3, VehicleIndex); }
	static void SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Vehicle VehicleIndex, int DoorNumber, bool bDoorBreakageAllowed) { return invoke <void>(0x81FB9D6422F804C, VehicleIndex, DoorNumber, bDoorBreakageAllowed); }
	static bool IS_VEHICLE_ON_ALL_WHEELS(Vehicle VehicleIndex) { return invoke <bool>(0xD5D119529654EE0, VehicleIndex); }
	static bool _GET_TRAIN_DIRECTION(Vehicle train) { return invoke <bool>(0x3C9628A811CBD724, train); }
	static bool _GET_TRAIN_DIRECTION_FROM_INDEX(int trackIndex) { return invoke <bool>(0x67995318F5FAA496, trackIndex); }
	static Any _0x09034479E6E3E269(Vehicle train, Hash* trainTrack, int* junctionIndex) { return invoke <Any>(0x9034479E6E3E269, train, trainTrack, junctionIndex); }
	static bool _GET_TRAIN_TRACK_JUNCTION_AT_COORDS(Hash trainTrack, float x, float y, float z, int* junctionIndex) { return invoke <bool>(0x86AFC343CF7F0B34, trainTrack, x, y, z, junctionIndex); }
	static Any _0xD9BF3ED8EFB67EA3(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <Any>(0xD9BF3ED8EFB67EA3, p0, p1, p2, p3, p4); }
	static Vector3 _0x785639D89F8451AB(Any p0, Any p1) { return invoke <Vector3>(0x785639D89F8451AB, p0, p1); }
	static void _SET_TRAIN_TRACK_JUNCTION_SWITCH(Hash trainTrack, int junctionIndex, bool enabled) { return invoke <void>(0xE6C5E2125EB210C1, trainTrack, junctionIndex, enabled); }
	static void _0x3ABFA128F5BF5A70(Hash trainTrack, int junctionIndex, bool enabled) { return invoke <void>(0x3ABFA128F5BF5A70, trainTrack, junctionIndex, enabled); }
	static Any _0x2C46D2A591D8C322(Any p0, Any p1, Any p2) { return invoke <Any>(0x2C46D2A591D8C322, p0, p1, p2); }
	static Any _0xCAFF2C9747103C02(Any p0, Any p1, Any p2) { return invoke <Any>(0xCAFF2C9747103C02, p0, p1, p2); }
	static void _SET_ALL_JUNCTIONS_CLEARED() { return invoke <void>(0x138398153824E332); }
	static void _0x34BCF6209B9668A7(int trackIndex, Any p1) { return invoke <void>(0x34BCF6209B9668A7, trackIndex, p1); }
	static void _0xD0BA1853D76683C8(int trackIndex, float x, float y, float z, Any p4) { return invoke <void>(0xD0BA1853D76683C8, trackIndex, x, y, z, p4); }
	static void SET_TRAIN_OFFSET_FROM_STATION(Vehicle train, float offset) { return invoke <void>(0x8EC47DD4300BF063, train, offset); }
	static void _0xDC69F6913CCA0B99(Any p0, Any p1) { return invoke <void>(0xDC69F6913CCA0B99, p0, p1); }
	static void _0x7840576C50A13DBA(Vehicle train, bool p1) { return invoke <void>(0x7840576C50A13DBA, train, p1); }
	static Any _0xD0116DF21E6C7B36(Any p0, Any p1) { return invoke <Any>(0xD0116DF21E6C7B36, p0, p1); }
	static void _DETACH_WAGON_ENTITY_FROM_TRAIN(Entity entity) { return invoke <void>(0x54CBDD6E1B4CB4DF, entity); }
	static int _0x1180A2974D251B7B(Vehicle train) { return invoke <int>(0x1180A2974D251B7B, train); }
	static int GET_CURRENT_STATION_FOR_TRAIN(Vehicle train) { return invoke <int>(0x86FA6D8B48667D75, train); }
	static Hash _0x9CC94A948EAF5372(int trackIndex, int stationIndex) { return invoke <Hash>(0x9CC94A948EAF5372, trackIndex, stationIndex); }
	static Any _0xDE8C5B9F65017FA1(Vehicle train) { return invoke <Any>(0xDE8C5B9F65017FA1, train); }
	static int _GET_CURRENT_TRACK_FOR_TRAIN(Vehicle train) { return invoke <int>(0xAF787E081AC4A8EE, train); }
	static Vector3 _GET_STATION_COORDS_FROM_TRAIN_STATION_DATA(int trackIndex, int stationIndex) { return invoke <Vector3>(0xBA958F68031DDBFC, trackIndex, stationIndex); }
	static int GET_TRACK_INDEX_OF_TRAIN(Vehicle train) { return invoke <int>(0x865FEC2FA899F29C, train); }
	static void _0x1A861F899EBBE17C(Vehicle train, bool p1) { return invoke <void>(0x1A861F899EBBE17C, train, p1); }
	static void _0xF8F7DA13CFBD4532(int trackIndex, bool p1) { return invoke <void>(0xF8F7DA13CFBD4532, trackIndex, p1); }
	static void _TRIGGER_TRAIN_WHISTLE(Vehicle train, const char* whistleSequence, bool p2, bool p3) { return invoke <void>(0xCFE122EC635CC2B2, train, whistleSequence, p2, p3); }
	static void _0x2BB2B5BCF0DF8008(Any p0, Any p1) { return invoke <void>(0x2BB2B5BCF0DF8008, p0, p1); }
	static void _0x6703872EC09BC158(Any p0, Any p1) { return invoke <void>(0x6703872EC09BC158, p0, p1); }
	static void _0x1BFBAFCC6760FF02(Vehicle train, bool p1) { return invoke <void>(0x1BFBAFCC6760FF02, train, p1); }
	static Any _0xF5EA41C1408695FB(Any p0, Any p1, Any p2, Any p3) { return invoke <Any>(0xF5EA41C1408695FB, p0, p1, p2, p3); }
	static void SET_VEHICLE_FIXED(Vehicle VehicleIndex) { return invoke <void>(0x79811282A9D1AE56, VehicleIndex); }
	static void SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Vehicle VehicleIndex, bool bVal) { return invoke <void>(0xB70986AB19B04AFF, VehicleIndex, bVal); }
	static void SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(Vehicle VehicleIndex, bool bVal) { return invoke <void>(0x5795FBE7A2001C14, VehicleIndex, bVal); }
	static void SET_DISABLE_VEHICLE_ENGINE_FIRES(Vehicle VehicleIndex, bool bVal) { return invoke <void>(0xD146EE5F2B06B95E, VehicleIndex, bVal); }
	static void SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(Vehicle VehicleIndex, bool bVal) { return invoke <void>(0x8F75941C86EEBFCA, VehicleIndex, bVal); }
	static void SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE(Vehicle VehicleIndex, bool bVal) { return invoke <void>(0xC84E138448507567, VehicleIndex, bVal); }
	static void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ) { return invoke <void>(0xC619A44639BC0CB4, VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ); }
	static void SET_VEHICLE_STEER_BIAS(Vehicle VehicleIndex, float Bias) { return invoke <void>(0x84DAAE11E9EE4FC3, VehicleIndex, Bias); }
	static bool IS_VEHICLE_EXTRA_TURNED_ON(Vehicle VehicleIndex, int Extra) { return invoke <bool>(0xFA9A55D9C4351625, VehicleIndex, Extra); }
	static void SET_VEHICLE_EXTRA(Vehicle VehicleIndex, int Extra, bool TurnOff) { return invoke <void>(0xBB6F89150BC9D16B, VehicleIndex, Extra, TurnOff); }
	static bool DOES_EXTRA_EXIST(Vehicle VehicleIndex, int Extra) { return invoke <bool>(0xAF5E7E9A7620FFB5, VehicleIndex, Extra); }
	static void SET_VEHICLE_DAMAGE(Vehicle TrainIndex, float VecDamageCoorsX, float VecDamageCoorsY, float VecDamageCoorsZ, float Damage, float Deformation, bool localDamage) { return invoke <void>(0x1D7678F81452BB41, TrainIndex, VecDamageCoorsX, VecDamageCoorsY, VecDamageCoorsZ, Damage, Deformation, localDamage); }
	static float GET_VEHICLE_ENGINE_HEALTH(Vehicle VehicleIndex) { return invoke <float>(0x90DBFFAC43B22081, VehicleIndex); }
	static void SET_VEHICLE_ENGINE_HEALTH(Vehicle VehicleIndex, float health) { return invoke <void>(0x8BDC5B998B4654EF, VehicleIndex, health); }
	static float GET_VEHICLE_PETROL_TANK_HEALTH(Vehicle VehicleIndex) { return invoke <float>(0x1E5A9B356D5098BE, VehicleIndex); }
	static void SET_VEHICLE_PETROL_TANK_HEALTH(Vehicle VehicleIndex, float health) { return invoke <void>(0x6AB2918EE3BEC94C, VehicleIndex, health); }
	static bool IS_VEHICLE_STUCK_TIMER_UP(Vehicle VehicleIndex, int StuckType, int RequiredTime) { return invoke <bool>(0x1ABA9753939503C5, VehicleIndex, StuckType, RequiredTime); }
	static void RESET_VEHICLE_STUCK_TIMER(Vehicle VehicleIndex, int StuckType) { return invoke <void>(0x23298B468F7D88B6, VehicleIndex, StuckType); }
	static bool IS_VEHICLE_DRIVEABLE(Vehicle VehicleIndex, bool bCheckFire, bool p2) { return invoke <bool>(0xB86D29B10F627379, VehicleIndex, bCheckFire, p2); }
	static bool IS_VEHICLE_WRECKED(Vehicle vehicle) { return invoke <bool>(0xDDBEA5506C848227, vehicle); }
	static bool _IS_VEHICLE_ON_FIRE(Vehicle vehicle) { return invoke <bool>(0xE3BF7ED4169EC43, vehicle); }
	static void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Vehicle VehicleIndex, bool bNewVal) { return invoke <void>(0xBB5A3FA8ED3979C5, VehicleIndex, bNewVal); }
	static void START_VEHICLE_HORN(Vehicle VehicleIndex, int TimeToSoundHorn, Hash HornTypeHash, bool isMusicalHorn) { return invoke <void>(0xB4E3BFC39CA16057, VehicleIndex, TimeToSoundHorn, HornTypeHash, isMusicalHorn); }
	static void SET_VEHICLE_HAS_STRONG_AXLES(Vehicle VehicleIndex, bool bSet) { return invoke <void>(0x252253C8A45AA1FC, VehicleIndex, bSet); }
	static void _SET_VEHICLE_SNOW_LEVEL(Vehicle vehicle, float snowLevel) { return invoke <void>(0x6F73EFAB11651D7F, vehicle, snowLevel); }
	static void _SET_VEHICLE_WET_LEVEL(Vehicle vehicle, float wetLevel) { return invoke <void>(0x5AABB09F6FBD1F87, vehicle, wetLevel); }
	static void _SET_VEHICLE_TINT(Vehicle vehicle, int tintId) { return invoke <void>(0x8268B098F6FCA4E2, vehicle, tintId); }
	static void _SET_VEHICLE_LIVERY(Vehicle vehicle, int liveryIndex) { return invoke <void>(0xF89D82A0582E46ED, vehicle, liveryIndex); }
	static int _GET_VEHICLE_TINT(Vehicle vehicle) { return invoke <int>(0xA44D65E6C624526F, vehicle); }
	static int _GET_VEHICLE_LIVERY(Vehicle vehicle) { return invoke <int>(0xBB765B8FD49A796C, vehicle); }
	static bool IS_VEHICLE_WINDOW_INTACT(Vehicle VehicleIndex, int WindowNumber) { return invoke <bool>(0xE7910A63E05B12C, VehicleIndex, WindowNumber); }
	static bool ARE_ANY_VEHICLE_SEATS_FREE(Vehicle VehicleIndex) { return invoke <bool>(0xA0A424505A1B6429, VehicleIndex); }
	static void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Vehicle VehicleIndex, bool bSet) { return invoke <void>(0xA402939C6761E1A3, VehicleIndex, bSet); }
	static void SET_ALLOW_VEHICLE_EXPLODES_ON_CONTACT(Vehicle VehicleIndex, bool bSet) { return invoke <void>(0x8D3230A0ED7DE39F, VehicleIndex, bSet); }
	static bool IS_ANY_VEHICLE_NEAR_POINT(float pointX, float pointY, float pointZ, float radius) { return invoke <bool>(0x5698BA4FD04D39C4, pointX, pointY, pointZ, radius); }
	static void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Vehicle Vehicle) { return invoke <void>(0x84B81EF78BD22357, Vehicle); }
	static void REQUEST_VEHICLE_ASSET(Hash VehicleModelHashKey, int iVehicleRequestFlags) { return invoke <void>(0x81A15811460FAB3A, VehicleModelHashKey, iVehicleRequestFlags); }
	static void _0xCF9DA72002FC16BF(Any p0, Any p1, Any p2) { return invoke <void>(0xCF9DA72002FC16BF, p0, p1, p2); }
	static bool HAS_VEHICLE_ASSET_LOADED(Hash VehicleModelHashKey) { return invoke <bool>(0xB935F3154BC913C8, VehicleModelHashKey); }
	static void REMOVE_VEHICLE_ASSET(Hash VehicleModelHashKey) { return invoke <void>(0x888A4E675B38F5AD, VehicleModelHashKey); }
	static Any SET_VEHICLE_AUTOMATICALLY_ATTACHES(Entity TowTruckVehicleIndex, bool AutomaticallyAttach, bool ScanWithNonPlayerDriver) { return invoke <Any>(0x501354951CD942DE, TowTruckVehicleIndex, AutomaticallyAttach, ScanWithNonPlayerDriver); }
	static void _0x104D9A7B1C0D0783(Vehicle vehicle, float p1) { return invoke <void>(0x104D9A7B1C0D0783, vehicle, p1); }
	static bool IS_VEHICLE_IN_BURNOUT(Vehicle VehicleIndex) { return invoke <bool>(0x3F5029A8FC060C48, VehicleIndex); }
	static void SET_VEHICLE_HANDBRAKE(Vehicle VehicleIndex, bool bOn) { return invoke <void>(0x91BE51AEC4E99710, VehicleIndex, bOn); }
	static void INSTANTLY_FILL_VEHICLE_POPULATION() { return invoke <void>(0x1FF00DB43026B12F); }
	static bool HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED() { return invoke <bool>(0x2701D01D5E18FC31); }
	static bool GET_VEHICLE_TRAILER_VEHICLE(Vehicle vehicle, Vehicle* trailer) { return invoke <bool>(0xCF867A239EC30741, vehicle, trailer); }
	static float GET_VEHICLE_ESTIMATED_MAX_SPEED(Vehicle VehicleIndex) { return invoke <float>(0xFE52F34491529F0B, VehicleIndex); }
	static int ADD_ROAD_NODE_SPEED_ZONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoke <int>(0x4C221BAC54D735C3, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static bool REMOVE_ROAD_NODE_SPEED_ZONE(int index) { return invoke <bool>(0xFE9AB3354ACE6C9C, index); }
	static bool IS_ENTRY_POINT_FOR_SEAT_CLEAR(Ped PedIndex, Vehicle VehicleIndex, int Seat, bool CheckSide, bool LeftSide) { return invoke <bool>(0x80DDCCB2F4A3EB57, PedIndex, VehicleIndex, Seat, CheckSide, LeftSide); }
	static bool CAN_SHUFFLE_SEAT(Vehicle VehicleIndex, int Seat) { return invoke <bool>(0xF8B2D32A2231FD24, VehicleIndex, Seat); }
	static void MODIFY_VEHICLE_TOP_SPEED(Vehicle vehicle, float PercentChange) { return invoke <void>(0x35AD938C74CACD6A, vehicle, PercentChange); }
	static void SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Vehicle VehicleIndex, bool bStaysFrozen) { return invoke <void>(0x23A3AB86E0807721, VehicleIndex, bStaysFrozen); }
	static void SET_VEHICLE_INFLUENCES_WANTED_LEVEL(Vehicle VehicleIndex, bool bInfluenceWantedLevel) { return invoke <void>(0xC1842F40FD501DA2, VehicleIndex, bInfluenceWantedLevel); }
	static bool _IS_BOAT_GROUNDED(Vehicle vehicle) { return invoke <bool>(0x30D86B2B7622D0EB, vehicle); }
	static void SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(Vehicle vehicle, bool bStealable) { return invoke <void>(0x9C970AE59ABF6B2, vehicle, bStealable); }
	static void LOCK_DOORS_WHEN_NO_LONGER_NEEDED(Vehicle vehicle) { return invoke <void>(0x1EF36558FBDE2DAA, vehicle); }
	static Vehicle GET_LAST_DRIVEN_VEHICLE() { return invoke <Vehicle>(0xA94F3E0AB9695E19); }
	static void CLEAR_LAST_DRIVEN_VEHICLE() { return invoke <void>(0xEFC5DC62E67609B); }
	static void SET_PED_OWNS_VEHICLE(Ped ped, Vehicle vehicle) { return invoke <void>(0x838C216C2B05A009, ped, vehicle); }
	static Entity _GET_VEHICLE_OWNER(Vehicle vehicle) { return invoke <Entity>(0xB729679356A889AE, vehicle); }
	static void SET_VEHICLE_LOD_MULTIPLIER(Vehicle vehicle, float multiplier) { return invoke <void>(0x5F5E2B1B9EAECC0F, vehicle, multiplier); }
	static void _SET_VEHICLE_LOD_LEVEL(Vehicle vehicle, int lodLevel) { return invoke <void>(0x3FA7D7D1E0EA809E, vehicle, lodLevel); }
	static void SET_FORCE_VEHICLE_ENGINE_DAMAGE_BY_BULLET(Vehicle vehicle, bool forceEngineDamage) { return invoke <void>(0x7F8E2B131E1DCA6C, vehicle, forceEngineDamage); }
	static void COPY_VEHICLE_DAMAGES(Vehicle srcVehicle, Vehicle dstVehicle) { return invoke <void>(0xDBC28A8C683CD80B, srcVehicle, dstVehicle); }
	static void SET_VEHICLE_SHOOT_AT_TARGET(Ped pedIndex, Entity targetEntity, float vecTargetCoorsX, float vecTargetCoorsY, float vecTargetCoorsZ, Any p5) { return invoke <void>(0xB79BE78C665B3E6D, pedIndex, targetEntity, vecTargetCoorsX, vecTargetCoorsY, vecTargetCoorsZ, p5); }
	static void SET_FORCE_HD_VEHICLE(Vehicle vehicleIndex, bool forceHd) { return invoke <void>(0x373CB1283308BD7B, vehicleIndex, forceHd); }
	static void TRACK_VEHICLE_VISIBILITY(Vehicle vehicleIndex) { return invoke <void>(0x1F3969B140DEE157, vehicleIndex); }
	static bool IS_VEHICLE_VISIBLE(Vehicle vehicleIndex) { return invoke <bool>(0x424910CD5DE8C246, vehicleIndex); }
	static Any _0x13C190302369308B(Any p0) { return invoke <Any>(0x13C190302369308B, p0); }
	static void SET_ENABLE_VEHICLE_SLIPSTREAMING(bool EnableSlipstreaming) { return invoke <void>(0x73F1E4F6DF26FE30, EnableSlipstreaming); }
	static void SET_VEHICLE_INACTIVE_DURING_PLAYBACK(Vehicle vehicleIndex, bool bForceInactive) { return invoke <void>(0x4EA71B4C9DB3C3F1, vehicleIndex, bForceInactive); }
	static void SET_VEHICLE_ENGINE_CAN_DEGRADE(Vehicle vehicleIndex, bool bEnableDegrading) { return invoke <void>(0x48E4C137A71C2688, vehicleIndex, bEnableDegrading); }
	static void SET_VEHICLE_IS_STOLEN(Vehicle vehicleIndex, bool bIsStolen) { return invoke <void>(0x6C32FC81DFF25C9A, vehicleIndex, bIsStolen); }
	static void _0xCBF88256E44D5D39(Vehicle vehicle, bool p1) { return invoke <void>(0xCBF88256E44D5D39, vehicle, p1); }
	static void _0xC325A6BAA62CF8A2(Vehicle vehicle, bool p1) { return invoke <void>(0xC325A6BAA62CF8A2, vehicle, p1); }
	static void _0x0CD7914D17A970AB(Any p0, Any p1) { return invoke <void>(0xCD7914D17A970AB, p0, p1); }
	static void _0x23F66C36F8E5EAAB(Any p0, Any p1) { return invoke <void>(0x23F66C36F8E5EAAB, p0, p1); }
	static void _0x697DF68F3A761A50(Any p0) { return invoke <void>(0x697DF68F3A761A50, p0); }
	static void _0x27E3F2B57209FA54(Any p0, Any p1) { return invoke <void>(0x27E3F2B57209FA54, p0, p1); }
	static void DISABLE_VEHICLE_WEAPON(bool disable, Hash TypeOfWeapon, Vehicle vehicleIndex, Ped PedIndex) { return invoke <void>(0x94B1E71B144356A5, disable, TypeOfWeapon, vehicleIndex, PedIndex); }
	static void SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(Vehicle vehicle, bool canBeUsed) { return invoke <void>(0xE42952510F84AFDB, vehicle, canBeUsed); }
	static void SET_VEHICLE_KEEP_ENGINE_ON_WHEN_ABANDONED(Vehicle vehicle, bool keepEngineOn) { return invoke <void>(0x1549BA7FE83A2383, vehicle, keepEngineOn); }
	static void SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(Vehicle vehicle, bool bCanWheelsBreakoff) { return invoke <void>(0xC462C79379ABBCB1, vehicle, bCanWheelsBreakoff); }
	static void _0x15CC8C33D7FFCC4A(Vehicle vehicle, int p1) { return invoke <void>(0x15CC8C33D7FFCC4A, vehicle, p1); }
	static void SET_VEHICLE_AI_CAN_USE_EXCLUSIVE_SEATS(Vehicle vehicle, bool canUse) { return invoke <void>(0x893DAFBFA67110E, vehicle, canUse); }
	static void SET_VEHICLE_EXCLUSIVE_DRIVER(Vehicle vehicle, Ped PedIndex, int driverIndex) { return invoke <void>(0xC6B9BF123B9463B6, vehicle, PedIndex, driverIndex); }
	static bool _IS_PED_EXCLUSIVE_DRIVER_OF_VEHICLE(Ped ped, Vehicle vehicle, int* outIndex) { return invoke <bool>(0xB213D2A560B2E48B, ped, vehicle, outIndex); }
	static void _0xDC0556D0F484ECAA(Any p0) { return invoke <void>(0xDC0556D0F484ECAA, p0); }
	static void SET_DISABLE_SUPERDUMMY(Vehicle vehicle, bool disabled) { return invoke <void>(0x1716D787D9B94202, vehicle, disabled); }
	static float GET_VEHICLE_BODY_HEALTH(Vehicle VehicleIndex) { return invoke <float>(0x42113B857E33C16E, VehicleIndex); }
	static void SET_VEHICLE_BODY_HEALTH(Vehicle VehicleIndex, float health) { return invoke <void>(0x55CCAAE4F28C67A0, VehicleIndex, health); }
	static Any _0xE777DDF3E78397E8(Any p0) { return invoke <Any>(0xE777DDF3E78397E8, p0); }
	static void SET_VEHICLE_BROKEN_PARTS_DONT_AFFECT_AI_HANDLING(Vehicle vehicle, bool bIgnoreBrokenParts) { return invoke <void>(0xCEC4CA2CAB8FA98C, vehicle, bIgnoreBrokenParts); }
	static void _0x012701ED938B85DE(float p0, float p1) { return invoke <void>(0x12701ED938B85DE, p0, p1); }
	static void _0x8379E05871AD24E0() { return invoke <void>(0x8379E05871AD24E0); }
	static void _SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xF5FFB08976911B50, p0, p1, p2, p3); }
	static bool _ATTACH_DRAFT_VEHICLE_HARNESS_PED(Ped mount, Vehicle draft, int harnessId) { return invoke <bool>(0x316CDB5B6E8F4110, mount, draft, harnessId); }
	static bool _DETACH_DRAFT_VEHICLE_HARNESS_FROM_INDEX(Vehicle draft, int harnessId) { return invoke <bool>(0x4402960666000E62, draft, harnessId); }
	static bool _DETACH_DRAFT_VEHICLE_HARNESS_PED(Vehicle draft, Ped ped) { return invoke <bool>(0xB36D3EC70963BE60, draft, ped); }
	static void _0x0F7F603BDE08C4D3(Any p0) { return invoke <void>(0xF7F603BDE08C4D3, p0); }
	static int _GET_NUM_DRAFT_VEHICLE_HARNESS_PED(Hash modelHash) { return invoke <int>(0x5B1A26BB18E7D451, modelHash); }
	static Vector3 _GET_CHECKPOINT_TRAIN_SPAWN_LOCATION(int trackIndex, float x, float y, float z, float distance, bool direction) { return invoke <Vector3>(0x35D302397E524939, trackIndex, x, y, z, distance, direction); }
	static void _0xC399CC89FBA05DA0(Vehicle vehicle, bool p1) { return invoke <void>(0xC399CC89FBA05DA0, vehicle, p1); }
	static void _GET_ROWING_OARS(Vehicle vehicle, Entity* left, Entity* right) { return invoke <void>(0xA6E210FB4283B767, vehicle, left, right); }
	static Ped GET_DRIVER_OF_VEHICLE(Vehicle vehicle) { return invoke <Ped>(0x2963B5C1637E8A27, vehicle); }
	static void _SET_FORCE_COACH_ROBBERY_LOOT(Vehicle vehicle, Hash coachrobberyLoot) { return invoke <void>(0xF489F94BFEE12BB0, vehicle, coachrobberyLoot); }
	static Any _0x0BA4250D20007C2E(Any p0) { return invoke <Any>(0xBA4250D20007C2E, p0); }
	static void _0x2200AB13CBD10F4E(Vehicle vehicle, float x, float y, float z, bool p4, float p5) { return invoke <void>(0x2200AB13CBD10F4E, vehicle, x, y, z, p4, p5); }
	static void _0xB42C87521D1BDD2F(Vehicle vehicle, float x, float y, float z) { return invoke <void>(0xB42C87521D1BDD2F, vehicle, x, y, z); }
	static void _0xC351394B932A6A50(Any p0) { return invoke <void>(0xC351394B932A6A50, p0); }
	static void _0x172E9DD35858DCD7(Any p0) { return invoke <void>(0x172E9DD35858DCD7, p0); }
	static int _GET_BREAKABLE_VEHICLE_LOCKS_STATE(Vehicle vehicle) { return invoke <int>(0xE015CF1F2C0959D8, vehicle); }
	static Any _0x877EA24EB1614495(Any p0, Any p1, Any p2) { return invoke <Any>(0x877EA24EB1614495, p0, p1, p2); }
	static Object _GET_BREAKABLE_VEHICLE_LOCK_OBJECT(Vehicle vehicle, int index) { return invoke <Object>(0x58F2244C1286D09A, vehicle, index); }
	static int _GET_NUM_BREAKABLE_VEHICLE_LOCK_OBJECTS(Vehicle vehicle) { return invoke <int>(0x2FA86833E3617E2D, vehicle); }
	static void SET_BREAKABLE_VEHICLE_LOCKS_UNBREAKABLE(Vehicle vehicle, bool toggle) { return invoke <void>(0xBC4735F48CD983EF, vehicle, toggle); }
	static void _0x9D12796EF4BF9EA9(Any p0) { return invoke <void>(0x9D12796EF4BF9EA9, p0); }
	static void _0x850CE59DEC2028F3(Vehicle vehicle, Any p1) { return invoke <void>(0x850CE59DEC2028F3, vehicle, p1); }
	static void _0x0355FE37240E2C77(Any p0, Any p1) { return invoke <void>(0x355FE37240E2C77, p0, p1); }
	static void _0x3D86997A86FEEF0D(Any p0, Any p1) { return invoke <void>(0x3D86997A86FEEF0D, p0, p1); }
	static void _0xD826690B5CF3BEFF(Vehicle vehicle, Any p1) { return invoke <void>(0xD826690B5CF3BEFF, vehicle, p1); }
	static void _BREAK_OFF_DRAFT_WHEEL(Vehicle vehicle, int wheelIndex, float destroyingForce) { return invoke <void>(0xC372B6A88F6E4AD8, vehicle, wheelIndex, destroyingForce); }
	static bool GET_DRAFT_ANIMAL_COUNT(Vehicle vehicle, int* expected, int* actual) { return invoke <bool>(0xA19447D83294E29F, vehicle, expected, actual); }
	static void _0x165BE2001E5E4B75(Any p0) { return invoke <void>(0x165BE2001E5E4B75, p0); }
	static void _SET_DRAFT_VEHICLE_ANIMALS_CAN_DETACH(Vehicle draft, bool canDetach) { return invoke <void>(0x6090A031C69F384E, draft, canDetach); }
	static void _SET_DRAFT_VEHICLE_YOKE_CAN_BREAK(Vehicle draft, bool canBreak) { return invoke <void>(0x226C6A4E3346D288, draft, canBreak); }
	static void _ADD_TRAIN_TEMPORARY_STOP(Vehicle train, int trackIndex, float x, float y, float z) { return invoke <void>(0x41503629D1139ABC, train, trackIndex, x, y, z); }
	static void _0x0794199B25E499E1(Vehicle wagon, bool p1) { return invoke <void>(0x794199B25E499E1, wagon, p1); }
	static void _0x73118A3EE9C9B6DB(Vehicle wagon, int p1, bool p2) { return invoke <void>(0x73118A3EE9C9B6DB, wagon, p1, p2); }
	static bool _0xE1C0F8781BF130C2(Vehicle wagon, int p1) { return invoke <bool>(0xE1C0F8781BF130C2, wagon, p1); }
	static bool _IS_VEHICLE_WHEEL_DESTROYED(Vehicle vehicle, int wheel) { return invoke <bool>(0xCB2CA620C48BC875, vehicle, wheel); }
	static bool _0x18714953CCED17D3(Vehicle vehicle) { return invoke <bool>(0x18714953CCED17D3, vehicle); }
	static void _0x41F0B254DDF71473(Vehicle wagon) { return invoke <void>(0x41F0B254DDF71473, wagon); }
	static void _SET_VEHICLE_DETERIORATION(Vehicle vehicle, float amount, int p2, bool p3) { return invoke <void>(0x8E5DA070BAD3279E, vehicle, amount, p2, p3); }
	static bool _IS_VEHICLE_DOOR_BROKEN(Vehicle vehicle, int doorId) { return invoke <bool>(0xE979BB5602AD3402, vehicle, doorId); }
	static Entity _BREAK_OFF_VEHICLE_WHEEL(Vehicle vehicle, int wheelIndex) { return invoke <Entity>(0xD4F5EFB55769D272, vehicle, wheelIndex); }
	static bool _DELETE_VEHICLE_LANTERNS(Vehicle vehicle) { return invoke <bool>(0xE1A83D4A3B5D7938, vehicle); }
	static void _0x6DE072AC8A95FFC1(Vehicle vehicle, bool p1) { return invoke <void>(0x6DE072AC8A95FFC1, vehicle, p1); }
	static void _SET_DRAFT_VEHICLE_DESIRED_SPEED(Vehicle vehicle, float speed) { return invoke <void>(0xC3F0F7F92CA847C, vehicle, speed); }
	static float _GET_DRAFT_VEHICLE_DESIRED_SPEED(Vehicle vehicle) { return invoke <float>(0xC6D7DDC843176701, vehicle); }
	static void _0xC4A2C11FC0D41916(Vehicle vehicle, bool p1) { return invoke <void>(0xC4A2C11FC0D41916, vehicle, p1); }
	static void _0xFC4F15A7DDDC47B1(Vehicle vehicle, bool p1) { return invoke <void>(0xFC4F15A7DDDC47B1, vehicle, p1); }
	static void _0x4C60C333F9CCA2B6(Vehicle vehicle, bool p1) { return invoke <void>(0x4C60C333F9CCA2B6, vehicle, p1); }
	static void _0xCF342503CA4C8DF1(Vehicle vehicle, float p1) { return invoke <void>(0xCF342503CA4C8DF1, vehicle, p1); }
	static void _0x06A09A6E0C6D2A84(Vehicle train, bool p1) { return invoke <void>(0x6A09A6E0C6D2A84, train, p1); }
	static void _0xAE7E66A61E7C17A5(Vehicle train, bool p1) { return invoke <void>(0xAE7E66A61E7C17A5, train, p1); }
	static void _0xEF28A614B4B264B8(Vehicle train, bool p1) { return invoke <void>(0xEF28A614B4B264B8, train, p1); }
	static void _0x04F0579DBDD32F34(Vehicle vehicle) { return invoke <void>(0x4F0579DBDD32F34, vehicle); }
	static void _0x12F6C6ED3EFF42DE(Vehicle vehicle, float x, float y, float z) { return invoke <void>(0x12F6C6ED3EFF42DE, vehicle, x, y, z); }
	static void _0x87B974E54C71BA7B(Vehicle vehicle, bool p1) { return invoke <void>(0x87B974E54C71BA7B, vehicle, p1); }
	static bool _HAS_TRAIN_LOADED(Vehicle train) { return invoke <bool>(0xBD3C4A2ED509205E, train); }
	static Vehicle _CREATE_MISSION_TRAIN(Hash configHash, float x, float y, float z, bool direction, bool passengers, bool p6, bool conductor) { return invoke <Vehicle>(0xC239DBD9A57D2A71, configHash, x, y, z, direction, passengers, p6, conductor); }
	static void _0xD1EFA8D68BF5D63D(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xD1EFA8D68BF5D63D, p0, p1, p2, p3); }
	static Any _0x1121B07088ED3013(Any p0) { return invoke <Any>(0x1121B07088ED3013, p0); }
	static Any _0x42404D57D621601A(Any p0) { return invoke <Any>(0x42404D57D621601A, p0); }
	static Any _0x288CBB414C3C2FBB(Any p0) { return invoke <Any>(0x288CBB414C3C2FBB, p0); }
	static void _0x6FD7BDF10304363A(Any p0, Any p1) { return invoke <void>(0x6FD7BDF10304363A, p0, p1); }
	static void _0xCEB1F1EED484A5B4(Any p0, Any p1) { return invoke <void>(0xCEB1F1EED484A5B4, p0, p1); }
	static Any _0xF57DB8E83DCD8349(Any p0) { return invoke <Any>(0xF57DB8E83DCD8349, p0); }
	static void _SET_BALLOON_HOVER_STATE(Vehicle balloon, float p1) { return invoke <void>(0x7C9E45A4CED2E8DA, balloon, p1); }
	static void _SET_DRAFT_VEHICLE_ALLOW_DRAFT_ANIMAL_AUTO_CREATION(Vehicle vehicle, bool allow) { return invoke <void>(0x87344305778E5415, vehicle, allow); }
	static void _0x6835AFEA10E186F4(Any p0, Any p1) { return invoke <void>(0x6835AFEA10E186F4, p0, p1); }
	static void _SET_DRAFT_ANIMAL_RANDOM_SEED(Vehicle vehicle, int seed) { return invoke <void>(0x8C6D9A399126C194, vehicle, seed); }
	static Any _0x14DA8C4BC2CCD90A(Any p0) { return invoke <Any>(0x14DA8C4BC2CCD90A, p0); }
	static Any _0xCACAB2B123BBDBD6(Any p0, Any p1, Any p2) { return invoke <Any>(0xCACAB2B123BBDBD6, p0, p1, p2); }
	static void _0xFF2B1F59FB892F14(Any p0) { return invoke <void>(0xFF2B1F59FB892F14, p0); }
	static void _0x5AADC7BBBB1BCEEB(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <void>(0x5AADC7BBBB1BCEEB, p0, p1, p2, p3, p4); }
	static bool _GET_VEHICLE_IS_PROP_SET_APPLIED(Vehicle vehicle) { return invoke <bool>(0xD798DF5DB67B1659, vehicle); }
	static void _SET_BATCH_TARP_HEIGHT(Vehicle vehicle, float height, bool immediately) { return invoke <void>(0x31F343383F19C987, vehicle, height, immediately); }
	static void _0x07E2E21E799080A0(Any p0, Any p1) { return invoke <void>(0x7E2E21E799080A0, p0, p1); }
	static void _0xC2E62678D602853C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <void>(0xC2E62678D602853C, p0, p1, p2, p3, p4, p5, p6); }
	static void _0x873AAF600CC36DAC(Any p0) { return invoke <void>(0x873AAF600CC36DAC, p0); }
	static Any _0x51C7694E140FAE43(Any p0) { return invoke <Any>(0x51C7694E140FAE43, p0); }
	static void _0x8DECD262602548B9(Any p0, Any p1) { return invoke <void>(0x8DECD262602548B9, p0, p1); }
	static void _0xCBC7B6F9A56B79F6(Any p0, Any p1) { return invoke <void>(0xCBC7B6F9A56B79F6, p0, p1); }
	static bool _0x37D238BE69F7378A(int trackIndex) { return invoke <bool>(0x37D238BE69F7378A, trackIndex); }
	static void _0x703D4FB366DA4452(Any p0, Any p1) { return invoke <void>(0x703D4FB366DA4452, p0, p1); }
	static void _0x762FDC4C19E5A981(Entity trainCarriage, bool p1) { return invoke <void>(0x762FDC4C19E5A981, trainCarriage, p1); }
	static Any _0x2045429505158D1A(Any p0) { return invoke <Any>(0x2045429505158D1A, p0); }
	static void _0x13EB275BF81636D1(Any p0, Any p1) { return invoke <void>(0x13EB275BF81636D1, p0, p1); }
}

namespace VOICE
{
	static bool _0xCCF71FCFA0070B1A() { return invoke <bool>(0xCCF71FCFA0070B1A); }
	static void _0x79F478FF5F9F4F05(bool enabled) { return invoke <void>(0x79F478FF5F9F4F05, enabled); }
	static bool _0xAA35FD9ABAB490A3(Player player) { return invoke <bool>(0xAA35FD9ABAB490A3, player); }
	static bool _0x356135B9B10A2A82(void* gamerHandle) { return invoke <bool>(0x356135B9B10A2A82, gamerHandle); }
	static bool _0xEF6F2A35FAAF2ED7(Player player) { return invoke <bool>(0xEF6F2A35FAAF2ED7, player); }
	static bool _0x49623BCFC3A3D829(Player player, bool muted) { return invoke <bool>(0x49623BCFC3A3D829, player, muted); }
	static bool _0x919AF2D93E9AA89D(Player player) { return invoke <bool>(0x919AF2D93E9AA89D, player); }
	static bool _0x0DED260A1958A82E(Player player) { return invoke <bool>(0xDED260A1958A82E, player); }
	static bool _0x8E462DB1EAA9C47C(Player player) { return invoke <bool>(0x8E462DB1EAA9C47C, player); }
	static float _0x5CA7FB7D6DE49DCC(Player player) { return invoke <float>(0x5CA7FB7D6DE49DCC, player); }
	static void _0x58125B691F6827D5(float proximity) { return invoke <void>(0x58125B691F6827D5, proximity); }
	static float _0x2F82CAB262C8AE26(Player player) { return invoke <float>(0x2F82CAB262C8AE26, player); }
	static void _0x08797A8C03868CB8(float threshold) { return invoke <void>(0x8797A8C03868CB8, threshold); }
	static void _0xB779F4FA19269AEC(bool flag) { return invoke <void>(0xB779F4FA19269AEC, flag); }
	static void _0x1FBF7F5BA7E4BE3A(int p0) { return invoke <void>(0x1FBF7F5BA7E4BE3A, p0); }
	static void _0xDC9B361CB7776673(Player player) { return invoke <void>(0xDC9B361CB7776673, player); }
	static void _0xEC8703E4536A9952() { return invoke <void>(0xEC8703E4536A9952); }
	static Any _0xDB622ECD3DCBE078(Player player) { return invoke <Any>(0xDB622ECD3DCBE078, player); }
	static void _0xB6E79850B759A30E(int teamId, bool allow) { return invoke <void>(0xB6E79850B759A30E, teamId, allow); }
	static void _0x4791899615D70FA2(Player player, int p1, int p2) { return invoke <void>(0x4791899615D70FA2, player, p1, p2); }
	static void _0xF8938CF3984092A5(Player player) { return invoke <void>(0xF8938CF3984092A5, player); }
	static int _0x767931C727DF2ED7(Player player, int p1) { return invoke <int>(0x767931C727DF2ED7, player, p1); }
	static void _0x1C38C3577901AF1F() { return invoke <void>(0x1C38C3577901AF1F); }
	static void _0xB3E8841F6BDAF83E() { return invoke <void>(0xB3E8841F6BDAF83E); }
}

namespace VOLUME
{
	static Volume _CREATE_VOLUME_BY_HASH(Hash volumeType, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ) { return invoke <Volume>(0x502022FA1AF9DC86, volumeType, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ); }
	static Volume CREATE_VOLUME_BOX(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ) { return invoke <Volume>(0xDF85637F22706891, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ); }
	static Volume CREATE_VOLUME_CYLINDER(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ) { return invoke <Volume>(0x522D4774B82E3E6, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ); }
	static Volume CREATE_VOLUME_SPHERE(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ) { return invoke <Volume>(0xB3FB80A32BAE3065, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ); }
	static Volume CREATE_VOLUME_AGGREGATE() { return invoke <Volume>(0x59F6F5C1D129F106); }
	static Volume _CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Hash volumeType, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, const char* name) { return invoke <Volume>(0x1F85E4AC774A201E, volumeType, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, name); }
	static Volume _CREATE_ANTI_GRIEF_VOLUME(Hash volumeType, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ) { return invoke <Volume>(0xEB78C2B156635B1, volumeType, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ); }
	static void _SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(Volume volume, bool toggle) { return invoke <void>(0xBE551C2CC421185D, volume, toggle); }
	static void _SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(Volume volume, bool toggle) { return invoke <void>(0x5B23DFF8E0948BB2, volume, toggle); }
	static Volume _CREATE_WALK_AND_TALK_VOLUME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoke <Volume>(0xFD0E389CD44434B6, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
	static Volume _CREATE_SPEED_VOLUME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { return invoke <Volume>(0xBBE768E3AE76E07C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
	static Volume _CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, const char* name) { return invoke <Volume>(0xF68485C7495D848E, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, name); }
	static Volume _CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, const char* name) { return invoke <Volume>(0xDF1E350EDDF06E59, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, name); }
	static Volume _CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, const char* name) { return invoke <Volume>(0x10157BC3247FF3BA, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, name); }
	static Volume _CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME(const char* name) { return invoke <Volume>(0x5D580DE6398BB162, name); }
	static void _ADD_BOUNDS_TO_AGGREGATE_VOLUME(Volume volume, Volume aggregate) { return invoke <void>(0x6E0D3C3F828DA773, volume, aggregate); }
	static void _REMOVE_BOUNDS_FROM_AGGREGATE_VOLUME(Volume volume, Volume aggregate) { return invoke <void>(0xF92FA8890DECECF6, volume, aggregate); }
	static void _ADD_VOLUME_TO_VOLUME_AGGREGATE(Volume aggregate, Hash typeHash, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ) { return invoke <void>(0x12FCAA23F2320422, aggregate, typeHash, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ); }
	static void _ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Volume aggregate, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9) { return invoke <void>(0x39816F6F94F385AD, aggregate, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Volume aggregate, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9) { return invoke <void>(0xBCE668AAF83608BE, aggregate, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void _ADD_SPHERE_VOLUME_TO_VOLUME_AGGREGATE(Volume aggregate, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9) { return invoke <void>(0x5B7D7BF36D2DE18B, aggregate, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static void DELETE_VOLUME(Volume volume) { return invoke <void>(0x43F867EF5C463A53, volume); }
	static bool DOES_VOLUME_EXIST(Volume volume) { return invoke <bool>(0x92A78D0BEDB332A3, volume); }
	static bool IS_POINT_IN_VOLUME(Volume volume, float x, float y, float z) { return invoke <bool>(0xF256A75210C5C0EB, volume, x, y, z); }
	static Vector3 GET_VOLUME_COORDS(Volume volume) { return invoke <Vector3>(0xF70F00013A62F866, volume); }
	static bool SET_VOLUME_COORDS(Volume volume, float posX, float posY, float posZ) { return invoke <bool>(0x541B8576615C33DE, volume, posX, posY, posZ); }
	static Vector3 GET_VOLUME_ROTATION(Volume volume) { return invoke <Vector3>(0x18675BC914891122, volume); }
	static bool SET_VOLUME_ROTATION(Volume volume, float rotX, float rotY, float rotZ) { return invoke <bool>(0xA07CF1B21B56F041, volume, rotX, rotY, rotZ); }
	static Vector3 GET_VOLUME_SCALE(Volume volume) { return invoke <Vector3>(0x3E2A25B2416DD67E, volume); }
	static bool SET_VOLUME_SCALE(Volume volume, float scaleX, float scaleY, float scaleZ) { return invoke <bool>(0xA46E98BDC407E23D, volume, scaleX, scaleY, scaleZ); }
	static void _GET_VOLUME_BOUNDS(Volume volume, Vector3* min, Vector3* max) { return invoke <void>(0x5737199AF2DC609F, volume, min, max); }
	static void _0x748C5F51A18CB8F0(bool p0) { return invoke <void>(0x748C5F51A18CB8F0, p0); }
	static Any _0x2B32B11520626229(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <Any>(0x2B32B11520626229, p0, p1, p2, p3, p4); }
	static Any _0x40F769D31A00D5A0(Any p0, Any p1) { return invoke <Any>(0x40F769D31A00D5A0, p0, p1); }
	static Vector3 _0xD882C5B3991575B7(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke <Vector3>(0xD882C5B3991575B7, p0, p1, p2, p3, p4); }
	static void _0xB469CFD9E065EB99(Any p0, Any p1) { return invoke <void>(0xB469CFD9E065EB99, p0, p1); }
	static Any _0x7FD78DFD0C5D7B9B(Any p0) { return invoke <Any>(0x7FD78DFD0C5D7B9B, p0); }
	static Any _0xEE1D6FF54CAF7714(Any p0, Any p1) { return invoke <Any>(0xEE1D6FF54CAF7714, p0, p1); }
	static void _0xD52DF30355EA7C8E(Any p0, Any p1, Any p2) { return invoke <void>(0xD52DF30355EA7C8E, p0, p1, p2); }
	static void SET_VOLUME_OWNER_PERSISTENT_CHARACTER(Volume volume, PersChar persChar, bool p2) { return invoke <void>(0xE2BE6FFA4A13CBB0, volume, persChar, p2); }
	static void _0x6D5F9E69BA1BE783(Any p0) { return invoke <void>(0x6D5F9E69BA1BE783, p0); }
	static void _0x998202B206872672(Any p0) { return invoke <void>(0x998202B206872672, p0); }
	static void _0x4A8FEFC43FD8AC9B(Any p0, Any p1, Any p2) { return invoke <void>(0x4A8FEFC43FD8AC9B, p0, p1, p2); }
	static void _0xF3A2FBA5985C8CD5(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0xF3A2FBA5985C8CD5, p0, p1, p2, p3); }
	static void _0x53D05D60E5F5B40C(Any p0, Any p1, Any p2, Any p3) { return invoke <void>(0x53D05D60E5F5B40C, p0, p1, p2, p3); }
	static Any _0xCA5C90D40665D5CE(Any p0, Any p1) { return invoke <Any>(0xCA5C90D40665D5CE, p0, p1); }
	static void _0x3EFABB21E14A6BD1(Any p0, Any p1, Any p2) { return invoke <void>(0x3EFABB21E14A6BD1, p0, p1, p2); }
	static bool _IS_AGGREGATE_VOLUME(Volume volume) { return invoke <bool>(0xFEFF01B5725BCD22, volume); }
	static Volume _CREATE_VOLUME_LOCK(float x, float y, float z, float radius, int flag, Any p5) { return invoke <Volume>(0xBBF7CEAE8C666A, x, y, z, radius, flag, p5); }
	static Volume _CREATE_VOLUME_LOCK_ATTACHED_TO_ENTITY(Entity entity, float radius, int flag, Any p3) { return invoke <Volume>(0xF383E96C4904DF0C, entity, radius, flag, p3); }
	static bool _IS_VOLUME_LOCK_REQUEST_VALID_2(int volLockRequestId) { return invoke <bool>(0xF6A8A652A6B186CD, volLockRequestId); }
	static Vector3 _0xC4019CF9AE8E931A(int volLockRequestId) { return invoke <Vector3>(0xC4019CF9AE8E931A, volLockRequestId); }
	static Any _0xF6CE6F9C3897804E(Any p0) { return invoke <Any>(0xF6CE6F9C3897804E, p0); }
	static Any _0xF6F5447D418DAA82(Any p0) { return invoke <Any>(0xF6F5447D418DAA82, p0); }
	static void _0xD4FA73FE628FEC63(Any p0, Any p1) { return invoke <void>(0xD4FA73FE628FEC63, p0, p1); }
	static void _0xB440F4E35393FC39(Volume volume, Any p1) { return invoke <void>(0xB440F4E35393FC39, volume, p1); }
	static void _0xD460135C98940274(Volume volume, Any p1) { return invoke <void>(0xD460135C98940274, volume, p1); }
	static void _0xEBA87B9273835CF3(Any p0, Any p1) { return invoke <void>(0xEBA87B9273835CF3, p0, p1); }
	static Any _0xAA9EE2AAFC717623(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <Any>(0xAA9EE2AAFC717623, p0, p1, p2, p3, p4, p5); }
	static Any _0x870E9981ED27C815(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke <Any>(0x870E9981ED27C815, p0, p1, p2, p3, p4, p5); }
	static bool DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(float x, float y, float z, float radius, bool p4, int p5, int p6) { return invoke <bool>(0x397769175A7DBB30, x, y, z, radius, p4, p5, p6); }
	static bool _IS_POINT_NEAR_VOLUME_LOCK_CENTER(float x, float y, float z, float radius, int p4, int p5, int flags) { return invoke <bool>(0x769BB7626B8CDB06, x, y, z, radius, p4, p5, flags); }
	static Any _0x51E52C9687FCDEEC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke <Any>(0x51E52C9687FCDEEC, p0, p1, p2, p3, p4, p5, p6); }
	static int _FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS(void* args) { return invoke <int>(0x77A6E4AD0C496F81, args); }
	static void _MODIFY_VOLUME_LOCK_LOCATION(int volLock, float x, float y, float z) { return invoke <void>(0xEC43C2FFB70E3F30, volLock, x, y, z); }
	static void _0x695DAC2DB928F308(Any p0, Any p1) { return invoke <void>(0x695DAC2DB928F308, p0, p1); }
	static void _RELEASE_LOCK_VOLUME(int volLockRequestId) { return invoke <void>(0xFDFECC6EE4491E11, volLockRequestId); }
	static void _0xAC355980681A7F89(Any p0) { return invoke <void>(0xAC355980681A7F89, p0); }
	static bool _ADD_ENTRY_VOLUME_LOCK(void* args) { return invoke <bool>(0x58D3803FA639A3BB, args); }
	static void _0xC61E2FD926DBB406() { return invoke <void>(0xC61E2FD926DBB406); }
	static int REQUEST_VOLUME_LOCK(float x, float y, float z, float radius, int p4, int p5) { return invoke <int>(0xF14BCEF290F869E1, x, y, z, radius, p4, p5); }
	static int REQUEST_VOLUME_LOCK_WITH_ARGS(void* args) { return invoke <int>(0x183C0B6CFEFFCAE4, args); }
	static bool IS_VOLUME_LOCK_REQUEST_VALID(int volLockRequestId) { return invoke <bool>(0xA4A4359320345B34, volLockRequestId); }
	static int GET_VOLUME_LOCK_REQUEST_STATUS(int volLockRequestId) { return invoke <int>(0xB33A604345F58202, volLockRequestId); }
	static Any _0x351D71B8B72B858B(Any p0) { return invoke <Any>(0x351D71B8B72B858B, p0); }
	static void _0xFA15C9A320E707B0() { return invoke <void>(0xFA15C9A320E707B0); }
	static void _0x52572B331E693AED(Any p0, Any p1, Any p2) { return invoke <void>(0x52572B331E693AED, p0, p1, p2); }
	static void _0x128FC3A893BF853A(Any p0) { return invoke <void>(0x128FC3A893BF853A, p0); }
	static void _SET_VOLUME_RELATIONSHIP(Volume volume, Hash relationshipGroup) { return invoke <void>(0xFD010A2154B40676, volume, relationshipGroup); }
	static Hash _GET_VOLUME_RELATIONSHIP(Volume volume) { return invoke <Hash>(0x666C2F53ABEFC952, volume); }
}

namespace WATER
{
	static void DISABLE_WATER_LOOKUP() { return invoke <void>(0x754616EC6965D1FB); }
	static void ENABLE_WATER_LOOKUP() { return invoke <void>(0x754616EC6965D1BF); }
	static bool GET_WATER_HEIGHT(float PosX, float PosY, float PosZ, float* Height) { return invoke <bool>(0xFCA8B23F28813F69, PosX, PosY, PosZ, Height); }
	static bool GET_WATER_HEIGHT_NO_WAVES(float PosX, float PosY, float PosZ, float* Height) { return invoke <bool>(0xDCF3690AA262C03F, PosX, PosY, PosZ, Height); }
	static int TEST_PROBE_AGAINST_ALL_WATER(float StartPosX, float StartPosY, float StartPosZ, float EndPosX, float EndPosY, float EndPosZ, int BlockingFlags, Vector3* IntersectionPos) { return invoke <int>(0x8974647ED222EA5F, StartPosX, StartPosY, StartPosZ, EndPosX, EndPosY, EndPosZ, BlockingFlags, IntersectionPos); }
	static int TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(float StartPosX, float StartPosY, float StartPosZ, int BlockingFlags, float* Height) { return invoke <int>(0x2B3451FA1E3142E2, StartPosX, StartPosY, StartPosZ, BlockingFlags, Height); }
	static void REMOVE_EXTRA_CALMING_QUAD(int Idx) { return invoke <void>(0x4BEF8DD75AF6C71C, Idx); }
	static void _0x09A1C7DFDCE54FBC(int p0) { return invoke <void>(0x9A1C7DFDCE54FBC, p0); }
	static void _0xF0FBF193F1F5C0EA(Ped ped) { return invoke <void>(0xF0FBF193F1F5C0EA, ped); }
	static void _0xA33F5069B0CB89B8() { return invoke <void>(0xA33F5069B0CB89B8); }
	static void _0xB34A6009A0DB80B8(Entity entity) { return invoke <void>(0xB34A6009A0DB80B8, entity); }
	static void _SET_OCEAN_GUARMA_WATER_QUADRANT(float wavesHeight, float p1, int p2, float p3, float p4, float p5, float p6, float wavesStrength, int p8) { return invoke <void>(0xC63540AEF8384732, wavesHeight, p1, p2, p3, p4, p5, p6, wavesStrength, p8); }
	static void _RESET_GUARMA_WATER_STATE() { return invoke <void>(0xC63540AEF8384769); }
	static void _SET_WORLD_WATER_TYPE(int waterType) { return invoke <void>(0xE8770EE02AEE45C2, waterType); }
	static int _GET_WORLD_WATER_TYPE() { return invoke <int>(0x189739A7631C1867); }
	static void _0x0DCEC6A92E497E17(Entity entity, int p1) { return invoke <void>(0xDCEC6A92E497E17, entity, p1); }
	static void _0xE8126623008372AA() { return invoke <void>(0xE8126623008372AA); }
}

namespace WEAPON
{
	static Hash _GET_WEAPON_UNLOCK(Hash weaponHash) { return invoke <Hash>(0x865F36299079FB75, weaponHash); }
	static void _ADD_AMMO_TO_PED(Ped ped, Hash weaponHash, int amount, Hash addReason) { return invoke <void>(0xB190BCA3F4042F95, ped, weaponHash, amount, addReason); }
	static void _ADD_AMMO_TO_PED_BY_TYPE(Ped ped, Hash ammoType, int amount, Hash addReason) { return invoke <void>(0x106A811C6D3035F3, ped, ammoType, amount, addReason); }
	static void _REMOVE_AMMO_FROM_PED(Ped ped, Hash weaponHash, int amount, Hash removeReason) { return invoke <void>(0xF4823C813CB8277D, ped, weaponHash, amount, removeReason); }
	static void _REMOVE_AMMO_FROM_PED_BY_TYPE(Ped ped, Hash ammoHash, int amount, Hash removeReason) { return invoke <void>(0xB6CFEC32E3742779, ped, ammoHash, amount, removeReason); }
	static void _REMOVE_ALL_PED_AMMO(Ped ped) { return invoke <void>(0x1B83C0DEEBCBB214, ped); }
	static void SET_PED_AMMO(Ped PedIndex, Hash TypeOfWeapon, int AmountOfAmmo) { return invoke <void>(0x14E56BC5B5DB6A19, PedIndex, TypeOfWeapon, AmountOfAmmo); }
	static void _0x8A779706DA5CA3DD(Ped ped, bool p1, int p2) { return invoke <void>(0x8A779706DA5CA3DD, ped, p1, p2); }
	static void _0x9409C62504A8F9E9(Vehicle vehicle, bool p1) { return invoke <void>(0x9409C62504A8F9E9, vehicle, p1); }
	static void _SET_VEHICLE_WEAPON_HEADING_LIMITS(Vehicle vehicle, int p1, float minHeading, float maxHeading) { return invoke <void>(0x56CB3B4305A4F7CE, vehicle, p1, minHeading, maxHeading); }
	static Any _SET_VEHICLE_WEAPON_HEADING_LIMITS_2(Vehicle vehicle, int p1, float minHeading, float maxHeading) { return invoke <Any>(0xBF5987E1CDE63501, vehicle, p1, minHeading, maxHeading); }
	static void SET_VEHICLE_WEAPON_HEADING(Vehicle vehicle, int seatIndex, float heading, bool p3) { return invoke <void>(0x194D877FC5597B7D, vehicle, seatIndex, heading, p3); }
	static void SET_PED_INFINITE_AMMO(Ped PedIndex, bool Infinite, Hash TypeOfWeapon) { return invoke <void>(0x3EDCB0505123623B, PedIndex, Infinite, TypeOfWeapon); }
	static void _SET_PED_INFINITE_AMMO_CLIP(Ped ped, bool toggle) { return invoke <void>(0xFBAA1E06B6BCA741, ped, toggle); }
	static int GET_AMMO_IN_PED_WEAPON(Ped PedIndex, Hash TypeOfWeapon) { return invoke <int>(0x15A522136D7F951, PedIndex, TypeOfWeapon); }
	static int GET_MAX_AMMO_IN_CLIP(Ped PedIndex, Hash WeaponType, bool DoDeadCheck) { return invoke <int>(0xA38DCFFCEA8962FA, PedIndex, WeaponType, DoDeadCheck); }
	static bool GET_AMMO_IN_CLIP(Ped PedIndex, int* ReturnAmmoInClip, Hash WeaponType) { return invoke <bool>(0x2E1202248937775C, PedIndex, ReturnAmmoInClip, WeaponType); }
	static bool _GET_AMMO_IN_CLIP_BY_INVENTORY_UID(Ped ped, int* ammo, void* inventoryUid) { return invoke <bool>(0x678F00858980F516, ped, ammo, inventoryUid); }
	static bool SET_AMMO_IN_CLIP(Ped PedIndex, Hash WeaponType, int AmmoInClip) { return invoke <bool>(0xDCD2A934D65CB497, PedIndex, WeaponType, AmmoInClip); }
	static Any _REFILL_AMMO_IN_CLIP(Ped ped, void* clipInventoryUid, int p2) { return invoke <Any>(0xDF4A3404D022ADDE, ped, clipInventoryUid, p2); }
	static bool GET_MAX_AMMO(Ped PedIndex, int* ReturnMaxAmmo, Hash WeaponType) { return invoke <bool>(0xDC16122C7A20C933, PedIndex, ReturnMaxAmmo, WeaponType); }
	static void SET_PED_AMMO_BY_TYPE(Ped PedIndex, Hash AmmoType, int AmmoAmount) { return invoke <void>(0x5FD1E1F011E76D7E, PedIndex, AmmoType, AmmoAmount); }
	static int GET_PED_AMMO_BY_TYPE(Ped PedIndex, Hash AmmoType) { return invoke <int>(0x39D22031557946C1, PedIndex, AmmoType); }
	static void SET_PED_AMMO_TO_DROP(Ped PedIndex, int MinAmount, int MaxAmount) { return invoke <void>(0xA4EFEF9440A5B0EF, PedIndex, MinAmount, MaxAmount); }
	static Hash _GET_AMMO_TYPE_FOR_WEAPON(Hash weaponHash) { return invoke <Hash>(0x5C2EA6C44F515F34, weaponHash); }
	static Hash GET_PED_AMMO_TYPE_FROM_WEAPON(Ped PedIndex, Hash WeaponType) { return invoke <Hash>(0x7FEAD38B326B9F74, PedIndex, WeaponType); }
	static Hash _GET_WEAPON_TYPE_FROM_AMMO_TYPE(Hash ammoType) { return invoke <Hash>(0x7AA043F6C41D151E, ammoType); }
	static Hash _GET_WEAPON_COMPONENT_TYPE_MODEL(Hash componentHash) { return invoke <Hash>(0x59DE03442B6C9598, componentHash); }
	static Hash _GET_WEAPONTYPE_MODEL(Hash weaponHash) { return invoke <Hash>(0xF70825EB340E7D15, weaponHash); }
	static Hash _GET_WEAPONTYPE_SLOT(Hash weaponHash) { return invoke <Hash>(0x46F032B8DDF46CDE, weaponHash); }
	static Hash GET_WEAPONTYPE_GROUP(Hash weapon) { return invoke <Hash>(0xEDCA14CA5199FF25, weapon); }
	static Hash _0xF8204EF17410BF43(Hash weaponGroupHash, float p1, float p2, Any p3) { return invoke <Hash>(0xF8204EF17410BF43, weaponGroupHash, p1, p2, p3); }
	static bool _IS_WEAPON_KIT(Hash weaponHash) { return invoke <bool>(0x6ABAD7B0A854F8FB, weaponHash); }
	static bool _IS_WEAPON_KIT_2(Hash weaponHash) { return invoke <bool>(0x49E40483948AF062, weaponHash); }
	static bool IS_WEAPON_BOW(Hash weaponHash) { return invoke <bool>(0xC4DEC3CA8C365A5D, weaponHash); }
	static bool _IS_WEAPON_LANTERN(Hash weaponHash) { return invoke <bool>(0x79407D33328286C6, weaponHash); }
	static bool _IS_WEAPON_TORCH(Hash weaponHash) { return invoke <bool>(0x506F1DE1BFC75304, weaponHash); }
	static bool GIVE_WEAPON_TO_PED_WITH_OPTIONS(Ped ped, void* data, void* outData) { return invoke <bool>(0xBE7E42B07FD317AC, ped, data, outData); }
	static Hash GIVE_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, bool bForceInHand, bool bForceInHolster, int attachPoint, bool bAllowMultipleCopies, float p7, float p8, Hash addReason, bool bIgnoreUnlocks, float permanentDegradation, bool p12) { return invoke <Hash>(0x5E3BDDBCB83F3D84, ped, weaponHash, ammoCount, bForceInHand, bForceInHolster, attachPoint, bAllowMultipleCopies, p7, p8, addReason, bIgnoreUnlocks, permanentDegradation, p12); }
	static void _SET_FORCE_CURRENT_WEAPON_INTO_COCKED_STATE(Ped ped, int attachPoint) { return invoke <void>(0x5230D3F6EE56CFE6, ped, attachPoint); }
	static Any _0x9F0E1892C7F228A8(bool p0) { return invoke <Any>(0x9F0E1892C7F228A8, p0); }
	static void _HOLSTER_PED_WEAPONS(Ped ped, bool p1, bool p2, bool p3, bool immediately) { return invoke <void>(0x94A3C1B804D291EC, ped, p1, p2, p3, immediately); }
	static void _HIDE_PED_WEAPONS(Ped ped, int p0, bool immediately) { return invoke <void>(0xFCCC886EDE3C63EC, ped, p0, immediately); }
	static void _0x4820A6939D7CEF28(Any p0, Any p1) { return invoke <void>(0x4820A6939D7CEF28, p0, p1); }
	static void SET_CURRENT_PED_WEAPON(Ped PedIndex, Hash TypeOfWeapon, bool bForceInHand, int attachPoint, bool p4, bool p5) { return invoke <void>(0xADF692B254977C0C, PedIndex, TypeOfWeapon, bForceInHand, attachPoint, p4, p5); }
	static bool GET_CURRENT_PED_WEAPON(Ped PedIndex, Hash* ReturnWeaponType, bool DoDeadCheck, int attachPoint, bool p4) { return invoke <bool>(0x3A87E44BB9A01D54, PedIndex, ReturnWeaponType, DoDeadCheck, attachPoint, p4); }
	static Entity GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Ped PedIndex, int attachPoint) { return invoke <Entity>(0x3B390A939AF0B5FC, PedIndex, attachPoint); }
	static bool _ENABLE_WEAPON_RESTORE(Ped ped) { return invoke <bool>(0xC395355843BE134B, ped); }
	static Hash GET_PED_BACKUP_WEAPON(Ped ped, bool p1) { return invoke <Hash>(0xC71FE230A513C30F, ped, p1); }
	static Any _0x486C96A0DCD2BC92(Any p0, Any p1) { return invoke <Any>(0x486C96A0DCD2BC92, p0, p1); }
	static Hash _GET_PED_WORST_WEAPON(Ped ped, bool p1, bool p2, bool p3) { return invoke <Hash>(0xDA37A053C1522F5D, ped, p1, p2, p3); }
	static Hash GET_BEST_PED_WEAPON(Ped PedIndex, bool p1, bool p2) { return invoke <Hash>(0x8483E98E8B888AE2, PedIndex, p1, p2); }
	static Any _GET_BEST_PED_WEAPON_IN_INVENTORY(Ped ped, Any p1, void* guidPrimary) { return invoke <Any>(0x7B98500614C8E8B8, ped, p1, guidPrimary); }
	static void GET_BEST_PED_SHORTARM_GUID(Ped ped, void* outGUID, bool p2, bool p3) { return invoke <void>(0xF52BD94B47CCF736, ped, outGUID, p2, p3); }
	static bool GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Ped ped, int attachPoint, void* weaponGuid) { return invoke <bool>(0x6929E22158E52265, ped, attachPoint, weaponGuid); }
	static Hash _GET_BEST_PED_WEAPON_IN_GROUP(Ped ped, Hash weaponGroup, bool p2, bool p3) { return invoke <Hash>(0x9F67929D98E7C6E8, ped, weaponGroup, p2, p3); }
	static Hash _GET_DEFAULT_UNARMED_WEAPON_HASH(Ped ped) { return invoke <Hash>(0x8FF1099ED2E6E21, ped); }
	static void _SET_AMMO_IN_TURRET(Vehicle vehicle, Hash turretHash, int ammo) { return invoke <void>(0xBDDA0C290C228159, vehicle, turretHash, ammo); }
	static bool SET_CURRENT_PED_VEHICLE_WEAPON(Ped PedIndex, Hash TypeOfWeapon) { return invoke <bool>(0x75C55983C2C39DAA, PedIndex, TypeOfWeapon); }
	static bool GET_CURRENT_PED_VEHICLE_WEAPON(Ped PedIndex, Hash* ReturnWeaponType) { return invoke <bool>(0x1017582BCD3832DC, PedIndex, ReturnWeaponType); }
	static bool IS_PED_ARMED(Ped ped, int flags) { return invoke <bool>(0xCB690F680A3EA971, ped, flags); }
	static Any _0xA2091482ED42EF85(Any p0, Any p1) { return invoke <Any>(0xA2091482ED42EF85, p0, p1); }
	static bool _IS_WEAPON_HOLSTER_STATE_CHANGING(Ped ped) { return invoke <bool>(0x2387D6E9C6B478AA, ped); }
	static bool IS_WEAPON_VALID(Hash TypeOfWeapon) { return invoke <bool>(0x937C71165CF334B3, TypeOfWeapon); }
	static bool _IS_AMMO_VALID(Hash ammoHash) { return invoke <bool>(0x1F7977C9101F807F, ammoHash); }
	static Any _0x23BF601A42F329A0(Any p0) { return invoke <Any>(0x23BF601A42F329A0, p0); }
	static bool IS_PED_CARRYING_WEAPON(Ped ped, Hash weaponHash) { return invoke <bool>(0xF29A186ED428B552, ped, weaponHash); }
	static bool HAS_PED_GOT_WEAPON(Ped PedIndex, Hash TypeOfWeapon, int GeneralWeaponType, bool p3) { return invoke <bool>(0x8DECB02F88F428BC, PedIndex, TypeOfWeapon, GeneralWeaponType, p3); }
	static bool _0x07E1C35F0078C3F9(Ped ped, Hash weapon) { return invoke <bool>(0x7E1C35F0078C3F9, ped, weapon); }
	static bool IS_PED_WEAPON_READY_TO_SHOOT(Ped PedIndex) { return invoke <bool>(0xB80CA294F2F26749, PedIndex); }
	static Hash _GET_PED_WEAPON_IN_SLOT(Ped ped, Hash slotHash) { return invoke <Hash>(0xDBC4B552B2AE9A83, ped, slotHash); }
	static void GIVE_DELAYED_WEAPON_TO_PED(Ped PedIndex, Hash TypeOfWeapon, int AmountOfAmmo, bool bSetAsCurrentWeapon, Hash addReason) { return invoke <void>(0xB282DC6EBD803C75, PedIndex, TypeOfWeapon, AmountOfAmmo, bSetAsCurrentWeapon, addReason); }
	static void REMOVE_ALL_PED_WEAPONS(Ped PedIndex, bool p1, bool p2) { return invoke <void>(0xF25DF915FA38C5F3, PedIndex, p1, p2); }
	static void REMOVE_WEAPON_FROM_PED(Ped PedIndex, Hash TypeOfWeapon, bool p2, Hash removeReason) { return invoke <void>(0x4899CB088EDF59B8, PedIndex, TypeOfWeapon, p2, removeReason); }
	static void _REMOVE_WEAPON_FROM_PED_BY_GUID(Ped ped, void* weaponGuid, Hash removeReason) { return invoke <void>(0x51C3B71591811485, ped, weaponGuid, removeReason); }
	static void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Ped PedIndex, bool HideWeaponFlag) { return invoke <void>(0x6F6981D2253C208F, PedIndex, HideWeaponFlag); }
	static void SET_PED_CURRENT_WEAPON_VISIBLE(Ped PedIndex, bool VisibleFlag, bool DestroyObject, bool DeadCheck, bool StoreDestroyedWeaponClipValue) { return invoke <void>(0x725A4CCFDED9A70, PedIndex, VisibleFlag, DestroyObject, DeadCheck, StoreDestroyedWeaponClipValue); }
	static void _SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Ped ped, int attachPoint, bool visible) { return invoke <void>(0x67E21ACC5C0C970C, ped, attachPoint, visible); }
	static void _SET_PED_ALL_WEAPONS_VISIBILITY(Ped ped, bool visible) { return invoke <void>(0x4F806A6CFED89468, ped, visible); }
	static void SET_PED_DROPS_WEAPONS_WHEN_DEAD(Ped PedIndex, bool DropsWeaponsFlag) { return invoke <void>(0x476AE72C1D19D1A8, PedIndex, DropsWeaponsFlag); }
	static void _0x431240A58484D5D0(Ped ped, bool toggle) { return invoke <void>(0x431240A58484D5D0, ped, toggle); }
	static void _0x45E57FDD531C9477(Ped ped, bool toggle) { return invoke <void>(0x45E57FDD531C9477, ped, toggle); }
	static void _0xF08D8FEB455F2C8C(Ped ped, bool toggle) { return invoke <void>(0xF08D8FEB455F2C8C, ped, toggle); }
	static void _0x16D9841A85FA627E(Ped ped, bool toggle) { return invoke <void>(0x16D9841A85FA627E, ped, toggle); }
	static bool GET_PED_LAST_WEAPON_IMPACT_COORD(Ped PedIndex, Vector3* ImpactCoord) { return invoke <bool>(0x6C4D0409BA1A2BC2, PedIndex, ImpactCoord); }
	static void _CLEAR_PED_LAST_WEAPON_DAMAGE(Ped ped) { return invoke <void>(0x87D8F4BC65F68E4, ped); }
	static bool _HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Entity entity, Hash weaponName, int weaponType) { return invoke <bool>(0xDCF06D0CDFF68424, entity, weaponName, weaponType); }
	static void SET_PED_DROPS_INVENTORY_WEAPON(Ped PedIndex, Hash WeaponType, float offsetX, float offsetY, float offsetZ, int ammoAmount) { return invoke <void>(0x208A1888007FC0E6, PedIndex, WeaponType, offsetX, offsetY, offsetZ, ammoAmount); }
	static void _0xB0FB9B196A3D13F0(Any p0, Any p1, Any p2) { return invoke <void>(0xB0FB9B196A3D13F0, p0, p1, p2); }
	static void _0x2EBF70E1D8C06683(Ped ped, Hash p1) { return invoke <void>(0x2EBF70E1D8C06683, ped, p1); }
	static void _0x63B83A526329AFBC(Any p0) { return invoke <void>(0x63B83A526329AFBC, p0); }
	static Any _MAKE_PED_RELOAD(Ped ped) { return invoke <Any>(0x79E1E511FF7EFB13, ped); }
	static Any _REFILL_AMMO_IN_CURRENT_PED_WEAPON(Ped ped) { return invoke <Any>(0xA2AB7B7ABC055F4, ped); }
	static Entity MAKE_PED_DROP_WEAPON(Ped ped, bool p1, int attachPoint, bool p3, bool p4) { return invoke <Entity>(0xCEF4C65DE502D367, ped, p1, attachPoint, p3, p4); }
	static Hash _GET_PED_CURRENT_HELD_WEAPON(Ped ped) { return invoke <Hash>(0x8425C5F057012DAB, ped); }
	static void SET_ALLOW_ANY_WEAPON_DROP(Ped ped, bool toggle) { return invoke <void>(0x78030C7867D8B9B6, ped, toggle); }
	static void _0xA3716A77DCF17424(Any p0, Any p1, Any p2) { return invoke <void>(0xA3716A77DCF17424, p0, p1, p2); }
	static void _0x457B16951AD77C1B(Any p0) { return invoke <void>(0x457B16951AD77C1B, p0); }
	static Any _0x3799EFCC3C8CD5E1(Any p0) { return invoke <Any>(0x3799EFCC3C8CD5E1, p0); }
	static float _GET_MAX_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(Ped ped) { return invoke <float>(0x79B1A6E780266DB0, ped); }
	static void _REMOVE_WEAPON_COMPONENT_FROM_PED(Ped ped, Hash componentHash, Hash weaponHash) { return invoke <void>(0x19F70C4D80494FF8, ped, componentHash, weaponHash); }
	static bool _HAS_PED_GOT_WEAPON_COMPONENT(Ped ped, Hash componentHash, Hash weaponHash) { return invoke <bool>(0xBBC67A6F965C688A, ped, componentHash, weaponHash); }
	static bool _IS_PED_CURRENT_WEAPON_HOLSTERED(Ped ped) { return invoke <bool>(0xBDD9C235D8D1052E, ped); }
	static Any _0xD2209866B0CB72EA(Any p0, Any p1) { return invoke <Any>(0xD2209866B0CB72EA, p0, p1); }
	static void _REQUEST_WEAPON_ASSET(Hash weaponHash, int p1, bool p2) { return invoke <void>(0x72D4CB5DB927009C, weaponHash, p1, p2); }
	static bool _HAS_WEAPON_ASSET_LOADED(Hash weaponHash) { return invoke <bool>(0xFF07CF465F48B830, weaponHash); }
	static void _REMOVE_WEAPON_ASSET(Hash weaponHash) { return invoke <void>(0xC3896D03E2852236, weaponHash); }
	static void _0xE9B3FEC825668291(Any p0, Any p1, Any p2) { return invoke <void>(0xE9B3FEC825668291, p0, p1, p2); }
	static Any _0x9CCA3131E6B53C68(Any p0, Any p1, Any p2) { return invoke <Any>(0x9CCA3131E6B53C68, p0, p1, p2); }
	static const char* _GET_WEAPON_NAME_2(Hash weaponHash) { return invoke <const char*>(0x6D3AC61694A791C5, weaponHash); }
	static const char* _GET_WEAPON_NAME(Hash weaponHash) { return invoke <const char*>(0x89CF5FF3D363311E, weaponHash); }
	static const char* _GET_WEAPON_NAME_WITH_PERMANENT_DEGRADATION(Hash weaponHash, float permanentDegradationLevel) { return invoke <const char*>(0x7A56D66C78D8EF8E, weaponHash, permanentDegradationLevel); }
	static void _0xB832F1A686B9B810(Any p0, Any p1, Any p2) { return invoke <void>(0xB832F1A686B9B810, p0, p1, p2); }
	static Any _0x5A695BD328586B44(Any p0, Any p1) { return invoke <Any>(0x5A695BD328586B44, p0, p1); }
	static void _0x641351E9AD103890(Any p0, Any p1) { return invoke <void>(0x641351E9AD103890, p0, p1); }
	static void SET_INSTANTLY_EQUIP_WEAPON_PICKUPS(Ped ped, bool toggle) { return invoke <void>(0x739B9C6D0E7F7F93, ped, toggle); }
	static void _SET_FORCE_AUTO_EQUIP(Ped ped, bool toggle) { return invoke <void>(0xBE711B14A159E84F, ped, toggle); }
	static void _SEND_WEAPON_TO_INVENTORY(Ped ped, Hash weaponHash) { return invoke <void>(0xE9BD19F8121ADE3E, ped, weaponHash); }
	static void _0x14FF0C2545527F9B(Ped horse, Hash weaponHash, Ped ped) { return invoke <void>(0x14FF0C2545527F9B, horse, weaponHash, ped); }
	static void _0xD4C6E24D955FF061(Any p0) { return invoke <void>(0xD4C6E24D955FF061, p0); }
	static Any _0xAFFD0CCF31F469B8(Any p0) { return invoke <Any>(0xAFFD0CCF31F469B8, p0); }
	static Hash _GET_WEAPON_STAT_ID(Hash weaponHash) { return invoke <Hash>(0x8EC44AE8DECFF841, weaponHash); }
	static bool _HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(Entity entity, Hash weaponHash, int ms) { return invoke <bool>(0x9E2D5D6BC97A5F1E, entity, weaponHash, ms); }
	static Hash _GET_PED_HOGTIE_WEAPON(Ped ped) { return invoke <Hash>(0x90EB1CB189923587, ped); }
	static Object _CREATE_WEAPON_OBJECT(Hash weaponHash, int ammoCount, float x, float y, float z, bool showWorldModel, float scale) { return invoke <Object>(0x9888652B8BA77F73, weaponHash, ammoCount, x, y, z, showWorldModel, scale); }
	static void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(Object WeaponObjectIndex, Hash WeaponComponent) { return invoke <void>(0xF7D82B0D66777611, WeaponObjectIndex, WeaponComponent); }
	static bool HAS_WEAPON_GOT_WEAPON_COMPONENT(Object WeaponObjectIndex, Hash WeaponComponent) { return invoke <bool>(0x76A18844E743BF91, WeaponObjectIndex, WeaponComponent); }
	static void _GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Object* weaponObject, Ped ped, Hash componentHash, bool p3) { return invoke <void>(0x1A47699E8D533E8F, weaponObject, ped, componentHash, p3); }
	static Object _GET_WEAPON_OBJECT_FROM_PED(Ped ped, bool p1) { return invoke <Object>(0xC6A6789BB405D11C, ped, p1); }
	static Object _GET_PED_WEAPON_OBJECT(Ped ped, bool p1) { return invoke <Object>(0x6CA484C9A7377E4F, ped, p1); }
	static void _GIVE_WEAPON_COMPONENT_TO_ENTITY(Entity entity, Hash componentHash, Hash weaponHash, bool p3) { return invoke <void>(0x74C9090FDD1BB48E, entity, componentHash, weaponHash, p3); }
	static void _0x74C9080FDD1BB48E(Any p0, Any p1) { return invoke <void>(0x74C9080FDD1BB48E, p0, p1); }
	static void _0x74C9080FDD1BB48F(Any p0, Any p1) { return invoke <void>(0x74C9080FDD1BB48F, p0, p1); }
	static void _0x74C2365FDD1BB48F(Any p0, Any p1) { return invoke <void>(0x74C2365FDD1BB48F, p0, p1); }
	static void _0x74C90AAACC1DD48F(Any p0) { return invoke <void>(0x74C90AAACC1DD48F, p0); }
	static Any _0x74C8000FDD1BB111(Any p0, Any p1) { return invoke <Any>(0x74C8000FDD1BB111, p0, p1); }
	static Any _0x74C8000FDD1BB222(Any p0, Any p1) { return invoke <Any>(0x74C8000FDD1BB222, p0, p1); }
	static Hash _GET_WEAPON_GUN_SPINNING_WEAPON_EMOTE_TRICK_TYPE_HASH(Hash emote, int weaponEmoteTrickType) { return invoke <Hash>(0xF4601C1203B1A78D, emote, weaponEmoteTrickType); }
	static void _SET_ACTIVE_GUN_SPINNING_EQUIP_KIT_EMOTE_TWIRL(Ped ped, Hash emote) { return invoke <void>(0xCBCFFF805F1B4596, ped, emote); }
	static Hash _GET_PED_GUN_SPINNING_EQUIPPED_KIT_EMOTE_TWIRL(Ped ped) { return invoke <Hash>(0x2C4FEC3D0EFA9FC0, ped); }
	static void _SET_ACTIVE_GUN_SPINNING_KIT_EMOTE_TWIRL(Ped ped, int weaponEmoteTrickType, Hash spin) { return invoke <void>(0x1F661BB9C71B465, ped, weaponEmoteTrickType, spin); }
	static Hash _GET_PED_GUN_SPINNING_HASH_FROM_WEAPON_EMOTE_VARIATION(Ped ped, int weaponEmoteVariation) { return invoke <Hash>(0xF3B1620B920D1708, ped, weaponEmoteVariation); }
	static int _GET_WEAPON_EMOTE_VARIATION(Ped ped, int variation) { return invoke <int>(0x86147D05FA831D3A, ped, variation); }
	static void _SET_GUN_SPINNING_INVENTORY_SLOT_ID_ACTIVATE(Ped ped, int emoteType) { return invoke <void>(0x408CF580C5E96D49, ped, emoteType); }
	static bool _GET_CAN_TWIRL_WEAPON(Hash weaponHash) { return invoke <bool>(0x6554ECCE226F2A2A, weaponHash); }
	static bool _GET_CORRECT_KIT_EMOTE_TWIRL_GUN(Ped ped, void* weaponGuid) { return invoke <bool>(0xCD356B42C57BFE01, ped, weaponGuid); }
	static Any _0xBC9444F2FF94A9C0(Any p0) { return invoke <Any>(0xBC9444F2FF94A9C0, p0); }
	static Hash _GET_DEFAULT_PED_WEAPON_COLLECTION(Hash pedModel) { return invoke <Hash>(0xD42514C182121C23, pedModel); }
	static void _GIVE_WEAPON_COLLECTION_TO_PED(Ped ped, Hash weaponCollection) { return invoke <void>(0x899A04AFCC725D04, ped, weaponCollection); }
	static bool _0xF252A85B8F3F8C58(Hash weaponCollection, Hash dualwieldVariant) { return invoke <bool>(0xF252A85B8F3F8C58, weaponCollection, dualwieldVariant); }
	static Hash _0x9EEFD670F10656D7(Hash weaponCollection, Hash weaponGroup) { return invoke <Hash>(0x9EEFD670F10656D7, weaponCollection, weaponGroup); }
	static Any _0xF2F585411E748B9C(Any p0, Any p1) { return invoke <Any>(0xF2F585411E748B9C, p0, p1); }
	static int GET_WEAPON_CLIP_SIZE(Hash weaponHash) { return invoke <int>(0xD3750CCC00635FC2, weaponHash); }
	static void _0xA769D753922B031B(Any p0, Any p1, Any p2) { return invoke <void>(0xA769D753922B031B, p0, p1, p2); }
	static void _0xC5899C4CD2E2495D(Any p0) { return invoke <void>(0xC5899C4CD2E2495D, p0); }
	static bool GET_ALLOW_DUAL_WIELD(Ped ped) { return invoke <bool>(0x918990BD9CE08582, ped); }
	static void _SET_ALLOW_DUAL_WIELD(Ped ped, bool allow) { return invoke <void>(0x83B8D50EB9446BBA, ped, allow); }
	static bool _0x44C8F4908F1B2622(Ped ped, Hash ammoHash) { return invoke <bool>(0x44C8F4908F1B2622, ped, ammoHash); }
	static bool _IS_WEAPON_KNIFE(Hash weaponHash) { return invoke <bool>(0x792E3EF76C911959, weaponHash); }
	static bool IS_WEAPON_REVOLVER(Hash weaponHash) { return invoke <bool>(0xC212F1D05A8232BB, weaponHash); }
	static bool IS_WEAPON_PISTOL(Hash weaponHash) { return invoke <bool>(0xDDC64F5E31EEDAB6, weaponHash); }
	static bool IS_WEAPON_REPEATER(Hash weaponHash) { return invoke <bool>(0xDDB2578E95EF7138, weaponHash); }
	static bool IS_WEAPON_RIFLE(Hash weaponHash) { return invoke <bool>(0xA82317B7EBFC420, weaponHash); }
	static bool IS_WEAPON_SHOTGUN(Hash weaponHash) { return invoke <bool>(0xC75386174ECE95D5, weaponHash); }
	static bool _IS_WEAPON_SNIPER(Hash weaponHash) { return invoke <bool>(0x6AD66548840472E5, weaponHash); }
	static bool IS_WEAPON_MELEE_WEAPON(Hash weaponHash) { return invoke <bool>(0x959383DCD42040DA, weaponHash); }
	static bool _IS_WEAPON_THROWABLE(Hash weaponHash) { return invoke <bool>(0x30E7C16B12DA8211, weaponHash); }
	static bool _IS_WEAPON_LASSO(Hash weaponHash) { return invoke <bool>(0x6E4E1A82081EABED, weaponHash); }
	static bool _IS_WEAPON_BINOCULARS(Hash weaponHash) { return invoke <bool>(0xC853230E76A152DF, weaponHash); }
	static bool IS_WEAPON_A_GUN(Hash weaponHash) { return invoke <bool>(0x705BE297EEBDB95D, weaponHash); }
	static bool _IS_WEAPON_TWO_HANDED(Hash weaponHash) { return invoke <bool>(0x556E9D2ECF39D01, weaponHash); }
	static bool _IS_WEAPON_ONE_HANDED(Hash weaponHash) { return invoke <bool>(0xD955FEE4B87AFA07, weaponHash); }
	static bool _IS_WEAPON_SILENT(Hash weaponHash) { return invoke <bool>(0x5809DBCA0A37C82B, weaponHash); }
	static Any _0xEA522F991E120D45(Any p0) { return invoke <Any>(0xEA522F991E120D45, p0); }
	static bool _IS_AMMO_SILENT(Hash ammoHash) { return invoke <bool>(0xD2866CBA797E872E, ammoHash); }
	static bool _IS_AMMO_SILENT_2(Hash ammoHash) { return invoke <bool>(0x7EFACC589B98C488, ammoHash); }
	static bool SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(Hash weaponHash) { return invoke <bool>(0x2C83212A7AA51D3D, weaponHash); }
	static Any _0x5B235F24472F2C3B(Any p0, Any p1) { return invoke <Any>(0x5B235F24472F2C3B, p0, p1); }
	static Any _0xBFCA7AFABF9D7967(Any p0, Any p1) { return invoke <Any>(0xBFCA7AFABF9D7967, p0, p1); }
	static Any _0x495A04CAEC263AF8(Any p0, Any p1) { return invoke <Any>(0x495A04CAEC263AF8, p0, p1); }
	static Any _0x95CA12E2C68043E5(Any p0, Any p1) { return invoke <Any>(0x95CA12E2C68043E5, p0, p1); }
	static Any _0xABC18A28BAD4B46F(Any p0, Any p1) { return invoke <Any>(0xABC18A28BAD4B46F, p0, p1); }
	static Any _0x80BB243789008A82(Any p0, Any p1) { return invoke <Any>(0x80BB243789008A82, p0, p1); }
	static float _GET_WEAPON_DAMAGE(Object weaponObject) { return invoke <float>(0x904103D5D2333977, weaponObject); }
	static void _SET_WEAPON_DAMAGE(Object weaponObject, float level, bool p2) { return invoke <void>(0xE22060121602493B, weaponObject, level, p2); }
	static float _GET_WEAPON_DIRT(Object weaponObject) { return invoke <float>(0x810E8AE9AFEA7E54, weaponObject); }
	static void _SET_WEAPON_DIRT(Object weaponObject, float level, bool p2) { return invoke <void>(0x812CE61DEBCAB948, weaponObject, level, p2); }
	static float _GET_WEAPON_SOOT(Object weaponObject) { return invoke <float>(0x4BF66F8878F67663, weaponObject); }
	static void _SET_WEAPON_SOOT(Object weaponObject, float level, bool p2) { return invoke <void>(0xA9EF4AD10BDDDB57, weaponObject, level, p2); }
	static void _SET_WEAPON_LEVEL_THRESHOLD(Object weaponObject, float threshold) { return invoke <void>(0xD4071EFC83794B2F, weaponObject, threshold); }
	static float GET_WEAPON_DEGRADATION(Object weaponObject) { return invoke <float>(0xD78E1097F89E637, weaponObject); }
	static float GET_WEAPON_PERMANENT_DEGRADATION(Object weaponObject) { return invoke <float>(0xD56E5F336C675EFA, weaponObject); }
	static void _SET_WEAPON_DEGRADATION(Object weaponObject, float level) { return invoke <void>(0xA7A57E89E965D839, weaponObject, level); }
	static void _LISTEN_PROJECTILE_HIT_EVENTS(bool listen) { return invoke <void>(0xDA5D3F2C6DD5B5D4, listen); }
	static float _GET_WEAPON_SCALE(Object weaponObject) { return invoke <float>(0x22084CA699219624, weaponObject); }
	static void _SET_WEAPON_SCALE(Object weaponObject, float scale) { return invoke <void>(0xC3544AD0522E69B4, weaponObject, scale); }
	static Any _0x58425FCA3D3A2D15(Any p0) { return invoke <Any>(0x58425FCA3D3A2D15, p0); }
	static Any _0xEC97101A8F311282(Any p0) { return invoke <Any>(0xEC97101A8F311282, p0); }
	static Hash _GET_CURRENT_PED_WEAPON_AMMO_TYPE(Ped ped, Object weaponObject) { return invoke <Hash>(0x7E7B19A4355FEE13, ped, weaponObject); }
	static Hash _GET_CURRENT_AMMO_TYPE_FROM_GUID(Ped ped, void* weaponGuid) { return invoke <Hash>(0xAF9D167A5656D6A6, ped, weaponGuid); }
	static bool _IS_AMMO_TYPE_VALID_FOR_WEAPON(Hash weaponHash, Hash ammoHash) { return invoke <bool>(0xC570B881754DF609, weaponHash, ammoHash); }
	static void _SET_AMMO_TYPE_FOR_PED_WEAPON(Ped ped, Hash weaponHash, Hash ammoHash) { return invoke <void>(0xCC9C4393523833E2, ped, weaponHash, ammoHash); }
	static void _0x183CE355115B6E75(Any p0, Any p1) { return invoke <void>(0x183CE355115B6E75, p0, p1); }
	static void _SET_AMMO_TYPE_FOR_PED_WEAPON_INVENTORY(Ped ped, void* weaponInventoryUid, Hash ammoHash) { return invoke <void>(0xEBE46B501BC3FBCF, ped, weaponInventoryUid, ammoHash); }
	static void _DISABLE_AMMO_TYPE_FOR_PED_WEAPON(Ped ped, Hash weaponHash, Hash ammoHash) { return invoke <void>(0xF0D728EEA3C99775, ped, weaponHash, ammoHash); }
	static void _DISABLE_AMMO_TYPE_FOR_PED(Ped ped, Hash ammoHash) { return invoke <void>(0xAA5A52204E077883, ped, ammoHash); }
	static void _0xD63B4BA3A02A99E0(Any p0, Any p1) { return invoke <void>(0xD63B4BA3A02A99E0, p0, p1); }
	static void _ENABLE_AMMO_TYPE_FOR_PED_WEAPON(Ped ped, Hash weaponHash, Hash ammoHash) { return invoke <void>(0x23FB9FACA28779C1, ped, weaponHash, ammoHash); }
	static void _ENABLE_AMMO_TYPE_FOR_PED(Ped ped, Hash weaponHash) { return invoke <void>(0x3B7B7908B7ADFB4B, ped, weaponHash); }
	static void _0x404514D231DB27A0(Any p0, Any p1) { return invoke <void>(0x404514D231DB27A0, p0, p1); }
	static void _0xD53846B9C931C181(Any p0, Any p1, Any p2) { return invoke <void>(0xD53846B9C931C181, p0, p1, p2); }
	static void _0x000FA7A4A8443AF7(Any p0) { return invoke <void>(0xFA7A4A8443AF7, p0); }
	static void _0xECBB26529A737EF6(Any p0) { return invoke <void>(0xECBB26529A737EF6, p0); }
	static int _GET_WEAPON_ATTACH_POINT(Ped ped, int attachPoint) { return invoke <int>(0xCAD4FE9398820D24, ped, attachPoint); }
	static Any _0x4823F13A21F51964(Any p0, Any p1) { return invoke <Any>(0x4823F13A21F51964, p0, p1); }
	static void SET_CURRENT_PED_WEAPON_BY_GUID(Ped ped, void* weaponUid, bool p2, bool p3, bool p4, bool p5) { return invoke <void>(0x12FB95FE3D579238, ped, weaponUid, p2, p3, p4, p5); }
	static void SET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID(Ped ped, void* guidPrimary, void* guidSecondary) { return invoke <void>(0xEC1F85DA51D3D6C4, ped, guidPrimary, guidSecondary); }
	static void _GET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID(Ped ped, void* guidPrimary, void* guidSecondary) { return invoke <void>(0xB7E52A058B07C7E2, ped, guidPrimary, guidSecondary); }
	static bool _0x0DE0944ECCB3DF5D(Ped ped) { return invoke <bool>(0xDE0944ECCB3DF5D, ped); }
	static Any _0x46D42883E873C1D7(Ped ped) { return invoke <Any>(0x46D42883E873C1D7, ped); }
	static bool _IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS(Ped ped, Ped targetPed) { return invoke <bool>(0x8D50F43298AB9545, ped, targetPed); }
	static int _0x65DC4AC5B96614CB(Hash weaponHash) { return invoke <int>(0x65DC4AC5B96614CB, weaponHash); }
}

namespace ZONE
{
	static Hash _GET_MAP_ZONE_AT_COORDS(float x, float y, float z, int type) { return invoke <Hash>(0x43AD8FC02B429D33, x, y, z, type); }
	static Hash _GET_WATER_MAP_ZONE_AT_COORDS(float x, float y, float z) { return invoke <Hash>(0x5BA7A68A346A5A91, x, y, z); }
}

namespace COMPAPP
{
	static void _0xB6FD96420C0126A1(Hash p0, bool p1) { return invoke <void>(0xB6FD96420C0126A1, p0, p1); }
	static void _0x74BCCEB233AD95B2(Hash p0, Hash p1) { return invoke <void>(0x74BCCEB233AD95B2, p0, p1); }
	static void _0x29C733459A9011EB(Hash p0, const char* p1) { return invoke <void>(0x29C733459A9011EB, p0, p1); }
	static bool _0x7AF1BB4504EA5ED9() { return invoke <bool>(0x7AF1BB4504EA5ED9); }
	static void _0xCCB4635A071FB62D() { return invoke <void>(0xCCB4635A071FB62D); }
}
