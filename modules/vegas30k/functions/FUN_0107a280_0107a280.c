/* Module: vegas30k.dll
   Function: FUN_0107a280
   Address: 0107a280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0107a280(int param_1)

{
  if (param_1 != 0) {
    FUN_0107a230(param_1);
    DAT_01206120 = DAT_01206120 + -1;
    if (DAT_01206120 == 0) {
      DAT_01206120 = 0;
      if (DAT_0120612c != (HDC)0x0) {
        DeleteDC(DAT_0120612c);
        DAT_0120612c = (HDC)0x0;
      }
    }
  }
  return;
}


