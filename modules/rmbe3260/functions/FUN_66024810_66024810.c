/* Module: rmbe3260.dll
   Function: FUN_66024810
   Address: 66024810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66024810(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66063e30;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_66066f80;
  param_1[5] = &PTR_LAB_660670c0;
  FUN_6605b7e0(param_1 + 6,s_video_x_pn_realvideo_6606cde8);
  param_1[0xb] = 0;
  *(undefined4 *)((int)param_1 + 0x46) = 1;
  *(undefined4 *)((int)param_1 + 0x82) = 1;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 2;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0x41700000;
  *(undefined4 *)((int)param_1 + 0x4a) = 0x32;
  *(undefined4 *)((int)param_1 + 0x4e) = 100;
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  *(undefined4 *)((int)param_1 + 0x56) = 0;
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  *(undefined4 *)((int)param_1 + 0x62) = 0;
  *(undefined4 *)((int)param_1 + 0x66) = 0;
  *(undefined4 *)((int)param_1 + 0x6a) = 0;
  *(undefined4 *)((int)param_1 + 0x6e) = 0;
  *(undefined4 *)((int)param_1 + 0x72) = 0;
  *(undefined4 *)((int)param_1 + 0x76) = 0;
  *(undefined4 *)((int)param_1 + 0x7e) = 0;
  *param_1 = &PTR_FUN_66067098;
  param_1[4] = &PTR_LAB_66067050;
  param_1[5] = &PTR_LAB_66066fd0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_660130d0((int)param_1 + 0x8a);
  return param_1;
}


