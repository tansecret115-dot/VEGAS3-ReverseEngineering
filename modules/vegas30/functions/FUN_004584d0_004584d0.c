/* Module: vegas30.exe
   Function: FUN_004584d0
   Address: 004584d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004584d0(int param_1)

{
  return *(uint *)(param_1 + 0x18) >> 8 & 1;
}


