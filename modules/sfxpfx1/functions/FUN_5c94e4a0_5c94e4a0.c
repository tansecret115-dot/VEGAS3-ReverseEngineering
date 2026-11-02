/* Module: sfxpfx1.dll
   Function: FUN_5c94e4a0
   Address: 5c94e4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5c94e4a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  *param_1 = &PTR_LAB_5c98c258;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0xb] = 1;
  param_1[0xd] = 1;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0xc] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x7f8] = 0;
  *param_1 = &PTR_LAB_5c98c20c;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar1 = param_1 + 0x26;
  for (iVar2 = 2000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar3 = param_1 + 0x7f6;
  puVar1 = param_1 + 0x1c;
  iVar2 = 2;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    *puVar3 = 0;
    puVar1 = puVar1 + 2;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = param_1 + 0x7fd;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  bVar4 = DAT_5c998760 == 0;
  param_1[0x14] = 0;
  param_1[0x7fc] = (uint)bVar4;
  return param_1;
}


