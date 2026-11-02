/* Module: qt4plug.dll
   Function: FUN_5f519280
   Address: 5f519280
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f519280(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x114) + 1;
  *(int *)(param_1 + 0x114) = iVar1;
  return iVar1;
}


