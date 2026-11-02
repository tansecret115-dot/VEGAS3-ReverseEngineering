/* Module: pncrt.dll
   Function: _execvpe
   Address: 7801b240
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _execvpe(char *_Filename,char **_ArgList,char **_Env)

{
  char cVar1;
  uchar uVar2;
  int *piVar3;
  uchar *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uchar *_Str;
  uchar *puVar8;
  uchar *puVar9;
  char *pcVar10;
  char *pcVar11;
  
                    /* 0x1b240  220  _execvpe */
  _Str = (uchar *)0x0;
  _execve(_Filename,_ArgList,_Env);
  piVar3 = _errno();
  if (((((*piVar3 == 2) && (puVar4 = _mbschr((uchar *)_Filename,0x5c), puVar4 == (uchar *)0x0)) &&
       (puVar4 = _mbschr((uchar *)_Filename,0x2f), puVar4 == (uchar *)0x0)) &&
      ((*_Filename == '\0' || (_Filename[1] != ':')))) &&
     (puVar4 = (uchar *)getenv("PATH"), puVar4 != (uchar *)0x0)) {
    _Str = malloc(0x104);
    if (_Str != (uchar *)0x0) {
      do {
        uVar2 = *puVar4;
        puVar9 = puVar4;
        for (puVar8 = _Str; ((uVar2 != '\0' && (uVar2 != ';')) && (puVar8 < _Str + 0x102));
            puVar8 = puVar8 + 1) {
          *puVar8 = uVar2;
          uVar2 = puVar9[1];
          puVar9 = puVar9 + 1;
        }
        *puVar8 = '\0';
        uVar2 = puVar8[-1];
        if (uVar2 == '\\') {
          puVar4 = _mbsrchr(_Str,0x5c);
          if (puVar8 + -1 != puVar4) {
LAB_7801b323:
            uVar5 = 0xffffffff;
            pcVar10 = "\\";
            do {
              pcVar11 = pcVar10;
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              pcVar11 = pcVar10 + 1;
              cVar1 = *pcVar10;
              pcVar10 = pcVar11;
            } while (cVar1 != '\0');
            uVar5 = ~uVar5;
            iVar6 = -1;
            puVar4 = _Str;
            do {
              puVar8 = puVar4;
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              puVar8 = puVar4 + 1;
              uVar2 = *puVar4;
              puVar4 = puVar8;
            } while (uVar2 != '\0');
            puVar4 = (uchar *)(pcVar11 + -uVar5);
            puVar8 = puVar8 + -1;
            for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)puVar8 = *(undefined4 *)puVar4;
              puVar4 = puVar4 + 4;
              puVar8 = puVar8 + 4;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar8 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar8 = puVar8 + 1;
            }
          }
        }
        else if (uVar2 != '/') goto LAB_7801b323;
        uVar5 = 0xffffffff;
        pcVar10 = _Filename;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        uVar7 = 0xffffffff;
        puVar4 = _Str;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          uVar2 = *puVar4;
          puVar4 = puVar4 + 1;
        } while (uVar2 != '\0');
        if (0x103 < ~uVar5 + (~uVar7 - 2)) goto LAB_7801b410;
        uVar5 = 0xffffffff;
        pcVar10 = _Filename;
        do {
          pcVar11 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar6 = -1;
        puVar4 = _Str;
        do {
          puVar8 = puVar4;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          puVar8 = puVar4 + 1;
          uVar2 = *puVar4;
          puVar4 = puVar8;
        } while (uVar2 != '\0');
        puVar4 = (uchar *)(pcVar11 + -uVar5);
        puVar8 = puVar8 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)puVar8 = *(undefined4 *)puVar4;
          puVar4 = puVar4 + 4;
          puVar8 = puVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
        _execve((char *)_Str,_ArgList,_Env);
        piVar3 = _errno();
        if (*piVar3 != 2) {
          puVar4 = _mbschr(_Str,0x5c);
          if ((_Str != puVar4) && (puVar4 = _mbschr(_Str,0x2f), _Str != puVar4)) goto LAB_7801b410;
          puVar4 = _Str + 1;
          puVar8 = _mbschr(puVar4,0x5c);
          if ((puVar4 != puVar8) && (puVar8 = _mbschr(puVar4,0x2f), puVar4 != puVar8))
          goto LAB_7801b410;
        }
        if ((*puVar9 == '\0') || (puVar4 = puVar9 + 1, puVar9 == (uchar *)0x0)) goto LAB_7801b410;
      } while( true );
    }
  }
  else {
LAB_7801b410:
    if (_Str != (uchar *)0x0) {
      free(_Str);
    }
  }
  return -1;
}


