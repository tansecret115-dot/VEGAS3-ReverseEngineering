/* Module: oggplug.dll
   Function: FUN_00437430
   Address: 00437430
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00437430(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((void *)param_1[2] != (void *)0x0) {
      free((void *)param_1[2]);
    }
    if ((void *)param_1[3] != (void *)0x0) {
      free((void *)param_1[3]);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}


