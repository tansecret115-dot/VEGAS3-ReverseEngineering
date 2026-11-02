/* Module: mpgmux.dll
   Function: FUN_10011554
   Address: 10011554
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_10011554(void)

{
  FUN_1000e721();
  if (DAT_1001a120 != 0xffffffff) {
    TlsFree(DAT_1001a120);
    DAT_1001a120 = 0xffffffff;
  }
  return;
}


