/* Module: pncrt.dll
   Function: _wexeclpe
   Address: 7801ba50
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _wexeclpe(wchar_t *_Filename,wchar_t *_ArgList,...)

{
  wchar_t *pwVar1;
  int *piVar2;
  intptr_t iVar3;
  
                    /* 0x1ba50  515  _wexeclpe */
  piVar2 = (int *)&stack0x0000000c;
  pwVar1 = _ArgList;
  while (pwVar1 != (wchar_t *)0x0) {
    pwVar1 = (wchar_t *)*piVar2;
    piVar2 = piVar2 + 1;
  }
  iVar3 = _wexecvpe(_Filename,&_ArgList,(wchar_t **)*piVar2);
  return iVar3;
}


