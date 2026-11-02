/* Module: vegas30k.dll
   Function: FUN_01057dbf
   Address: 01057dbf
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01057dbf(void)

{
  int unaff_EBP;
  void *unaff_ESI;
  
  if (unaff_ESI != (void *)(unaff_EBP + -0x220)) {
    free(unaff_ESI);
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x240);
}


