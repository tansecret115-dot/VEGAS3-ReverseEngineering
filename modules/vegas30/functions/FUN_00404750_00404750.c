/* Module: vegas30.exe
   Function: FUN_00404750
   Address: 00404750
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00404750(int param_1)

{
  if (param_1 == 0) {
    if (DAT_0064768c == &DAT_00404720) {
      FUN_004046b0(0,0,0);
      return 0;
    }
  }
  else {
    FUN_004046b0(&DAT_00404720,1000,0);
  }
  return param_1;
}


