/* Module: rmbe3260.dll
   Function: FUN_6602bad0
   Address: 6602bad0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_6602bad0(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_6602ba50((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


