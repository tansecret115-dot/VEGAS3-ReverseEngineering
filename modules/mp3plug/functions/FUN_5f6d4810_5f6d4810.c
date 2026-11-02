/* Module: mp3plug.dll
   Function: FUN_5f6d4810
   Address: 5f6d4810
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d4810(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if ((void *)param_1[2] != (void *)0x0) {
      free((void *)param_1[2]);
    }
    if ((void *)param_1[3] != (void *)0x0) {
      free((void *)param_1[3]);
    }
    FUN_5f6d4720((undefined4 *)param_1[4],param_1[1] * *param_1);
    free(param_1);
  }
  return;
}


