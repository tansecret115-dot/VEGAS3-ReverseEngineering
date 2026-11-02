/* Module: mcplug.dll
   Function: FUN_0040bcb0
   Address: 0040bcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040bcb0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
    }
    free(param_1);
    return 0;
  }
  return 0;
}


