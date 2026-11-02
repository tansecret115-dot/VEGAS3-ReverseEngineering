/* Module: rmbe3260.dll
   Function: FUN_660518e0
   Address: 660518e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_660518e0(undefined4 *param_1)

{
  if (param_1[3] == 0) {
    param_1[1] = 1;
    FUN_66051a00(param_1,s_DLL_not_loaded_6606f1b4);
    return param_1[1];
  }
  FreeLibrary((HMODULE)*param_1);
  param_1[1] = 0;
  param_1[3] = 0;
  FUN_66051a00(param_1,&DAT_66075004);
  FUN_66051a70(param_1,&DAT_66075004);
  return param_1[1];
}


