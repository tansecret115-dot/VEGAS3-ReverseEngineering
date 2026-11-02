/* Module: pncrt.dll
   Function: _pclose
   Address: 780256d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _pclose(FILE *_File)

{
  int *piVar1;
  intptr_t iVar2;
  int *piVar3;
  int iVar4;
  int local_4;
  
                    /* 0x256d0  407  _pclose */
  iVar4 = -1;
  _lock(0x10);
  if (_File == (FILE *)0x0) goto LAB_78025734;
  piVar1 = FUN_78026430((int)_File);
  if (piVar1 == (int *)0x0) goto LAB_78025734;
  fclose(_File);
  iVar2 = _cwait(&local_4,piVar1[1],1);
  if (iVar2 == -1) {
    piVar3 = _errno();
    if (*piVar3 == 4) goto LAB_78025723;
  }
  else {
LAB_78025723:
    iVar4 = local_4;
  }
  *piVar1 = 0;
  piVar1[1] = 0;
LAB_78025734:
  _unlock(0x10);
  return iVar4;
}


