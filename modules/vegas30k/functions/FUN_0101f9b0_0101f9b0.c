/* Module: vegas30k.dll
   Function: FUN_0101f9b0
   Address: 0101f9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0101f9b0(LPCSTR param_1)

{
  bool bVar1;
  BOOL BVar2;
  LPCSTR lpsz;
  LPSTR lpsz_00;
  
  bVar1 = true;
  lpsz = param_1;
  if (*param_1 != '\0') {
    do {
      if (bVar1) {
        BVar2 = IsCharLowerA(*lpsz);
        if (BVar2 != 0) {
          bVar1 = false;
        }
      }
      lpsz = CharNextA(lpsz);
    } while (*lpsz != '\0');
    if (!bVar1) goto LAB_0101f9f6;
  }
  lpsz_00 = CharNextA(param_1);
  CharLowerA(lpsz_00);
LAB_0101f9f6:
  return (int)lpsz - (int)param_1;
}


