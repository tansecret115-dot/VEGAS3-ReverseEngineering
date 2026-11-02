/* Module: dnet3260.dll
   Function: FUN_63052ce0
   Address: 63052ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_63052ce0(undefined4 *param_1)

{
  if (param_1[3] == 0) {
    param_1[1] = 1;
    FUN_63052e00(param_1,s_DLL_not_loaded_630551b0);
    return param_1[1];
  }
  FreeLibrary((HMODULE)*param_1);
  param_1[1] = 0;
  param_1[3] = 0;
  FUN_63052e00(param_1,&DAT_63055524);
  FUN_63052e70(param_1,&DAT_63055524);
  return param_1[1];
}


