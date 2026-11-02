/* Module: erv33260.dll
   Function: FUN_670721a0
   Address: 670721a0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_670721a0(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((DAT_6709a8cc != 0) && (DAT_6709a8cc = DAT_6709a8cc + -1, DAT_6709a8cc == 0)) {
    iVar1 = RGB3toYUV420Free();
    if (iVar1 == 0) {
      iVar1 = RGB3toYUV420Free();
    }
  }
  return iVar1 == 0;
}


