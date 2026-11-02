/* Module: wavplug.dll
   Function: FUN_5f381ef0
   Address: 5f381ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f381ef0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar1;
  return iVar1;
}


