/* Module: pncrt.dll
   Function: FUN_7800ab89
   Address: 7800ab89
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_7800ab89(void)

{
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    FUN_7800abc0(unaff_ESI,unaff_EDI,*(int *)(unaff_EBP + 0x10),*(undefined **)(unaff_EBP + 0x14));
  }
  return;
}


