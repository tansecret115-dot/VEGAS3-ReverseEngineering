/* Module: erv33260.dll
   Function: FUN_67072170
   Address: 67072170
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_67072170(void)

{
  int iVar1;
  
  iVar1 = 0;
  DAT_6709a8cc = DAT_6709a8cc + 1;
  if (DAT_6709a8cc == 1) {
    iVar1 = RGB3toYUV420Free();
    if (iVar1 == 0) {
      iVar1 = FUN_670728d0();
    }
  }
  return iVar1 == 0;
}


