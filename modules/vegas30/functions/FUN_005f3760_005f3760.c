/* Module: vegas30.exe
   Function: FUN_005f3760
   Address: 005f3760
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005f3760(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar1;
  return iVar1;
}


