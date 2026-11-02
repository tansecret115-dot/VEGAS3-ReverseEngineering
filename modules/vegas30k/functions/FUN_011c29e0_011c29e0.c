/* Module: vegas30k.dll
   Function: FUN_011c29e0
   Address: 011c29e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011c29e0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_LAB_011ec0ec;
  param_1[6] = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  return param_1;
}


