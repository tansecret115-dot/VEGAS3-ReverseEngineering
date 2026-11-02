/* Module: mp3plug.dll
   Function: FUN_5f687e10
   Address: 5f687e10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f687e10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80c) + 1;
  *(int *)(param_1 + 0x80c) = iVar1;
  return iVar1;
}


