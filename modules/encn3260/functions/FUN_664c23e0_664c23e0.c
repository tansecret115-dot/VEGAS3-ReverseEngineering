/* Module: encn3260.dll
   Function: FUN_664c23e0
   Address: 664c23e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_664c23e0(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_664c1fb0((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


