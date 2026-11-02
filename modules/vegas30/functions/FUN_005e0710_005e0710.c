/* Module: vegas30.exe
   Function: FUN_005e0710
   Address: 005e0710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005e0710(uchar *param_1,uchar *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  uchar uVar1;
  char cVar2;
  int iVar3;
  uchar *puVar4;
  uchar *puVar5;
  int iVar6;
  uchar *puVar7;
  LPCSTR pCVar8;
  undefined4 uVar9;
  LPCSTR lpString1;
  int iVar10;
  int *piVar11;
  int *piVar12;
  code *pcVar13;
  int local_248 [3];
  uchar local_23c [30];
  uchar local_21e [30];
  uchar local_200 [32];
  int local_1e0;
  int local_1dc [6];
  int local_1c4 [6];
  int local_1ac [6];
  int local_194 [6];
  int local_17c [6];
  int local_164 [6];
  uchar local_14c [30];
  undefined1 local_12e [262];
  int local_28 [4];
  undefined4 local_18;
  int local_10;
  undefined4 local_c;
  uchar *local_8;
  
  local_8 = (uchar *)0x0;
  local_c = 0;
  iVar3 = _ismbcspace((int)(char)*param_1);
  while (iVar3 != 0) {
    param_1 = (uchar *)CharNextA((LPCSTR)param_1);
    iVar3 = _ismbcspace((int)(char)*param_1);
  }
  uVar1 = *param_1;
  while (((char)uVar1 < '*' && (uVar1 != '\0'))) {
    param_1 = (uchar *)CharNextA((LPCSTR)param_1);
    uVar1 = *param_1;
  }
  if (*param_1 == '\0') {
    return 1;
  }
  puVar4 = (uchar *)FUN_005e3c20(param_1,1);
  if (puVar4 == (uchar *)0x0) {
    return local_c;
  }
  if (*(int *)(param_2 + 0x104) == 0xe) {
    local_c = 1;
  }
  iVar3 = lstrcmpA("TITLE:",(LPCSTR)param_1);
  if (iVar3 == 0) {
    local_c = 1;
    _mbscpy(param_2,puVar4);
    return local_c;
  }
  puVar7 = param_1;
  if (*(int *)(param_2 + 0x104) == 0xd) {
    iVar3 = lstrcmpA("@CREATED",(LPCSTR)param_1);
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = lstrcmpA("AUDIO",(LPCSTR)param_1);
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = lstrcmpA("VIDEO",(LPCSTR)param_1);
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = lstrcmpA((LPCSTR)param_1,"EFFECTS");
    if (iVar3 == 0) {
      puVar5 = (uchar *)FUN_005e3c20(puVar4,1);
      if (puVar5 == (uchar *)0x0) {
        return local_c;
      }
      iVar3 = lstrcmpA((LPCSTR)puVar4,"NAME");
      puVar7 = puVar4;
      puVar4 = puVar5;
      if (iVar3 == 0) {
        puVar4 = (uchar *)FUN_005e3c20(puVar5,1);
        if (puVar4 == (uchar *)0x0) {
          return local_c;
        }
        iVar3 = lstrcmpA((LPCSTR)puVar5,"IS");
        puVar7 = puVar5;
        if (iVar3 == 0) {
          local_c = 1;
          _mbscpy((uchar *)*param_3,puVar4);
          return local_c;
        }
      }
    }
    iVar3 = lstrcmpA("REEL",(LPCSTR)param_1);
    if (iVar3 == 0) {
      pCVar8 = (LPCSTR)FUN_005e3c20(puVar4,1);
      if (pCVar8 == (LPCSTR)0x0) {
        return local_c;
      }
      lpString1 = (LPCSTR)FUN_005e3c20(pCVar8,1);
      if (lpString1 == (LPCSTR)0x0) {
        return local_c;
      }
      iVar3 = lstrcmpA(pCVar8,"IS");
      if (iVar3 != 0) {
        return local_c;
      }
      puVar4 = (uchar *)FUN_005e3c20(lpString1,1);
      if (puVar4 != (uchar *)0x0) {
        iVar3 = lstrcmpA(lpString1,"CLIP");
        if (iVar3 != 0) {
          return local_c;
        }
        local_c = 1;
        iVar3 = lstrcmpA((LPCSTR)*param_4,"");
        if (iVar3 != 0) {
          _mbscpy((uchar *)*param_5,puVar4);
          return local_c;
        }
        _mbscpy((uchar *)*param_4,puVar4);
        return local_c;
      }
      return local_c;
    }
  }
  if (*(int *)(param_2 + 0x104) == 0xe) {
    iVar3 = lstrcmpA((LPCSTR)puVar7,"FROM");
    if ((iVar3 == 0) || (iVar3 = lstrcmpA((LPCSTR)puVar7,"TO"), iVar3 == 0)) {
      iVar3 = lstrcmpA((LPCSTR)puVar7,"TO");
      puVar5 = (uchar *)FUN_005e3c20(puVar4,1);
      if (puVar5 == (uchar *)0x0) {
        return local_c;
      }
      iVar6 = lstrcmpA((LPCSTR)puVar4,"CLIP");
      puVar7 = puVar4;
      puVar4 = puVar5;
      if (iVar6 == 0) {
        puVar4 = (uchar *)FUN_005e3c20(puVar5,1);
        if (puVar4 == (uchar *)0x0) {
          return local_c;
        }
        iVar6 = lstrcmpA((LPCSTR)puVar5,"NAME:");
        puVar7 = puVar5;
        if (iVar6 == 0) {
          local_c = 1;
          if (iVar3 == 0) {
            _mbscpy((uchar *)*param_5,puVar4);
            return local_c;
          }
          _mbscpy((uchar *)*param_4,puVar4);
          return local_c;
        }
      }
    }
    iVar3 = lstrcmpA("EFFECT",(LPCSTR)puVar7);
    if (iVar3 == 0) {
      puVar7 = (uchar *)FUN_005e3c20(puVar4,1);
      if (puVar7 == (uchar *)0x0) {
        return local_c;
      }
      iVar3 = lstrcmpA((LPCSTR)puVar4,"NAME:");
      if (iVar3 == 0) {
        local_c = 1;
        _mbscpy((uchar *)*param_3,puVar7);
        return local_c;
      }
      return local_c;
    }
  }
  piVar11 = local_248;
  for (iVar3 = 0x88; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  piVar11 = local_28;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  iVar3 = _ismbcdigit((int)(char)*puVar7);
  if (iVar3 == 0) {
    return 1;
  }
  local_248[2] = _SfTextToLongToken_8(puVar7,0);
  puVar7 = (uchar *)FUN_005e3c20(puVar4,1);
  if (puVar7 == (uchar *)0x0) {
    return local_c;
  }
  _mbscpy(local_23c,puVar4);
  puVar4 = (uchar *)FUN_005e3c20(puVar7,1);
  if (puVar4 == (uchar *)0x0) {
    return local_c;
  }
  iVar3 = lstrcmpA((LPCSTR)local_23c,(LPCSTR)&PTR_LAB_0062aacc);
  if (iVar3 == 0) {
    iVar3 = lstrcmpA((LPCSTR)puVar7,"V");
    if (iVar3 == 0) {
      return 1;
    }
    _mbscpy(local_23c,"BL");
  }
  _mbscpy(local_21e,puVar7);
  puVar7 = (uchar *)FUN_005e3c20(puVar4,1);
  if (puVar7 == (uchar *)0x0) {
    return local_c;
  }
  iVar3 = lstrcmpA((LPCSTR)puVar4,"A2");
  puVar5 = puVar7;
  if (iVar3 == 0) {
    _mbscpy(local_21e,"VA2");
    puVar5 = (uchar *)FUN_005e3c20(puVar7,1);
    puVar4 = puVar7;
    if (puVar5 == (uchar *)0x0) {
      return local_c;
    }
  }
  _mbscpy(local_200,puVar4);
  iVar3 = lstrcmpA("C",(LPCSTR)puVar4);
  puVar7 = puVar5;
  if ((iVar3 != 0) && (iVar3 = lstrcmpA("K",(LPCSTR)puVar4), iVar3 != 0)) {
    puVar7 = (uchar *)FUN_005e3c20(puVar5,1);
    if (puVar7 == (uchar *)0x0) {
      return local_c;
    }
    local_10 = _SfTextToLongToken_8(puVar5,0);
    uVar1 = *puVar5;
    while ((uVar1 != '\0' && (iVar3 = _ismbcdigit((int)(char)*puVar5), iVar3 != 0))) {
      puVar5 = (uchar *)CharNextA((LPCSTR)puVar5);
      uVar1 = *puVar5;
    }
    if (&stack0x00000000 != (undefined1 *)0xfffffff8) {
      _ismbcdigit((int)(char)*puVar5);
    }
    uVar1 = *puVar5;
    puVar4 = puVar5;
    while (((uVar1 != '\0' && (iVar3 = _ismbcdigit((int)(char)*puVar4), iVar3 == 0)) &&
           (iVar3 = _ismbcspace((int)(char)*puVar4), iVar3 == 0))) {
      puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
      uVar1 = *puVar4;
    }
    local_1e0 = _SfTextToLongToken_8(puVar4,0);
    local_1e0 = local_1e0 + local_10 * 0x1e;
  }
  iVar3 = lstrcmpA("K",(LPCSTR)puVar4);
  if ((iVar3 == 0) && (puVar7 = (uchar *)FUN_005e3c20(puVar7,1), puVar7 == (uchar *)0x0)) {
    return local_c;
  }
  puVar4 = (uchar *)FUN_005e3c20(puVar7,1);
  if (puVar4 == (uchar *)0x0) {
    return local_c;
  }
  FUN_0060ac30();
  FUN_0060ac30();
  lstrcpynA(&stack0xfffffdac,"+",2);
  lstrcpynA(&stack0xfffffdac,(LPCSTR)puVar7,2);
  iVar3 = lstrcmpA(&stack0xfffffdac,&stack0xfffffdac);
  if (iVar3 == 0) {
    pCVar8 = CharNextA((LPCSTR)puVar7);
    local_10 = _SfTextToLongToken_8(pCVar8,0);
    cVar2 = *pCVar8;
    while ((cVar2 != '\0' && (iVar3 = _ismbcdigit((int)*pCVar8), iVar3 != 0))) {
      pCVar8 = CharNextA(pCVar8);
      cVar2 = *pCVar8;
    }
    if (&stack0x00000000 != (undefined1 *)0xfffffff8) {
      _ismbcdigit((int)*pCVar8);
    }
    cVar2 = *pCVar8;
    while (((cVar2 != '\0' && (iVar3 = _ismbcdigit((int)*pCVar8), iVar3 == 0)) &&
           (iVar3 = _ismbcspace((int)*pCVar8), iVar3 == 0))) {
      pCVar8 = CharNextA(pCVar8);
      cVar2 = *pCVar8;
    }
    local_18 = _SfTextToLongToken_8(pCVar8,0);
    piVar11 = local_28;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar11 = 0;
      piVar11 = piVar11 + 1;
    }
    local_28[3] = local_10;
    local_28[0] = 1;
    piVar11 = local_28;
    piVar12 = local_1dc;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar12 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar12 = piVar12 + 1;
    }
    param_1 = (uchar *)FUN_005e3c20(puVar4,1);
joined_r0x005e0d41:
    puVar7 = puVar4;
    if (param_1 == (uchar *)0x0) {
      return local_c;
    }
  }
  else {
    FUN_0060ac30();
    FUN_0060ac30();
    lstrcpynA(&stack0xfffffdac,"-",2);
    lstrcpynA(&stack0xfffffdac,(LPCSTR)puVar7,2);
    iVar3 = lstrcmpA(&stack0xfffffdac,&stack0xfffffdac);
    param_1 = puVar4;
    if (iVar3 == 0) {
      pCVar8 = CharNextA((LPCSTR)puVar7);
      local_10 = _SfTextToLongToken_8(pCVar8,0);
      cVar2 = *pCVar8;
      while ((cVar2 != '\0' && (iVar3 = _ismbcdigit((int)*pCVar8), iVar3 != 0))) {
        pCVar8 = CharNextA(pCVar8);
        cVar2 = *pCVar8;
      }
      if (&stack0x00000000 != (undefined1 *)0xfffffff8) {
        _ismbcdigit((int)*pCVar8);
      }
      cVar2 = *pCVar8;
      while (((cVar2 != '\0' && (iVar3 = _ismbcdigit((int)*pCVar8), iVar3 == 0)) &&
             (iVar3 = _ismbcspace((int)*pCVar8), iVar3 == 0))) {
        pCVar8 = CharNextA(pCVar8);
        cVar2 = *pCVar8;
      }
      local_18 = _SfTextToLongToken_8(pCVar8,0);
      piVar11 = local_28;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar11 = 0;
        piVar11 = piVar11 + 1;
      }
      local_28[3] = local_10;
      local_28[0] = 1;
      piVar11 = local_28;
      piVar12 = local_1c4;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar12 = *piVar11;
        piVar11 = piVar11 + 1;
        piVar12 = piVar12 + 1;
      }
      param_1 = (uchar *)FUN_005e3c20(puVar4,1);
      goto joined_r0x005e0d41;
    }
  }
  if (*(int *)(param_2 + 0x104) == 0xe) {
    uVar1 = *puVar7;
    puVar4 = puVar7;
    local_8 = puVar7;
    while ((uVar1 != '\0' && (uVar1 != ','))) {
      puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
      uVar1 = *puVar4;
    }
    local_8 = puVar4;
    FUN_0060ac30();
    FUN_0060ac30();
    lstrcpynA(&stack0xfffffdac,",",2);
LAB_005e0e08:
    lstrcpynA(&stack0xfffffdac,(LPCSTR)local_8,2);
    iVar3 = lstrcmpA(&stack0xfffffdac,&stack0xfffffdac);
    local_8 = (uchar *)(2 - (uint)(iVar3 != 0));
  }
  else if (*(int *)(param_2 + 0x104) == 0xd) {
    uVar1 = *puVar7;
    puVar4 = puVar7;
    local_8 = puVar7;
    while ((uVar1 != '\0' && (uVar1 != ';'))) {
      puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
      uVar1 = *puVar4;
    }
    local_8 = puVar4;
    FUN_0060ac30();
    FUN_0060ac30();
    lstrcpynA(&stack0xfffffdac,";",2);
    goto LAB_005e0e08;
  }
  local_248[0] = (int)local_8;
  _SFSMPTE_TextToSMPTE_8(puVar7,local_28);
  local_1ac[0] = (int)local_8;
  piVar11 = local_28;
  piVar12 = local_1ac;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar12 = *piVar11;
    piVar11 = piVar11 + 1;
    piVar12 = piVar12 + 1;
  }
  pCVar8 = (LPCSTR)FUN_005e3c20(param_1,1);
  if (pCVar8 == (char *)0x0) {
    return local_c;
  }
  _SFSMPTE_TextToSMPTE_8(param_1,local_28);
  piVar11 = local_28;
  piVar12 = local_194;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar12 = *piVar11;
    piVar11 = piVar11 + 1;
    piVar12 = piVar12 + 1;
  }
  local_194[0] = (int)local_8;
  local_8 = (uchar *)pCVar8;
  iVar3 = FUN_005e3c20(pCVar8,1);
  if (iVar3 == 0) {
    return local_c;
  }
  cVar2 = *pCVar8;
  while ((cVar2 != '\0' && (cVar2 != ','))) {
    pCVar8 = CharNextA(pCVar8);
    cVar2 = *pCVar8;
  }
  FUN_0060ac30();
  FUN_0060ac30();
  lstrcpynA(&stack0xfffffdac,",",2);
  lstrcpynA(&stack0xfffffdac,pCVar8,2);
  iVar6 = lstrcmpA(&stack0xfffffdac,&stack0xfffffdac);
  if (iVar6 != 0) {
    cVar2 = *local_8;
    puVar4 = local_8;
    while ((cVar2 != '\0' && (cVar2 != ';'))) {
      puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
      cVar2 = *puVar4;
    }
    FUN_0060ac30();
    FUN_0060ac30();
    lstrcpynA(&stack0xfffffdac,";",2);
    lstrcpynA(&stack0xfffffdac,(LPCSTR)puVar4,2);
    iVar6 = lstrcmpA(&stack0xfffffdac,&stack0xfffffdac);
    iVar10 = 1;
    if (iVar6 != 0) goto LAB_005e0f7e;
  }
  iVar10 = 2;
LAB_005e0f7e:
  local_248[1] = iVar10;
  _SFSMPTE_TextToSMPTE_8(local_8,local_28);
  piVar11 = local_28;
  piVar12 = local_17c;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar12 = *piVar11;
    piVar11 = piVar11 + 1;
    piVar12 = piVar12 + 1;
  }
  local_17c[0] = iVar10;
  iVar6 = FUN_005e3c20(iVar3,1);
  if (iVar6 != 0) {
    _SFSMPTE_TextToSMPTE_8(iVar3,local_28);
    piVar11 = local_28;
    piVar12 = local_164;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar12 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar12 = piVar12 + 1;
    }
    local_c = 1;
    local_164[0] = iVar10;
    iVar3 = lstrcmpA("C",(LPCSTR)local_200);
    pcVar13 = _mbscpy_exref;
    if ((iVar3 != 0) &&
       (iVar3 = lstrcmpA("K",(LPCSTR)local_200), pcVar13 = _mbscpy_exref, iVar3 != 0)) {
      _mbscpy(local_14c,(uchar *)*param_3);
    }
    iVar3 = lstrcmpA((LPCSTR)local_23c,"BL");
    if (iVar3 != 0) {
      iVar3 = lstrcmpA("C",(LPCSTR)local_200);
      if (iVar3 == 0) {
        uVar9 = *param_4;
      }
      else {
        uVar9 = *param_5;
      }
      (*pcVar13)(local_12e,uVar9);
    }
    if (*(int *)(param_2 + 0x104) == 0xd) {
      (*pcVar13)(*param_4,&DAT_0060f98c);
    }
    _SfList_InsertList_16(*(undefined4 *)(param_2 + 0x108),0xffffffff,local_248,1);
    return local_c;
  }
  return local_c;
}


