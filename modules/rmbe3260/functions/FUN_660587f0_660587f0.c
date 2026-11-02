/* Module: rmbe3260.dll
   Function: FUN_660587f0
   Address: 660587f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660587f0(int *param_1)

{
  *param_1 = (int)&PTR_FUN_66068b18;
  if (param_1[1] == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  FUN_66058a30(param_1);
  return;
}


