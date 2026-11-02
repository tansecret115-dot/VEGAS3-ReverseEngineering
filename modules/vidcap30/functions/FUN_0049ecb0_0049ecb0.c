/* Module: vidcap30.exe
   Function: FUN_0049ecb0
   Address: 0049ecb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0049ecb0(LPCSTR param_1)

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
    if (!bVar1) goto LAB_0049ecf6;
  }
  lpsz_00 = CharNextA(param_1);
  CharLowerA(lpsz_00);
LAB_0049ecf6:
  return (int)lpsz - (int)param_1;
}


