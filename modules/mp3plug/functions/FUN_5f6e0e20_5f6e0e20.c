/* Module: mp3plug.dll
   Function: FUN_5f6e0e20
   Address: 5f6e0e20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e0e20(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_5f6f4e30(*(void **)((int)param_1 + 0x14));
    FUN_5f6f6ee0(*(void **)((int)param_1 + 0x18));
    free(param_1);
  }
  return;
}


