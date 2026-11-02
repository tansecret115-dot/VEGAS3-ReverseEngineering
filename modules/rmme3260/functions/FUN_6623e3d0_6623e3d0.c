/* Module: rmme3260.dll
   Function: FUN_6623e3d0
   Address: 6623e3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623e3d0(int param_1,HBITMAP param_2,undefined4 param_3)

{
  void *this;
  int *this_00;
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x54) + 0xb4));
  uVar1 = 0x80004005;
  this = operator_new(0x22c);
  if (this == (void *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = FUN_6623b2a0(this,*(int *)(param_1 + 0x7c),0);
  }
  DAT_6627cfec = 1;
  if (this_00 != (int *)0x0) {
    (**(code **)(*this_00 + 4))(this_00);
    uVar1 = FUN_6623e460(this_00,param_2,param_3);
    DAT_6627cfec = 0;
    (**(code **)(*this_00 + 8))(this_00);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x54) + 0xb4));
  return uVar1;
}


