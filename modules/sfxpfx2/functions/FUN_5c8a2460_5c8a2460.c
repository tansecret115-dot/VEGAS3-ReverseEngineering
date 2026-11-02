/* Module: sfxpfx2.dll
   Function: FUN_5c8a2460
   Address: 5c8a2460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5c8a2460(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_5c8dd8cc;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0x13] = 1;
  param_1[0x15] = 1;
  param_1[0x14] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = &PTR_LAB_5c8dd840;
  puVar2 = param_1 + 7;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  puVar2 = param_1 + 0x22;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x3e;
  for (iVar1 = 0x88; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0xc6;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x147;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  bVar3 = DAT_5c8e93b8 == 0;
  param_1[0x1c] = 0;
  param_1[0x146] = (uint)bVar3;
  return param_1;
}


