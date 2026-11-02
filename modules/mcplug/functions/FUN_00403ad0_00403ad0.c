/* Module: mcplug.dll
   Function: FUN_00403ad0
   Address: 00403ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00403ad0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 8) + 4))(*(int **)(param_1 + 8));
  InterlockedIncrement((LONG *)(param_1 + 0xc));
  return *(LONG *)(param_1 + 0xc);
}


