/* Module: aviplug.dll
   Function: FUN_5f93dfd0
   Address: 5f93dfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f93dfd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x18) = iVar1;
  return iVar1;
}


