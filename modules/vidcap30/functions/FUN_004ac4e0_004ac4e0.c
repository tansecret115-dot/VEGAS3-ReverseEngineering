/* Module: vidcap30.exe
   Function: FUN_004ac4e0
   Address: 004ac4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ac4e0(int param_1,int param_2)

{
  FUN_004ac530((int)(((longlong)(param_2 - *(int *)(param_1 + 0x54)) *
                     (longlong)*(int *)(param_1 + 0x58)) /
                    (longlong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44))));
  return;
}


