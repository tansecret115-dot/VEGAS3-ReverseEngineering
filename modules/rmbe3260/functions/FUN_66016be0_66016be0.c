/* Module: rmbe3260.dll
   Function: FUN_66016be0
   Address: 66016be0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66016be0(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_66016b60((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


