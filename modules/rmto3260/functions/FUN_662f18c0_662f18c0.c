/* Module: rmto3260.dll
   Function: FUN_662f18c0
   Address: 662f18c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_662f18c0(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_662f1750((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


