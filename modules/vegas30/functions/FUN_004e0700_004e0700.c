/* Module: vegas30.exe
   Function: FUN_004e0700
   Address: 004e0700
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e0700(undefined4 *param_1)

{
  if ((param_1[1] != 0) && (DAT_0064b13c == 0)) {
    DrawDibClose(param_1[1]);
  }
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


