/* Module: erv13260.dll
   Function: FUN_63602d70
   Address: 63602d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_63602d70(undefined4 *param_1)

{
  if (param_1[3] == 0) {
    param_1[1] = 1;
    FUN_63602e90(param_1,s_DLL_not_loaded_63606bd8);
    return param_1[1];
  }
  FreeLibrary((HMODULE)*param_1);
  param_1[1] = 0;
  param_1[3] = 0;
  FUN_63602e90(param_1,&DAT_6362332c);
  FUN_63602f00(param_1,&DAT_6362332c);
  return param_1[1];
}


