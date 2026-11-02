/* Module: vidcap30.exe
   Function: FUN_00404100
   Address: 00404100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404100(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    if (DAT_005ba514 != 0) {
      DAT_005ba514 = 0;
      DAT_005ba518 = 0;
    }
    return 1;
  }
  if (DAT_005ba514 != 0) {
    return 0;
  }
  DAT_005ba514 = param_1;
  DAT_005ba518 = param_2;
  return 1;
}


