/* Module: rmbe3260.dll
   Function: FUN_6602b870
   Address: 6602b870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6602b870(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_LAB_66067960;
  CPNRouter::CPNRouter((CPNRouter *)(param_1 + 1));
  puVar1 = param_1 + 3;
  param_1[4] = 0;
  param_1[5] = 0;
  *puVar1 = &PTR_FUN_66063e30;
  param_1[6] = puVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_6605cda0(param_1 + 0x18);
  FUN_6605cda0(param_1 + 0x1c);
  FUN_6605cda0(param_1 + 0x20);
  FUN_6605c7f0(param_1 + 0x24,10);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  FUN_6605b650(param_1 + 0x39);
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x5dd;
  *param_1 = &PTR_FUN_66067938;
  param_1[1] = &PTR_FUN_66067928;
  *puVar1 = &PTR_LAB_66067900;
  return param_1;
}


