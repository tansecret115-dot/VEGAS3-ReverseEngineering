/* Module: mp3plug.dll
   Function: FUN_5f6cf910
   Address: 5f6cf910
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6cf910(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if (param_1[4] == 1) {
      if (param_1[6] != 0) {
        iVar1 = 0;
        if (0 < *param_1) {
          do {
            FUN_5f6cef90(*(void **)(param_1[6] + iVar1 * 4));
            iVar1 = iVar1 + 1;
          } while (iVar1 < *param_1);
        }
        free((void *)param_1[6]);
      }
      FUN_5f6d4810((int *)param_1[5]);
    }
    free(param_1);
  }
  return;
}


