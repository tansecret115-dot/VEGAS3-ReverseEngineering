/* Module: rmto3260.dll
   Function: FUN_66303180
   Address: 66303180
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66303180(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_66303080((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


