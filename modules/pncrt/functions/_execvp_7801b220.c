/* Module: pncrt.dll
   Function: _execvp
   Address: 7801b220
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _execvp(char *_Filename,char **_ArgList)

{
  intptr_t iVar1;
  
                    /* 0x1b220  219  _execvp */
  iVar1 = _execvpe(_Filename,_ArgList,(char **)0x0);
  return iVar1;
}


