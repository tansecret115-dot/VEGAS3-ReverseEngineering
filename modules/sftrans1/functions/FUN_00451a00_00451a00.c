/* Module: sftrans1.dll
   Function: FUN_00451a00
   Address: 00451a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00451a00(undefined4 *param_1,undefined4 param_2)

{
  FUN_004a6950();
  *param_1 = &PTR_FUN_0055b574;
  param_1[0x12] = param_2;
  param_1[0xb] = &PTR_LAB_0055b568;
  return param_1;
}


