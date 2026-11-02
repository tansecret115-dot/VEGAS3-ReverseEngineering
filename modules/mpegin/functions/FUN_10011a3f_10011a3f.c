/* Module: mpegin.dll
   Function: FUN_10011a3f
   Address: 10011a3f
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_10011a3f(void)

{
  if ((DAT_1001c390 == 1) || ((DAT_1001c390 == 0 && (DAT_1001c394 == 1)))) {
    FUN_10011a78(0xfc);
    if (DAT_1001c554 != (code *)0x0) {
      (*DAT_1001c554)();
    }
    FUN_10011a78(0xff);
  }
  return;
}


