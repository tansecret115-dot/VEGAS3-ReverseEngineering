/* Module: vegas30.exe
   Function: FUN_005f5fa0
   Address: 005f5fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005f5fa0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar1;
  return iVar1;
}


