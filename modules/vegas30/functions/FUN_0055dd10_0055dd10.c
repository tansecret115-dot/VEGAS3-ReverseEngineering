/* Module: vegas30.exe
   Function: FUN_0055dd10
   Address: 0055dd10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0055dd10(LPCSTR param_1,char *param_2)

{
  LPCSTR lpString2;
  char cVar1;
  CHAR CVar2;
  int iVar3;
  LPCSTR lpsz;
  LPCSTR iMaxLength;
  undefined4 local_108;
  CHAR local_104 [260];
  
  local_108 = 1;
  cVar1 = *param_2;
  do {
    if (cVar1 == '\0') {
      return 0;
    }
    do {
      param_2 = CharNextA(param_2);
    } while (*param_2 != '\0');
    lpsz = param_2 + 1;
    do {
      cVar1 = *lpsz;
      while ((cVar1 != '\0' && (cVar1 != '.'))) {
        lpsz = CharNextA(lpsz);
        cVar1 = *lpsz;
      }
      if (*lpsz == '\0') break;
      lpString2 = lpsz + 1;
      CVar2 = *lpString2;
      lpsz = lpString2;
      while ((CVar2 != '\0' && (CVar2 != ';'))) {
        lpsz = CharNextA(lpsz);
        CVar2 = *lpsz;
      }
      iMaxLength = lpsz + (1 - (int)lpString2);
      if ((LPCSTR)0x103 < iMaxLength) {
        iMaxLength = (LPCSTR)0x104;
      }
      lstrcpynA(local_104,lpString2,(int)iMaxLength);
      local_104[(int)(iMaxLength + -1)] = '\0';
      iVar3 = lstrcmpiA(local_104,param_1);
      if (iVar3 == 0) {
        return local_108;
      }
    } while (*lpsz == ';');
    cVar1 = lpsz[1];
    local_108 = local_108 + 1;
    param_2 = lpsz + 1;
  } while( true );
}


