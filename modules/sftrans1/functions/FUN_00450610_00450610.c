/* Module: sftrans1.dll
   Function: FUN_00450610
   Address: 00450610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00450610(undefined4 *param_1,undefined4 param_2)

{
  FUN_0046f020();
  *param_1 = &PTR_FUN_0055b1dc;
  param_1[0x12] = param_2;
  param_1[0xb] = &PTR_LAB_0055b1d0;
  return param_1;
}


