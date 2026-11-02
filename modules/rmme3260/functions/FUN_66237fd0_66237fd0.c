/* Module: rmme3260.dll
   Function: FUN_66237fd0
   Address: 66237fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66237fd0(int param_1,int *param_2)

{
  void *this;
  undefined4 uVar1;
  
  this = *(void **)(param_1 + 0x38);
  if (this == (void *)0x0) {
    return 0x80040009;
  }
  if (param_1 != 0x14) {
    uVar1 = FUN_66237cf0(this,param_1 + -0x10,param_2);
    return uVar1;
  }
  uVar1 = FUN_66237cf0(this,0,param_2);
  return uVar1;
}


