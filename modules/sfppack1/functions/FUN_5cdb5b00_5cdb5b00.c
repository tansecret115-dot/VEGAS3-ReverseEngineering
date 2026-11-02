/* Module: sfppack1.dll
   Function: FUN_5cdb5b00
   Address: 5cdb5b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5cdb5b00(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_5ce131d0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0x10] = 1;
  param_1[0x11] = 1;
  param_1[0x13] = 1;
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_LAB_5ce13178;
  puVar2 = param_1 + 8;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  puVar2 = param_1 + 0x1e;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x45;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  bVar3 = DAT_5ce237e8 == 0;
  param_1[0x1b] = 0;
  param_1[0x44] = (uint)bVar3;
  return param_1;
}


