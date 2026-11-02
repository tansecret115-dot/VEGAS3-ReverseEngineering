/* Module: g2plug.dll
   Function: FUN_5f8049d0
   Address: 5f8049d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f8049d0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  HGLOBAL hMem;
  LPVOID this;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = param_2;
  if (3 < param_2) {
    return 0x80004002;
  }
  hMem = GlobalAlloc(0x40,0x4c);
  this = GlobalLock(hMem);
  if (this != (LPVOID)0x0) {
    piVar2 = (int *)FUN_5f811440(this,param_1,&param_2,iVar1,0);
    if (piVar2 != (int *)0x0) {
      uVar3 = param_3;
      (**(code **)*piVar2)(piVar2,&DAT_5f872fd8);
      (**(code **)(*piVar2 + 8))(piVar2);
      return uVar3;
    }
  }
  return 0x8007000e;
}


