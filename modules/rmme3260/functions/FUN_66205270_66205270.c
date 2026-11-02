/* Module: rmme3260.dll
   Function: FUN_66205270
   Address: 66205270
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66205270(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_662051f0((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


