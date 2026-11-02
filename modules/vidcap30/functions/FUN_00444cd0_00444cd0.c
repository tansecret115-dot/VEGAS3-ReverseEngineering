/* Module: vidcap30.exe
   Function: FUN_00444cd0
   Address: 00444cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00444cd0(int param_1,int param_2,undefined4 param_3)

{
  FUN_0042f4b0(param_1,1);
  *(undefined4 *)(param_2 + 8) = param_3;
  **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 8;
  FUN_0042f5d0(param_1,1);
  return 0;
}


