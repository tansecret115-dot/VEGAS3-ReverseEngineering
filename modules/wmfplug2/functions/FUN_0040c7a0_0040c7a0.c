/* Module: wmfplug2.dll
   Function: FUN_0040c7a0
   Address: 0040c7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040c7a0(int param_1,int param_2,undefined4 param_3)

{
  HGLOBAL hMem;
  LPVOID this;
  int *piVar1;
  undefined4 unaff_EDI;
  int iVar2;
  
  iVar2 = param_2;
  if (*(int *)(param_1 + 0x38) == 0) {
    if (3 < param_2) {
      return 0x80004002;
    }
  }
  else {
    if (1 < param_2) {
      return 0x80004002;
    }
    if (param_2 == 1) {
      iVar2 = 3;
    }
  }
  hMem = GlobalAlloc(0x40,0x54);
  this = GlobalLock(hMem);
  if (this != (LPVOID)0x0) {
    piVar1 = (int *)FUN_00411110(this,param_1,&param_2,iVar2,*(int *)(param_1 + 0x2c));
    if (piVar1 != (int *)0x0) {
      (**(code **)*piVar1)(piVar1,&DAT_004851e8,param_3);
      (**(code **)(*piVar1 + 8))(piVar1);
      return unaff_EDI;
    }
  }
  return 0x8007000e;
}


