/* Module: rmme3260.dll
   Function: FUN_66253460
   Address: 66253460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66253460(int param_1,char *param_2,undefined4 *param_3)

{
  void *this;
  int *piVar1;
  
  this = operator_new(0x18);
  if (this != (void *)0x0) {
    piVar1 = FUN_66253cb0(this,param_2,*(undefined4 **)(param_1 + 0xc));
    *param_3 = piVar1;
    (**(code **)(*piVar1 + 4))(piVar1);
    return 0;
  }
  *param_3 = 0;
  (**(code **)(iRam00000000 + 4))(0);
  return 0;
}


