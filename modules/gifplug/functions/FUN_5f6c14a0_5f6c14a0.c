/* Module: gifplug.dll
   Function: FUN_5f6c14a0
   Address: 5f6c14a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6c14a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar1;
  return iVar1;
}


