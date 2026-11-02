/* Module: vidcap30.exe
   Function: FUN_00490aa0
   Address: 00490aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00490aa0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  return iVar1;
}


