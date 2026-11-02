/* Module: vegas30k.dll
   Function: FUN_0104b710
   Address: 0104b710
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0104b710(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  return iVar1;
}


