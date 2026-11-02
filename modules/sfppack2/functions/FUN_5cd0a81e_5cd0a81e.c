/* Module: sfppack2.dll
   Function: FUN_5cd0a81e
   Address: 5cd0a81e
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd0a81e(void)

{
  uint uVar1;
  undefined4 unaff_EBX;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  
  uVar1 = FUN_5cd0a260(unaff_ESI,unaff_EBP,unaff_EBX);
  if (uVar1 != 0xffffffff) {
    FUN_5cd0a774();
    return;
  }
  return;
}


