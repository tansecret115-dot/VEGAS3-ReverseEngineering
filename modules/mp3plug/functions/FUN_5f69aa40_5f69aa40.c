/* Module: mp3plug.dll
   Function: FUN_5f69aa40
   Address: 5f69aa40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f69aa40(int param_1)

{
  FUN_5f69a4e0(param_1);
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    free(*(void **)(param_1 + 0x28));
  }
  return;
}


