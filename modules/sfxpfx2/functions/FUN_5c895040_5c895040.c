/* Module: sfxpfx2.dll
   Function: FUN_5c895040
   Address: 5c895040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5c895040(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_5c8dc85c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0x51] = 1;
  param_1[0x52] = 1;
  param_1[0x54] = 1;
  param_1[0x53] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *param_1 = &PTR_LAB_5c8dc7e0;
  puVar2 = param_1 + 7;
  for (iVar1 = 0x4a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
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
  bVar3 = DAT_5c8e93b8 == 0;
  param_1[0x5b] = 0;
  param_1[0x87c] = (uint)bVar3;
  return param_1;
}


