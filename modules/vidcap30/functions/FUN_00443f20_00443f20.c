/* Module: vidcap30.exe
   Function: FUN_00443f20
   Address: 00443f20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00443f20(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0042f4b0(param_1,1);
  *(undefined4 *)(param_2 + 0x30) = param_3;
  *(undefined4 *)(param_2 + 0x34) = param_4;
  **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x1000;
  FUN_0042f5d0(param_1,1);
  return;
}


