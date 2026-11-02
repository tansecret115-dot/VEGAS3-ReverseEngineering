/* Module: vidcap30.exe
   Function: FUN_00516ec0
   Address: 00516ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00516ec0(int param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  if (*(int *)(param_1 + 0x90) == 5) {
    *(uint *)(param_1 + 4) = (uint)((param_4 & 10) != 0) << 9 | *(uint *)(param_1 + 4) & 0xfffffdff;
    FUN_005163d0(param_1,param_2,param_3,5);
  }
  return;
}


