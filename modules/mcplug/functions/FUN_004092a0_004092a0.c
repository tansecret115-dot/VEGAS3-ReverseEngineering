/* Module: mcplug.dll
   Function: FUN_004092a0
   Address: 004092a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004092a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar1;
  return iVar1;
}


