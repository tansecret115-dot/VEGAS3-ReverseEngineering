/* Module: pncrt.dll
   Function: _execle
   Address: 7801af30
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _execle(char *_Filename,char *_ArgList,...)

{
  char *pcVar1;
  int *piVar2;
  intptr_t iVar3;
  
                    /* 0x1af30  214  _execle */
  piVar2 = (int *)&stack0x0000000c;
  pcVar1 = _ArgList;
  while (pcVar1 != (char *)0x0) {
    pcVar1 = (char *)*piVar2;
    piVar2 = piVar2 + 1;
  }
  iVar3 = _execve(_Filename,&_ArgList,(char **)*piVar2);
  return iVar3;
}


