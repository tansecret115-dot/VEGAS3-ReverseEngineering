/* Module: vegas30.exe
   Function: FUN_004df1f0
   Address: 004df1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004df1f0(int param_1)

{
  if (param_1 != 0) {
    return *(uint *)(param_1 + 0x10) >> 4 & 1;
  }
  return 0;
}


