/* Module: g2plug.dll
   Function: FUN_5f83c970
   Address: 5f83c970
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f83c970(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  return iVar1;
}


