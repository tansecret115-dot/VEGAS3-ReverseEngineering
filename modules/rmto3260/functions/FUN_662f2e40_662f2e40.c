/* Module: rmto3260.dll
   Function: FUN_662f2e40
   Address: 662f2e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_662f2e40(undefined4 *param_1)

{
  if (param_1[3] == 0) {
    param_1[1] = 1;
    FUN_662f2f60(param_1,s_DLL_not_loaded_6630b464);
    return param_1[1];
  }
  FreeLibrary((HMODULE)*param_1);
  param_1[1] = 0;
  param_1[3] = 0;
  FUN_662f2f60(param_1,&DAT_66311c80);
  FUN_662f2fd0(param_1,&DAT_66311c80);
  return param_1[1];
}


