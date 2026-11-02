/* Module: vegas30.exe
   Function: FUN_005a1e30
   Address: 005a1e30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a1e30(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  return iVar1;
}


