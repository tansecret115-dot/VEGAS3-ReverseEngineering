/* Module: sfppack3.dll
   Function: FUN_5cc3ccf0
   Address: 5cc3ccf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5cc3ccf0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_5cc88630;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0x4c] = 1;
  param_1[0x4e] = 1;
  param_1[0x4d] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *param_1 = &PTR_LAB_5cc885dc;
  puVar2 = param_1 + 7;
  for (iVar1 = 0x45; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  puVar2 = param_1 + 0x58;
  for (iVar1 = 0x860; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x8bb;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  bVar3 = DAT_5cc982c0 == 0;
  param_1[0x56] = 0;
  param_1[0x8ba] = (uint)bVar3;
  return param_1;
}


