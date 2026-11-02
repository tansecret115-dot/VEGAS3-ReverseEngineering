/* Module: pncrt.dll
   Function: _searchenv
   Address: 78022290
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _searchenv(char *_Filename,char *_EnvVar,char *_ResultPath)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char local_108 [264];
  
                    /* 0x22290  428  _searchenv */
  iVar2 = _access(_Filename,0);
  if (iVar2 == 0) {
    pcVar3 = _fullpath(_ResultPath,_Filename,0x104);
    if (pcVar3 == (char *)0x0) {
      *_ResultPath = '\0';
      return;
    }
  }
  else {
    pcVar3 = getenv(_EnvVar);
    if (pcVar3 != (char *)0x0) {
      pcVar3 = (char *)FUN_780233e0(pcVar3,local_108,0x104);
      if (pcVar3 != (char *)0x0) {
        while (local_108[0] != '\0') {
          uVar4 = 0xffffffff;
          pcVar6 = local_108;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          uVar4 = ~uVar4;
          uVar5 = uVar4 - 1;
          cVar1 = local_108[uVar4 - 2];
          pcVar6 = local_108 + (uVar4 - 1);
          if (((cVar1 != '/') && (cVar1 != '\\')) && (cVar1 != ':')) {
            *pcVar6 = '\\';
            pcVar6 = local_108 + uVar4;
            uVar5 = uVar4;
          }
          uVar4 = 0xffffffff;
          pcVar7 = _Filename;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          if ((~uVar4 - 1) + uVar5 < 0x105) {
            uVar4 = 0xffffffff;
            pcVar7 = _Filename;
            do {
              pcVar8 = pcVar7;
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              pcVar8 = pcVar7 + 1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar8;
            } while (cVar1 != '\0');
            uVar4 = ~uVar4;
            pcVar7 = pcVar8 + -uVar4;
            for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
              pcVar7 = pcVar7 + 4;
              pcVar6 = pcVar6 + 4;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *pcVar6 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              pcVar6 = pcVar6 + 1;
            }
            iVar2 = _access(local_108,0);
            if (iVar2 == 0) {
              uVar4 = 0xffffffff;
              pcVar3 = local_108;
              goto code_r0x780223c9;
            }
          }
          pcVar3 = (char *)FUN_780233e0(pcVar3,local_108,0x104);
          if (pcVar3 == (char *)0x0) {
            *_ResultPath = '\0';
            return;
          }
        }
      }
    }
    *_ResultPath = '\0';
  }
  return;
  while( true ) {
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar6;
    if (cVar1 == '\0') break;
code_r0x780223c9:
    pcVar6 = pcVar3;
    if (uVar4 == 0) break;
  }
  uVar4 = ~uVar4;
  pcVar3 = pcVar6 + -uVar4;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)_ResultPath = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    _ResultPath = _ResultPath + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *_ResultPath = *pcVar3;
    pcVar3 = pcVar3 + 1;
    _ResultPath = _ResultPath + 1;
  }
  return;
}


