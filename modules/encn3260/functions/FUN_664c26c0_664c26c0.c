/* Module: encn3260.dll
   Function: FUN_664c26c0
   Address: 664c26c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_664c26c0(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_664c25c0((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


