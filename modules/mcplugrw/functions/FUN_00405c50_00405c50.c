/* Module: mcplugrw.dll
   Function: FUN_00405c50
   Address: 00405c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405c50(int param_1,uint param_2)

{
  if (param_2 <= *(uint *)(param_1 + 0x1cc)) {
    return *(undefined4 *)(param_1 + 0x17c + (*(uint *)(param_1 + 0x1cc) - param_2) * 4);
  }
  return 0;
}


