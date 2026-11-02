/* Module: g2plug.dll
   Function: FUN_5f805920
   Address: 5f805920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f805920(LPCWSTR param_1,SIZE_T param_2,uchar *param_3,uchar *param_4)

{
  bool bVar1;
  HGLOBAL pvVar2;
  uchar *_Source;
  int iVar3;
  uchar *puVar4;
  
  pvVar2 = GlobalAlloc(0x42,param_2);
  _Source = GlobalLock(pvVar2);
  if (_Source == (uchar *)0x0) {
    return 0x8007000e;
  }
  if ((param_1 == (LPCWSTR)0x0) || (*param_1 != L'\0')) {
    WideCharToMultiByte(0,0,param_1,-1,(LPSTR)_Source,param_2,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else {
    *_Source = '\0';
  }
  _Source[param_2 - 1] = '\0';
  iVar3 = lstrlenA((LPCSTR)_Source);
  puVar4 = _Source + iVar3;
  do {
    if (puVar4 == _Source) goto LAB_5f8059ae;
    puVar4 = (uchar *)CharPrevA((LPCSTR)_Source,(LPCSTR)puVar4);
    iVar3 = _ismbcspace((int)(char)*puVar4);
  } while (iVar3 != 0);
  puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
LAB_5f8059ae:
  puVar4 = (uchar *)CharPrevA((LPCSTR)_Source,(LPCSTR)puVar4);
  bVar1 = false;
  do {
    if (_Source == puVar4) {
LAB_5f8059f2:
      _mbscpy(param_3,puVar4);
      *puVar4 = '\0';
      _mbscpy(param_4,_Source);
      pvVar2 = GlobalHandle(_Source);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(_Source);
      GlobalFree(pvVar2);
      return 0;
    }
    if ((!bVar1) && (iVar3 = _ismbcspace((int)(char)*puVar4), iVar3 != 0)) {
      puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
      goto LAB_5f8059f2;
    }
    if (*puVar4 == '\"') {
      bVar1 = !bVar1;
    }
    puVar4 = (uchar *)CharPrevA((LPCSTR)_Source,(LPCSTR)puVar4);
  } while( true );
}


