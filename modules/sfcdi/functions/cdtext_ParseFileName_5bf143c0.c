/* Module: sfcdi.dll
   Function: cdtext_ParseFileName
   Address: 5bf143c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdtext_ParseFileName(char *,char *,char *,char *,char *,char *) */

long cdtext_ParseFileName
               (char *param_1,char *param_2,char *param_3,char *param_4,char *param_5,char *param_6)

{
  char cVar1;
  char **ppcVar2;
  LPCSTR lpsz;
  int iVar3;
  uint uVar4;
  char *local_10 [4];
  
                    /* 0x143c0  222  ?cdtext_ParseFileName@@YGJPAD00000@Z */
  local_10[1] = param_4;
  local_10[0] = param_3;
  local_10[2] = param_5;
  local_10[3] = param_6;
  ppcVar2 = local_10;
  iVar3 = 4;
  do {
    if (*ppcVar2 != (char *)0x0) {
      **ppcVar2 = '\0';
    }
    ppcVar2 = ppcVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar4 = 0;
  if (*param_2 != '\0') {
    ppcVar2 = local_10;
    do {
      cVar1 = *param_2;
      if (cVar1 == '-') {
        param_2 = CharNextA(param_2);
        uVar4 = uVar4 + 1;
        ppcVar2 = ppcVar2 + 1;
        *param_3 = '\0';
        if (3 < uVar4) break;
        param_3 = *ppcVar2;
      }
      else {
        if (cVar1 == '_') {
          *param_3 = ' ';
        }
        else {
          *param_3 = cVar1;
        }
        param_3 = CharNextA(param_3);
        param_2 = CharNextA(param_2);
      }
    } while (*param_2 != '\0');
  }
  *param_3 = '\0';
  ppcVar2 = local_10;
  iVar3 = 4;
  do {
    if (*ppcVar2 != (LPCSTR)0x0) {
      FUN_5bf2c250(*ppcVar2);
    }
    ppcVar2 = ppcVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = lstrlenA(param_6);
  if ((iVar3 == 0) && (iVar3 = lstrlenA(param_4), iVar3 != 0)) {
    _mbscpy((uchar *)param_6,(uchar *)param_4);
    *param_4 = '\0';
  }
  iVar3 = lstrlenA(param_4);
  if ((iVar3 == 0) && (iVar3 = lstrlenA(param_5), iVar3 != 0)) {
    _mbscpy((uchar *)param_4,(uchar *)param_5);
    *param_5 = '\0';
  }
  iVar3 = lstrlenA(param_5);
  if (iVar3 != 0) {
    cVar1 = *param_5;
    lpsz = param_5;
    while (cVar1 != '\0') {
      cVar1 = *param_5;
      if (('/' < cVar1) && (cVar1 < ':')) {
        *lpsz = cVar1;
        lpsz = CharNextA(lpsz);
      }
      param_5 = CharNextA(param_5);
      cVar1 = *param_5;
    }
    *lpsz = '\0';
  }
  return 0;
}


