/* Module: vegas30.exe
   Function: FUN_00453e60
   Address: 00453e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453e60(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffbfff;
  FUN_00453cb0(param_1,param_2,param_3,1);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffff7fff;
  return;
}


