/* Module: vidcap30.exe
   Function: FUN_00416600
   Address: 00416600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416600(void *param_1)

{
  if ((void *)DAT_005bc26c == param_1) {
    DAT_005bc26c = 0;
  }
  free(param_1);
  return;
}


