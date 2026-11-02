/* Module: vidcap30.exe
   Function: FUN_005494b0
   Address: 005494b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005494b0(int param_1,void *param_2)

{
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    free(param_2);
  }
  return;
}


