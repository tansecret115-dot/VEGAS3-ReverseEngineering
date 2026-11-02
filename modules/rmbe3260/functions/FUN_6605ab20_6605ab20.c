/* Module: rmbe3260.dll
   Function: FUN_6605ab20
   Address: 6605ab20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6605ab20(int param_1,undefined4 param_2)

{
  int iVar1;
  void *this;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + -0x10) + 0x2c))(param_1 + -0x10,param_2,&local_8,&local_c)
  ;
  if (iVar1 < 0) {
    this = operator_new(0xc);
    if (this == (void *)0x0) {
      local_8 = 0;
    }
    else {
      local_8 = FUN_6605b3a0(this,param_2);
    }
    FUN_6605c550((void *)(param_1 + 0x20),local_8);
  }
  return 0;
}


