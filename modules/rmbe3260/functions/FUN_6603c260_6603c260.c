/* Module: rmbe3260.dll
   Function: FUN_6603c260
   Address: 6603c260
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6603c260(void)

{
  int iVar1;
  
  if (DAT_66075294 == 0) {
    iVar1 = FUN_6603c2a0();
    if (iVar1 == 0) {
      iVar1 = FUN_6603c670();
    }
    if (iVar1 == 0) {
      DAT_66075298 = 1;
      DAT_66075294 = 1;
    }
    return iVar1;
  }
  return 0;
}


