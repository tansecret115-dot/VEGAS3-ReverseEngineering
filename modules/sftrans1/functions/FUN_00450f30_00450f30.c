/* Module: sftrans1.dll
   Function: FUN_00450f30
   Address: 00450f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00450f30(undefined4 *param_1,undefined4 param_2)

{
  FUN_004909d0();
  *param_1 = &PTR_FUN_0055b384;
  param_1[0x12] = param_2;
  param_1[0xb] = &PTR_LAB_0055b378;
  return param_1;
}


