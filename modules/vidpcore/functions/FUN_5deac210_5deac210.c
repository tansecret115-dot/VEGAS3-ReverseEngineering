/* Module: vidpcore.dll
   Function: FUN_5deac210
   Address: 5deac210
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5deac210(int param_1,int param_2)

{
  FUN_5deac260((int)(((longlong)(param_2 - *(int *)(param_1 + 0x54)) *
                     (longlong)*(int *)(param_1 + 0x58)) /
                    (longlong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44))));
  return;
}


