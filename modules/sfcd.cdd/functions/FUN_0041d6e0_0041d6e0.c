/* Module: sfcd.cdd
   Function: FUN_0041d6e0
   Address: 0041d6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041d6e0(HSFCD__ *param_1,undefined4 *param_2,uint param_3)

{
  HGLOBAL pvVar1;
  undefined4 *pMem;
  int iVar2;
  undefined4 *puVar3;
  uint local_4;
  
  pvVar1 = GlobalAlloc(0x42,0x294);
  pMem = GlobalLock(pvVar1);
  if (pMem == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  pMem[0x6f] = FUN_0041d5d0;
  pMem[0x70] = FUN_0041d550;
  *(undefined4 **)(param_1 + 0x160) = pMem;
  iVar2 = FUN_0041c1a0(param_1,&local_4);
  if (iVar2 == 0) {
    puVar3 = pMem;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    pMem[0xd] = param_3 & 0x700;
    iVar2 = FUN_0041ce90(param_1);
    pMem[4] = 0x200;
  }
  pMem[0xe] = pMem[0xe] & ~local_4;
  if (iVar2 != 0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  return iVar2;
}


