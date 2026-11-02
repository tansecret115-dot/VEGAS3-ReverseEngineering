/* Module: pncrt.dll
   Function: _wmakepath
   Address: 78022840
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
_wmakepath(wchar_t *_ResultPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  
                    /* 0x22840  535  _wmakepath */
  if ((_Drive != (wchar_t *)0x0) && (*_Drive != L'\0')) {
    *_ResultPath = *_Drive;
    _ResultPath[1] = L':';
    _ResultPath = _ResultPath + 2;
  }
  if ((_Dir != (wchar_t *)0x0) && (wVar2 = *_Dir, wVar2 != L'\0')) {
    do {
      pwVar3 = _Dir;
      pwVar1 = _ResultPath;
      _Dir = pwVar3 + 1;
      *pwVar1 = wVar2;
      _ResultPath = pwVar1 + 1;
      wVar2 = *_Dir;
    } while (wVar2 != L'\0');
    wVar2 = *pwVar3;
    if ((wVar2 != L'/') && (wVar2 != L'\\')) {
      *_ResultPath = L'\\';
      _ResultPath = pwVar1 + 2;
    }
  }
  if (_Filename != (wchar_t *)0x0) {
    wVar2 = *_Filename;
    while (wVar2 != L'\0') {
      _Filename = _Filename + 1;
      *_ResultPath = wVar2;
      _ResultPath = _ResultPath + 1;
      wVar2 = *_Filename;
    }
  }
  if (_Ext == (wchar_t *)0x0) {
    *_ResultPath = L'\0';
  }
  else {
    if ((*_Ext != L'\0') && (*_Ext != L'.')) {
      *_ResultPath = L'.';
      _ResultPath = _ResultPath + 1;
    }
    wVar2 = *_Ext;
    *_ResultPath = wVar2;
    if (wVar2 != L'\0') {
      do {
        _Ext = _Ext + 1;
        _ResultPath = _ResultPath + 1;
        wVar2 = *_Ext;
        *_ResultPath = wVar2;
      } while (wVar2 != L'\0');
      return;
    }
  }
  return;
}


