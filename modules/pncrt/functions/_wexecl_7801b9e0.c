/* Module: pncrt.dll
   Function: _wexecl
   Address: 7801b9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _wexecl(wchar_t *_Filename,wchar_t *_ArgList,...)

{
  intptr_t iVar1;
  
                    /* 0x1b9e0  512  _wexecl */
  iVar1 = _wexecve(_Filename,&_ArgList,(wchar_t **)0x0);
  return iVar1;
}


