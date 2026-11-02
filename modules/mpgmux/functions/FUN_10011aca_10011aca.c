/* Module: mpgmux.dll
   Function: FUN_10011aca
   Address: 10011aca
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_10011aca(void)

{
  if ((DAT_1001af8c == 1) || ((DAT_1001af8c == 0 && (DAT_1001af90 == 1)))) {
    FUN_10011b03(0xfc);
    if (DAT_1001b154 != (code *)0x0) {
      (*DAT_1001b154)();
    }
    FUN_10011b03(0xff);
  }
  return;
}


