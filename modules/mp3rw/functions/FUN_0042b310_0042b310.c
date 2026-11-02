/* Module: mp3rw.dll
   Function: FUN_0042b310
   Address: 0042b310
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042b310(char *param_1,char param_2,CHAR param_3)

{
  char cVar1;
  LPCSTR lpsz;
  LPSTR pCVar2;
  
  cVar1 = *param_1;
  lpsz = param_1;
  while (cVar1 != '\0') {
    pCVar2 = CharNextA(lpsz);
    if (param_2 == *lpsz) {
      *lpsz = param_3;
    }
    lpsz = pCVar2;
    cVar1 = *pCVar2;
  }
  return (int)lpsz - (int)param_1;
}


