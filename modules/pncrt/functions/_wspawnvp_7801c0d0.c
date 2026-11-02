/* Module: pncrt.dll
   Function: _wspawnvp
   Address: 7801c0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _wspawnvp(int _Mode,wchar_t *_Filename,wchar_t **_ArgList)

{
  intptr_t iVar1;
  
                    /* 0x1c0d0  556  _wspawnvp */
  iVar1 = _wspawnvpe(_Mode,_Filename,_ArgList,(wchar_t **)0x0);
  return iVar1;
}


