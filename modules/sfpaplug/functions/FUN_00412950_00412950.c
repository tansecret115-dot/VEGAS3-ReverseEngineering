/* Module: sfpaplug.dll
   Function: FUN_00412950
   Address: 00412950
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00412950(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar1;
  return iVar1;
}


