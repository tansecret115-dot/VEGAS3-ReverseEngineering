/* Module: sfcdi.dll
   Function: FUN_5bf18a80
   Address: 5bf18a80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf18a80(int param_1)

{
  return *(int *)(param_1 + *(int *)(param_1 + 0x3c) * 0x28 + 0x54) -
         *(int *)(param_1 + 0x58 + *(int *)(param_1 + 0x3c) * 0x28);
}


