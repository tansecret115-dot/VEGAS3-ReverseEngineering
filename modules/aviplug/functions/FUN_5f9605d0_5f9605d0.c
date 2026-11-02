/* Module: aviplug.dll
   Function: FUN_5f9605d0
   Address: 5f9605d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f9605d0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  HGLOBAL pvVar1;
  int *pMem;
  int iVar2;
  uint uVar3;
  LPVOID pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *puVar8;
  code *pcVar9;
  int *piVar10;
  
  pcVar9 = GlobalAlloc_exref;
  pvVar1 = GlobalAlloc(0x42,0x48);
  pMem = GlobalLock(pvVar1);
  if (pMem == (int *)0x0) {
    return 0x8007000e;
  }
  piVar10 = (int *)0x1;
  iVar7 = *param_3;
  iVar2 = ICOpen(0x63646976,iVar7);
  *pMem = iVar2;
  if (iVar2 == 0) goto LAB_5f9607ab;
  iVar2 = ICSendMessage(iVar2,0x4004,unaff_EBP,0);
  if ((iVar2 == 0) || (0x400 < iVar2)) {
    iVar7 = *pMem;
  }
  else {
    uVar3 = iVar2 + 0x100;
    if (0x3ff < (int)uVar3) {
      uVar3 = 0x400;
    }
    pvVar1 = GlobalAlloc(0x42,uVar3);
    pvVar4 = GlobalLock(pvVar1);
    pMem[1] = (int)pvVar4;
    if (pvVar4 == (LPVOID)0x0) {
      iVar7 = *pMem;
      goto LAB_5f9606fb;
    }
    uVar5 = ICSendMessage(*pMem,0x4004,iVar7,pvVar4);
    if ((int)uVar5 < 0) {
      uVar5 = -uVar5 & 0xffff | 0xc0100000;
LAB_5f960693:
      pcVar9 = GlobalAlloc_exref;
      if ((int)uVar5 < 0) {
        ICClose(*pMem);
        pvVar1 = GlobalHandle(pMem);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle(pMem);
        GlobalFree(pvVar1);
        return uVar5;
      }
    }
    else if (uVar5 != 0) {
      uVar5 = uVar5 & 0xffff | 0x100000;
      goto LAB_5f960693;
    }
    pMem[2] = 0x40;
    pMem[3] = 1;
    pMem[5] = 0x63646976;
    pMem[6] = *param_3;
    pvVar1 = (HGLOBAL)(*pcVar9)(2,uVar3);
    puVar6 = GlobalLock(pvVar1);
    pMem[8] = (int)puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      iVar7 = *pMem;
LAB_5f9606fb:
      ICClose(iVar7);
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
      return 0x8007000e;
    }
    puVar8 = (undefined4 *)pMem[1];
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    iVar2 = ftol();
    pMem[0xc] = iVar2;
    iVar2 = param_3[3] + (param_3[3] >> 0x1f & 7U);
    pMem[0xd] = (int)((iVar2 >> 3) + (iVar2 >> 0x1f & 0x3ffU)) >> 10;
    pMem[0xe] = param_3[1] * 100;
    iVar7 = ICSeqCompressFrameStart(pMem + 2,iVar7);
    if (iVar7 != 0) {
      *piVar10 = pMem[1];
      *unaff_ESI = pMem;
      return 0;
    }
    iVar7 = *pMem;
  }
  ICClose(iVar7);
LAB_5f9607ab:
  pvVar1 = GlobalHandle(pMem);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(pMem);
  GlobalFree(pvVar1);
  return 0x80004005;
}


