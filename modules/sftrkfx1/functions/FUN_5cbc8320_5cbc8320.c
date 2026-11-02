/* Module: sftrkfx1.dll
   Function: FUN_5cbc8320
   Address: 5cbc8320
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbc8320(int param_1)

{
  if (param_1 != 0) {
    FUN_5cbc82d0(param_1);
    DAT_5cc10b48 = DAT_5cc10b48 + -1;
    if (DAT_5cc10b48 == 0) {
      DAT_5cc10b48 = 0;
      if (DAT_5cc10b54 != (HDC)0x0) {
        DeleteDC(DAT_5cc10b54);
        DAT_5cc10b54 = (HDC)0x0;
      }
    }
  }
  return;
}


