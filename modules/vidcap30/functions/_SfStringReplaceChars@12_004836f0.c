/* Module: vidcap30.exe
   Function: _SfStringReplaceChars@12
   Address: 004836f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfStringReplaceChars_12(char *param_1,char param_2,CHAR param_3)

{
  char cVar1;
  LPCSTR lpsz;
  LPSTR pCVar2;
  
                    /* 0x836f0  624  _SfStringReplaceChars@12 */
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


