/* Module: sfppack2.dll
   Function: FUN_5cd13390
   Address: 5cd13390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd13390(int param_1)

{
  if (param_1 != 0) {
    FUN_5cd13340(param_1);
    DAT_5cd62f60 = DAT_5cd62f60 + -1;
    if (DAT_5cd62f60 == 0) {
      DAT_5cd62f60 = 0;
      if (DAT_5cd62f6c != (HDC)0x0) {
        DeleteDC(DAT_5cd62f6c);
        DAT_5cd62f6c = (HDC)0x0;
      }
    }
  }
  return;
}


