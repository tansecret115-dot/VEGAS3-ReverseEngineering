/* Module: sfpaplug.dll
   Function: FUN_0043cf80
   Address: 0043cf80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043cf80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  return iVar1;
}


