/* Module: rmbe3260.dll
   Function: FUN_660134d0
   Address: 660134d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_660134d0(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_66013450((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


