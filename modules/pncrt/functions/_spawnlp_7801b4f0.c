/* Module: pncrt.dll
   Function: _spawnlp
   Address: 7801b4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _spawnlp(int param_1,char *_Filename,char *_ArgList,...)

{
  intptr_t iVar1;
  
                    /* 0x1b4f0  445  _spawnlp */
  iVar1 = _spawnvp(param_1,_Filename,&_ArgList);
  return iVar1;
}


