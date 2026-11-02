/* Module: rnco3260.dll
   Function: FUN_636f3440
   Address: 636f3440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_636f3440(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 4;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_63765110;
  param_1[3] = param_1;
  *puVar1 = &PTR_LAB_63765228;
  FUN_636f1e20(param_1 + 0x19);
  *param_1 = &PTR_FUN_63765200;
  *puVar1 = &PTR_LAB_63765198;
  FUN_636f3a30((int)puVar1);
  return param_1;
}


