/* Module: sftrans1.dll
   Function: FUN_004de7f0
   Address: 004de7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004de7f0(undefined4 *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  undefined4 *pMem;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  undefined4 *puVar12;
  byte *pbVar13;
  uint local_c;
  uint local_8;
  char cVar11;
  
  uVar6 = param_2[8];
  iVar7 = *param_2 + (int)param_2;
  if ((uVar6 == 0) || (iVar7 == 0)) {
    return 0x80070057;
  }
  pvVar4 = GlobalAlloc(2,0x8000);
  pvVar5 = GlobalLock(pvVar4);
  *param_1 = pvVar5;
  if (param_1 == (undefined4 *)0x0) {
    uRam00000000 = 0;
    return 0x8007000e;
  }
  pvVar4 = GlobalAlloc(2,0x8000);
  pMem = GlobalLock(pvVar4);
  if (pMem == (undefined4 *)0x0) {
    pvVar4 = GlobalHandle((LPCVOID)*param_1);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle((LPCVOID)*param_1);
    GlobalFree(pvVar4);
    *param_1 = 0;
    return 0x8007000e;
  }
  puVar3 = (undefined4 *)*param_1;
  puVar12 = puVar3;
  for (iVar8 = 0x2000; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = 0xffffffff;
    puVar12 = puVar12 + 1;
  }
  puVar12 = pMem;
  for (iVar8 = 0x2000; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  uVar9 = 0;
  param_2 = (int *)0x8000;
  cVar11 = '\x01';
  if (uVar6 != 0) {
    pbVar13 = (byte *)(iVar7 + 1);
    do {
      iVar7 = (uint)(pbVar13[-1] >> 3) +
              ((pbVar13[1] & 0x1fffff8) * 0x20 + (*pbVar13 & 0x3ffffff8)) * 4;
      if (*(char *)(iVar7 + (int)puVar3) == -1) {
        *(char *)(iVar7 + (int)puVar3) = (char)uVar9;
        *(undefined1 *)(iVar7 + (int)pMem) = 1;
        param_2 = (int *)((int)param_2 + -1);
      }
      uVar9 = uVar9 + 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar9 < uVar6);
    if ((int)param_2 < 1) goto LAB_004dea6b;
  }
  do {
    cVar10 = cVar11 + '\x01';
    param_1 = (undefined4 *)0x0;
    do {
      local_c = 0;
      uVar6 = (uint)param_1;
      do {
        local_8 = 0;
        do {
          puVar1 = (undefined1 *)(uVar6 + (int)puVar3);
          if (cVar11 == puVar1[(int)pMem - (int)puVar3]) {
            if ((param_1 != (undefined4 *)0x0) && (*(char *)((uVar6 - 0x400) + (int)puVar3) == -1))
            {
              param_2 = (int *)((int)param_2 + -1);
              puVar1[-0x400] = *puVar1;
              *(char *)((uVar6 - 0x400) + (int)pMem) = cVar10;
            }
            if ((local_c != 0) && (*(char *)((uVar6 - 0x20) + (int)puVar3) == -1)) {
              param_2 = (int *)((int)param_2 + -1);
              puVar1[-0x20] = *puVar1;
              *(char *)((uVar6 - 0x20) + (int)pMem) = cVar10;
            }
            if ((local_8 != 0) && (*(char *)((uVar6 - 1) + (int)puVar3) == -1)) {
              uVar2 = *puVar1;
              *(char *)((uVar6 - 1) + (int)pMem) = cVar10;
              puVar1[-1] = uVar2;
              param_2 = (int *)((int)param_2 + -1);
            }
            if ((param_1 < 0x7c00) && (*(char *)(uVar6 + 0x400 + (int)puVar3) == -1)) {
              uVar2 = *puVar1;
              *(char *)(uVar6 + 0x400 + (int)pMem) = cVar10;
              *(undefined1 *)(uVar6 + 0x400 + (int)puVar3) = uVar2;
              param_2 = (int *)((int)param_2 + -1);
            }
            if ((local_c < 0x1f) && (*(char *)(uVar6 + 0x20 + (int)puVar3) == -1)) {
              uVar2 = *puVar1;
              *(char *)(uVar6 + 0x20 + (int)pMem) = cVar10;
              *(undefined1 *)(uVar6 + 0x20 + (int)puVar3) = uVar2;
              param_2 = (int *)((int)param_2 + -1);
            }
            if ((local_8 < 0x1f) && (*(char *)(uVar6 + 1 + (int)puVar3) == -1)) {
              uVar2 = *puVar1;
              *(char *)(uVar6 + 1 + (int)pMem) = cVar10;
              *(undefined1 *)(uVar6 + 1 + (int)puVar3) = uVar2;
              param_2 = (int *)((int)param_2 + -1);
            }
          }
          local_8 = local_8 + 1;
          uVar6 = uVar6 + 1;
        } while (local_8 < 0x20);
        local_c = local_c + 1;
      } while (local_c < 0x20);
      param_1 = (undefined4 *)((int)param_1 + 0x400);
    } while (param_1 < 0x8000);
    cVar11 = cVar10;
  } while (0 < (int)param_2);
LAB_004dea6b:
  pvVar4 = GlobalHandle(pMem);
  GlobalUnlock(pvVar4);
  pvVar4 = GlobalHandle(pMem);
  GlobalFree(pvVar4);
  return 0;
}


