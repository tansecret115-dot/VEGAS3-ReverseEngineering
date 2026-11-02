/* Module: vegas30k.dll
   Function: FUN_01192040
   Address: 01192040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_01192040(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  *param_1 = &PTR_LAB_011ea888;
  param_1[1] = 0;
  param_1[3] = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
    param_1[2] = param_2;
    return param_1;
  }
  param_1[2] = param_3;
  return param_1;
}


