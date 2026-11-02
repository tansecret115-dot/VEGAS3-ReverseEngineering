/* Module: pncrt.dll
   Function: _wspawnl
   Address: 7801be20
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _wspawnl(int _Mode,wchar_t *_Filename,wchar_t *_ArgList,...)

{
  intptr_t iVar1;
  
                    /* 0x1be20  550  _wspawnl */
  iVar1 = _wspawnve(_Mode,_Filename,&_ArgList,(wchar_t **)0x0);
  return iVar1;
}


