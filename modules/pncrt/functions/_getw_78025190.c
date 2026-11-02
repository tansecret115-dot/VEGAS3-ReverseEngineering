/* Module: pncrt.dll
   Function: _getw
   Address: 78025190
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _getw(FILE *_File)

{
  FILE *_File_00;
  FILE *pFVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  FILE **ppFVar5;
  
                    /* 0x25190  269  _getw */
  _File_00 = _File;
  ppFVar5 = &_File;
  FUN_780094a0((uint)_File);
  iVar4 = 4;
  do {
    iVar3 = _File_00->_cnt + -1;
    _File_00->_cnt = iVar3;
    if (iVar3 < 0) {
      iVar3 = _filbuf(_File_00);
      cVar2 = (char)iVar3;
    }
    else {
      cVar2 = *_File_00->_ptr;
      _File_00->_ptr = _File_00->_ptr + 1;
    }
    *(char *)ppFVar5 = cVar2;
    pFVar1 = _File;
    ppFVar5 = (FILE **)((int)ppFVar5 + 1);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if ((_File_00->_flag & 0x30) == 0) {
    FUN_78009510((uint)_File_00);
    return (int)pFVar1;
  }
  FUN_78009510((uint)_File_00);
  return -1;
}


