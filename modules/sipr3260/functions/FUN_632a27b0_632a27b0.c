/* Module: sipr3260.dll
   Function: FUN_632a27b0
   Address: 632a27b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_632a27b0(undefined4 *param_1)

{
  if (param_1[3] == 0) {
    param_1[1] = 1;
    FUN_632a28d0(param_1,s_DLL_not_loaded_632a51d0);
    return param_1[1];
  }
  FreeLibrary((HMODULE)*param_1);
  param_1[1] = 0;
  param_1[3] = 0;
  FUN_632a28d0(param_1,&DAT_632a53c4);
  FUN_632a2940(param_1,&DAT_632a53c4);
  return param_1[1];
}


