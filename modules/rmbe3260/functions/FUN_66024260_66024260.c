/* Module: rmbe3260.dll
   Function: FUN_66024260
   Address: 66024260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66024260(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66063e30;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_66066f80;
  param_1[5] = &PTR_LAB_66066f68;
  FUN_6605b7e0(param_1 + 6,s_audio_x_pn_realaudio_6606cc78);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 2;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  *param_1 = &PTR_FUN_66066f40;
  param_1[4] = &PTR_LAB_66066ef8;
  param_1[5] = &PTR_LAB_66066ee0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_660130d0((int)param_1 + 0x4e);
  return param_1;
}


