/* Module: pngu3266.dll
   Function: FUN_60620b30
   Address: 60620b30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_60620b30(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_60620a30((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


