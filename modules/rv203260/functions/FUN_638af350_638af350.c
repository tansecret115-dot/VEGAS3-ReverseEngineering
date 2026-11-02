/* Module: rv203260.dll
   Function: FUN_638af350
   Address: 638af350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_638af350(undefined4 *param_1)

{
  if (param_1[3] == 0) {
    param_1[1] = 1;
    FUN_638af470(param_1,s_DLL_not_loaded_638b5398);
    return param_1[1];
  }
  FreeLibrary((HMODULE)*param_1);
  param_1[1] = 0;
  param_1[3] = 0;
  FUN_638af470(param_1,&DAT_638b6658);
  FUN_638af4e0(param_1,&DAT_638b6658);
  return param_1[1];
}


