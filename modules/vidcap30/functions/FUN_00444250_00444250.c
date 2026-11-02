/* Module: vidcap30.exe
   Function: FUN_00444250
   Address: 00444250
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00444250(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  FUN_0042f4b0(param_1,1);
  *(undefined4 *)(param_2 + 0x68) = param_3;
  *(undefined4 *)(param_2 + 0x6c) = param_4;
  *(undefined4 *)(param_2 + 0x60) = param_5;
  *(undefined4 *)(param_2 + 100) = param_6;
  *(undefined4 *)(param_2 + 0x70) = param_7;
  *(undefined4 *)(param_2 + 0x74) = param_8;
  *(undefined4 *)(param_2 + 0x78) = param_9;
  **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x80;
  FUN_0042f5d0(param_1,1);
  return;
}


