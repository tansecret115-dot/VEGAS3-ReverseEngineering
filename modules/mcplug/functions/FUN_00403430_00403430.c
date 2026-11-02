/* Module: mcplug.dll
   Function: FUN_00403430
   Address: 00403430
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00403430(void *this,int param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  undefined4 *pMem;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1 * 0xc;
  piVar1 = (int *)(*(int *)((int)this + 0x240) + iVar5);
  if (*piVar1 == 1) {
    pMem = (undefined4 *)piVar1[2];
    if (pMem == (undefined4 *)0x0) {
      pvVar2 = GlobalAlloc(0x40,0x78);
      pvVar3 = GlobalLock(pvVar2);
      if ((pvVar3 == (LPVOID)0x0) ||
         (pMem = (undefined4 *)FUN_00403a50(pvVar3,this), pMem == (undefined4 *)0x0)) {
        return -0x7ff8fff2;
      }
      *(undefined4 **)(iVar5 + 8 + *(int *)((int)this + 0x240)) = pMem;
    }
    iVar4 = FUN_00403b50((int)pMem,(int)this + 0x34,param_1,
                         *(undefined4 *)(iVar5 + *(int *)((int)this + 0x240) + 4),
                         *(undefined4 *)(iVar5 + *(int *)((int)this + 0x240)),(int)this + 0x248);
    if (iVar4 < 0) {
      if (pMem != (undefined4 *)0x0) {
        FUN_00403aa0(pMem);
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
      }
      *(undefined4 *)(iVar5 + 8 + *(int *)((int)this + 0x240)) = 0;
      return iVar4;
    }
  }
  else if (*piVar1 == 2) {
    piVar1 = (int *)piVar1[2];
    if (piVar1 == (int *)0x0) {
      pvVar2 = GlobalAlloc(0x40,0x98);
      pvVar3 = GlobalLock(pvVar2);
      if ((pvVar3 == (LPVOID)0x0) || (piVar1 = FUN_00404120(pvVar3,this), piVar1 == (int *)0x0)) {
        return -0x7ff8fff2;
      }
      *(int **)(iVar5 + 8 + *(int *)((int)this + 0x240)) = piVar1;
    }
    iVar4 = FUN_00404690((int)piVar1,(int)this + 0x34,param_1,
                         *(undefined4 *)(iVar5 + 4 + *(int *)((int)this + 0x240)),
                         *(undefined4 *)(iVar5 + *(int *)((int)this + 0x240)),(int)this + 0x248);
    if (iVar4 < 0) {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x58))(1);
      }
      *(undefined4 *)(iVar5 + 8 + *(int *)((int)this + 0x240)) = 0;
      return iVar4;
    }
  }
  return 0;
}


