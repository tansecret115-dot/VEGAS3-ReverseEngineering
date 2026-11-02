/* Module: sfxpfx2.dll
   Function: FUN_5c89d810
   Address: 5c89d810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5c89d810(undefined4 *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_c;
  
  *param_1 = &PTR_LAB_5c8dd174;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[10] = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_LAB_5c8dd130;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar4 = param_1 + 0x1a;
  local_c = 0x10;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar5 = param_1 + 0x5b;
  for (iVar3 = 0x60; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = param_1 + 0x4a;
  do {
    if ((LPCVOID)*puVar5 != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle((LPCVOID)*puVar5);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle((LPCVOID)*puVar5);
      GlobalFree(pvVar2);
    }
    *puVar5 = 0;
    puVar5[-0x10] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 2;
    local_c = local_c + -1;
  } while (local_c != 0);
  puVar4 = param_1 + 0xbc;
  for (iVar3 = 6; iVar1 = DAT_5c8e93b8, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  param_1[0x13] = 0;
  param_1[0xbb] = (uint)(iVar1 == 0);
  return param_1;
}


