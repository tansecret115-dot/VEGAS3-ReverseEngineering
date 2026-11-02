/* Module: sfxpfx1.dll
   Function: FUN_5c944ee0
   Address: 5c944ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5c944ee0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_5c98b8d4;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0xf] = 1;
  param_1[0x11] = 1;
  param_1[0x10] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = &PTR_LAB_5c98b868;
  puVar2 = param_1 + 7;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar2 = param_1 + 0x1a;
  for (iVar1 = 0xe6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x101;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  bVar3 = DAT_5c998760 == 0;
  param_1[0x18] = 0;
  param_1[0x100] = (uint)bVar3;
  return param_1;
}


