/* Module: pncrt.dll
   Function: rewind
   Address: 78027800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl rewind(FILE *_File)

{
  uint _FileHandle;
  undefined *puVar1;
  
                    /* 0x27800  692  rewind */
  _FileHandle = _File->_file;
  FUN_780094a0((uint)_File);
  FUN_7800e5c0((int *)_File);
  _File->_flag = _File->_flag & 0xffffffcf;
  if (_FileHandle == 0xffffffff) {
    puVar1 = &__badioinfo;
  }
  else {
    puVar1 = (undefined *)((&__pioinfo)[(int)_FileHandle >> 5] + (_FileHandle & 0x1f) * 0x24);
  }
  puVar1[4] = puVar1[4] & 0xfd;
  if ((_File->_flag & 0x80U) != 0) {
    _File->_flag = _File->_flag & 0xfffffffc;
  }
  _lseek(_FileHandle,0,0);
  FUN_78009510((uint)_File);
  return;
}


