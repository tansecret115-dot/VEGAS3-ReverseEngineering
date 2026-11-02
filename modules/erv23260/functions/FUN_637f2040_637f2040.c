/* Module: erv23260.dll
   Function: FUN_637f2040
   Address: 637f2040
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_637f2040(void)

{
  int iVar1;
  
  iVar1 = 0;
  DAT_638307e4 = DAT_638307e4 + 1;
  if (DAT_638307e4 == 1) {
    iVar1 = RGB3toYUV420Free();
    if (iVar1 == 0) {
      iVar1 = RGB3toYUV420Free();
    }
  }
  return iVar1 == 0;
}


