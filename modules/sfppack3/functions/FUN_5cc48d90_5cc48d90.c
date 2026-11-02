/* Module: sfppack3.dll
   Function: FUN_5cc48d90
   Address: 5cc48d90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5cc48d90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_5cc89324;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0x50] = 1;
  param_1[0x51] = 1;
  param_1[0x53] = 1;
  param_1[0x52] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *param_1 = &PTR_LAB_5cc892b0;
  puVar2 = param_1 + 7;
  for (iVar1 = 0x49; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  puVar2 = param_1 + 0x5c;
  for (iVar1 = 0x820; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x87d;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  bVar3 = DAT_5cc982c0 == 0;
  param_1[0x5a] = 0;
  param_1[0x87c] = (uint)bVar3;
  return param_1;
}


