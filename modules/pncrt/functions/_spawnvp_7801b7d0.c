/* Module: pncrt.dll
   Function: _spawnvp
   Address: 7801b7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _spawnvp(int param_1,char *_Filename,char **_ArgList)

{
  intptr_t iVar1;
  
                    /* 0x1b7d0  449  _spawnvp */
  iVar1 = _spawnvpe(param_1,_Filename,_ArgList,(char **)0x0);
  return iVar1;
}


