/* Module: vidcap30.exe
   Function: FUN_00444200
   Address: 00444200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00444200(int param_1,int param_2,int param_3,int param_4)

{
  FUN_0042f4b0(param_1,1);
  if ((param_3 != *(int *)(param_2 + 0x50)) || (param_4 == *(int *)(param_2 + 0x54))) {
    *(int *)(param_2 + 0x50) = param_3;
    *(int *)(param_2 + 0x54) = param_4;
    **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x80;
  }
  FUN_0042f5d0(param_1,1);
  return;
}


