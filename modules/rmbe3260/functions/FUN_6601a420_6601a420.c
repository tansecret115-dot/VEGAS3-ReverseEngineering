/* Module: rmbe3260.dll
   Function: FUN_6601a420
   Address: 6601a420
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_6601a420(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_6601a3a0((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


