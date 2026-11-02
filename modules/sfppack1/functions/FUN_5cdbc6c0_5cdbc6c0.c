/* Module: sfppack1.dll
   Function: FUN_5cdbc6c0
   Address: 5cdbc6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5cdbc6c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_5ce13730;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0x14] = 1;
  param_1[0x15] = 1;
  param_1[0x17] = 1;
  param_1[0x16] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *param_1 = &PTR_LAB_5ce136c0;
  puVar2 = param_1 + 8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  puVar2 = param_1 + 0x22;
  for (iVar1 = 0xaa; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0xd1;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  bVar3 = DAT_5ce237e8 == 0;
  param_1[0x1f] = 0;
  param_1[0xd0] = (uint)bVar3;
  return param_1;
}


