/* Module: vegas30k.dll
   Function: FUN_01160110
   Address: 01160110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 *
FUN_01160110(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  param_1[1] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_4;
  *param_1 = 1;
  param_1[7] = param_5;
  param_1[8] = param_6;
  return param_1 + 9;
}


