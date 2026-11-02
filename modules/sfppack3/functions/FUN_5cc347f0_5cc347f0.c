/* Module: sfppack3.dll
   Function: FUN_5cc347f0
   Address: 5cc347f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5cc347f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_5cc87c64;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0xe] = 1;
  param_1[0x10] = 1;
  param_1[0xf] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_LAB_5cc87c00;
  puVar2 = param_1 + 7;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  puVar2 = param_1 + 0x18;
  for (iVar1 = 0xe6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0xff;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  bVar3 = DAT_5cc982c0 == 0;
  param_1[0x17] = 0;
  param_1[0xfe] = (uint)bVar3;
  return param_1;
}


