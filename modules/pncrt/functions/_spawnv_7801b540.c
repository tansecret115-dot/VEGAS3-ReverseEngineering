/* Module: pncrt.dll
   Function: _spawnv
   Address: 7801b540
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _spawnv(int _Mode,char *_Filename,char **_ArgList)

{
  intptr_t iVar1;
  
                    /* 0x1b540  447  _spawnv */
  iVar1 = _spawnve(_Mode,_Filename,_ArgList,(char **)0x0);
  return iVar1;
}


