/* Module: mp3plug.dll
   Function: FUN_5f6ce1b0
   Address: 5f6ce1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6ce1b0(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_5f6d1900(*(int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
    FUN_5f6cfb80(*(int **)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    FUN_5f6d2c10(*(void **)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(void **)(param_1 + 0x70) != (void *)0x0) {
      FUN_5f6d3ab0(*(void **)(param_1 + 0x70));
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    free(*(void **)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    FUN_5f6cd980(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  return;
}


