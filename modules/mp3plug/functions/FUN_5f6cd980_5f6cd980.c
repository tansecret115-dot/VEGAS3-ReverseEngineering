/* Module: mp3plug.dll
   Function: FUN_5f6cd980
   Address: 5f6cd980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6cd980(int param_1)

{
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    FUN_5f6cf910(*(int **)(param_1 + 8));
  }
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    free(*(void **)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(void **)(param_1 + 0x44) != (void *)0x0) {
    free(*(void **)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return 1;
}


