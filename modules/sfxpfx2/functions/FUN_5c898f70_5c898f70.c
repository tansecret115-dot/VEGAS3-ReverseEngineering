/* Module: sfxpfx2.dll
   Function: FUN_5c898f70
   Address: 5c898f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5c898f70(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  *param_1 = &PTR_LAB_5c8dcddc;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0xb] = 1;
  param_1[0xc] = 1;
  param_1[0xe] = 1;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0xd] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *param_1 = &PTR_LAB_5c8dcd90;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  puVar2 = param_1 + 0x1a;
  for (iVar1 = 0x7a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x95;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  bVar3 = DAT_5c8e93b8 == 0;
  param_1[0x15] = 0;
  param_1[0x94] = (uint)bVar3;
  return param_1;
}


