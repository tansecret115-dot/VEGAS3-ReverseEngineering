/* Module: encn3260.dll
   Function: FUN_664ae230
   Address: 664ae230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_664ae230(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_664de148;
  param_1[1] = 1;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x11) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = 0;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  *(undefined4 *)((int)param_1 + 0x1d) = 0;
  CMap<>((void *)((int)param_1 + 0x21),10);
  *param_1 = &PTR_FUN_664df270;
  return param_1;
}


