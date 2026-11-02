/* Module: rmme3260.dll
   Function: FUN_6622da30
   Address: 6622da30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6622da30(int *param_1,undefined4 *param_2)

{
  void *this;
  int *piVar1;
  
  this = operator_new(0x20);
  if (this == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_6622dad0(this,param_1,param_1[3]);
  }
  *param_2 = piVar1;
  if (piVar1 == (int *)0x0) {
    return 0x8007000e;
  }
  (**(code **)(*piVar1 + 4))(piVar1);
  return 0;
}


