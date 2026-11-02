/* Module: vegas30k.dll
   Function: FUN_011c1670
   Address: 011c1670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011c1670(int *param_1,undefined4 param_2)

{
  if ((param_1[3] & 1U) == 0) {
    return 0x8004e001;
  }
  if ((param_1[3] & 2U) != 0) {
    (**(code **)(*param_1 + 0x2c))(param_1);
    (**(code **)(*param_1 + 0x30))(param_1);
    (**(code **)(*param_1 + 0x28))(param_1);
    return 0;
  }
  param_1[0x5c] = 0;
  (*(code *)param_1[0xb])(param_1,0,param_1[0xc],param_2,0,*(undefined4 *)param_1[0x5a],0);
  return 0;
}


