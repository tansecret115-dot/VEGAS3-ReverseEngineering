/* Module: mp3plug.dll
   Function: FUN_5f6ce3a0
   Address: 5f6ce3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6ce3a0(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return 0;
  }
  FUN_5f6ce1b0((int)param_1);
  free(param_1);
  return 1;
}


