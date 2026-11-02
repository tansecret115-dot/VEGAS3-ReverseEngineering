/* Module: sfpaplug.dll
   Function: FUN_00402ee0
   Address: 00402ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00402ee0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  HGLOBAL pvVar4;
  LPVOID pMem;
  LPVOID pMem_00;
  uint uVar5;
  undefined4 *puVar6;
  int *piStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  int iStack_28;
  int *piStack_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar3 = param_2;
  uStack_18 = 4;
  uStack_1c = 0;
  puStack_20 = (undefined4 *)0x0;
  piStack_24 = (int *)0x0;
  iStack_28 = param_2;
  uStack_2c = param_1;
  piStack_34 = &param_2;
  uStack_30 = 0;
  iVar1 = acmStreamOpen();
  if (iVar1 == 0) {
    piStack_24 = (int *)(uint)*(ushort *)(iVar3 + 0xc);
    iVar2 = acmStreamSize(uStack_18,piStack_24,&uStack_1c,1);
    iVar1 = 0;
    if (iVar2 != 0) {
      uVar5 = 1;
      do {
        uStack_2c = (uint)*(ushort *)(iVar3 + 0xc);
        uStack_2c = ((*(int *)(iVar3 + 8) * uVar5 + -1 + uStack_2c) / uStack_2c) * uStack_2c;
        iVar1 = acmStreamSize(iStack_28,uStack_2c,&uStack_2c,1);
        if ((iVar1 == 0) && (*(ushort *)(param_1 + 0xc) < uStack_2c)) break;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x101);
      iVar1 = acmStreamSize(iStack_28,uStack_2c,&piStack_34,0);
      if (iVar1 != 0) goto LAB_004030a7;
    }
    if (uStack_2c < 0x8000) {
      iVar3 = (int)(0x8000 / (ulonglong)uStack_2c);
    }
    else {
      iVar3 = 1;
    }
    pvVar4 = GlobalAlloc(0x42,iVar3 * uStack_2c);
    pMem = GlobalLock(pvVar4);
    pvVar4 = GlobalAlloc(0x42,iVar3 * (int)piStack_34);
    pMem_00 = GlobalLock(pvVar4);
    if ((pMem_00 != (LPVOID)0x0) && (pMem != (LPVOID)0x0)) {
      puVar6 = puStack_20;
      for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      puStack_20[4] = iVar3 * uStack_2c;
      puStack_20[6] = iVar3 * uStack_2c;
      puStack_20[2] = uStack_2c;
      *puStack_20 = 0x54;
      puStack_20[1] = 0;
      puStack_20[3] = pMem;
      puStack_20[5] = 0;
      puStack_20[7] = pMem_00;
      puStack_20[8] = iVar3 * (int)piStack_34;
      puStack_20[9] = 0;
      puStack_20[10] = iVar3 * (int)piStack_34;
      iVar1 = acmStreamPrepareHeader(iStack_28,puStack_20,0);
      if (iVar1 == 0) {
        *piStack_24 = iStack_28;
        return 0;
      }
    }
    acmStreamClose(iStack_28,0);
    if (pMem != (LPVOID)0x0) {
      pvVar4 = GlobalHandle(pMem);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pMem);
      GlobalFree(pvVar4);
    }
    if (pMem_00 != (LPVOID)0x0) {
      pvVar4 = GlobalHandle(pMem_00);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pMem_00);
      GlobalFree(pvVar4);
    }
  }
LAB_004030a7:
  return -(uint)(iVar1 != 0) & 0x8004e01e;
}


