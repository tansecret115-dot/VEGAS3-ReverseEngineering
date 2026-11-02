/* Module: mp3plug.dll
   Function: FUN_5f6e1d60
   Address: 5f6e1d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6e1d60(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
      FUN_5f6f89b0(*(void **)((int)param_1 + 0x44));
    }
    if (*(void **)((int)param_1 + 0x48) != (void *)0x0) {
      FUN_5f6f89b0(*(void **)((int)param_1 + 0x48));
    }
    free(param_1);
  }
  return;
}


