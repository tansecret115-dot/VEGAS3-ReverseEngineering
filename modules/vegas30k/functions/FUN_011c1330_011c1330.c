/* Module: vegas30k.dll
   Function: FUN_011c1330
   Address: 011c1330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011c1330(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1[2] & 1U) == 0) {
    return 0x8004e001;
  }
  if ((param_1[2] & 2U) != 0) {
    (**(code **)(*param_1 + 0x3c))(param_1);
    (**(code **)(*param_1 + 0x40))(param_1,param_1,param_2);
    (**(code **)(*param_1 + 0x38))(param_1,param_1,param_2);
    return 0;
  }
  if ((int *)param_1[0x50] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x50] + 0x44))(param_2,param_3);
  }
  return 0;
}


