/* Module: sfppack2.dll
   Function: FUN_5ccfcee0
   Address: 5ccfcee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5ccfcee0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_5cd53f64;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0x2f] = 1;
  param_1[0x31] = 1;
  param_1[0x30] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *param_1 = &PTR_LAB_5cd53ef0;
  puVar2 = param_1 + 7;
  for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  puVar2 = param_1 + 0x3c;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x5c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  bVar3 = DAT_5cd679f8 == 0;
  param_1[0x39] = 0;
  param_1[0x5b] = (uint)bVar3;
  return param_1;
}


