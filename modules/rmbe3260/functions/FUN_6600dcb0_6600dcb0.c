/* Module: rmbe3260.dll
   Function: FUN_6600dcb0
   Address: 6600dcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6600dcb0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66063e30;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_66064710;
  FUN_6605b650((int *)((int)param_1 + 0x1b));
  *param_1 = &PTR_FUN_660646e8;
  param_1[4] = &PTR_LAB_660646b8;
  param_1[5] = 2;
  thunk_FUN_6605b610((int *)((int)param_1 + 0x1b));
  *(undefined4 *)((int)param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  return param_1;
}


