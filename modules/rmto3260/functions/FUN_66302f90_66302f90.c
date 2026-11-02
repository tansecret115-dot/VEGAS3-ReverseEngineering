/* Module: rmto3260.dll
   Function: FUN_66302f90
   Address: 66302f90
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66302f90(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_66302c90((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


