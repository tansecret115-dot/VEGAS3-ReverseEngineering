/* Module: wmfplug2.dll
   Function: FUN_00431600
   Address: 00431600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00431600(undefined4 *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  undefined4 *pMem;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  byte *pbVar13;
  uint local_c;
  uint local_8;
  char cVar12;
  
  uVar3 = param_2[8];
  iVar8 = *param_2 + (int)param_2;
  if ((uVar3 == 0) || (iVar8 == 0)) {
    return 0x80070057;
  }
  pvVar5 = GlobalAlloc(2,0x8000);
  pvVar6 = GlobalLock(pvVar5);
  *param_1 = pvVar6;
  if (param_1 == (undefined4 *)0x0) {
    uRam00000000 = 0;
    return 0x8007000e;
  }
  pvVar5 = GlobalAlloc(2,0x8000);
  pMem = GlobalLock(pvVar5);
  if (pMem == (undefined4 *)0x0) {
    pvVar5 = GlobalHandle((LPCVOID)*param_1);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle((LPCVOID)*param_1);
    GlobalFree(pvVar5);
    *param_1 = 0;
    return 0x8007000e;
  }
  puVar4 = (undefined4 *)*param_1;
  puVar7 = puVar4;
  for (iVar9 = 0x2000; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0xffffffff;
    puVar7 = puVar7 + 1;
  }
  puVar7 = pMem;
  for (iVar9 = 0x2000; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  uVar10 = 0;
  param_2 = (int *)0x8000;
  cVar12 = '\x01';
  if (uVar3 != 0) {
    pbVar13 = (byte *)(iVar8 + 1);
    do {
      iVar8 = (uint)(pbVar13[-1] >> 3) +
              ((pbVar13[1] & 0x1fffff8) * 0x20 + (*pbVar13 & 0x3ffffff8)) * 4;
      if (*(char *)(iVar8 + (int)puVar4) == -1) {
        *(char *)(iVar8 + (int)puVar4) = (char)uVar10;
        *(undefined1 *)(iVar8 + (int)pMem) = 1;
        param_2 = (int *)((int)param_2 + -1);
      }
      uVar10 = uVar10 + 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar10 < uVar3);
    if ((int)param_2 < 1) goto LAB_0043187b;
  }
  do {
    cVar11 = cVar12 + '\x01';
    param_1 = (undefined4 *)0x0;
    do {
      local_c = 0;
      puVar7 = param_1;
      do {
        local_8 = 0;
        do {
          puVar1 = (undefined1 *)((int)puVar7 + (int)puVar4);
          if (cVar12 == puVar1[(int)pMem - (int)puVar4]) {
            if ((param_1 != (undefined4 *)0x0) &&
               (*(char *)((int)(puVar7 + -0x100) + (int)puVar4) == -1)) {
              param_2 = (int *)((int)param_2 + -1);
              puVar1[-0x400] = *puVar1;
              *(char *)((int)(puVar7 + -0x100) + (int)pMem) = cVar11;
            }
            if ((local_c != 0) && (*(char *)((int)(puVar7 + -8) + (int)puVar4) == -1)) {
              param_2 = (int *)((int)param_2 + -1);
              puVar1[-0x20] = *puVar1;
              *(char *)((int)(puVar7 + -8) + (int)pMem) = cVar11;
            }
            if ((local_8 != 0) && (*(char *)((int)puVar7 + -1 + (int)puVar4) == -1)) {
              uVar2 = *puVar1;
              *(char *)((int)puVar7 + -1 + (int)pMem) = cVar11;
              puVar1[-1] = uVar2;
              param_2 = (int *)((int)param_2 + -1);
            }
            if ((param_1 < (undefined4 *)0x7c00) &&
               (*(char *)((int)(puVar7 + 0x100) + (int)puVar4) == -1)) {
              uVar2 = *puVar1;
              *(char *)((int)(puVar7 + 0x100) + (int)pMem) = cVar11;
              *(undefined1 *)((int)(puVar7 + 0x100) + (int)puVar4) = uVar2;
              param_2 = (int *)((int)param_2 + -1);
            }
            if ((local_c < 0x1f) && (*(char *)((int)(puVar7 + 8) + (int)puVar4) == -1)) {
              uVar2 = *puVar1;
              *(char *)((int)(puVar7 + 8) + (int)pMem) = cVar11;
              *(undefined1 *)((int)(puVar7 + 8) + (int)puVar4) = uVar2;
              param_2 = (int *)((int)param_2 + -1);
            }
            if ((local_8 < 0x1f) && (*(char *)((int)puVar7 + 1 + (int)puVar4) == -1)) {
              uVar2 = *puVar1;
              *(char *)((int)puVar7 + 1 + (int)pMem) = cVar11;
              *(undefined1 *)((int)puVar7 + 1 + (int)puVar4) = uVar2;
              param_2 = (int *)((int)param_2 + -1);
            }
          }
          local_8 = local_8 + 1;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        } while (local_8 < 0x20);
        local_c = local_c + 1;
      } while (local_c < 0x20);
      param_1 = param_1 + 0x100;
    } while (param_1 < (undefined4 *)0x8000);
    cVar12 = cVar11;
  } while (0 < (int)param_2);
LAB_0043187b:
  pvVar5 = GlobalHandle(pMem);
  GlobalUnlock(pvVar5);
  pvVar5 = GlobalHandle(pMem);
  GlobalFree(pvVar5);
  return 0;
}


