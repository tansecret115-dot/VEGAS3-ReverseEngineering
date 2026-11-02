/* Module: sfpublish.dll
   Function: FUN_004168d0
   Address: 004168d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004168d0(BYTE *param_1,uint param_2)

{
  BYTE TestChar;
  BOOL BVar1;
  BYTE *lpsz;
  LPSTR pCVar2;
  uint uVar3;
  uint uVar4;
  
  TestChar = *param_1;
  if (TestChar == '\0') {
    return 0;
  }
  lpsz = param_1;
  uVar3 = 0;
  while( true ) {
    uVar4 = uVar3 + 1;
    BVar1 = IsDBCSLeadByte(TestChar);
    if (BVar1 != 0) {
      uVar4 = uVar3 + 2;
    }
    if (uVar4 == param_2) break;
    lpsz = (BYTE *)CharNextA((LPCSTR)lpsz);
    TestChar = *lpsz;
    uVar3 = uVar4;
    if (TestChar == '\0') {
      pCVar2 = CharPrevA((LPCSTR)param_1,(LPCSTR)lpsz);
      if (*pCVar2 != '\\') {
        if (param_2 < uVar4 + 2) {
          return 0;
        }
        pCVar2 = CharNextA(pCVar2);
        *pCVar2 = '\\';
        pCVar2[1] = '\0';
        uVar4 = uVar4 + 1;
      }
      return uVar4;
    }
  }
  return 0;
}


