/* Module: vidpcore.dll
   Function: FUN_5de42d30
   Address: 5de42d30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5de42d30(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_5de9f070();
  param_1[0x2f] = &PTR_LAB_5df1c7b4;
  param_1[0x35] = &DAT_5df38c38;
  param_1[0x36] = &DAT_5df38c28;
  param_1[0x37] = &DAT_5df38c18;
  param_1[0x38] = &DAT_5df38c08;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x3c] = &PTR_LAB_5df186b8;
  puVar2 = param_1 + 0x3e;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x46] = 0;
  param_1[0x47] = 0x3ff00000;
  param_1[0x4a] = &PTR_LAB_5df1a608;
  param_1[0x4c] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  *param_1 = &PTR_FUN_5df1cf08;
  param_1[2] = &PTR_LAB_5df1cecc;
  param_1[3] = &PTR_LAB_5df1cebc;
  param_1[4] = &PTR_LAB_5df1cea8;
  param_1[0x2f] = &PTR_LAB_5df1ce68;
  param_1[0x30] = &PTR_LAB_5df1ce54;
  param_1[0x39] = &PTR_LAB_5df1ce2c;
  param_1[0x3a] = &PTR_LAB_5df1ce1c;
  param_1[0x3b] = &PTR_LAB_5df1ce00;
  param_1[0x3c] = &PTR_LAB_5df1cdec;
  param_1[0x48] = &PTR_LAB_5df1cdc4;
  param_1[0x49] = &PTR_LAB_5df1cda0;
  param_1[0x4a] = &PTR_LAB_5df1cd88;
  param_1[0x4b] = &PTR_LAB_5df1cd78;
  param_1[5] = param_2;
  return param_1;
}


