/* Module: sfppack2.dll
   Function: FUN_5ccf2560
   Address: 5ccf2560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5ccf2560(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_5cd5387c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0x3b] = 1;
  param_1[0x3d] = 1;
  param_1[0x3c] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *param_1 = &PTR_LAB_5cd536b8;
  puVar1 = param_1 + 7;
  for (iVar2 = 0x34; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = param_1 + 0x3e;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = param_1 + 0x82;
  for (iVar2 = 0xa0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x8e] = 0xfffffda8;
  param_1[0x8f] = 0xfffffda8;
  param_1[0x90] = 0xfffffda8;
  param_1[0x91] = 0xfffffda8;
  param_1[0x98] = 0x3f800000;
  param_1[0x9b] = 0x3f800000;
  param_1[0x9e] = 0x3f800000;
  param_1[0xa1] = 0x3f800000;
  puVar1 = param_1 + 0x127;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  param_1[0x126] = (uint)(DAT_5cd679f8 == 0);
  param_1[0x49] = 0;
  param_1[0x12f] = 0;
  puVar1 = param_1 + 0x4e;
  for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = param_1 + 0x58;
  iVar2 = 4;
  do {
    *puVar1 = 0;
    puVar1[1] = 0x3ff00000;
    puVar1 = puVar1 + 0xc;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)param_1[0x12f];
    for (iVar2 = 0xc80; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
  }
  param_1[0x132] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x133] = 0;
  return param_1;
}


