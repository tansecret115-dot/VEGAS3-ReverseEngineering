/* Module: vegas30k.dll
   Function: FUN_0100f640
   Address: 0100f640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0100f640(undefined4 *param_1,int *param_2)

{
  param_1[1] = 1;
  param_1[2] = param_2;
  *param_1 = &PTR_LAB_011db564;
  (**(code **)(*param_2 + 4))(param_2);
  return param_1;
}


