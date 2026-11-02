/* Module: rmbe3260.dll
   Function: FUN_66011020
   Address: 66011020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66011020(undefined4 *param_1)

{
  FUN_66014c40(param_1);
  param_1[0x23] = &PTR_LAB_66064b68;
  FUN_6605cda0(param_1 + 0x24);
  *param_1 = &PTR_FUN_66064ad8;
  param_1[0x12] = &PTR_LAB_66064aa8;
  param_1[0x23] = &PTR_LAB_66064a90;
  param_1[0x28] = 0;
  FUN_6605b970(param_1 + 3,s_audio_x_pn_realaudio_6606cc78);
  FUN_6605b970(param_1 + 0x1a,s_AudioStreams_6606cc68);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FUN_66019900((byte *)param_1[3],param_1 + 8);
  return param_1;
}


