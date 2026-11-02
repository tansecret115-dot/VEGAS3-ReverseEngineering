/* Module: mp3plug.dll
   Function: FUN_5f6d3d00
   Address: 5f6d3d00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d3d00(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 4) != (void *)0x0) {
      free(*(void **)((int)param_1 + 4));
    }
    free(param_1);
  }
  return;
}


