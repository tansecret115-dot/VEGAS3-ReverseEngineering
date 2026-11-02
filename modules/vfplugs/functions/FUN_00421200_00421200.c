/* Module: vfplugs.dll
   Function: FUN_00421200
   Address: 00421200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00421200(int param_1,int param_2)

{
  FUN_00421250((int)(((longlong)(param_2 - *(int *)(param_1 + 0x54)) *
                     (longlong)*(int *)(param_1 + 0x58)) /
                    (longlong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44))));
  return;
}


