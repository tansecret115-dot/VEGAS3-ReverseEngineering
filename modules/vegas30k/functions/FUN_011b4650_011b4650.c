/* Module: vegas30k.dll
   Function: FUN_011b4650
   Address: 011b4650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011b4650(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  *param_1 = &PTR_LAB_011eb528;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = param_3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(param_3);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x89] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[2] = 0;
  param_1[0x94] = 0xffffffff;
  param_1[0x8a] = param_2;
  return param_1;
}


