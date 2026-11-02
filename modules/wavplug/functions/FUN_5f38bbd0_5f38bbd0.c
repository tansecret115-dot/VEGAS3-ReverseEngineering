/* Module: wavplug.dll
   Function: FUN_5f38bbd0
   Address: 5f38bbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f38bbd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar1;
  return iVar1;
}


