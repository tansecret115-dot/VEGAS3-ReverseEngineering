/* Module: rnco3260.dll
   Function: FUN_636f1e20
   Address: 636f1e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_636f1e20(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *puVar1 = &PTR_LAB_637650b8;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_63765090;
  *puVar1 = &PTR_LAB_63765038;
  FUN_636f2b60((int)puVar1);
  return param_1;
}


