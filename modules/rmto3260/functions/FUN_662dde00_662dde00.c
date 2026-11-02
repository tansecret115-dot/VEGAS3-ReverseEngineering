/* Module: rmto3260.dll
   Function: FUN_662dde00
   Address: 662dde00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_662dde00(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 1;
  *param_1 = &PTR_LAB_66307628;
  param_1[2] = 0;
  param_1[3] = 0;
  *puVar1 = &PTR_FUN_66306400;
  param_1[4] = puVar1;
  FUN_662ed450(param_1 + 5);
  *puVar1 = &PTR_LAB_66307600;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_663075e0;
  return param_1;
}


