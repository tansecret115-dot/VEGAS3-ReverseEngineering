/* Module: mp3plug.dll
   Function: FUN_5f693000
   Address: 5f693000
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f693000(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 4))(*(int **)(param_1 + 0xc));
  InterlockedIncrement((LONG *)(param_1 + 0x10));
  return *(LONG *)(param_1 + 0x10);
}


