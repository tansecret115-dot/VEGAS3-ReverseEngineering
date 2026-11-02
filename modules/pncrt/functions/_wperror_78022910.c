/* Module: pncrt.dll
   Function: _wperror
   Address: 78022910
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _wperror(wchar_t *_ErrMsg)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  
                    /* 0x22910  539  _wperror */
  sVar2 = wcslen(_ErrMsg);
  pcVar3 = malloc(sVar2 + 1);
  if (pcVar3 != (char *)0x0) {
    sVar2 = wcstombs(pcVar3,_ErrMsg,sVar2 + 1);
    if (sVar2 == 0) {
      free(pcVar3);
      return;
    }
    FUN_78011b00(2);
    if (*pcVar3 != '\0') {
      uVar6 = 0xffffffff;
      pcVar7 = pcVar3;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_78011300(2,pcVar3,~uVar6 - 1);
      FUN_78011300(2,": ",2);
    }
    free(pcVar3);
    piVar4 = _errno();
    iVar5 = _sys_nerr;
    if ((-1 < *piVar4) && (piVar4 = _errno(), iVar5 = _sys_nerr, *piVar4 < _sys_nerr)) {
      piVar4 = _errno();
      iVar5 = *piVar4;
    }
    uVar6 = 0xffffffff;
    pcVar3 = (&_sys_errlist)[iVar5];
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_78011300(2,(&_sys_errlist)[iVar5],~uVar6 - 1);
    FUN_78011300(2,"\n",1);
    FUN_78011b70(2);
  }
  return;
}


