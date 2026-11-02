/* Module: dsetup.dll
   Function: FUN_00403e9b
   Address: 00403e9b
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00403e9b(void)

{
  if ((DAT_0040aaa0 == 1) || ((DAT_0040aaa0 == 0 && (DAT_0040aaa4 == 1)))) {
    FUN_00403ed4(0xfc);
    if (DAT_0040abf4 != (code *)0x0) {
      (*DAT_0040abf4)();
    }
    FUN_00403ed4(0xff);
  }
  return;
}


