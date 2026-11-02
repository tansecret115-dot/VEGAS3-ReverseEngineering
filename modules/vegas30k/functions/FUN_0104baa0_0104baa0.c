/* Module: vegas30k.dll
   Function: FUN_0104baa0
   Address: 0104baa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0104baa0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30) + 1;
  *(int *)(param_1 + 0x30) = iVar1;
  return iVar1;
}


