/* Module: sfppack2.dll
   Function: FUN_5cd01d90
   Address: 5cd01d90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5cd01d90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_5cd543b0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[10] = 1;
  param_1[0xc] = 1;
  param_1[0xb] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = &PTR_LAB_5cd5436c;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar2 = param_1 + 0x16;
  for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x52;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  bVar3 = DAT_5cd679f8 == 0;
  param_1[0x14] = 0;
  param_1[0x51] = (uint)bVar3;
  return param_1;
}


