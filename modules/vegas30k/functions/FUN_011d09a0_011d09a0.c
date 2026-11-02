/* Module: vegas30k.dll
   Function: FUN_011d09a0
   Address: 011d09a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011d09a0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0xa9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xa9] = 0;
  }
  piVar1 = (int *)param_1[0xaa];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xaa] = 0;
  }
  param_1[0xab] = 0;
  if (param_2 != (undefined4 *)0x0) {
    if (param_2 != param_1) {
      (**(code **)*param_2)(param_2,&DAT_011d9a90,param_1 + 0xa9);
      (**(code **)*param_2)(param_2,&DAT_011d9aa0,param_1 + 0xaa);
      param_1[0xab] = 0;
      return 0;
    }
    param_1[0xab] = 1;
    return 0;
  }
  param_1[0xa2] = 0;
  param_1[0xa3] = 0x3ff00000;
  return 0;
}


