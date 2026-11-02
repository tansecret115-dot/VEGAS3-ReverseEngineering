/* Module: vegas30k.dll
   Function: FUN_01155a40
   Address: 01155a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_01155a40(HWND param_1,int param_2)

{
  uint uVar1;
  HWND hWnd;
  HGLOBAL pvVar2;
  undefined4 *pMem;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  pvVar2 = GlobalAlloc(0x40,0x878);
  pMem = GlobalLock(pvVar2);
  hWnd = param_1;
  if (pMem != (undefined4 *)0x0) {
    SetWindowLongA(param_1,-0x15,(LONG)pMem);
    puVar4 = &DAT_011e7768;
    puVar5 = pMem;
    for (iVar3 = 0x116; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    pMem[0xe] = 0x42;
    pMem[0x70] = pMem + 0x116;
    puVar4 = &DAT_011e7300;
    puVar5 = pMem + 0x116;
    for (iVar3 = 0x108; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = pMem + 0x11;
    iVar3 = _SfList_CreateExZ_32(puVar4,4,0xffffffff,0xffffffff,2,0,0,0);
    if (-1 < iVar3) {
      param_1 = (HWND)0x0;
      iVar3 = _SfList_AllocItem_12(*puVar4,0x10,&param_1);
      if (-1 < iVar3) {
        param_1->unused = 0;
        param_1[1].unused = 0;
        param_1[2].unused = 0;
        param_1[3].unused = 0;
        pMem[0x14] = param_1;
        iVar3 = _SfList_InsertList_16(*puVar4,0xffffffff,0,0xffffffff);
        if (-1 < iVar3) {
          uVar1 = pMem[0x58];
          pMem[0x58] = uVar1 | 1;
          if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
            pMem[0x58] = uVar1 & 0xfffffffe;
          }
          uVar1 = pMem[0x58];
          pMem[0x58] = uVar1 & 0xffffffef;
          if ((*(uint *)(param_2 + 0x20) & 0x3000) != 0) {
            pMem[0x58] = uVar1 & 0xffffffef | 0x10;
          }
          uVar1 = pMem[0x58];
          pMem[0x58] = uVar1 & 0xffffffdf;
          if ((*(uint *)(param_2 + 0x20) & 0x800000) != 0) {
            pMem[0x58] = uVar1 & 0xffffffdf | 0x20;
          }
          if (((*(uint *)(param_2 + 0x20) & 0x20) != 0) && ((*(uint *)(param_2 + 0x20) & 0x50) == 0)
             ) {
            pMem[0x58] = pMem[0x58] | 4;
          }
          pMem[0x59] = (uint)*(ushort *)(param_2 + 0x20);
          pMem[0x46] = 0x81;
          pMem[0x2b] = 0;
          pMem[0x15] = 0xffff;
          FUN_011558e0(pMem,0);
          return pMem;
        }
        _SfList_DeleteList_16(*puVar4,0xffffffff,0xffffffff,0);
        if (-1 < iVar3) {
          return pMem;
        }
      }
      _SfList_DeleteList_16(*puVar4,0,0xffffffff,0);
      if (-1 < iVar3) {
        return pMem;
      }
    }
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
    SetWindowLongA(hWnd,-0x15,0);
  }
  return pMem;
}


