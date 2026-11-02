/* Module: pngu3266.dll
   Function: FUN_6061cd10
   Address: 6061cd10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_6061cd10(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_6061ca90((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


