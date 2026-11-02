/* Module: pngu3266.dll
   Function: thunk_FUN_60618b70
   Address: 60618cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall thunk_FUN_60618b70(int *param_1)

{
  LONG LVar1;
  
  if (*(LONG *)(*param_1 + -0xc) != -2000000000) {
    LVar1 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar1 < 1) {
      operator_delete((void *)(*param_1 + -0xc));
    }
    FUN_60618b30(param_1);
  }
  return;
}


