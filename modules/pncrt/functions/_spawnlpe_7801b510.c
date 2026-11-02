/* Module: pncrt.dll
   Function: _spawnlpe
   Address: 7801b510
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _spawnlpe(int param_1,char *_Filename,char *_ArgList,...)

{
  char *pcVar1;
  int *piVar2;
  intptr_t iVar3;
  
                    /* 0x1b510  446  _spawnlpe */
  piVar2 = (int *)&stack0x00000010;
  pcVar1 = _ArgList;
  while (pcVar1 != (char *)0x0) {
    pcVar1 = (char *)*piVar2;
    piVar2 = piVar2 + 1;
  }
  iVar3 = _spawnvpe(param_1,_Filename,&_ArgList,(char **)*piVar2);
  return iVar3;
}


