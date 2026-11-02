/* Module: sfppack1.dll
   Function: FUN_5cdcb590
   Address: 5cdcb590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5cdcb590(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_5ce142e4;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0x2a] = 1;
  param_1[0x2b] = 1;
  param_1[0x2d] = 1;
  param_1[0x2c] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *param_1 = &PTR_LAB_5ce141a0;
  puVar2 = param_1 + 7;
  for (iVar1 = 0x23; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  puVar2 = param_1 + 0x36;
  for (iVar1 = 0x6c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0xa3;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  bVar3 = DAT_5ce237e8 == 0;
  param_1[0x34] = 0;
  param_1[0xa2] = (uint)bVar3;
  return param_1;
}


