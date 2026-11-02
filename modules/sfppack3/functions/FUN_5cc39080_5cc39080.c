/* Module: sfppack3.dll
   Function: FUN_5cc39080
   Address: 5cc39080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5cc39080(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_5cc881cc;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0xb] = 1;
  param_1[0xd] = 1;
  param_1[0xc] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_LAB_5cc88180;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar2 = param_1 + 0x26;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  bVar3 = DAT_5cc982c0 == 0;
  param_1[0x15] = 0;
  param_1[0x25] = (uint)bVar3;
  return param_1;
}


