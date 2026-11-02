/* Module: rmbe3260.dll
   Function: FUN_66018ea0
   Address: 66018ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66018ea0(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_66018e20((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


