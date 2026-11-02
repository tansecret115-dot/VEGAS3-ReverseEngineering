/* Module: sctplug.dll
   Function: FUN_00401480
   Address: 00401480
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401480(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar1;
  return iVar1;
}


