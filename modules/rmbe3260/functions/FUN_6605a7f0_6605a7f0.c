/* Module: rmbe3260.dll
   Function: FUN_6605a7f0
   Address: 6605a7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6605a7f0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66063e30;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_66068c68;
  FUN_6605c3e0(param_1 + 0xc);
  FUN_6605c3e0(param_1 + 0x11);
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x16] = 0;
  param_1[0xb] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *param_1 = &PTR_FUN_66068c28;
  param_1[4] = &PTR_LAB_66068bf8;
  *(undefined4 *)((int)param_1 + 0x5e) = 0x10;
  return param_1;
}


