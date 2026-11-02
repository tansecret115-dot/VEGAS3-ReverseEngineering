/* Module: vegas30.exe
   Function: FUN_004b2390
   Address: 004b2390
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004b2390(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar1;
  return iVar1;
}


