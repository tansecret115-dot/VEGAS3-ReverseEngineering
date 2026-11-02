/* Module: sfcdi.dll
   Function: FUN_5bf04610
   Address: 5bf04610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf04610(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(undefined1 *)(param_1 + 4) = param_6;
  return;
}


