/* Module: vegas30.exe
   Function: FUN_005ec620
   Address: 005ec620
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_005ec620(void)

{
  int iVar1;
  undefined1 *pMem;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (DAT_0065e0f8 != (undefined1 *)0x0) {
    return DAT_0065e0f8;
  }
  pvVar2 = GlobalAlloc(0x40,0x24);
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 == (LPVOID)0x0) {
    DAT_0065e0f8 = (undefined1 *)0x0;
    return (undefined1 *)0x0;
  }
  puVar4 = (undefined1 *)FUN_005eb9e0();
  if (puVar4 == (undefined1 *)0x0) {
    DAT_0065e0f8 = (undefined1 *)0x0;
    return (undefined1 *)0x0;
  }
  DAT_0065e0f8 = puVar4;
  *(undefined4 *)(puVar4 + 0x1c) = 0;
  if (((*(int *)(puVar4 + 0x14) == 0) || (iVar5 = FUN_004370a0(), iVar5 == -1)) ||
     (iVar1 = *(int *)(puVar4 + 0x14), FUN_00437060(iVar5), iVar1 + 0x14 + iVar5 * 0x1c == 0)) {
    for (puVar6 = *(undefined4 **)(puVar4 + 0x10); puVar6 != (undefined4 *)0x0;
        puVar6 = (undefined4 *)*puVar6) {
      if ((puVar6 != *(undefined4 **)(puVar4 + 0x14)) && (iVar5 = FUN_004370a0(), iVar5 != -1)) {
        FUN_00437060(iVar5);
        *(undefined4 **)(puVar4 + 0x14) = puVar6;
        if (puVar6 + iVar5 * 7 + 5 != (undefined4 *)0x0) goto LAB_005ec6f7;
        break;
      }
    }
    iVar5 = 0;
    puVar6 = (undefined4 *)FUN_004370e0();
    if (puVar6 == (undefined4 *)0x0) goto LAB_005ec704;
    *puVar6 = *(undefined4 *)(puVar4 + 0x10);
    *(undefined4 **)(puVar4 + 0x10) = puVar6;
    FUN_00437060(0);
    *(undefined4 **)(puVar4 + 0x14) = puVar6;
    iVar5 = 0;
    if (puVar6 == (undefined4 *)0xffffffec) goto LAB_005ec704;
  }
LAB_005ec6f7:
  iVar5 = FUN_00437040(*(undefined4 *)(puVar4 + 0xc));
LAB_005ec704:
  *(int *)(puVar4 + 0xc) = iVar5;
  pMem = DAT_0065e0f8;
  if (iVar5 == 0) {
    if (DAT_0065e0f8 != (undefined1 *)0x0) {
      FUN_005eba10();
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalFree(pvVar2);
    }
    DAT_0065e0f8 = (undefined1 *)0x0;
    return (undefined1 *)0x0;
  }
  *(int *)(iVar5 + 0xc) = iVar5;
  *(int *)(*(int *)(puVar4 + 0xc) + 0x10) = *(int *)(puVar4 + 0xc);
  *(int *)(*(int *)(puVar4 + 0xc) + 0x14) = *(int *)(puVar4 + 0xc);
  *(byte *)(*(int *)(puVar4 + 0xc) + 0x18) = *(byte *)(*(int *)(puVar4 + 0xc) + 0x18) | 2;
  *(byte *)(*(int *)(puVar4 + 0xc) + 0x18) = *(byte *)(*(int *)(puVar4 + 0xc) + 0x18) & 0xfe ^ 1;
  *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(puVar4 + 0xc);
  *puVar4 = 1;
  return DAT_0065e0f8;
}


