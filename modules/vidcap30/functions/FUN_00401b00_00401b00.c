/* Module: vidcap30.exe
   Function: FUN_00401b00
   Address: 00401b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00401b00(uchar *param_1,int *param_2)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  HGLOBAL pvVar4;
  uchar *_Dest;
  uchar *lpsz;
  LPSTR lpString;
  size_t _Size;
  uchar *lpsz_00;
  undefined4 *puVar5;
  undefined4 *local_10;
  int local_8;
  
  *param_2 = 0;
  if (param_1 == (uchar *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar3 = lstrlenA((LPCSTR)param_1);
  if (iVar3 == 0) {
    return (undefined4 *)0x0;
  }
  pvVar4 = GlobalAlloc(0x40,iVar3 * 6 + 4);
  local_10 = GlobalLock(pvVar4);
  if (local_10 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  _Dest = (uchar *)(local_10 + iVar3 + 1);
  local_8 = 0;
  _mbscpy(_Dest,param_1);
  iVar3 = _ismbcspace((int)(char)*_Dest);
  while (iVar3 != 0) {
    _Dest = (uchar *)CharNextA((LPCSTR)_Dest);
    iVar3 = _ismbcspace((int)(char)*_Dest);
  }
  uVar1 = *_Dest;
  puVar5 = local_10;
  do {
    lpsz = _Dest;
    if (uVar1 == '\0') {
      *param_2 = local_8;
      local_10[local_8] = 0;
      if (local_8 == 0) {
        pvVar4 = GlobalHandle(local_10);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(local_10);
        GlobalFree(pvVar4);
        local_10 = (undefined4 *)0x0;
      }
      return local_10;
    }
LAB_00401bb8:
    bVar2 = false;
LAB_00401bc0:
    uVar1 = *lpsz;
    while (((uVar1 != '\0' && (*lpsz != '\"')) &&
           (iVar3 = _ismbcspace((int)(char)*lpsz), iVar3 == 0))) {
      lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
      uVar1 = *lpsz;
    }
    uVar1 = *lpsz;
    if (uVar1 != '\0') {
      if (uVar1 != '\"') {
        if (!bVar2) goto LAB_00401c53;
        iVar3 = _ismbcspace((int)(char)uVar1);
        while (iVar3 != 0) {
          lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
          iVar3 = _ismbcspace((int)(char)*lpsz);
        }
        goto LAB_00401bc0;
      }
      lpString = CharNextA((LPCSTR)lpsz);
      _Size = 0;
      if (lpString != (LPSTR)0x0) {
        iVar3 = lstrlenA(lpString);
        _Size = iVar3 + 1;
      }
      memmove(lpsz,lpString,_Size);
      if (bVar2) {
        if (*lpsz == '\"') {
          lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
          goto LAB_00401bc0;
        }
        goto LAB_00401bb8;
      }
      bVar2 = true;
      goto LAB_00401bc0;
    }
LAB_00401c53:
    lpsz_00 = lpsz;
    if (*lpsz != '\0') {
      lpsz_00 = (uchar *)CharNextA((LPCSTR)lpsz);
      *lpsz = '\0';
    }
    local_8 = local_8 + 1;
    *puVar5 = _Dest;
    puVar5 = puVar5 + 1;
    iVar3 = _ismbcspace((int)(char)*lpsz_00);
    while (iVar3 != 0) {
      lpsz_00 = (uchar *)CharNextA((LPCSTR)lpsz_00);
      iVar3 = _ismbcspace((int)(char)*lpsz_00);
    }
    uVar1 = *lpsz_00;
    _Dest = lpsz_00;
  } while( true );
}


