/* Module: pncrt.dll
   Function: _wexecvp
   Address: 7801bc80
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _wexecvp(wchar_t *_Filename,wchar_t **_ArgList)

{
  intptr_t iVar1;
  
                    /* 0x1bc80  518  _wexecvp */
  iVar1 = _wexecvpe(_Filename,_ArgList,(wchar_t **)0x0);
  return iVar1;
}


