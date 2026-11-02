/* Module: rmbe3260.dll
   Function: FUN_66050b40
   Address: 66050b40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66050b40(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_660509d0((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


