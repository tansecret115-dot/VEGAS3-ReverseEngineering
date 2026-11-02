/* Module: vegas30.exe
   Function: FUN_005f9cd0
   Address: 005f9cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005f9cd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar1;
  return iVar1;
}


