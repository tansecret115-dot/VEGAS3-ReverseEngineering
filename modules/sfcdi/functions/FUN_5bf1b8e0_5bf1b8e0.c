/* Module: sfcdi.dll
   Function: FUN_5bf1b8e0
   Address: 5bf1b8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf1b8e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  return iVar1;
}


