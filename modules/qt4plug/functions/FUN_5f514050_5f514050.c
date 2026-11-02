/* Module: qt4plug.dll
   Function: FUN_5f514050
   Address: 5f514050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5f514050(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *pMem;
  HGLOBAL pvVar3;
  HDC hdc;
  HDC pHVar4;
  HBITMAP pHVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *unaff_EDI;
  int *piVar9;
  undefined4 *puVar10;
  bool bVar11;
  SIZE_T dwBytes;
  HDC hdc_00;
  int *piVar12;
  undefined4 *puStack_28;
  
  *param_1 = 1;
  param_1[2] = DAT_5f5a2ad0;
  piVar12 = (int *)param_1[1];
  (**(code **)(*piVar12 + 0x34))(piVar12,param_1 + 6);
  iVar2 = (**(code **)(*(int *)param_1[1] + 0xc))((int *)param_1[1],&stack0xffffffb0);
  param_1[0xc] = 0;
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*unaff_EDI + 0x18))(unaff_EDI,&stack0xffffffb4);
    if (-1 < iVar2) {
      iVar2 = 4;
      bVar11 = true;
      piVar7 = &DAT_5f596330;
      piVar9 = (int *)&stack0xffffffac;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar11 = *piVar7 == *piVar9;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      } while (bVar11);
      param_1[0xc] = (uint)bVar11;
    }
    (**(code **)(*piVar12 + 8))(piVar12);
  }
  dwBytes = 0;
  pMem = (undefined4 *)
         (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],0,0,&stack0xffffffac,0,0,0);
  puStack_28 = pMem;
  if (-1 < (int)pMem) {
    pvVar3 = GlobalAlloc(0x42,dwBytes);
    pMem = GlobalLock(pvVar3);
    if (pMem == (undefined4 *)0x0) {
      return (undefined4 *)0x8007000e;
    }
    puStack_28 = (undefined4 *)
                 (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],pMem,dwBytes,0,0,0,0);
    if ((int)puStack_28 < 0) {
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem);
      GlobalFree(pvVar3);
      return puStack_28;
    }
  }
  hdc = GetDC((HWND)0x0);
  if (hdc == (HDC)0x0) {
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
    return (undefined4 *)0x80004005;
  }
  hdc_00 = hdc;
  pHVar4 = CreateCompatibleDC(hdc);
  param_1[0x13] = pHVar4;
  if (pHVar4 != (HDC)0x0) {
    puVar8 = (undefined4 *)&stack0xffffffa8;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    puVar8 = pMem;
    puVar10 = (undefined4 *)&stack0xffffffa8;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    pHVar5 = CreateDIBSection(hdc_00,(BITMAPINFO *)&stack0xffffffa8,0,(void **)(param_1 + 0x15),
                              (HANDLE)0x0,0);
    param_1[0x14] = pHVar5;
    ReleaseDC((HWND)0x0,hdc_00);
    if (param_1[0x14] != 0) {
      sVar1 = FUN_5f579430();
      if (sVar1 == 0) {
        FUN_5f57c0b0();
        FUN_5f581760();
        FUN_5f57c0d0();
        FUN_5f57c130();
        FUN_5f57c150();
        param_1[4] = pMem;
        uVar6 = (uint)*(ushort *)((int)pMem + 0xe) * pMem[1] + 0x1f;
        param_1[0x16] = (int)((uVar6 & 0xffffffe0) + ((int)uVar6 >> 0x1f & 7U)) >> 3;
        return (undefined4 *)0x0;
      }
      DeleteDC((HDC)param_1[0x13]);
      param_1[0x13] = 0;
      DeleteObject((HGDIOBJ)param_1[0x14]);
      param_1[0x14] = 0;
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem);
      GlobalFree(pvVar3);
      return (undefined4 *)0x8004e01f;
    }
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
    return puStack_28;
  }
  ReleaseDC((HWND)0x0,hdc);
  pvVar3 = GlobalHandle(pMem);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(pMem);
  GlobalFree(pvVar3);
  return (undefined4 *)0x80004005;
}


