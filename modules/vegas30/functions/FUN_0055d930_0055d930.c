/* Module: vegas30.exe
   Function: FUN_0055d930
   Address: 0055d930
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055d930(LPCSTR param_1,int param_2)

{
  lstrcpynA(&DAT_00649cf8,param_1,0x104);
  DAT_00649dfb = 0;
  if (param_2 == 0) {
    param_2 = 1;
  }
  (&DAT_00649cf7)[param_2] = 0;
  return;
}


