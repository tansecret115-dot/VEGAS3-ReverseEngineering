/* Module: vidcap30.exe
   Function: FUN_005220f0
   Address: 005220f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_005220f0(undefined4 *param_1,undefined4 param_2)

{
  FUN_00521db0(param_1);
  param_1[4] = &PTR_FUN_0059bce0;
  param_1[6] = param_2;
  *param_1 = &PTR_LAB_0059bcd0;
  param_1[1] = 0;
  return param_1;
}


