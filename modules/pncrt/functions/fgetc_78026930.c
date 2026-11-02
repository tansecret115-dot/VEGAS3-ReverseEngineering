/* Module: pncrt.dll
   Function: fgetc
   Address: 78026930
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl fgetc(FILE *_File)

{
  byte bVar1;
  int iVar2;
  
                    /* 0x26930  602  fgetc */
  FUN_780094a0((uint)_File);
  iVar2 = _File->_cnt + -1;
  _File->_cnt = iVar2;
  if (-1 < iVar2) {
    bVar1 = *_File->_ptr;
    _File->_ptr = _File->_ptr + 1;
    FUN_78009510((uint)_File);
    return (uint)bVar1;
  }
  iVar2 = _filbuf(_File);
  FUN_78009510((uint)_File);
  return iVar2;
}


