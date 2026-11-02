/* Module: vidcap30.exe
   Function: FUN_00511d0e
   Address: 00511d0e
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00511d0e(void)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  
  iVar1 = FUN_00511750(unaff_ESI,unaff_EBP,unaff_EBX);
  if (iVar1 != -1) {
    FUN_00511c64();
    return;
  }
  return;
}


