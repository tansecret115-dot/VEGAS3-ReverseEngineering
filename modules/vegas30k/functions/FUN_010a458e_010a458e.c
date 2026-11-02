/* Module: vegas30k.dll
   Function: FUN_010a458e
   Address: 010a458e
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010a458e(void)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  
  iVar1 = FUN_010a3fd0(unaff_ESI,unaff_EBP,unaff_EBX);
  if (iVar1 != -1) {
    FUN_010a44e4();
    return;
  }
  return;
}


