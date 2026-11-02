/* Module: vidcap30.exe
   Function: FUN_00444150
   Address: 00444150
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00444150(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0042f4b0(param_1,1);
  if ((double)CONCAT44(param_4,param_3) != *(double *)(param_2 + 0x40)) {
    *(undefined4 *)(param_2 + 0x40) = param_3;
    *(undefined4 *)(param_2 + 0x44) = param_4;
    **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x80;
  }
  FUN_0042f5d0(param_1,1);
  return;
}


