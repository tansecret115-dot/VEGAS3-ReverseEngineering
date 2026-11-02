/* Module: pncrt.dll
   Function: tmpnam
   Address: 78027aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl tmpnam(char *_Buffer)

{
  char cVar1;
  int iVar2;
  DWORD *pDVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
                    /* 0x27aa0  732  tmpnam */
  _lock(3);
  if (DAT_78042650 == '\0') {
    FUN_78027ce0(0);
  }
  else {
    iVar2 = FUN_78027d60((uchar *)&DAT_78042650);
    if (iVar2 != 0) {
LAB_78027ba1:
      _unlock(3);
      return (char *)0x0;
    }
  }
  iVar2 = _access(&DAT_78042650,0);
  while (iVar2 == 0) {
    iVar2 = FUN_78027d60((uchar *)&DAT_78042650);
    if (iVar2 != 0) goto LAB_78027ba1;
    iVar2 = _access(&DAT_78042650,0);
  }
  if (_Buffer == (char *)0x0) {
    pDVar3 = FUN_78009cc0();
    if (pDVar3[10] == 0) {
      pvVar4 = malloc(0xe);
      pDVar3[10] = (DWORD)pvVar4;
      if (pvVar4 == (void *)0x0) {
        _unlock(3);
        return &DAT_78042650;
      }
    }
    uVar5 = 0xffffffff;
    _Buffer = (char *)pDVar3[10];
    pcVar7 = &DAT_78042650;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = _Buffer;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
  }
  else {
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_78042650;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = _Buffer;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  _unlock(3);
  return _Buffer;
}


