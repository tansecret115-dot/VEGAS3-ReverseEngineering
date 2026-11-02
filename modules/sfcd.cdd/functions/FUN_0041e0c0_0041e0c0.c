/* Module: sfcd.cdd
   Function: FUN_0041e0c0
   Address: 0041e0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041e0c0(undefined4 param_1,HSFCD__ *param_2)

{
  bool bVar1;
  HGLOBAL pvVar2;
  undefined4 *pMem;
  int iVar3;
  undefined4 *puVar4;
  undefined3 extraout_var;
  uint uVar5;
  undefined4 *puVar6;
  
  pvVar2 = GlobalAlloc(0x42,0x1cc);
  pMem = GlobalLock(pvVar2);
  if (pMem == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  pMem[0x6f] = FUN_0041e260;
  pMem[0x70] = FUN_0041e200;
  *(undefined4 **)(param_2 + 0x160) = pMem;
  iVar3 = FUN_0041e040(param_2);
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)FUN_0041dd50();
    puVar6 = pMem;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar5 = pMem[0xd] & 0x300;
    if ((uVar5 == 0) || (uVar5 == 0x300)) {
      pMem[0xd] = pMem[0xd] & 0xfffffcff;
      bVar1 = FUN_0041ddf0((undefined4 *)param_2);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        pMem[0xd] = pMem[0xd] | 0x100;
        FUN_0041ce90(param_2);
        return 0;
      }
      pMem[0xd] = pMem[0xd] | 0x200;
    }
    FUN_0041ce90(param_2);
    return 0;
  }
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  *(undefined4 *)(param_2 + 0x160) = 0;
  return iVar3;
}


