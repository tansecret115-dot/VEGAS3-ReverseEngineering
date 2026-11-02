/* Module: pncrt.dll
   Function: _spawnve
   Address: 7801b560
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _spawnve(int param_1,char *_Filename,char **_ArgList,char **_Env)

{
  char cVar1;
  uchar *puVar2;
  uchar *puVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined **ppuVar9;
  char *pcVar10;
  char *pcVar11;
  char *local_c;
  LPSTR local_8;
  
                    /* 0x1b560  448  _spawnve */
  local_c = _Filename;
  puVar2 = _mbsrchr((uchar *)_Filename,0x5c);
  puVar3 = _mbsrchr((uchar *)_Filename,0x2f);
  if (puVar3 == (uchar *)0x0) {
    if ((puVar2 == (uchar *)0x0) &&
       (puVar2 = _mbschr((uchar *)_Filename,0x3a), puVar2 == (uchar *)0x0)) {
      uVar5 = 0xffffffff;
      pcVar4 = _Filename;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      local_c = malloc(~uVar5 + 2);
      if (local_c == (char *)0x0) {
        return -1;
      }
      *(undefined2 *)local_c = DAT_78037984;
      local_c[2] = DAT_78037986;
      uVar5 = 0xffffffff;
      pcVar4 = _Filename;
      do {
        pcVar10 = pcVar4;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar10;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar6 = -1;
      pcVar4 = local_c;
      do {
        pcVar11 = pcVar4;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar11 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar11;
      } while (cVar1 != '\0');
      pcVar4 = pcVar10 + -uVar5;
      pcVar10 = pcVar11 + -1;
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar10 = pcVar10 + 1;
      }
      puVar2 = (uchar *)(local_c + 2);
    }
  }
  else if ((puVar2 == (uchar *)0x0) || (puVar2 < puVar3)) {
    puVar2 = puVar3;
  }
  local_8 = (LPSTR)0xffffffff;
  puVar2 = _mbsrchr(puVar2,0x2e);
  if (puVar2 == (uchar *)0x0) {
    uVar5 = 0xffffffff;
    pcVar4 = local_c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = malloc(~uVar5 + 4);
    if (pcVar4 == (char *)0x0) {
      return -1;
    }
    uVar5 = 0xffffffff;
    pcVar10 = local_c;
    do {
      pcVar11 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar10 = pcVar11 + -uVar5;
    pcVar11 = pcVar4;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar10 = local_c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    ppuVar9 = &PTR_DAT_780405cc;
    do {
      uVar7 = 0xffffffff;
      pcVar10 = *ppuVar9;
      do {
        pcVar11 = pcVar10;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar10 = pcVar11 + -uVar7;
      pcVar11 = pcVar4 + (~uVar5 - 1);
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      iVar6 = _access(pcVar4,0);
      if (iVar6 != -1) {
        local_8 = FUN_7801b760(param_1,pcVar4,_ArgList,_Env);
        break;
      }
      ppuVar9 = ppuVar9 + -1;
    } while (0x780405bf < (int)ppuVar9);
    free(pcVar4);
  }
  else {
    iVar6 = _access(local_c,0);
    if (iVar6 != -1) {
      local_8 = FUN_7801b760(param_1,local_c,_ArgList,_Env);
    }
  }
  if (local_c != _Filename) {
    free(local_c);
  }
  return (intptr_t)local_8;
}


