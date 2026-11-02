/* Module: oggplug.dll
   Function: FUN_004415e0
   Address: 004415e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004415e0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
    }
    FUN_004415c0(param_1);
  }
  return 0;
}


