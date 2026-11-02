/* Module: sfppack3.dll
   Function: FUN_5cc44cc0
   Address: 5cc44cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5cc44cc0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_5cc88e48;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0x91] = 1;
  param_1[0x93] = 1;
  param_1[0x92] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *param_1 = &PTR_LAB_5cc88dc4;
  puVar2 = param_1 + 7;
  for (iVar1 = 0x8a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  puVar2 = param_1 + 0x9c;
  for (iVar1 = 0xd76; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0xe13;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  bVar3 = DAT_5cc982c0 == 0;
  param_1[0x9a] = 0;
  param_1[0xe12] = (uint)bVar3;
  return param_1;
}


