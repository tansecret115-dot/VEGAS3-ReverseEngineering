/* Module: g2plug.dll
   Function: FUN_5f815e40
   Address: 5f815e40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f815e40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar1;
  return iVar1;
}


