/* Module: vidcap30.exe
   Function: FUN_0054c8c0
   Address: 0054c8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054c8c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0054c3e0(param_1,&DAT_005b89b4,param_2,param_3);
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 4;
  return;
}


