/* Module: rmme3260.dll
   Function: FUN_66260560
   Address: 66260560
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66260560(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_66260bc0((void *)(param_1 + -4));
  return -(uint)(iVar1 != 0) & 0x80004005;
}


