/* Module: vegas30k.dll
   Function: FUN_011c1b10
   Address: 011c1b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011c1b10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = &PTR_LAB_011ebf38;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = param_2;
  if (param_2 == (undefined4 *)0x0) {
    param_1[3] = 0;
    return;
  }
  param_1[3] = *param_2;
  return;
}


