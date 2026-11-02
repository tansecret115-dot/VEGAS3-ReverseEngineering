/* Module: sfppack3.dll
   Function: FUN_5cc60187
   Address: 5cc60187
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc60187(void)

{
  int unaff_EBP;
  void *unaff_EDI;
  
  if (unaff_EDI != (void *)(unaff_EBP + -0x220)) {
    free(unaff_EDI);
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x240);
}


