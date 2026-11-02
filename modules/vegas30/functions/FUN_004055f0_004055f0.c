/* Module: vegas30.exe
   Function: FUN_004055f0
   Address: 004055f0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_004055f0(void)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(&DAT_0064b158);
  if (LVar1 < 0) {
    DAT_0064b158 = 0;
    LVar1 = 0;
  }
  return LVar1;
}


