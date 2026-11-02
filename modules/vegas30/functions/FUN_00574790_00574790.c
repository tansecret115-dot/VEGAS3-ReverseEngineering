/* Module: vegas30.exe
   Function: FUN_00574790
   Address: 00574790
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00574790(undefined4 param_1,int param_2)

{
  return *(uint *)(param_2 + 0xc) >> 2 & 1;
}


