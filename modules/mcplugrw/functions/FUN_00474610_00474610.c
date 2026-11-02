/* Module: mcplugrw.dll
   Function: FUN_00474610
   Address: 00474610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00474610(int *param_1,undefined1 param_2,undefined1 *param_3,uint param_4)

{
  if (param_4 < 0xfffe) {
    FUN_004746a0(param_1,param_2);
    FUN_004746c0(param_1,param_4 + 2);
    for (; param_4 != 0; param_4 = param_4 - 1) {
      FUN_00474660(param_1,*param_3);
      param_3 = param_3 + 1;
    }
  }
  return;
}


