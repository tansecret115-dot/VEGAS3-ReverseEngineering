/* Module: pncrt.dll
   Function: _filbuf
   Address: 78024e90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _filbuf(FILE *_File)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
                    /* 0x24e90  228  _filbuf */
  uVar2 = _File->_flag;
  if (((uVar2 & 0x83) != 0) && ((uVar2 & 0x40) == 0)) {
    if ((uVar2 & 2) != 0) {
      _File->_flag = uVar2 | 0x20;
      return -1;
    }
    _File->_flag = uVar2 | 1;
    if ((uVar2 & 0x10c) == 0) {
      FUN_7800f630((int *)_File);
    }
    else {
      _File->_ptr = _File->_base;
    }
    iVar3 = _read(_File->_file,_File->_base,_File->_bufsiz);
    _File->_cnt = iVar3;
    if ((iVar3 != 0) && (iVar3 != -1)) {
      if ((_File->_flag & 0x82U) == 0) {
        uVar2 = _File->_file;
        if (uVar2 == 0xffffffff) {
          puVar4 = &__badioinfo;
        }
        else {
          puVar4 = (undefined *)((&__pioinfo)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar4[4] & 0x82) == 0x82) {
          _File->_flag = _File->_flag | 0x2000;
        }
      }
      if (((_File->_bufsiz == 0x200) && ((_File->_flag & 8U) != 0)) &&
         ((_File->_flag & 0x400U) == 0)) {
        _File->_bufsiz = 0x1000;
      }
      _File->_cnt = iVar3 + -1;
      bVar1 = *_File->_ptr;
      _File->_ptr = _File->_ptr + 1;
      return (uint)bVar1;
    }
    _File->_cnt = 0;
    _File->_flag = _File->_flag | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
  }
  return -1;
}


