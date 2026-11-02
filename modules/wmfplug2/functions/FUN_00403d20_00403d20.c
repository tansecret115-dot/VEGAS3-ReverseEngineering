/* Module: wmfplug2.dll
   Function: FUN_00403d20
   Address: 00403d20
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00403d20(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 4))(*(int **)(param_1 + 0xc));
  InterlockedIncrement((LONG *)(param_1 + 0x10));
  return *(LONG *)(param_1 + 0x10);
}


