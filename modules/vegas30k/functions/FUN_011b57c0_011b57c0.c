/* Module: vegas30k.dll
   Function: FUN_011b57c0
   Address: 011b57c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011b57c0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *param_1 = &PTR_LAB_011eb67c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_3;
  param_1[4] = 0;
  if (param_3 != 0) {
    param_1[4] = param_2;
  }
  return;
}


