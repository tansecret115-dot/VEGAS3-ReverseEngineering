/* Module: extmondrv.dll
   Function: FUN_004213bf
   Address: 004213bf
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004213bf(void)

{
  int unaff_EBP;
  void *unaff_ESI;
  
  if (unaff_ESI != (void *)(unaff_EBP + -0x220)) {
    free(unaff_ESI);
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x240);
}


