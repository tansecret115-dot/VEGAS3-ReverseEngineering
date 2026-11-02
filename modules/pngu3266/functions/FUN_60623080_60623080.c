/* Module: pngu3266.dll
   Function: FUN_60623080
   Address: 60623080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_60623080(undefined4 *param_1)

{
  if (param_1[3] == 0) {
    param_1[1] = 1;
    FUN_606231a0(param_1,s_DLL_not_loaded_60649760);
    return param_1[1];
  }
  FreeLibrary((HMODULE)*param_1);
  param_1[1] = 0;
  param_1[3] = 0;
  FUN_606231a0(param_1,&DAT_60649ac0);
  FUN_60623210(param_1,&DAT_60649ac0);
  return param_1[1];
}


