/* Module: vidpcore.dll
   Function: FUN_5de8cfb0
   Address: 5de8cfb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5de8cfb0(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  HGLOBAL pvVar2;
  wchar_t *_Dest;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  param_1[0xf] = 1;
  param_1[0x10] = 1;
  uVar4 = 0xffffffff;
  *param_1 = 100;
  param_1[4] = 400;
  *(undefined1 *)((int)param_1 + 0x17) = 1;
  *(undefined1 *)(param_1 + 6) = 7;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  param_1[0x19] = 0x3f800000;
  param_1[0x1a] = 0x3f800000;
  pcVar8 = "Arial";
  do {
    pcVar10 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar8 = pcVar10 + -uVar4;
  pcVar10 = (char *)(param_1 + 7);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0x3f800000;
  param_1[0x16] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  param_1[0x18] = 0x3f800000;
  param_1[0x1b] = DAT_5df180b0;
  param_1[0x1c] = DAT_5df180b4;
  param_1[0x1d] = DAT_5df180b8;
  param_1[0x1e] = DAT_5df180bc;
  local_c = _DAT_5df1ac4c;
  local_8 = DAT_5df1ac50;
  local_4 = DAT_5df1ac54;
  if ((LPCVOID)param_1[0x20] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x20]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x20]);
    GlobalFree(pvVar2);
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  pvVar2 = GlobalAlloc(0x40,10);
  _Dest = GlobalLock(pvVar2);
  param_1[0x20] = _Dest;
  param_1[0x1f] = 5;
  wcsncpy(_Dest,(wchar_t *)&local_c,5);
  puVar7 = param_2;
  puVar9 = param_1;
  for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  uVar4 = param_2[0x1f];
  if ((LPCVOID)param_1[0x20] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x20]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x20]);
    GlobalFree(pvVar2);
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  if (0 < (int)uVar4) {
    pvVar2 = GlobalAlloc(0x40,uVar4 * 2);
    pvVar3 = GlobalLock(pvVar2);
    param_1[0x20] = pvVar3;
  }
  param_1[0x1f] = uVar4;
  if (0 < (int)uVar4) {
    if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)param_2[0x20];
      puVar9 = (undefined4 *)param_1[0x20];
      for (uVar5 = (uVar4 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar4 = uVar4 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      return 0;
    }
    param_1[0xf] = 1;
    param_1[0x10] = 1;
    uVar4 = 0xffffffff;
    *param_1 = 100;
    param_1[4] = 400;
    *(undefined1 *)((int)param_1 + 0x17) = 1;
    *(undefined1 *)(param_1 + 6) = 7;
    *(undefined1 *)((int)param_1 + 0x19) = 0;
    *(undefined1 *)((int)param_1 + 0x1a) = 0;
    *(undefined1 *)((int)param_1 + 0x1b) = 0;
    param_1[0x19] = 0x3f800000;
    param_1[0x1a] = 0x3f800000;
    pcVar8 = "Arial";
    do {
      pcVar10 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar8 = pcVar10 + -uVar4;
    pcVar10 = (char *)(param_1 + 7);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x14] = 0;
    param_1[0x17] = 0x3f800000;
    param_1[0x16] = 0x3f800000;
    param_1[0x15] = 0x3f800000;
    param_1[0x18] = 0x3f800000;
    param_1[0x1b] = DAT_5df180b0;
    param_1[0x1c] = DAT_5df180b4;
    param_1[0x1d] = DAT_5df180b8;
    param_1[0x1e] = DAT_5df180bc;
    local_4 = DAT_5df1ac54;
    local_c = _DAT_5df1ac4c;
    local_8 = DAT_5df1ac50;
    FUN_5de29540(5);
    wcsncpy((wchar_t *)param_1[0x20],(wchar_t *)&local_c,5);
  }
  return 0;
}


