/* Module: mp3plug.dll
   Function: FUN_5f6ee4e0
   Address: 5f6ee4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6ee4e0(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_5f709f40(*(int *)(param_1 + 4));
    }
    FUN_5f6d97a0(param_1);
  }
  return;
}


