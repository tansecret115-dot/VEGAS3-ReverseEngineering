/* Module: aviplug.dll
   Function: FUN_5f994e00
   Address: 5f994e00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f994e00(void)

{
  int iVar1;
  
  iVar1 = ftol();
  if (iVar1 < -0x800000) {
    return -0x800000;
  }
  if (0x7fffff < iVar1) {
    iVar1 = 0x7fffff;
  }
  return iVar1;
}


