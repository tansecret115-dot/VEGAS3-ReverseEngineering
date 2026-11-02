/* Module: mp3plug.dll
   Function: FUN_5f6e4570
   Address: 5f6e4570
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e4570(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x2c));
    free(*(void **)((int)param_1 + 0x28));
    free(param_1);
  }
  return;
}


