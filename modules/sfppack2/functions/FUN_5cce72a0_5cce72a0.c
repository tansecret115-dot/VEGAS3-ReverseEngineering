/* Module: sfppack2.dll
   Function: FUN_5cce72a0
   Address: 5cce72a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5cce72a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_5cd52a40;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0x1c] = 1;
  param_1[0x1e] = 1;
  param_1[0x1d] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *param_1 = &PTR_LAB_5cd52960;
  puVar2 = param_1 + 7;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  puVar2 = param_1 + 0x2c;
  for (iVar1 = 0x70; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x9c;
  for (iVar1 = 0x88; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x124;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x1a5;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  bVar3 = DAT_5cd679f8 == 0;
  param_1[0x25] = 0;
  param_1[0x1a4] = (uint)bVar3;
  return param_1;
}


