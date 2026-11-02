/* Module: rmbe3260.dll
   Function: FUN_66026d30
   Address: 66026d30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66026d30(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_66026cb0((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


