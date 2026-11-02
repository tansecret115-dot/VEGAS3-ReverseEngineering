/* Module: rmbe3260.dll
   Function: FUN_6604f240
   Address: 6604f240
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_6604f240(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_6604f1c0((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


