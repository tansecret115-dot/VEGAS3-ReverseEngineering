/* Module: oggplug.dll
   Function: FUN_00440730
   Address: 00440730
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00440730(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((void *)param_1[1] != (void *)0x0) {
      free((void *)param_1[1]);
    }
    if ((void *)param_1[2] != (void *)0x0) {
      free((void *)param_1[2]);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


