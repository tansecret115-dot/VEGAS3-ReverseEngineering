/* Module: rv303260.dll
   Function: FUN_6720e8c0
   Address: 6720e8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6720e8c0(undefined4 *param_1)

{
  if (param_1[3] == 0) {
    param_1[1] = 1;
    FUN_6720e9e0(param_1,s_DLL_not_loaded_67215488);
    return param_1[1];
  }
  FreeLibrary((HMODULE)*param_1);
  param_1[1] = 0;
  param_1[3] = 0;
  FUN_6720e9e0(param_1,&DAT_67216748);
  FUN_6720ea50(param_1,&DAT_67216748);
  return param_1[1];
}


