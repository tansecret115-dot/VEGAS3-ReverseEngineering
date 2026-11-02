/* Module: qt4plug.dll
   Function: FUN_5f51b080
   Address: 5f51b080
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f51b080(void *this,int param_1)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  undefined4 *pMem;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = param_1 * 0x30;
  iVar3 = *(int *)(iVar5 + *(int *)((int)this + 0x34c));
  if (iVar3 == 1) {
    pvVar1 = GlobalAlloc(0x40,0x1f8);
    pvVar2 = GlobalLock(pvVar1);
    if ((pvVar2 != (LPVOID)0x0) && (pMem = FUN_5f51ba00(pvVar2,this), pMem != (undefined4 *)0x0)) {
      iVar3 = FUN_5f51c4e0((int)pMem,*(undefined4 *)((int)this + 0x11c),param_1,
                           *(undefined4 *)(iVar5 + 8 + *(int *)((int)this + 0x34c)));
      if (-1 < iVar3) {
        *(undefined4 **)(iVar5 + 0x28 + *(int *)((int)this + 0x34c)) = pMem;
        return iVar3;
      }
      FUN_5f51ba80(pMem);
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
LAB_5f51b128:
      *(undefined4 *)(iVar5 + 0x28 + *(int *)((int)this + 0x34c)) = 0;
      return iVar3;
    }
  }
  else {
    if (iVar3 != 2) {
      return 1;
    }
    pvVar1 = GlobalAlloc(0x40,0x1e0);
    pvVar2 = GlobalLock(pvVar1);
    if ((pvVar2 != (LPVOID)0x0) && (piVar4 = FUN_5f51d310(pvVar2,this), piVar4 != (int *)0x0)) {
      iVar3 = FUN_5f51e9f0(piVar4,*(undefined4 *)((int)this + 0x11c),param_1,
                           *(undefined4 *)(iVar5 + 8 + *(int *)((int)this + 0x34c)));
      if (-1 < iVar3) {
        *(int **)(iVar5 + 0x28 + *(int *)((int)this + 0x34c)) = piVar4;
        return iVar3;
      }
      (**(code **)(*piVar4 + 0x58))(1);
      goto LAB_5f51b128;
    }
  }
  return -0x7ff8fff2;
}


