/* Module: rmbe3260.dll
   Function: FUN_66013860
   Address: 66013860
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66013860(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_660137e0((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


