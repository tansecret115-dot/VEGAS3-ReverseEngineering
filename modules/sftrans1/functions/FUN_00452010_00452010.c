/* Module: sftrans1.dll
   Function: FUN_00452010
   Address: 00452010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00452010(undefined4 *param_1,undefined4 param_2)

{
  FUN_004b1e10();
  *param_1 = &PTR_FUN_0055b688;
  param_1[0x12] = param_2;
  param_1[0xb] = &PTR_LAB_0055b67c;
  return param_1;
}


