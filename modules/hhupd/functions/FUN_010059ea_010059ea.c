/* Module: hhupd.exe
   Function: FUN_010059ea
   Address: 010059ea
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010059ea(LPCSTR param_1,LPCSTR param_2)

{
  int iVar1;
  LPSTR pCVar2;
  LPSTR lpszCurrent;
  
  iVar1 = lstrlenA(param_1);
  lpszCurrent = param_1 + iVar1;
  if ((param_1 < lpszCurrent) && (pCVar2 = CharPrevA(param_1,lpszCurrent), *pCVar2 != '\\')) {
    *lpszCurrent = '\\';
    lpszCurrent = lpszCurrent + 1;
  }
  for (; *param_2 == ' '; param_2 = param_2 + 1) {
  }
  lstrcpyA(lpszCurrent,param_2);
  return;
}


