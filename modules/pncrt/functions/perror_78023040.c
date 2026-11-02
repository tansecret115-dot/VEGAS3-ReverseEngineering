/* Module: pncrt.dll
   Function: perror
   Address: 78023040
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl perror(char *_ErrMsg)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
                    /* 0x23040  678  perror */
  FUN_78011b00(2);
  if ((_ErrMsg != (char *)0x0) && (*_ErrMsg != '\0')) {
    uVar4 = 0xffffffff;
    pcVar5 = _ErrMsg;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_78011300(2,_ErrMsg,~uVar4 - 1);
    FUN_78011300(2,": ",2);
  }
  piVar2 = _errno();
  iVar3 = _sys_nerr;
  if ((-1 < *piVar2) && (piVar2 = _errno(), iVar3 = _sys_nerr, *piVar2 < _sys_nerr)) {
    piVar2 = _errno();
    iVar3 = *piVar2;
  }
  uVar4 = 0xffffffff;
  pcVar5 = (&_sys_errlist)[iVar3];
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_78011300(2,(&_sys_errlist)[iVar3],~uVar4 - 1);
  FUN_78011300(2,"\n",1);
  FUN_78011b70(2);
  return;
}


