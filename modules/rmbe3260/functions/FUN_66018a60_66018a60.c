/* Module: rmbe3260.dll
   Function: FUN_66018a60
   Address: 66018a60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66018a60(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_660189e0((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


