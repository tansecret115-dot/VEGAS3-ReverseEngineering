/* Module: atrc3260.dll
   Function: FUN_68002170
   Address: 68002170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_68002170(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    thunk_FUN_68002440();
  }
  else if (param_2 == 1) {
    FUN_68002410(param_1,0);
    return 1;
  }
  return 1;
}


