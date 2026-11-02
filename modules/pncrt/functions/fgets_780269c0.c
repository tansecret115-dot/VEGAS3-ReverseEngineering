/* Module: pncrt.dll
   Function: fgets
   Address: 780269c0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl fgets(char *_Buf,int _MaxCount,FILE *_File)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
                    /* 0x269c0  604  fgets */
  if (_MaxCount < 1) {
    return (char *)0x0;
  }
  FUN_780094a0((uint)_File);
  iVar3 = _MaxCount + -1;
  pcVar4 = _Buf;
  if (iVar3 != 0) {
    while( true ) {
      iVar1 = _File->_cnt + -1;
      _File->_cnt = iVar1;
      if (iVar1 < 0) {
        uVar2 = _filbuf(_File);
      }
      else {
        uVar2 = (uint)(byte)*_File->_ptr;
        _File->_ptr = _File->_ptr + 1;
      }
      if (uVar2 == 0xffffffff) break;
      *pcVar4 = (char)uVar2;
      pcVar4 = pcVar4 + 1;
      if (((char)uVar2 == '\n') || (iVar3 = iVar3 + -1, iVar3 == 0)) goto LAB_78026a18;
    }
    if (pcVar4 == _Buf) {
      FUN_78009510((uint)_File);
      return (char *)0x0;
    }
  }
LAB_78026a18:
  *pcVar4 = '\0';
  FUN_78009510((uint)_File);
  return _Buf;
}


