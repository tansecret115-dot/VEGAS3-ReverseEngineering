/* Module: atrc3260.dll
   Function: FUN_68002e60
   Address: 68002e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_68002e60(undefined4 *param_1)

{
  if (param_1[3] == 0) {
    param_1[1] = 1;
    FUN_68002f80(param_1,s_DLL_not_loaded_680051a0);
    return param_1[1];
  }
  FreeLibrary((HMODULE)*param_1);
  param_1[1] = 0;
  param_1[3] = 0;
  FUN_68002f80(param_1,&DAT_680054d4);
  FUN_68002ff0(param_1,&DAT_680054d4);
  return param_1[1];
}


