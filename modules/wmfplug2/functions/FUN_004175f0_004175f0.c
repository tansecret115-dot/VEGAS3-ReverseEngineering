/* Module: wmfplug2.dll
   Function: FUN_004175f0
   Address: 004175f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004175f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar1;
  return iVar1;
}


