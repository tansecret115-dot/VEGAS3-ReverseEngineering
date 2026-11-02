/* Module: mp3plug.dll
   Function: FUN_5f6fb5d0
   Address: 5f6fb5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6fb5d0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
    }
    free(param_1);
  }
  return;
}


