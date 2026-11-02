/* Module: vegas30k.dll
   Function: FUN_011ba7a0
   Address: 011ba7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011ba7a0(undefined4 *param_1,int *param_2)

{
  *param_1 = &PTR_LAB_011eb9dc;
  param_1[1] = 0;
  param_1[2] = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = param_2;
  return param_1;
}


