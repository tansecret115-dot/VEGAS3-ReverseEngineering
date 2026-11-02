/* Module: pncrt.dll
   Function: _wspawnlpe
   Address: 7801be90
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _wspawnlpe(int _Mode,wchar_t *_Filename,wchar_t *_ArgList,...)

{
  wchar_t *pwVar1;
  int *piVar2;
  intptr_t iVar3;
  
                    /* 0x1be90  553  _wspawnlpe */
  piVar2 = (int *)&stack0x00000010;
  pwVar1 = _ArgList;
  while (pwVar1 != (wchar_t *)0x0) {
    pwVar1 = (wchar_t *)*piVar2;
    piVar2 = piVar2 + 1;
  }
  iVar3 = _wspawnvpe(_Mode,_Filename,&_ArgList,(wchar_t **)*piVar2);
  return iVar3;
}


