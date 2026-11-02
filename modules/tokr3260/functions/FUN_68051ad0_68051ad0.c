/* Module: tokr3260.dll
   Function: FUN_68051ad0
   Address: 68051ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_68051ad0(int param_1)

{
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    free(*(void **)(param_1 + 0x38));
  }
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    free(*(void **)(param_1 + 0x30));
  }
  if (*(void **)(param_1 + 0x2c) != (void *)0x0) {
    free(*(void **)(param_1 + 0x2c));
  }
  if (*(void **)(param_1 + 0x3c) != (void *)0x0) {
    free(*(void **)(param_1 + 0x3c));
  }
  if (*(void **)(param_1 + 0x34) != (void *)0x0) {
    free(*(void **)(param_1 + 0x34));
  }
  return;
}


