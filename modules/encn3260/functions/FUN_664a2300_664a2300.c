/* Module: encn3260.dll
   Function: FUN_664a2300
   Address: 664a2300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a2300(int param_1,int *param_2)

{
  void *this;
  undefined4 uVar1;
  
  this = *(void **)(param_1 + 0x38);
  if (this == (void *)0x0) {
    return 0x80040009;
  }
  if (param_1 != 0x14) {
    uVar1 = FUN_664a2020(this,param_1 + -0x10,param_2);
    return uVar1;
  }
  uVar1 = FUN_664a2020(this,0,param_2);
  return uVar1;
}


