/* Module: rmme3260.dll
   Function: FUN_66206a70
   Address: 66206a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66206a70(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_6626b4b0;
  param_1[1] = &PTR_LAB_6626a4b8;
  param_1[2] = &PTR_LAB_6626a4a0;
  param_1[3] = &PTR_LAB_6626a488;
  param_1[4] = &PTR_LAB_6626a470;
  FUN_6624fd80(param_1 + 7);
  *param_1 = &PTR_FUN_6626b498;
  param_1[1] = &PTR_LAB_6626b488;
  param_1[2] = &PTR_LAB_6626b470;
  param_1[3] = &PTR_LAB_6626b458;
  param_1[4] = &PTR_LAB_6626b440;
  param_1[5] = 0;
  piVar1 = FUN_662091d0();
  param_1[6] = piVar1;
  param_1[0xb] = 0;
  return param_1;
}


