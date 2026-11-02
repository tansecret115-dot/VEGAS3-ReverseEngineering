/* Module: aviplug.dll
   Function: FUN_5f959c90
   Address: 5f959c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f959c90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_5f9d90b8;
  if (((code *)param_1[3] != (code *)0x0) && (param_1[4] != 0)) {
    (*(code *)param_1[3])(param_1[4],param_1[2],4,0,0);
    param_1[4] = 0;
    if (param_1[5] != 0) {
      (*(code *)param_1[3])(0,param_1[2],5,0,0);
      (*(code *)param_1[3])(0,param_1[2],6,0,0);
    }
    param_1[3] = 0;
  }
  if ((HMODULE)param_1[5] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[5]);
    param_1[5] = 0;
  }
  FUN_5f9593b0(param_1);
  return;
}


