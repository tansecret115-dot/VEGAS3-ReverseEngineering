/* Module: rmto3260.dll
   Function: FUN_66301890
   Address: 66301890
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66301890(int *param_1)

{
  *param_1 = (int)&PTR_FUN_66308438;
  if (param_1[1] == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  FUN_66301ad0(param_1);
  return;
}


