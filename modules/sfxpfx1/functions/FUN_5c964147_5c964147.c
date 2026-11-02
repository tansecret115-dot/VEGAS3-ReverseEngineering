/* Module: sfxpfx1.dll
   Function: FUN_5c964147
   Address: 5c964147
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c964147(void)

{
  int unaff_EBP;
  void *unaff_EDI;
  
  if (unaff_EDI != (void *)(unaff_EBP + -0x220)) {
    free(unaff_EDI);
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x240);
}


