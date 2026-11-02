/* Module: enlv3260.dll
   Function: FUN_661d3dc0
   Address: 661d3dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_661d3dc0(undefined4 *param_1)

{
  if (param_1[3] == 0) {
    param_1[1] = 1;
    FUN_661d3ee0(param_1,s_DLL_not_loaded_661d6290);
    return param_1[1];
  }
  FreeLibrary((HMODULE)*param_1);
  param_1[1] = 0;
  param_1[3] = 0;
  FUN_661d3ee0(param_1,&DAT_661d637c);
  FUN_661d3f50(param_1,&DAT_661d637c);
  return param_1[1];
}


