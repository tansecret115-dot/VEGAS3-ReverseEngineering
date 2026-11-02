/* Module: pncrt.dll
   Function: _wspawnle
   Address: 7801be40
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _wspawnle(int _Mode,wchar_t *_Filename,wchar_t *_ArgList,...)

{
  wchar_t *pwVar1;
  int *piVar2;
  intptr_t iVar3;
  
                    /* 0x1be40  551  _wspawnle */
  piVar2 = (int *)&stack0x00000010;
  pwVar1 = _ArgList;
  while (pwVar1 != (wchar_t *)0x0) {
    pwVar1 = (wchar_t *)*piVar2;
    piVar2 = piVar2 + 1;
  }
  iVar3 = _wspawnve(_Mode,_Filename,&_ArgList,(wchar_t **)*piVar2);
  return iVar3;
}


