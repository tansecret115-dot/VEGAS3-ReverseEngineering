/* Module: vegas30.exe
   Function: FUN_005fa4b0
   Address: 005fa4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005fa4b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar1;
  return iVar1;
}


