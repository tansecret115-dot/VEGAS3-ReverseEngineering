/* Module: pncrt.dll
   Function: _wspawnv
   Address: 7801bec0
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _wspawnv(int _Mode,wchar_t *_Filename,wchar_t **_ArgList)

{
  intptr_t iVar1;
  
                    /* 0x1bec0  554  _wspawnv */
  iVar1 = _wspawnve(_Mode,_Filename,_ArgList,(wchar_t **)0x0);
  return iVar1;
}


