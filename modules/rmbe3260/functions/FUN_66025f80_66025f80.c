/* Module: rmbe3260.dll
   Function: FUN_66025f80
   Address: 66025f80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66025f80(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_66025f00((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


