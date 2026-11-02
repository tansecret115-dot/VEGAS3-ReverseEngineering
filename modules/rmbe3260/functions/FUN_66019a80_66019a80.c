/* Module: rmbe3260.dll
   Function: FUN_66019a80
   Address: 66019a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66019a80(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66063e30;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_66064980;
  param_1[5] = &PTR_LAB_660667e0;
  FUN_6605b7e0(param_1 + 6,s_audio_x_pn_realaudio_6606cc78);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 1;
  *param_1 = &PTR_FUN_660667b8;
  param_1[4] = &PTR_LAB_660667a8;
  param_1[5] = &PTR_LAB_66066780;
  return param_1;
}


