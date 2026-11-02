/* Module: pncrt.dll
   Function: FUN_7801c680
   Address: 7801c680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_7801c680(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  char cVar1;
  void *pvVar2;
  int *piVar3;
  ulong *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  size_t _Size;
  char *pcVar9;
  char *pcVar10;
  undefined4 *local_4;
  
  _Size = 2;
  pcVar7 = (char *)*param_1;
  puVar8 = param_1;
  while (pcVar7 != (char *)0x0) {
    uVar5 = 0xffffffff;
    puVar8 = puVar8 + 1;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    _Size = _Size + ~uVar5;
    pcVar7 = (char *)*puVar8;
  }
  pvVar2 = malloc(_Size);
  *param_3 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    *param_4 = 0;
LAB_7801c7cc:
    piVar3 = _errno();
    *piVar3 = 0xc;
    puVar4 = __doserrno();
    *puVar4 = 8;
    return 0xffffffff;
  }
  if (param_2 != (undefined4 *)0x0) {
    _Size = 2;
    pcVar7 = (char *)*param_2;
    puVar8 = param_2;
    while (pcVar7 != (char *)0x0) {
      uVar5 = 0xffffffff;
      puVar8 = puVar8 + 1;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      _Size = _Size + ~uVar5;
      pcVar7 = (char *)*puVar8;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    *param_4 = 0;
    puVar8 = param_4;
    local_4 = this;
  }
  else {
    if (DAT_78041e2c == (char *)0x0) {
      DAT_78041e2c = FUN_7800d180();
      if (DAT_78041e2c == (LPSTR)0x0) {
        return 0xffffffff;
      }
    }
    local_4 = (undefined4 *)0x0;
    if (*DAT_78041e2c != '\0') {
      cVar1 = *DAT_78041e2c;
      pcVar7 = DAT_78041e2c;
      do {
        if (cVar1 == '=') break;
        uVar5 = 0xffffffff;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        local_4 = (undefined4 *)((int)local_4 + ~uVar5);
        pcVar7 = (char *)((int)local_4 + (int)DAT_78041e2c);
        cVar1 = *pcVar7;
      } while (cVar1 != '\0');
    }
    cVar1 = *(char *)((int)local_4 + (int)DAT_78041e2c);
    puVar8 = local_4;
    while ((((cVar1 == '=' && (DAT_78041e2c[(int)puVar8 + 1] != '\0')) &&
            (DAT_78041e2c[(int)puVar8 + 2] == ':')) && (DAT_78041e2c[(int)puVar8 + 3] == '='))) {
      uVar5 = 0xffffffff;
      pcVar7 = (char *)((int)(puVar8 + 1) + (int)DAT_78041e2c);
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      puVar8 = (undefined4 *)((int)puVar8 + ~uVar5 + 4);
      cVar1 = *(char *)((int)puVar8 + (int)DAT_78041e2c);
    }
    pvVar2 = malloc((int)puVar8 + (_Size - (int)local_4));
    *param_4 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      free((void *)*param_3);
      *param_3 = 0;
      goto LAB_7801c7cc;
    }
  }
  pcVar7 = (char *)*param_3;
  if ((char *)*param_1 == (char *)0x0) {
    pcVar7 = pcVar7 + 1;
  }
  else {
    uVar5 = 0xffffffff;
    pcVar9 = (char *)*param_1;
    do {
      pcVar10 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar10 + -uVar5;
    pcVar10 = pcVar7;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcVar9 = (char *)*param_1;
    param_1 = param_1 + 1;
    uVar5 = 0xffffffff;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + ~uVar5;
  }
  pcVar9 = (char *)*param_1;
  while (pcVar9 != (char *)0x0) {
    uVar5 = 0xffffffff;
    do {
      pcVar10 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar10 + -uVar5;
    pcVar10 = pcVar7;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar9 = (char *)*param_1;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcVar7[~uVar5 - 1] = ' ';
    pcVar7 = pcVar7 + (~uVar5 - 1) + 1;
    pcVar9 = (char *)param_1[1];
    param_1 = param_1 + 1;
  }
  pcVar7[-1] = '\0';
  *pcVar7 = '\0';
  pcVar7 = (char *)*param_4;
  if (param_2 != (undefined4 *)0x0) {
    pcVar9 = DAT_78041e2c + (int)local_4;
    pcVar10 = pcVar7;
    for (uVar5 = (uint)((int)puVar8 - (int)local_4) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = (int)puVar8 - (int)local_4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcVar7 = pcVar7 + ((int)puVar8 - (int)local_4);
    pcVar9 = (char *)*param_2;
    while (pcVar9 != (char *)0x0) {
      uVar5 = 0xffffffff;
      do {
        pcVar10 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar9 = pcVar10 + -uVar5;
      pcVar10 = pcVar7;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar9 = (char *)*param_2;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + ~uVar5;
      pcVar9 = (char *)param_2[1];
      param_2 = param_2 + 1;
    }
  }
  if (pcVar7 != (char *)0x0) {
    if (pcVar7 == (char *)*param_4) {
      *pcVar7 = '\0';
      pcVar7 = pcVar7 + 1;
    }
    *pcVar7 = '\0';
  }
  free(DAT_78041e2c);
  DAT_78041e2c = (char *)0x0;
  return 0;
}


