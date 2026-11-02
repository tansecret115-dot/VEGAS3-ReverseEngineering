/* Module: vegas30.exe
   Function: FUN_0055d210
   Address: 0055d210
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0055d210(LPCSTR param_1)

{
  char cVar1;
  int iVar2;
  
  if ((param_1 == (char *)0x0) || (cVar1 = *param_1, cVar1 == '\0')) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
      if (cVar1 == '\"') {
        iVar2 = iVar2 + 1;
      }
      param_1 = CharNextA(param_1);
      cVar1 = *param_1;
    } while (cVar1 != '\0');
    iVar2 = iVar2 / 2;
    if (iVar2 < 1) {
      return 1;
    }
  }
  return iVar2;
}


