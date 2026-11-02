/* Module: vidpcore.dll
   Function: FUN_5de52430
   Address: 5de52430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5de52430(undefined4 *param_1,undefined4 param_2)

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
  *param_1 = &PTR_FUN_5df1e190;
  param_1[2] = &PTR_LAB_5df1e154;
  param_1[3] = &PTR_LAB_5df1e144;
  param_1[4] = &PTR_LAB_5df1e130;
  param_1[0x2f] = &PTR_LAB_5df1e0f0;
  param_1[0x30] = &PTR_LAB_5df1e0dc;
  param_1[0x39] = &PTR_LAB_5df1e0b4;
  param_1[0x3a] = &PTR_LAB_5df1e0a4;
  param_1[0x3b] = &PTR_LAB_5df1e088;
  param_1[0x3c] = &PTR_LAB_5df1e074;
  param_1[0x48] = &PTR_LAB_5df1e04c;
  param_1[0x49] = &PTR_LAB_5df1e028;
  param_1[0x4a] = &PTR_LAB_5df1e010;
  param_1[0x4b] = &PTR_LAB_5df1e000;
  param_1[5] = param_2;
  return param_1;
}


