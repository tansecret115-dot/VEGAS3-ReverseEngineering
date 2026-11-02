/* Module: pncrt.dll
   Function: _tempnam
   Address: 780259e0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _tempnam(char *_DirName,char *_FilePrefix)

{
  char cVar1;
  uchar uVar2;
  uchar *_Str;
  int iVar3;
  char *pcVar4;
  uchar *puVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uchar *puVar11;
  char *pcVar12;
  char *pcVar13;
  uchar *local_8;
  uint local_4;
  
                    /* 0x259e0  475  _tempnam */
  local_4 = 0;
  local_8 = (uchar *)0x0;
  _Str = (uchar *)getenv("TMP");
  if (((_Str == (uchar *)0x0) ||
      ((iVar3 = _access((char *)_Str,0), iVar3 == -1 &&
       (((_Str == (uchar *)0x0 ||
         (_Str = (uchar *)FUN_78025c30((char *)_Str), local_8 = _Str, _Str == (uchar *)0x0)) ||
        (iVar3 = _access((char *)_Str,0), iVar3 == -1)))))) &&
     ((_DirName == (char *)0x0 ||
      (iVar3 = _access(_DirName,0), _Str = (uchar *)_DirName, iVar3 == -1)))) {
    free(local_8);
    iVar3 = _access("\\",0);
    _Str = "\\";
    if (iVar3 == -1) {
      _Str = ".";
    }
  }
  if (_FilePrefix != (char *)0x0) {
    uVar8 = 0xffffffff;
    pcVar4 = _FilePrefix;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    local_4 = ~uVar8 - 1;
  }
  uVar8 = 0xffffffff;
  puVar5 = _Str;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    uVar2 = *puVar5;
    puVar5 = puVar5 + 1;
  } while (uVar2 != '\0');
  uVar8 = ~uVar8 + 0xb + local_4;
  pcVar4 = _FilePrefix;
  if ((0x104 < uVar8) || (pcVar4 = malloc(uVar8), pcVar4 == (char *)0x0)) goto LAB_78025c14;
  uVar8 = 0xffffffff;
  *pcVar4 = '\0';
  puVar5 = _Str;
  do {
    puVar11 = puVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    puVar11 = puVar5 + 1;
    uVar2 = *puVar5;
    puVar5 = puVar11;
  } while (uVar2 != '\0');
  uVar8 = ~uVar8;
  iVar3 = -1;
  pcVar10 = pcVar4;
  do {
    pcVar13 = pcVar10;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar13 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar13;
  } while (cVar1 != '\0');
  puVar5 = puVar11 + -uVar8;
  puVar11 = (uchar *)(pcVar13 + -1);
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)puVar11 = *(undefined4 *)puVar5;
    puVar5 = puVar5 + 4;
    puVar11 = puVar11 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar11 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar8 = 0xffffffff;
  puVar5 = _Str;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    uVar2 = *puVar5;
    puVar5 = puVar5 + 1;
  } while (uVar2 != '\0');
  if (_Str[~uVar8 - 2] == '\\') {
    puVar5 = _mbsrchr(_Str,0x5c);
    if (_Str + (~uVar8 - 2) != puVar5) {
LAB_78025b1b:
      uVar8 = 0xffffffff;
      pcVar10 = "\\";
      do {
        pcVar13 = pcVar10;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar3 = -1;
      pcVar10 = pcVar4;
      do {
        pcVar12 = pcVar10;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar12 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      pcVar10 = pcVar13 + -uVar8;
      pcVar13 = pcVar12 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
  }
  else if (_Str[~uVar8 - 2] != '/') goto LAB_78025b1b;
  if (_FilePrefix != (char *)0x0) {
    uVar8 = 0xffffffff;
    do {
      pcVar10 = _FilePrefix;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar10 = _FilePrefix + 1;
      cVar1 = *_FilePrefix;
      _FilePrefix = pcVar10;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar3 = -1;
    pcVar13 = pcVar4;
    do {
      pcVar12 = pcVar13;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar12 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -uVar8;
    pcVar13 = pcVar12 + -1;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar13 = pcVar13 + 1;
    }
  }
  uVar8 = 0xffffffff;
  pcVar10 = pcVar4;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  _lock(3);
  uVar6 = 1;
  if (local_4 <= DAT_78042608) {
    uVar6 = DAT_78040cd8;
  }
  DAT_78040cd8 = uVar6 + 1;
  uVar9 = DAT_78040cd8 - uVar6;
  DAT_78042608 = local_4;
  while (uVar9 < 0x8000) {
    _ultoa(DAT_78040cd8,pcVar4 + (~uVar8 - 1),10);
    iVar3 = _access(pcVar4,0);
    if ((iVar3 != 0) && (piVar7 = _errno(), *piVar7 != 0xd)) goto LAB_78025c04;
    DAT_78040cd8 = DAT_78040cd8 + 1;
    uVar9 = DAT_78040cd8 - uVar6;
  }
  free(pcVar4);
  pcVar4 = (char *)0x0;
LAB_78025c04:
  _unlock(3);
LAB_78025c14:
  free(local_8);
  return pcVar4;
}


