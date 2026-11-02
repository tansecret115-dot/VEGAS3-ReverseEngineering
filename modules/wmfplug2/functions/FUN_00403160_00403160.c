/* Module: wmfplug2.dll
   Function: FUN_00403160
   Address: 00403160
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00403160(void *this,int param_1)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  undefined4 *pMem;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = param_1 * 0x38;
  iVar3 = *(int *)(iVar5 + *(int *)((int)this + 0x248));
  if (iVar3 == 1) {
    pvVar1 = GlobalAlloc(0x40,0x1f0);
    pvVar2 = GlobalLock(pvVar1);
    if ((pvVar2 != (LPVOID)0x0) && (pMem = FUN_00403b60(pvVar2,this), pMem != (undefined4 *)0x0)) {
      iVar3 = FUN_00403e30((int)pMem,(int)this + 0x34,param_1,
                           *(undefined4 *)(iVar5 + *(int *)((int)this + 0x248) + 8),
                           *(undefined4 *)((int)this + 0x250),
                           *(undefined4 *)(iVar5 + 0xc + *(int *)((int)this + 0x248)));
      if (-1 < iVar3) {
        *(undefined4 **)(iVar5 + 0x30 + *(int *)((int)this + 0x248)) = pMem;
        return iVar3;
      }
      FUN_00403c20(pMem);
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
LAB_00403216:
      *(undefined4 *)(iVar5 + 0x30 + *(int *)((int)this + 0x248)) = 0;
      return iVar3;
    }
  }
  else {
    if (iVar3 != 2) {
      return 0;
    }
    pvVar1 = GlobalAlloc(0x40,0x1a0);
    pvVar2 = GlobalLock(pvVar1);
    if ((pvVar2 != (LPVOID)0x0) && (piVar4 = FUN_004051e0(pvVar2,this), piVar4 != (int *)0x0)) {
      iVar3 = FUN_004060a0((int)piVar4,(int)this + 0x34,param_1,
                           *(undefined4 *)(iVar5 + *(int *)((int)this + 0x248) + 8),
                           *(undefined4 *)((int)this + 0x250),
                           *(undefined4 *)(iVar5 + 0xc + *(int *)((int)this + 0x248)));
      if (-1 < iVar3) {
        *(int **)(iVar5 + 0x30 + *(int *)((int)this + 0x248)) = piVar4;
        return iVar3;
      }
      (**(code **)(*piVar4 + 0x58))(1);
      goto LAB_00403216;
    }
  }
  return -0x7ff8fff2;
}


