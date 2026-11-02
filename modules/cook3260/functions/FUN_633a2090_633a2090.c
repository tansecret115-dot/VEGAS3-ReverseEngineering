/* Module: cook3260.dll
   Function: FUN_633a2090
   Address: 633a2090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_633a2090(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_633a80a8;
  pvVar1 = operator_new(0x10);
  param_1[6] = pvVar1;
  return param_1;
}


