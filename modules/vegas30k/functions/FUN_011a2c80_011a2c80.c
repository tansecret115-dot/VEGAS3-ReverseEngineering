/* Module: vegas30k.dll
   Function: FUN_011a2c80
   Address: 011a2c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011a2c80(undefined4 *param_1,int *param_2)

{
  *param_1 = &PTR_LAB_011ead60;
  param_1[1] = 0;
  param_1[2] = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return param_1;
}


