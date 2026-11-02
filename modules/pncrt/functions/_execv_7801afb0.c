/* Module: pncrt.dll
   Function: _execv
   Address: 7801afb0
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _execv(char *_Filename,char **_ArgList)

{
  intptr_t iVar1;
  
                    /* 0x1afb0  217  _execv */
  iVar1 = _execve(_Filename,_ArgList,(char **)0x0);
  return iVar1;
}


