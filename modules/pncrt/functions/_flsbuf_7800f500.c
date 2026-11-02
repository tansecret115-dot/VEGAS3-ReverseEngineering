/* Module: pncrt.dll
   Function: _flsbuf
   Address: 7800f500
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _flsbuf(int _Ch,FILE *_File)

{
  uint _FileHandle;
  char *_Buf;
  FILE *pFVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  
                    /* 0xf500  239  _flsbuf */
  pFVar1 = _File;
  uVar5 = _File->_flag;
  _FileHandle = _File->_file;
  if (((uVar5 & 0x82) == 0) || ((uVar5 & 0x40) != 0)) {
LAB_7800f623:
    _File->_flag = uVar5 | 0x20;
    return -1;
  }
  uVar4 = 0;
  if ((uVar5 & 1) != 0) {
    _File->_cnt = 0;
    if ((uVar5 & 0x10) == 0) goto LAB_7800f623;
    _File->_ptr = _File->_base;
    _File->_flag = uVar5 & 0xfffffffe;
  }
  uVar5 = _File->_flag;
  _File->_cnt = 0;
  _File->_flag = uVar5 & 0xffffffef | 2;
  if ((uVar5 & 0x10c) == 0) {
    if ((_File == (FILE *)&DAT_7803f818) || (_File == (FILE *)&DAT_7803f838)) {
      iVar2 = _isatty(_FileHandle);
      if (iVar2 != 0) goto LAB_7800f573;
    }
    FUN_7800f630((int *)pFVar1);
  }
LAB_7800f573:
  if ((pFVar1->_flag & 0x108U) == 0) {
    uVar5 = 1;
    uVar4 = _write(_FileHandle,&_Ch,1);
  }
  else {
    _Buf = pFVar1->_base;
    uVar5 = (int)pFVar1->_ptr - (int)_Buf;
    pFVar1->_ptr = _Buf + 1;
    pFVar1->_cnt = pFVar1->_bufsiz + -1;
    if ((int)uVar5 < 1) {
      if (_FileHandle == 0xffffffff) {
        puVar3 = &__badioinfo;
      }
      else {
        puVar3 = (undefined *)((&__pioinfo)[(int)_FileHandle >> 5] + (_FileHandle & 0x1f) * 0x24);
      }
      if ((puVar3[4] & 0x20) != 0) {
        _lseek(_FileHandle,0,2);
      }
      *pFVar1->_base = (char)_Ch;
    }
    else {
      uVar4 = _write(_FileHandle,_Buf,uVar5);
      *pFVar1->_base = (char)_Ch;
    }
  }
  if (uVar4 != uVar5) {
    pFVar1->_flag = pFVar1->_flag | 0x20;
    return -1;
  }
  return _Ch & 0xff;
}


