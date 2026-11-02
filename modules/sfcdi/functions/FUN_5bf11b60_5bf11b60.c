/* Module: sfcdi.dll
   Function: FUN_5bf11b60
   Address: 5bf11b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf11b60(LPCSTR param_1,LPSTR param_2,LPSTR param_3)

{
  char cVar1;
  LPCSTR lpString2;
  
  for (lpString2 = param_1; (*lpString2 != '/' && (*lpString2 != '\0')); lpString2 = lpString2 + 1)
  {
  }
  if (*lpString2 == '/') {
    *lpString2 = '\0';
    lpString2 = lpString2 + 1;
  }
  lstrcpyA(param_2,param_1);
  cVar1 = *lpString2;
  if (cVar1 == '\0') {
    lstrcpyA(param_3,param_2);
    return;
  }
  do {
    if ((cVar1 != ' ') && (cVar1 != '\t')) break;
    cVar1 = lpString2[1];
    lpString2 = lpString2 + 1;
  } while (cVar1 != '\0');
  lstrcpyA(param_3,lpString2);
  return;
}


