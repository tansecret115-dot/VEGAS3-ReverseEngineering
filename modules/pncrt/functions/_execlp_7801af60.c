/* Module: pncrt.dll
   Function: _execlp
   Address: 7801af60
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _execlp(char *_Filename,char *_ArgList,...)

{
  intptr_t iVar1;
  
                    /* 0x1af60  215  _execlp */
  iVar1 = _execvp(_Filename,&_ArgList);
  return iVar1;
}


