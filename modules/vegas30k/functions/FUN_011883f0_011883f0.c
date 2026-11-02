/* Module: vegas30k.dll
   Function: FUN_011883f0
   Address: 011883f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011883f0(undefined4 *param_1,undefined4 param_2)

{
  FUN_01199130(param_2);
  *param_1 = &PTR_LAB_011ea654;
  param_1[0x12e] = 0;
  param_1[0x184] = 4;
  FUN_01199490();
  param_1[0x197] = 0;
  param_1[0x183] = 1;
  return param_1;
}


