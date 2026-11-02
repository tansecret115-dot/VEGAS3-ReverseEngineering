/* Module: vidcap30.exe
   Function: FUN_00553c90
   Address: 00553c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00553c90(undefined4 param_1,uint param_2)

{
  FUN_00553c30(param_1,param_2 >> 8 & 0xff);
  FUN_00553c30(param_1,param_2 & 0xff);
  return;
}


