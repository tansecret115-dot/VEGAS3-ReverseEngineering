/* Module: vidcap30.exe
   Function: FUN_0051dfd0
   Address: 0051dfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051dfd0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  if (*(int *)(param_1 + 0xb0) == 5) {
    *(uint *)(param_1 + 0xc) =
         (uint)((param_4 & 10) != 0) << 0xd | *(uint *)(param_1 + 0xc) & 0xffffdfff;
    FUN_0051d760(param_1,param_2,param_3,5,param_4);
  }
  return;
}


