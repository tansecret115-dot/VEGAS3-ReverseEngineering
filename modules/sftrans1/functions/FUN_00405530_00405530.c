/* Module: sftrans1.dll
   Function: FUN_00405530
   Address: 00405530
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00405530(int *param_1,int param_2,int param_3)

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


