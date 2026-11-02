/* Module: mp3plug.dll
   Function: FUN_5f6942a0
   Address: 5f6942a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6942a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  return iVar1;
}


