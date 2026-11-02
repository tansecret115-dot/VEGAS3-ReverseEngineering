/* Module: sfnetmedia.dll
   Function: FUN_00402420
   Address: 00402420
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402420(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar1;
  return iVar1;
}


