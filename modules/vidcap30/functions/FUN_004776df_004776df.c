/* Module: vidcap30.exe
   Function: FUN_004776df
   Address: 004776df
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004776df(void)

{
  int unaff_EBP;
  void *unaff_ESI;
  
  if (unaff_ESI != (void *)(unaff_EBP + -0x220)) {
    free(unaff_ESI);
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x240);
}


