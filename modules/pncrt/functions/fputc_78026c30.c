/* Module: pncrt.dll
   Function: fputc
   Address: 78026c30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl fputc(int _Ch,FILE *_File)

{
  int iVar1;
  
                    /* 0x26c30  611  fputc */
  FUN_780094a0((uint)_File);
  iVar1 = _File->_cnt + -1;
  _File->_cnt = iVar1;
  if (-1 < iVar1) {
    *_File->_ptr = (char)_Ch;
    _File->_ptr = _File->_ptr + 1;
    FUN_78009510((uint)_File);
    return _Ch & 0xff;
  }
  iVar1 = _flsbuf(_Ch,_File);
  FUN_78009510((uint)_File);
  return iVar1;
}


