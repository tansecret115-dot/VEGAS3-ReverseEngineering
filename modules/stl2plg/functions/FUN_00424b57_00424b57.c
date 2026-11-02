/* Module: stl2plg.dll
   Function: FUN_00424b57
   Address: 00424b57
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00424b57(void)

{
  int unaff_EBP;
  void *unaff_EDI;
  
  if (unaff_EDI != (void *)(unaff_EBP + -0x220)) {
    free(unaff_EDI);
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x240);
}


