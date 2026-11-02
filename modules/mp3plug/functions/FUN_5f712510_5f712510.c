/* Module: mp3plug.dll
   Function: FUN_5f712510
   Address: 5f712510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5f712510(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5f74cfd0;
  *param_1 = &PTR_LAB_5f74cff0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[0x1b] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xffffffff;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *(undefined4 *)((int)param_1 + 10) = 0;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  return param_1;
}


