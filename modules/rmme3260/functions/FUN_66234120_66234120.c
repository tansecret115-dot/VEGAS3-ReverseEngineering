/* Module: rmme3260.dll
   Function: FUN_66234120
   Address: 66234120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66234120(int param_1,undefined4 *param_2)

{
  void *this;
  undefined4 *puVar1;
  
  this = operator_new(0x14);
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)FUN_662347a0(this,param_1 + -8);
  }
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  (**(code **)*puVar1)(puVar1,&DAT_6626ac38,param_2);
  FUN_66250b60((void *)(param_1 + 0x18),*param_2);
  (**(code **)(*(int *)*param_2 + 4))((int *)*param_2);
  return 0;
}


