/* Module: rv103260.dll
   Function: FUN_636a59f0
   Address: 636a59f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_636a59f0(undefined4 *param_1)

{
  if (param_1[3] == 0) {
    param_1[1] = 1;
    FUN_636a5b10(param_1,s_DLL_not_loaded_636a8318);
    return param_1[1];
  }
  FreeLibrary((HMODULE)*param_1);
  param_1[1] = 0;
  param_1[3] = 0;
  FUN_636a5b10(param_1,&DAT_636a840c);
  FUN_636a5b80(param_1,&DAT_636a840c);
  return param_1[1];
}


