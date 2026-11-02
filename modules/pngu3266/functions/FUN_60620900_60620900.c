/* Module: pngu3266.dll
   Function: FUN_60620900
   Address: 60620900
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_60620900(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_60620600((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


