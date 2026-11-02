/* Module: sfppack1.dll
   Function: FUN_5cdd0e20
   Address: 5cdd0e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5cdd0e20(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_5ce1488c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0x12] = 1;
  param_1[0x13] = 1;
  param_1[0x15] = 1;
  param_1[0x14] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = &PTR_LAB_5ce14808;
  puVar2 = param_1 + 7;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  puVar2 = param_1 + 0x1e;
  for (iVar1 = 0x106; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x125;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  bVar3 = DAT_5ce237e8 == 0;
  param_1[0x1c] = 0;
  param_1[0x124] = (uint)bVar3;
  return param_1;
}


