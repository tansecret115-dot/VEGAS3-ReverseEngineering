/* Module: rmbe3260.dll
   Function: FUN_6602e4f0
   Address: 6602e4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6602e4f0(int param_1,undefined4 *param_2)

{
  void *this;
  int *piVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0x80004005;
  }
  this = operator_new(0x24);
  if (this == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_6602ea00(this,*(undefined4 *)(param_1 + 8),*(undefined4 **)(param_1 + 0xc));
  }
  *param_2 = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    return 0;
  }
  return 0x8007000e;
}


