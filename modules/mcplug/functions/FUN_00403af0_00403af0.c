/* Module: mcplug.dll
   Function: FUN_00403af0
   Address: 00403af0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00403af0(int param_1)

{
  InterlockedDecrement((LONG *)(param_1 + 0xc));
  (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8));
  return *(LONG *)(param_1 + 0xc);
}


