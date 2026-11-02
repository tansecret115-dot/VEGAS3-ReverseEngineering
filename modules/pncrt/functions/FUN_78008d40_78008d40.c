/* Module: pncrt.dll
   Function: FUN_78008d40
   Address: 78008d40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_78008d40(void)

{
  if ((DAT_78041e34 == 1) || ((DAT_78041e34 == 0 && (DAT_78041e38 == 1)))) {
    FUN_78008d80((undefined *)0xfc);
    if (DAT_78041e1c != (code *)0x0) {
      (*DAT_78041e1c)();
    }
    FUN_78008d80((undefined *)0xff);
  }
  return;
}


