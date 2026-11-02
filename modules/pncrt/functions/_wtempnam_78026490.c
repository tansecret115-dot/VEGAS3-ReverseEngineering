/* Module: pncrt.dll
   Function: _wtempnam
   Address: 78026490
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _wtempnam(wchar_t *_Directory,wchar_t *_FilePrefix)

{
  wchar_t *_Filename;
  int iVar1;
  size_t sVar2;
  wchar_t *_Dest;
  int iVar3;
  int *piVar4;
  uint uVar5;
  size_t sVar6;
  wchar_t *local_4;
  
                    /* 0x26490  564  _wtempnam */
  sVar6 = 0;
  local_4 = (wchar_t *)0x0;
  _Filename = _wgetenv(L"TMP");
  if (((_Filename == (wchar_t *)0x0) ||
      ((iVar1 = _waccess(_Filename,0), iVar1 == -1 &&
       (((_Filename == (wchar_t *)0x0 ||
         (_Filename = FUN_78026680(_Filename), local_4 = _Filename, _Filename == (wchar_t *)0x0)) ||
        (iVar1 = _waccess(_Filename,0), iVar1 == -1)))))) &&
     ((_Directory == (wchar_t *)0x0 ||
      (iVar1 = _waccess(_Directory,0), _Filename = _Directory, iVar1 == -1)))) {
    free(local_4);
    iVar1 = _waccess(L"\\",0);
    _Filename = L"\\";
    if (iVar1 == -1) {
      _Filename = L".";
    }
  }
  if (_FilePrefix != (wchar_t *)0x0) {
    sVar6 = wcslen(_FilePrefix);
  }
  sVar2 = wcslen(_Filename);
  uVar5 = sVar2 + 0xc + sVar6;
  if (uVar5 < 0x105) {
    _Dest = malloc(uVar5 * 2);
    _Directory = (wchar_t *)0x0;
    if (_Dest != (wchar_t *)0x0) {
      *_Dest = L'\0';
      wcscat(_Dest,_Filename);
      sVar2 = wcslen(_Filename);
      if ((_Filename[sVar2 - 1] != L'\\') && (_Filename[sVar2 - 1] != L'/')) {
        wcscat(_Dest,L"\\");
      }
      if (_FilePrefix != (wchar_t *)0x0) {
        wcscat(_Dest,_FilePrefix);
      }
      sVar2 = wcslen(_Dest);
      _lock(3);
      iVar1 = 1;
      if (sVar6 <= DAT_78042608) {
        iVar1 = DAT_78040cd8;
      }
      DAT_78040cd8 = iVar1 + 1;
      uVar5 = DAT_78040cd8 - iVar1;
      DAT_78042608 = sVar6;
      while (uVar5 < 0x8000) {
        _ultow(DAT_78040cd8,_Dest + sVar2,10);
        iVar3 = _waccess(_Dest,0);
        if ((iVar3 != 0) && (piVar4 = _errno(), *piVar4 != 0xd)) goto LAB_7802663a;
        DAT_78040cd8 = DAT_78040cd8 + 1;
        uVar5 = DAT_78040cd8 - iVar1;
      }
      free(_Dest);
      _Dest = (wchar_t *)0x0;
LAB_7802663a:
      _unlock(3);
      free(local_4);
      return _Dest;
    }
  }
  free(local_4);
  return _Directory;
}


