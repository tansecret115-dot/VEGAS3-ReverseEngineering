/* Module: oggplug.dll
   Function: FUN_00435910
   Address: 00435910
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00435910(undefined4 *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_00435860(param_1);
    free(param_1);
  }
  return;
}


