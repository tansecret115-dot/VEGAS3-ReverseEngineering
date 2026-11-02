/* Module: mp3plug.dll
   Function: FUN_5f6e0d00
   Address: 5f6e0d00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6e0d00(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 4) != (void *)0x0) {
      free(*(void **)((int)param_1 + 4));
    }
    if (*(void **)((int)param_1 + 8) != (void *)0x0) {
      free(*(void **)((int)param_1 + 8));
    }
    if (*(void **)((int)param_1 + 0x14) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x14));
    }
    if (*(void **)((int)param_1 + 0x18) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x18));
    }
    if (*(void **)((int)param_1 + 0xc) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0xc));
    }
    if (*(void **)((int)param_1 + 0x10) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x10));
    }
    free(param_1);
  }
  return;
}


