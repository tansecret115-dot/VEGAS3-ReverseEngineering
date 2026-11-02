/* Module: sfppack1.dll
   Function: FUN_5cdc4ae0
   Address: 5cdc4ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5cdc4ae0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_5ce13b84;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0xc] = 1;
  param_1[0xe] = 1;
  param_1[0xd] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *param_1 = &PTR_LAB_5ce13b30;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  puVar2 = param_1 + 0x27;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  bVar3 = DAT_5ce237e8 == 0;
  param_1[0x15] = 0;
  param_1[0x26] = (uint)bVar3;
  return param_1;
}


