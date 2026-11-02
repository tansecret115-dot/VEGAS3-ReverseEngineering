/* Module: rmbe3260.dll
   Function: FUN_66015920
   Address: 66015920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66015920(undefined4 *param_1)

{
  FUN_660147b0(param_1);
  FUN_6605b650(param_1 + 0x12);
  FUN_6605b650(param_1 + 0x15);
  FUN_6605b650(param_1 + 0x18);
  FUN_6605b650(param_1 + 0x1b);
  FUN_6605b650(param_1 + 0x1e);
  *param_1 = &PTR_FUN_660664d0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((int)param_1 + 0x96) = 0;
  *(undefined4 *)((int)param_1 + 0x9a) = 0;
  *(undefined4 *)((int)param_1 + 0x9e) = 0;
  *(undefined4 *)((int)param_1 + 0xa2) = 0;
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  *(undefined2 *)((int)param_1 + 0xaa) = 0;
  param_1[0x2b] = 0;
  FUN_66015a70((int)param_1);
  return param_1;
}


