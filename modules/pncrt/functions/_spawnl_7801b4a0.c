/* Module: pncrt.dll
   Function: _spawnl
   Address: 7801b4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _spawnl(int _Mode,char *_Filename,char *_ArgList,...)

{
  intptr_t iVar1;
  
                    /* 0x1b4a0  443  _spawnl */
  iVar1 = _spawnve(_Mode,_Filename,&_ArgList,(char **)0x0);
  return iVar1;
}


