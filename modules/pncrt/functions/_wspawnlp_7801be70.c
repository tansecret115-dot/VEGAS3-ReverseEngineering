/* Module: pncrt.dll
   Function: _wspawnlp
   Address: 7801be70
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _wspawnlp(int _Mode,wchar_t *_Filename,wchar_t *_ArgList,...)

{
  intptr_t iVar1;
  
                    /* 0x1be70  552  _wspawnlp */
  iVar1 = _wspawnvp(_Mode,_Filename,&_ArgList);
  return iVar1;
}


