/* Module: oggplug.dll
   Function: FUN_0040fdd7
   Address: 0040fdd7
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040fdd7(void)

{
  int unaff_EBP;
  void *unaff_EDI;
  
  if (unaff_EDI != (void *)(unaff_EBP + -0x220)) {
    free(unaff_EDI);
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x240);
}


