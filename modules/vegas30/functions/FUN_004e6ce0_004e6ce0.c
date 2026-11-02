/* Module: vegas30.exe
   Function: FUN_004e6ce0
   Address: 004e6ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e6ce0(void *param_1)

{
  if ((void *)DAT_0064cdfc == param_1) {
    DAT_0064cdfc = 0;
  }
  free(param_1);
  return;
}


