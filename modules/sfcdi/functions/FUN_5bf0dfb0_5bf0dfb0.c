/* Module: sfcdi.dll
   Function: FUN_5bf0dfb0
   Address: 5bf0dfb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf0dfb0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  return iVar1;
}


