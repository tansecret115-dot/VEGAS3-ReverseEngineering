/* Module: pncrt.dll
   Function: freopen
   Address: 780270c0
   Source: Ghidra pseudocode (Stage 10 batch) */


FILE * __cdecl freopen(char *_Filename,char *_Mode,FILE *_File)

{
  FILE *pFVar1;
  
                    /* 0x270c0  617  freopen */
  FUN_780094a0((uint)_File);
  if ((_File->_flag & 0x83) != 0) {
    FUN_7800f490((int *)_File);
  }
  _File->_base = (char *)0x0;
  _File->_ptr = (char *)0x0;
  _File->_flag = 0;
  _File->_cnt = 0;
  pFVar1 = (FILE *)FUN_780283d0(_Filename,_Mode,0x40,&_File->_ptr);
  FUN_78009510((uint)_File);
  return pFVar1;
}


