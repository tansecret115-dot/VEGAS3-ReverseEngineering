/* Module: pncrt.dll
   Function: _fullpath
   Address: 78018e80
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _fullpath(char *_FullPath,char *_Path,size_t _SizeInBytes)

{
  LPSTR lpBuffer;
  int *piVar1;
  DWORD DVar2;
  char *pcVar3;
  uint nBufferLength;
  
                    /* 0x18e80  252  _fullpath */
  if ((_Path == (char *)0x0) || (*_Path == '\0')) {
    pcVar3 = _getcwd(_FullPath,_SizeInBytes);
    return pcVar3;
  }
  lpBuffer = _FullPath;
  nBufferLength = _SizeInBytes;
  if (_FullPath == (char *)0x0) {
    lpBuffer = malloc(0x104);
    if (lpBuffer == (LPSTR)0x0) {
      piVar1 = _errno();
      *piVar1 = 0xc;
      return (char *)0x0;
    }
    nBufferLength = 0x104;
  }
  DVar2 = GetFullPathNameA(_Path,nBufferLength,lpBuffer,(LPSTR *)&_SizeInBytes);
  if (DVar2 < nBufferLength) {
    if (DVar2 != 0) {
      return lpBuffer;
    }
    if (_FullPath == (char *)0x0) {
      free(lpBuffer);
    }
    DVar2 = GetLastError();
    FUN_7800a870(DVar2);
    return (char *)0x0;
  }
  if (_FullPath == (char *)0x0) {
    free(lpBuffer);
  }
  piVar1 = _errno();
  *piVar1 = 0x22;
  return (char *)0x0;
}


