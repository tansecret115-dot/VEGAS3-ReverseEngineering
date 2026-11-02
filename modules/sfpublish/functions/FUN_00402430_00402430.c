/* Module: sfpublish.dll
   Function: FUN_00402430
   Address: 00402430
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402430(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar1;
  return iVar1;
}


