/* Module: sfxpfx1.dll
   Function: FUN_5c951910
   Address: 5c951910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5c951910(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  *param_1 = &PTR_LAB_5c98c60c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0xb] = 1;
  param_1[0xd] = 1;
  param_1[0x1c] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0xc] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  *param_1 = &PTR_LAB_5c98c5c0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar3 = param_1 + 0x2b;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = param_1 + 0x1e;
  puVar1 = param_1 + 0x19;
  iVar2 = 2;
  do {
    puVar1[-2] = 0;
    *puVar1 = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar1[9] = 0;
    puVar3 = puVar3 + 2;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  bVar4 = DAT_5c998760 == 0;
  param_1[0x14] = 0;
  param_1[0x2a] = (uint)bVar4;
  return param_1;
}


