/* Module: pncrt.dll
   Function: _wsplitpath
   Address: 78022d40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
_wsplitpath(wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  size_t sVar3;
  uint uVar4;
  wchar_t *pwVar5;
  wchar_t *local_4;
  
                    /* 0x22d40  558  _wsplitpath */
  local_4 = (wchar_t *)0x0;
  sVar3 = wcslen(_FullPath);
  if ((sVar3 == 0) || (_FullPath[1] != L':')) {
    if (_Drive != (wchar_t *)0x0) {
      *_Drive = L'\0';
    }
  }
  else {
    if (_Drive != (wchar_t *)0x0) {
      wcsncpy(_Drive,_FullPath,2);
      _Drive[2] = L'\0';
    }
    _FullPath = _FullPath + 2;
  }
  wVar2 = *_FullPath;
  _Drive = (wchar_t *)0x0;
  pwVar5 = _FullPath;
  while (wVar2 != L'\0') {
    if ((wVar2 == L'/') || (wVar2 == L'\\')) {
      _Drive = pwVar5 + 1;
    }
    else if (wVar2 == L'.') {
      local_4 = pwVar5;
    }
    pwVar1 = pwVar5 + 1;
    pwVar5 = pwVar5 + 1;
    wVar2 = *pwVar1;
  }
  if (_Drive == (wchar_t *)0x0) {
    _Drive = _FullPath;
    if (_Dir != (wchar_t *)0x0) {
      *_Dir = L'\0';
    }
  }
  else if (_Dir != (wchar_t *)0x0) {
    if (((int)_Drive - (int)_FullPath & 0xfffffffeU) < 0x1fe) {
      uVar4 = (uint)((int)_Drive - (int)_FullPath) >> 1;
    }
    else {
      uVar4 = 0xff;
    }
    wcsncpy(_Dir,_FullPath,uVar4);
    _Dir[uVar4] = L'\0';
  }
  if ((local_4 == (wchar_t *)0x0) || (local_4 < _Drive)) {
    if (_Filename != (wchar_t *)0x0) {
      if (((int)pwVar5 - (int)_Drive & 0xfffffffeU) < 0x1fe) {
        sVar3 = (uint)((int)pwVar5 - (int)_Drive) >> 1;
      }
      else {
        sVar3 = 0xff;
      }
      wcsncpy(_Filename,_Drive,sVar3);
      _Filename[sVar3] = L'\0';
    }
    if (_Ext != (wchar_t *)0x0) {
      *_Ext = L'\0';
    }
  }
  else {
    if (_Filename != (wchar_t *)0x0) {
      if (((int)local_4 - (int)_Drive & 0xfffffffeU) < 0x1fe) {
        uVar4 = (uint)((int)local_4 - (int)_Drive) >> 1;
      }
      else {
        uVar4 = 0xff;
      }
      wcsncpy(_Filename,_Drive,uVar4);
      _Filename[uVar4] = L'\0';
    }
    if (_Ext != (wchar_t *)0x0) {
      if (((int)pwVar5 - (int)local_4 & 0xfffffffeU) < 0x1fe) {
        sVar3 = (uint)((int)pwVar5 - (int)local_4) >> 1;
      }
      else {
        sVar3 = 0xff;
      }
      wcsncpy(_Ext,local_4,sVar3);
      _Ext[sVar3] = L'\0';
      return;
    }
  }
  return;
}


