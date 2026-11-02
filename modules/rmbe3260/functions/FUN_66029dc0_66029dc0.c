/* Module: rmbe3260.dll
   Function: FUN_66029dc0
   Address: 66029dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66029dc0(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    param_3 = param_3 + 4;
  }
  else {
    if (param_2 == 1) {
      return param_3;
    }
    if (param_2 == 2) {
      return param_3 + 8;
    }
  }
  return param_3;
}


