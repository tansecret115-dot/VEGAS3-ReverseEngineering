/* Module: stl2plg.dll
   Function: FUN_00401080
   Address: 00401080
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401080(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  return iVar1;
}


