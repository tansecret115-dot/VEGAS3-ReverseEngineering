/* Module: wavplug.dll
   Function: FUN_5f386410
   Address: 5f386410
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f386410(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar1;
  return iVar1;
}


