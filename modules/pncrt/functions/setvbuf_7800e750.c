/* Module: pncrt.dll
   Function: setvbuf
   Address: 7800e750
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl setvbuf(FILE *_File,char *_Buf,int _Mode,size_t _Size)

{
  uint uVar1;
  uint _Size_00;
  
                    /* 0xe750  696  setvbuf */
  if ((_Mode != 4) && (((_Size < 2 || (0x7fffffff < _Size)) || ((_Mode != 0 && (_Mode != 0x40))))))
  {
    return -1;
  }
  _Size_00 = _Size & 0xfffffffe;
  FUN_780094a0((uint)_File);
  FUN_7800e5c0((int *)_File);
  FUN_7800f410(&_File->_ptr);
  uVar1 = _File->_flag & 0xffffc2f3;
  _File->_flag = uVar1;
  if ((_Mode & 4U) == 0) {
    if (_Buf == (char *)0x0) {
      _Buf = malloc(_Size_00);
      if ((int *)_Buf == (int *)0x0) {
        FUN_78009510((uint)_File);
        return -1;
      }
      uVar1 = _File->_flag | 0x408;
    }
    else {
      uVar1 = uVar1 | 0x500;
    }
    _File->_flag = uVar1;
  }
  else {
    _Buf = (char *)&_File->_charbuf;
    _File->_flag = uVar1 | 4;
    _Size_00 = 2;
  }
  _File->_bufsiz = _Size_00;
  _File->_base = _Buf;
  _File->_ptr = _Buf;
  _File->_cnt = 0;
  FUN_78009510((uint)_File);
  return 0;
}


