/* Module: mpegin.dll
   Function: FUN_100112b9
   Address: 100112b9
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_100112b9(void)

{
  FUN_10010e79();
  if (DAT_1001b410 != 0xffffffff) {
    TlsFree(DAT_1001b410);
    DAT_1001b410 = 0xffffffff;
  }
  return;
}


