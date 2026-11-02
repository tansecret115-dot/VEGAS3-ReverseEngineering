/* Module: mp3plug.dll
   Function: FUN_5f6d32b0
   Address: 5f6d32b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6d32b0(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x54) != 0)) {
    iVar1 = FUN_5f6e2c90(*(int *)(param_1 + 0x54));
    return iVar1;
  }
  return 0;
}


