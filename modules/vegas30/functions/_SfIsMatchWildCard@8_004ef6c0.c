/* Module: vegas30.exe
   Function: _SfIsMatchWildCard@8
   Address: 004ef6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfIsMatchWildCard_8(LPCSTR param_1,LPSTR param_2)

{
  char cVar1;
  int iVar2;
  LPSTR lpsz;
  LPCSTR lpsz_00;
  LPCSTR lpString1;
  
  lpsz_00 = param_2;
                    /* 0xef6c0  41  _SfIsMatchWildCard@8 */
  lpString1 = param_1;
  param_1 = (LPCSTR)0x0;
  if (*lpString1 == '\0') {
    return 1;
  }
  iVar2 = lstrcmpA(lpString1,"*");
  if (iVar2 == 0) {
    return 1;
  }
  iVar2 = lstrcmpA(lpString1,"*.*");
  lpsz = lpString1;
  if (iVar2 == 0) {
    return 1;
  }
  do {
    if (*lpsz == '\0') {
      return 0;
    }
    do {
      if (*param_2 == '\0') {
        return 0;
      }
      iVar2 = FUN_004ef670(lpsz,&DAT_00614164);
      if ((iVar2 == 0) || (iVar2 = FUN_004ef670(lpsz,&DAT_006142f0), iVar2 == 0)) goto LAB_004ef78c;
      iVar2 = FUN_004ef670(lpsz,param_2);
      if (iVar2 != 0) {
        return 0;
      }
      lpsz = CharNextA(lpsz);
      param_2 = CharNextA(param_2);
    } while (*lpsz != '\0');
    if (*param_2 == '\0') {
      return 1;
    }
  } while( true );
LAB_004ef78c:
  cVar1 = *lpString1;
  if (*lpsz_00 == '\0') {
    while ((cVar1 != '\0' && (cVar1 == '*'))) {
      lpString1 = CharNextA(lpString1);
      cVar1 = *lpString1;
    }
    if (*lpString1 == '\0') {
      return 1;
    }
    return 0;
  }
  if (cVar1 != '\0') {
    if (cVar1 == '*') {
      lpString1 = CharNextA(lpString1);
      cVar1 = *lpString1;
      if (cVar1 == '\0') {
        return 1;
      }
      if ((cVar1 != '*') && (cVar1 != '?')) {
        cVar1 = *lpsz_00;
        while (cVar1 != '\0') {
          if (cVar1 == *lpString1) {
            if (param_1 == (LPCSTR)0x0) {
              param_1 = lpsz_00;
            }
            break;
          }
          lpsz_00 = CharNextA(lpsz_00);
          cVar1 = *lpsz_00;
        }
      }
    }
    else {
      if ((cVar1 != '?') && (iVar2 = FUN_004ef670(lpString1,lpsz_00), iVar2 != 0))
      goto LAB_004ef7aa;
      lpString1 = CharNextA(lpString1);
      lpsz_00 = CharNextA(lpsz_00);
    }
    goto LAB_004ef78c;
  }
LAB_004ef7aa:
  if (param_1 == (LPCSTR)0x0) {
    return 0;
  }
  lpsz_00 = CharNextA(param_1);
  param_1 = (LPCSTR)0x0;
  lpString1 = lpsz;
  goto LAB_004ef78c;
}


