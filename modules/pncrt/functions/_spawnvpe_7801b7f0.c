/* Module: pncrt.dll
   Function: _spawnvpe
   Address: 7801b7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _spawnvpe(int _Mode,char *_Filename,char **_ArgList,char **_Env)

{
  uchar uVar1;
  char cVar2;
  intptr_t iVar3;
  int *piVar4;
  uchar *puVar5;
  char *pcVar6;
  uchar *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uchar *_Str;
  char *pcVar11;
  char *pcVar12;
  
                    /* 0x1b7f0  450  _spawnvpe */
  _Str = (uchar *)0x0;
  iVar3 = _spawnve(_Mode,_Filename,_ArgList,_Env);
  if ((((iVar3 == -1) && (piVar4 = _errno(), *piVar4 == 2)) &&
      (puVar5 = _mbschr((uchar *)_Filename,0x2f), puVar5 == (uchar *)0x0)) &&
     (pcVar6 = getenv("PATH"), pcVar6 != (char *)0x0)) {
    _Str = malloc(0x104);
    if (_Str == (uchar *)0x0) {
      return -1;
    }
    pcVar6 = (char *)FUN_780233e0(pcVar6,(char *)_Str,0x103);
    while ((pcVar6 != (char *)0x0 && (*_Str != '\0'))) {
      uVar8 = 0xffffffff;
      puVar5 = _Str;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
      } while (uVar1 != '\0');
      if (_Str[~uVar8 - 2] == '\\') {
        puVar5 = _mbsrchr(_Str,0x5c);
        if (_Str + (~uVar8 - 2) != puVar5) {
LAB_7801b8be:
          uVar8 = 0xffffffff;
          pcVar11 = "\\";
          do {
            pcVar12 = pcVar11;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar12 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar2 != '\0');
          uVar8 = ~uVar8;
          iVar9 = -1;
          puVar5 = _Str;
          do {
            puVar7 = puVar5;
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            puVar7 = puVar5 + 1;
            uVar1 = *puVar5;
            puVar5 = puVar7;
          } while (uVar1 != '\0');
          puVar5 = (uchar *)(pcVar12 + -uVar8);
          puVar7 = puVar7 + -1;
          for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)puVar7 = *(undefined4 *)puVar5;
            puVar5 = puVar5 + 4;
            puVar7 = puVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
        }
      }
      else if (_Str[~uVar8 - 2] != '/') goto LAB_7801b8be;
      uVar8 = 0xffffffff;
      pcVar11 = _Filename;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      uVar10 = 0xffffffff;
      puVar5 = _Str;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
      } while (uVar1 != '\0');
      if (0x103 < ~uVar8 + (~uVar10 - 2)) break;
      uVar8 = 0xffffffff;
      pcVar11 = _Filename;
      do {
        pcVar12 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar2 != '\0');
      uVar8 = ~uVar8;
      iVar9 = -1;
      puVar5 = _Str;
      do {
        puVar7 = puVar5;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        puVar7 = puVar5 + 1;
        uVar1 = *puVar5;
        puVar5 = puVar7;
      } while (uVar1 != '\0');
      puVar5 = (uchar *)(pcVar12 + -uVar8);
      puVar7 = puVar7 + -1;
      for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)puVar7 = *(undefined4 *)puVar5;
        puVar5 = puVar5 + 4;
        puVar7 = puVar7 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      iVar3 = _spawnve(_Mode,(char *)_Str,_ArgList,_Env);
      if (iVar3 != -1) break;
      piVar4 = _errno();
      if (*piVar4 != 2) {
        puVar5 = _mbschr(_Str,0x5c);
        if ((_Str != puVar5) && (puVar5 = _mbschr(_Str,0x2f), _Str != puVar5)) break;
        puVar5 = _Str + 1;
        puVar7 = _mbschr(puVar5,0x5c);
        if ((puVar5 != puVar7) && (puVar7 = _mbschr(puVar5,0x2f), puVar5 != puVar7)) break;
      }
      pcVar6 = (char *)FUN_780233e0(pcVar6,(char *)_Str,0x103);
    }
  }
  if (_Str != (uchar *)0x0) {
    free(_Str);
  }
  return iVar3;
}


