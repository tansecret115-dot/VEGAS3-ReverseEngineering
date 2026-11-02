/* Module: vidcap30.exe
   Function: FUN_004442f0
   Address: 004442f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004442f0(int param_1,int param_2,undefined4 param_3)

{
  FUN_0042f4b0(param_1,1);
  **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x80;
  *(undefined4 *)(param_2 + 0x58) = param_3;
  FUN_0042f5d0(param_1,1);
  return;
}


