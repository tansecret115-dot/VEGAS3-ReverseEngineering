/* Module: mp3plug.dll
   Function: FUN_5f6e4a20
   Address: 5f6e4a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e4a20(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_5f6fefe0((void *)*param_1);
    free(param_1);
  }
  return;
}


