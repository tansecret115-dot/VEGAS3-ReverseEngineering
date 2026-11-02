/* Module: vfplugs.dll
   Function: FUN_00402080
   Address: 00402080
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402080(int *param_1,int param_2,int param_3)

{
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[8] = 1;
  (**(code **)(*param_1 + 0x30))(param_1 + 4);
  if (param_3 != 0) {
    param_1[6] = param_1[6] + param_3;
  }
  return param_2;
}


