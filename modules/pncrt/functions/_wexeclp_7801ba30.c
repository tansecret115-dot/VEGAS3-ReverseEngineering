/* Module: pncrt.dll
   Function: _wexeclp
   Address: 7801ba30
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _wexeclp(wchar_t *_Filename,wchar_t *_ArgList,...)

{
  intptr_t iVar1;
  
                    /* 0x1ba30  514  _wexeclp */
  iVar1 = _wexecvp(_Filename,&_ArgList);
  return iVar1;
}


