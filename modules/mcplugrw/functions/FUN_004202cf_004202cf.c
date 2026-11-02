/* Module: mcplugrw.dll
   Function: FUN_004202cf
   Address: 004202cf
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004202cf(void)

{
  int unaff_EBP;
  void *unaff_ESI;
  
  if (unaff_ESI != (void *)(unaff_EBP + -0x220)) {
    free(unaff_ESI);
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x240);
}


