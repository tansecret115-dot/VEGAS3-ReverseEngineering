/* Module: mcplugrw.dll
   Function: FUN_00448a60
   Address: 00448a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00448a60(int param_1)

{
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x1000;
  return;
}


