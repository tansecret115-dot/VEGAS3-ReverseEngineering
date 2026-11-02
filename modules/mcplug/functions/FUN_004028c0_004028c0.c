/* Module: mcplug.dll
   Function: FUN_004028c0
   Address: 004028c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004028c0(int param_1,undefined4 *param_2,uint param_3)

{
  int *piVar1;
  HGLOBAL pvVar2;
  LPVOID this;
  undefined4 *pMem;
  int iVar3;
  HANDLE unaff_EDI;
  int unaff_retaddr;
  
  piVar1 = (int *)0x0;
  if (*(int *)(param_1 + 0x1c) == 1) {
    param_3 = 4;
    piVar1 = &DAT_00487a94;
  }
  else if (*(int *)(param_1 + 0x1c) == 2) {
    param_3 = 0x10;
    piVar1 = &DAT_00487acc;
  }
  if (((((DAT_00487a78 == 0) || (piVar1 == (int *)0x0)) || (DAT_00487a70 == 0)) ||
      ((DAT_00487a74 == 0 || (*piVar1 == 0)))) ||
     ((piVar1[2] == 0 || ((DAT_00487b04 < param_3 || (DAT_00487b04 == 0)))))) {
    return -0x7ffb1f7a;
  }
  pvVar2 = GlobalAlloc(0x40,0x130a0);
  this = GlobalLock(pvVar2);
  if ((this == (LPVOID)0x0) ||
     (pMem = (undefined4 *)FUN_00402c80(this,param_1,*(undefined4 *)(param_1 + 0x1c)),
     pMem == (undefined4 *)0x0)) {
    iVar3 = -0x7ff8fff2;
  }
  else {
    iVar3 = (**(code **)*pMem)(pMem,&DAT_00475be0,param_2);
    if (iVar3 < 0) {
      FUN_00402cd0(pMem);
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalFree(pvVar2);
      return iVar3;
    }
    (**(code **)(*(int *)*param_2 + 0x30))((int *)*param_2,param_1);
    if ((unaff_retaddr != 0) &&
       (iVar3 = (**(code **)(*(int *)*param_2 + 0x2c))((int *)*param_2,0,0x20), iVar3 < 0)) {
      (**(code **)(*(int *)*param_2 + 8))((int *)*param_2);
      *param_2 = 0;
      return iVar3;
    }
    if (unaff_EDI != (HANDLE)0xffffffff) {
      CloseHandle(unaff_EDI);
      return iVar3;
    }
  }
  return iVar3;
}


