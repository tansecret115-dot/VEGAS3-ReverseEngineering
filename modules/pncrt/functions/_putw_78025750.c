/* Module: pncrt.dll
   Function: _putw
   Address: 78025750
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _putw(int _Ch,FILE *_File)

{
  FILE *_File_00;
  int iVar1;
  int iVar2;
  int *piVar3;
  
                    /* 0x25750  415  _putw */
  _File_00 = _File;
  piVar3 = &_Ch;
  FUN_780094a0((uint)_File);
  iVar2 = 4;
  do {
    iVar1 = _File_00->_cnt + -1;
    _File_00->_cnt = iVar1;
    if (iVar1 < 0) {
      _flsbuf((int)(char)*piVar3,_File_00);
    }
    else {
      *_File_00->_ptr = (char)*piVar3;
      _File_00->_ptr = _File_00->_ptr + 1;
    }
    iVar1 = _Ch;
    piVar3 = (int *)((int)piVar3 + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((_File_00->_flag & 0x20) != 0) {
    FUN_78009510((uint)_File_00);
    return -1;
  }
  FUN_78009510((uint)_File_00);
  return iVar1;
}


