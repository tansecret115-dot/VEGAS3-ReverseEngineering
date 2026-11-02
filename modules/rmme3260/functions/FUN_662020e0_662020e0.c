/* Module: rmme3260.dll
   Function: FUN_662020e0
   Address: 662020e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_662020e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_6626a4c8;
  param_1[1] = &PTR_LAB_6626a4b8;
  param_1[2] = &PTR_LAB_6626a4a0;
  param_1[3] = &PTR_LAB_6626a488;
  param_1[4] = &PTR_LAB_6626a470;
  FUN_6624fd80(param_1 + 7);
  *param_1 = &PTR_FUN_6626a438;
  param_1[1] = &PTR_LAB_6626a428;
  param_1[2] = &PTR_LAB_6626a410;
  param_1[3] = &PTR_LAB_6626a3f8;
  param_1[4] = &PTR_LAB_6626a3e0;
  param_1[5] = 0;
  piVar1 = FUN_66209220();
  param_1[6] = piVar1;
  param_1[0xb] = 0;
  return param_1;
}


