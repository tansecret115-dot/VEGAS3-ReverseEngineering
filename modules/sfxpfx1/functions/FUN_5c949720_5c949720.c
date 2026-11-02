/* Module: sfxpfx1.dll
   Function: FUN_5c949720
   Address: 5c949720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5c949720(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_5c98be0c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0x13] = 1;
  param_1[0x14] = 1;
  param_1[0x16] = 1;
  param_1[0x15] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *param_1 = &PTR_LAB_5c98bd80;
  puVar2 = param_1 + 7;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  puVar2 = param_1 + 0x1e;
  for (iVar1 = 0x104; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x123;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  bVar3 = DAT_5c998760 == 0;
  param_1[0x1d] = 0;
  param_1[0x122] = (uint)bVar3;
  return param_1;
}


