/* Module: rmme3260.dll
   Function: FUN_66204480
   Address: 66204480
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66204480(void)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_66204400((int *)&local_8);
  return local_8 & (iVar1 < 0) - 1;
}


