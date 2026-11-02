/* Module: pncrt.dll
   Function: _wfreopen
   Address: 78025f90
   Source: Ghidra pseudocode (Stage 10 batch) */


FILE * __cdecl _wfreopen(wchar_t *_Filename,wchar_t *_Mode,FILE *_OldFile)

{
  FILE *pFVar1;
  
                    /* 0x25f90  526  _wfreopen */
  FUN_780094a0((uint)_OldFile);
  if ((_OldFile->_flag & 0x83) != 0) {
    FUN_7800f490((int *)_OldFile);
  }
  _OldFile->_base = (char *)0x0;
  _OldFile->_ptr = (char *)0x0;
  _OldFile->_flag = 0;
  _OldFile->_cnt = 0;
  pFVar1 = (FILE *)FUN_78028fb0(_Filename,_Mode,0x40,&_OldFile->_ptr);
  FUN_78009510((uint)_OldFile);
  return pFVar1;
}


