/* Module: vegas30.exe
   Function: FUN_0055d260
   Address: 0055d260
   Source: Ghidra pseudocode (Stage 10 batch) */


CHAR * FUN_0055d260(LPSTR param_1,LPCSTR param_2,int param_3,int param_4)

{
  char cVar1;
  LPSTR pCVar2;
  LPCSTR pCVar3;
  int iVar4;
  CHAR *pCVar5;
  
  if ((param_2 == (LPCSTR)0x0) || (cVar1 = *param_2, cVar1 == '\0')) {
    return (CHAR *)0x0;
  }
  if ((param_3 == 0) && (cVar1 != '\"')) {
    lstrcpynA(param_1,param_2,param_4);
    param_1[param_4 + -1] = '\0';
    return (CHAR *)0x1;
  }
  iVar4 = 0;
  do {
    if (param_3 * 2 + 1 <= iVar4) break;
    if (cVar1 == '\"') {
      iVar4 = iVar4 + 1;
    }
    param_2 = CharNextA(param_2);
    cVar1 = *param_2;
  } while (cVar1 != '\0');
  cVar1 = *param_2;
  pCVar5 = param_1;
  while ((cVar1 != '\0' && (cVar1 != '\"'))) {
    pCVar2 = CharNextA(param_2);
    for (pCVar3 = param_2; pCVar3 != pCVar2; pCVar3 = pCVar3 + 1) {
      *pCVar5 = *pCVar3;
      pCVar5 = pCVar5 + 1;
    }
    param_2 = CharNextA(param_2);
    cVar1 = *param_2;
  }
  *pCVar5 = '\0';
  return pCVar5 + (1 - (int)param_1);
}


