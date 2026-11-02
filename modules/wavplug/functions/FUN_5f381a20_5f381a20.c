/* Module: wavplug.dll
   Function: FUN_5f381a20
   Address: 5f381a20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f381a20(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar1;
  return iVar1;
}


