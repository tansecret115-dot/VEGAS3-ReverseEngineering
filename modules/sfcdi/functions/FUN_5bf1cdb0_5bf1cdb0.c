/* Module: sfcdi.dll
   Function: FUN_5bf1cdb0
   Address: 5bf1cdb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf1cdb0(uchar *param_1,uchar *param_2)

{
  int iVar1;
  LPCSTR pCVar2;
  
  _mbscpy(param_1,param_2);
  iVar1 = lstrlenA((LPCSTR)param_1);
  if (0 < iVar1) {
    pCVar2 = (LPCSTR)FUN_5bf1cb50((LPCSTR)param_1);
    pCVar2 = CharPrevA((LPCSTR)param_1,pCVar2);
    iVar1 = iVar1 + -1;
    if (-1 < iVar1) {
      while (*pCVar2 != '.') {
        pCVar2 = CharPrevA((LPCSTR)param_1,pCVar2);
        iVar1 = iVar1 + -1;
        if (iVar1 < 0) {
          return;
        }
      }
      *pCVar2 = '\0';
    }
  }
  return;
}


