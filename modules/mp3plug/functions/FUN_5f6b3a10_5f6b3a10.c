/* Module: mp3plug.dll
   Function: FUN_5f6b3a10
   Address: 5f6b3a10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6b3a10(BYTE *param_1,int param_2)

{
  BYTE TestChar;
  BOOL BVar1;
  BYTE *lpsz;
  LPSTR pCVar2;
  int iVar3;
  int iVar4;
  
  TestChar = *param_1;
  if (TestChar != '\0') {
    lpsz = param_1;
    iVar3 = 0;
    while( true ) {
      iVar4 = iVar3 + 1;
      BVar1 = IsDBCSLeadByte(TestChar);
      if (BVar1 != 0) {
        iVar4 = iVar3 + 2;
      }
      if (iVar4 == param_2) break;
      lpsz = (BYTE *)CharNextA((LPCSTR)lpsz);
      TestChar = *lpsz;
      iVar3 = iVar4;
      if (TestChar == '\0') {
        pCVar2 = CharPrevA((LPCSTR)param_1,(LPCSTR)lpsz);
        if (*pCVar2 == '\\') {
          *pCVar2 = '\0';
          iVar4 = iVar4 + -1;
        }
        return iVar4;
      }
    }
  }
  return 0;
}


