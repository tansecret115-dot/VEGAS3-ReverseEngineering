/* Module: pncrt.dll
   Function: _makepath
   Address: 780220e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _makepath(char *_Path,char *_Drive,char *_Dir,char *_Filename,char *_Ext)

{
  uchar uVar1;
  uchar *puVar2;
  uchar *puVar3;
  
                    /* 0x220e0  338  _makepath */
  if ((_Drive != (char *)0x0) && (*_Drive != '\0')) {
    *_Path = *_Drive;
    _Path[1] = ':';
    _Path = _Path + 2;
  }
  if ((_Dir != (char *)0x0) && (uVar1 = *_Dir, puVar2 = (uchar *)_Dir, uVar1 != '\0')) {
    do {
      puVar3 = (uchar *)_Path;
      *puVar3 = uVar1;
      uVar1 = puVar2[1];
      _Path = (char *)(puVar3 + 1);
      puVar2 = puVar2 + 1;
    } while (uVar1 != '\0');
    puVar2 = _mbsdec((uchar *)_Dir,puVar2);
    if ((*puVar2 != '/') && (*puVar2 != '\\')) {
      *_Path = '\\';
      _Path = (char *)(puVar3 + 2);
    }
  }
  if (_Filename != (char *)0x0) {
    uVar1 = *_Filename;
    while (uVar1 != '\0') {
      *_Path = uVar1;
      puVar2 = (uchar *)(_Filename + 1);
      _Path = _Path + 1;
      _Filename = _Filename + 1;
      uVar1 = *puVar2;
    }
  }
  if (_Ext == (char *)0x0) {
    *_Path = '\0';
  }
  else {
    if ((*_Ext != '\0') && (*_Ext != '.')) {
      *_Path = '.';
      _Path = _Path + 1;
    }
    uVar1 = *_Ext;
    *_Path = uVar1;
    if (uVar1 != '\0') {
      do {
        _Path = _Path + 1;
        _Ext = _Ext + 1;
        uVar1 = *_Ext;
        *_Path = uVar1;
      } while (uVar1 != '\0');
      return;
    }
  }
  return;
}


