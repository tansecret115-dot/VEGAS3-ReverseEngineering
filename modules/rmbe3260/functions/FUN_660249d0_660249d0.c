/* Module: rmbe3260.dll
   Function: FUN_660249d0
   Address: 660249d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_660249d0(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_66024950((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


