/* Module: sfs4rw.dll
   Function: FUN_0040e080
   Address: 0040e080
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040e080(void)

{
  int iVar1;
  
  iVar1 = FUN_004061d0(DAT_004a812c,DAT_004a8130);
  if (iVar1 == 0) {
    iVar1 = FUN_004061d0(DAT_004a812c,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return iVar1 + 0x261;
}


