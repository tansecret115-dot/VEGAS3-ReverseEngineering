/* Module: ednt3260.dll
   Function: FUN_630f9590
   Address: 630f9590
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_630f9590(short param_1,short param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 + (int)param_1;
  if (0x7fff < iVar1) {
    return 0x7fff;
  }
  if (iVar1 < -0x8000) {
    iVar1 = -0x8000;
  }
  return iVar1;
}


