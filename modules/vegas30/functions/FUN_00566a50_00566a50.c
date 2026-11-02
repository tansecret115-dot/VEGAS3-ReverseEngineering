/* Module: vegas30.exe
   Function: FUN_00566a50
   Address: 00566a50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00566a50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  return iVar1;
}


