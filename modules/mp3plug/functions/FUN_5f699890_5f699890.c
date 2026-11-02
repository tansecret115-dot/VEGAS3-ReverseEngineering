/* Module: mp3plug.dll
   Function: FUN_5f699890
   Address: 5f699890
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f699890(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 4))(*(int **)(param_1 + 0xc));
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


