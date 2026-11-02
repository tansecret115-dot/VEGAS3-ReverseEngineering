/* Module: encn3260.dll
   Function: FUN_664d5910
   Address: 664d5910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664d5910(undefined4 *param_1)

{
  if (param_1[3] == 0) {
    param_1[1] = 1;
    FUN_664d5a30(param_1,s_DLL_not_loaded_664f044c);
    return param_1[1];
  }
  FreeLibrary((HMODULE)*param_1);
  param_1[1] = 0;
  param_1[3] = 0;
  FUN_664d5a30(param_1,&DAT_664f05c4);
  FUN_664d5aa0(param_1,&DAT_664f05c4);
  return param_1[1];
}


