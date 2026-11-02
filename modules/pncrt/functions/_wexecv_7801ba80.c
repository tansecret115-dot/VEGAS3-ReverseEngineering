/* Module: pncrt.dll
   Function: _wexecv
   Address: 7801ba80
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _wexecv(wchar_t *_Filename,wchar_t **_ArgList)

{
  intptr_t iVar1;
  
                    /* 0x1ba80  516  _wexecv */
  iVar1 = _wexecve(_Filename,_ArgList,(wchar_t **)0x0);
  return iVar1;
}


