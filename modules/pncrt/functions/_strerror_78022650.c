/* Module: pncrt.dll
   Function: _strerror
   Address: 78022650
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _strerror(char *_ErrMsg)

{
  char cVar1;
  char *pcVar2;
  DWORD *pDVar3;
  void *pvVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  
                    /* 0x22650  458  _strerror */
  pDVar3 = FUN_78009cc0();
  if (pDVar3[9] == 0) {
    pvVar4 = malloc(0x86);
    pDVar3[9] = (DWORD)pvVar4;
    if (pvVar4 == (void *)0x0) {
      return (char *)0x0;
    }
  }
  pcVar2 = (char *)pDVar3[9];
  *pcVar2 = '\0';
  if ((_ErrMsg != (char *)0x0) && (*_ErrMsg != '\0')) {
    uVar6 = 0xffffffff;
    do {
      pcVar9 = _ErrMsg;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = _ErrMsg + 1;
      cVar1 = *_ErrMsg;
      _ErrMsg = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar11 = pcVar2;
    do {
      pcVar10 = pcVar11;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -uVar6;
    pcVar11 = pcVar10 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar9 = ": ";
    do {
      pcVar11 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar9 = pcVar2;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar6;
    pcVar11 = pcVar10 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  piVar5 = _errno();
  iVar7 = _sys_nerr;
  if ((-1 < *piVar5) && (piVar5 = _errno(), iVar7 = _sys_nerr, *piVar5 < _sys_nerr)) {
    piVar5 = _errno();
    iVar7 = *piVar5;
  }
  uVar6 = 0xffffffff;
  pcVar9 = (&_sys_errlist)[iVar7];
  do {
    pcVar11 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar7 = -1;
  pcVar9 = pcVar2;
  do {
    pcVar10 = pcVar9;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar6;
  pcVar11 = pcVar10 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar9 = "\n";
  do {
    pcVar11 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar7 = -1;
  pcVar9 = pcVar2;
  do {
    pcVar10 = pcVar9;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar6;
  pcVar11 = pcVar10 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  return pcVar2;
}


