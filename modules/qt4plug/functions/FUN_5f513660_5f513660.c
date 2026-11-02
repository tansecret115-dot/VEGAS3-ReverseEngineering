/* Module: qt4plug.dll
   Function: FUN_5f513660
   Address: 5f513660
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_5f513660(int param_1,int param_2,undefined4 param_3)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 local_4;
  
  local_4 = 0;
  if (2 < param_2) {
    return (int *)0x80004002;
  }
  if (param_2 == 0) {
    pvVar1 = GlobalAlloc(0x40,0x88);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 == (LPVOID)0x0) {
      return (int *)0x8007000e;
    }
    piVar3 = (int *)FUN_5f520070(pvVar2,param_1,&local_4,0,*(undefined4 *)(param_1 + 0x28));
  }
  else if (param_2 == 1) {
    pvVar1 = GlobalAlloc(0x40,0x88);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 == (LPVOID)0x0) {
      return (int *)0x8007000e;
    }
    piVar3 = FUN_5f5231b0(pvVar2,param_1,&local_4,1,*(undefined4 *)(param_1 + 0x28));
  }
  else {
    if (param_2 != 2) {
      return (int *)0x8007000e;
    }
    pvVar1 = GlobalAlloc(0x40,0x90);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 == (LPVOID)0x0) {
      return (int *)0x8007000e;
    }
    piVar3 = FUN_5f524190(pvVar2,param_1,&local_4,2,*(undefined4 *)(param_1 + 0x28));
  }
  if (piVar3 == (int *)0x0) {
    return (int *)0x8007000e;
  }
  piVar5 = piVar3;
  uVar4 = (**(code **)*piVar3)(piVar3,&DAT_5f59e070,param_3);
  (**(code **)(*piVar3 + 8))(piVar3,piVar5,uVar4);
  return piVar5;
}


