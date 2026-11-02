/* Module: pncrt.dll
   Function: _wfullpath
   Address: 78019b20
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _wfullpath(wchar_t *_FullPath,wchar_t *_Path,size_t _SizeInWords)

{
  LPWSTR lpBuffer;
  int *piVar1;
  DWORD DVar2;
  wchar_t *pwVar3;
  uint nBufferLength;
  
                    /* 0x19b20  528  _wfullpath */
  if ((_Path == (wchar_t *)0x0) || (*_Path == L'\0')) {
    pwVar3 = _wgetcwd(_FullPath,_SizeInWords);
    return pwVar3;
  }
  lpBuffer = _FullPath;
  nBufferLength = _SizeInWords;
  if (_FullPath == (wchar_t *)0x0) {
    lpBuffer = malloc(0x208);
    if (lpBuffer == (LPWSTR)0x0) {
      piVar1 = _errno();
      *piVar1 = 0xc;
      return (wchar_t *)0x0;
    }
    nBufferLength = 0x104;
  }
  DVar2 = GetFullPathNameW(_Path,nBufferLength,lpBuffer,(LPWSTR *)&_SizeInWords);
  if (DVar2 < nBufferLength) {
    if (DVar2 != 0) {
      return lpBuffer;
    }
    if (_FullPath == (wchar_t *)0x0) {
      free(lpBuffer);
    }
    DVar2 = GetLastError();
    FUN_7800a870(DVar2);
    return (wchar_t *)0x0;
  }
  if (_FullPath == (wchar_t *)0x0) {
    free(lpBuffer);
  }
  piVar1 = _errno();
  *piVar1 = 0x22;
  return (wchar_t *)0x0;
}


