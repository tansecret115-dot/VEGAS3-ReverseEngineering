/* Module: encn3260.dll
   Function: FUN_66485fd0
   Address: 66485fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66485fd0(int param_1)

{
  int *this;
  void *this_00;
  undefined4 *this_01;
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  this = operator_new(0x40);
  if (this == (int *)0x0) {
    this = (int *)0x0;
  }
  else {
    FUN_664bd560(this);
    FUN_664bb2c0(this + 0xd);
    *this = (int)&PTR_FUN_664de0d0;
  }
  FUN_664bb5e0(this + 0xd,&DAT_664e24fc);
  this_00 = operator_new(0x28);
  if (this_00 == (void *)0x0) {
    this_01 = (undefined4 *)0x0;
  }
  else {
    this_01 = FUN_664be3d0(this_00,&DAT_664e24f4);
  }
  FUN_664be470(this_01,&DAT_664e24ec);
  FUN_664bd5f0(this,this_01,0);
  iVar1 = FUN_6648bad0(*(void **)(param_1 + 0x40),param_1 + -0x30);
  FUN_6648c6d0((void *)(param_1 + -0x30),this,iVar1);
  *(undefined4 *)(param_1 + 0x13e) = 0;
  (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  return 0;
}


