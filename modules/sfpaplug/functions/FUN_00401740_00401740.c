/* Module: sfpaplug.dll
   Function: FUN_00401740
   Address: 00401740
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401740(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar1;
  return iVar1;
}


