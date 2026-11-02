/* Module: sftrkfx1.dll
   Function: FUN_5cbb54a0
   Address: 5cbb54a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5cbb54a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_LAB_5cc04850;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[7] = 1;
  param_1[8] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_LAB_5cc04750;
  puVar2 = param_1 + 0xd;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  puVar2 = param_1 + 0x2e;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x52;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0xde] = 0;
  return param_1;
}


