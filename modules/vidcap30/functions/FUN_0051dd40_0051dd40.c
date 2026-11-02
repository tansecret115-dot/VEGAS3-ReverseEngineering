/* Module: vidcap30.exe
   Function: FUN_0051dd40
   Address: 0051dd40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051dd40(int param_1,int param_2)

{
  FUN_0051dd90((int)(((longlong)(param_2 - *(int *)(param_1 + 0x28)) *
                     (longlong)*(int *)(param_1 + 0x2c)) /
                    (longlong)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10))));
  return;
}


