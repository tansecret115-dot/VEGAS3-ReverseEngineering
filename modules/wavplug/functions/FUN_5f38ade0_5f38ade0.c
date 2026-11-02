/* Module: wavplug.dll
   Function: FUN_5f38ade0
   Address: 5f38ade0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f38ade0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  HGLOBAL hMem;
  LPVOID this;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = param_2;
  if (0 < param_2) {
    return 0x80004002;
  }
  hMem = GlobalAlloc(0x40,0x50);
  this = GlobalLock(hMem);
  if (this != (LPVOID)0x0) {
    piVar2 = (int *)FUN_5f382160(this,param_1,&param_2,iVar1);
    if (piVar2 != (int *)0x0) {
      uVar3 = param_3;
      (**(code **)*piVar2)(piVar2,&DAT_5f3d2690);
      (**(code **)(*piVar2 + 8))(piVar2);
      return uVar3;
    }
  }
  return 0x8007000e;
}


