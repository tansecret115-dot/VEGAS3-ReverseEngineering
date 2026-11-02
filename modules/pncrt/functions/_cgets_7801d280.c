/* Module: pncrt.dll
   Function: _cgets
   Address: 7801d280
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _cgets(char *_Buffer)

{
  char *lpBuffer;
  char cVar1;
  BOOL BVar2;
  char *pcVar3;
  uint local_8;
  DWORD local_4;
  
                    /* 0x1d280  182  _cgets */
  _lock(8);
  _Buffer[1] = '\0';
  lpBuffer = _Buffer + 2;
  if (DAT_78040940 == (HANDLE)0xfffffffe) {
    FUN_7801f960();
  }
  if (DAT_78040940 == (HANDLE)0xffffffff) {
    _unlock(8);
    return (char *)0x0;
  }
  GetConsoleMode(DAT_78040940,&local_4);
  SetConsoleMode(DAT_78040940,7);
  BVar2 = ReadConsoleA(DAT_78040940,lpBuffer,(uint)(byte)*_Buffer,&local_8,
                       (PCONSOLE_READCONSOLE_CONTROL)0x0);
  pcVar3 = lpBuffer;
  if (BVar2 == 0) {
    pcVar3 = (char *)0x0;
  }
  if (pcVar3 != (char *)0x0) {
    cVar1 = (char)local_8;
    if (_Buffer[local_8] == '\r') {
      _Buffer[1] = cVar1 + -2;
      _Buffer[local_8] = '\0';
    }
    else if ((local_8 == (byte)*_Buffer) && (_Buffer[local_8 + 1] == '\r')) {
      _Buffer[1] = cVar1 + -1;
      _Buffer[local_8 + 1] = '\0';
    }
    else if ((local_8 == 1) && (*lpBuffer == '\n')) {
      *lpBuffer = '\0';
      _Buffer[1] = '\0';
    }
    else {
      _Buffer[1] = cVar1;
      _Buffer[local_8 + 2] = '\0';
    }
  }
  SetConsoleMode(DAT_78040940,local_4);
  _unlock(8);
  return pcVar3;
}


