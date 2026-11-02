/* Module: encn3260.dll
   Function: FUN_664c1600
   Address: 664c1600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664c1600(int param_1,undefined4 *param_2)

{
  void *this;
  int *piVar1;
  
  this = operator_new(0x10);
  if (this != (void *)0x0) {
    piVar1 = FUN_664c1c50(this,*(int *)(param_1 + 0xc));
    *param_2 = piVar1;
    (**(code **)(*piVar1 + 4))(piVar1);
    return 0;
  }
  *param_2 = 0;
  (**(code **)(iRam00000000 + 4))(0);
  return 0;
}


