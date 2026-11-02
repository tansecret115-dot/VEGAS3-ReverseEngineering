/* Module: vegas30k.dll
   Function: FUN_01031590
   Address: 01031590
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01031590(void)

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


