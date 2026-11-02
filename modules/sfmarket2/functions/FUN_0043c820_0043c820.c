/* Module: sfmarket2.dll
   Function: FUN_0043c820
   Address: 0043c820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043c820(void)

{
  HLOCAL unaff_EBX;
  int unaff_EBP;
  HLOCAL unaff_ESI;
  
  if (unaff_EBX != (HLOCAL)0x0) {
    LocalFree(unaff_EBX);
  }
  if (unaff_ESI != (HLOCAL)0x0) {
    LocalFree(unaff_ESI);
  }
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    (*DAT_004ab1a8)(*(int *)(unaff_EBP + -0x34));
  }
  return;
}


