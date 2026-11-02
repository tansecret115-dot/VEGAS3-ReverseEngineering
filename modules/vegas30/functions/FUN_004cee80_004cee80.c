/* Module: vegas30.exe
   Function: FUN_004cee80
   Address: 004cee80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004cee80(int param_1)

{
  **(uint **)(param_1 + 0x5d0) = **(uint **)(param_1 + 0x5d0) & 0xfffffdff;
  return;
}


