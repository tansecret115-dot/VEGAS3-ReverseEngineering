/* Module: pncrt.dll
   Function: _execl
   Address: 7801af10
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _execl(char *_Filename,char *_ArgList,...)

{
  intptr_t iVar1;
  
                    /* 0x1af10  213  _execl */
  iVar1 = _execve(_Filename,&_ArgList,(char **)0x0);
  return iVar1;
}


