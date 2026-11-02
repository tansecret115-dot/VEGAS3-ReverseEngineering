/* Module: pncrt.dll
   Function: FUN_78016860
   Address: 78016860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_78016860(uchar *param_1,int param_2)

{
  uchar uVar1;
  int iVar2;
  int *piVar3;
  uchar *puVar4;
  int iVar5;
  size_t sVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uchar *puVar10;
  uchar *puVar11;
  bool bVar12;
  
  if (param_1 == (uchar *)0x0) {
    return 0xffffffff;
  }
  puVar4 = _mbschr(param_1,0x3d);
  if (puVar4 == (uchar *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar4) {
    return 0xffffffff;
  }
  bVar12 = puVar4[1] == '\0';
  if (_environ == __initenv) {
    _environ = FUN_78016af0(_environ);
  }
  if (_environ == (int *)0x0) {
    if ((param_2 == 0) || (_wenviron == (undefined4 *)0x0)) {
      if (bVar12) {
        return 0;
      }
      _environ = malloc(4);
      if (_environ == (int *)0x0) {
        return 0xffffffff;
      }
      *_environ = 0;
      if (_wenviron == (undefined4 *)0x0) {
        _wenviron = malloc(4);
        if (_wenviron == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *_wenviron = 0;
      }
    }
    else {
      iVar5 = FUN_780167e0();
      if (iVar5 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar7 = _environ;
  sVar6 = (int)puVar4 - (int)param_1;
  iVar5 = FUN_78016a70(param_1,sVar6);
  if ((iVar5 < 0) || (*piVar7 == 0)) {
    if (bVar12) {
      return 0;
    }
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    piVar7 = realloc(piVar7,iVar5 * 4 + 8);
    if (piVar7 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar7[iVar5] = (int)param_1;
    piVar7[iVar5 + 1] = 0;
    _environ = piVar7;
  }
  else if (bVar12) {
    free((void *)piVar7[iVar5]);
    iVar2 = piVar7[iVar5];
    piVar3 = piVar7 + iVar5;
    while (iVar2 != 0) {
      *piVar3 = piVar3[1];
      iVar5 = iVar5 + 1;
      iVar2 = piVar3[1];
      piVar3 = piVar3 + 1;
    }
    piVar7 = realloc(piVar7,iVar5 * 4);
    if (piVar7 != (int *)0x0) {
      _environ = piVar7;
    }
  }
  else {
    piVar7[iVar5] = (int)param_1;
  }
  if (param_2 != 0) {
    uVar8 = 0xffffffff;
    puVar4 = param_1;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (uVar1 != '\0');
    puVar4 = malloc(~uVar8 + 1);
    if (puVar4 != (uchar *)0x0) {
      uVar8 = 0xffffffff;
      do {
        puVar10 = param_1;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        puVar10 = param_1 + 1;
        uVar1 = *param_1;
        param_1 = puVar10;
      } while (uVar1 != '\0');
      uVar8 = ~uVar8;
      puVar10 = puVar10 + -uVar8;
      puVar11 = puVar4;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)puVar11 = *(undefined4 *)puVar10;
        puVar10 = puVar10 + 4;
        puVar11 = puVar11 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar4[sVar6] = '\0';
      SetEnvironmentVariableA((LPCSTR)puVar4,(LPCSTR)(~-(uint)bVar12 & (uint)(puVar4 + sVar6 + 1)));
      free(puVar4);
      return 0;
    }
  }
  return 0;
}


