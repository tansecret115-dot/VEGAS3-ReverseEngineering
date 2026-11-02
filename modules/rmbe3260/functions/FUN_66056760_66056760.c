/* Module: rmbe3260.dll
   Function: FUN_66056760
   Address: 66056760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_66056760(void *this,char *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  LPCSTR pCVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  LPCSTR pCVar11;
  bool bVar12;
  
  FUN_66051ba0(this);
  *(undefined ***)this = &PTR_FUN_66068a98;
  uVar4 = 0xffffffff;
  pCVar7 = (LPCSTR)((int)this + 0xc);
  pcVar3 = s_Software__6606f3e0;
  do {
    pcVar9 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = pcVar9 + -uVar4;
  pcVar9 = pCVar7;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar3 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar3 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar3;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pCVar11 = pCVar7;
  do {
    pcVar9 = pCVar11;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pCVar11 + 1;
    cVar1 = *pCVar11;
    pCVar11 = pcVar9;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + -uVar4;
  pcVar9 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar9 = pcVar9 + 1;
  }
  pcVar3 = FUN_66052070(pCVar7,',');
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
  }
  pcVar3 = s_RealShared_6606f26c;
  pbVar8 = param_2;
  do {
    bVar2 = *pbVar8;
    bVar12 = bVar2 < (byte)*pcVar3;
    if (bVar2 != *pcVar3) {
LAB_66056806:
      iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_6605680b;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar8[1];
    bVar12 = bVar2 < (byte)pcVar3[1];
    if (bVar2 != pcVar3[1]) goto LAB_66056806;
    pbVar8 = pbVar8 + 2;
    pcVar3 = pcVar3 + 2;
  } while (bVar2 != 0);
  iVar6 = 0;
LAB_6605680b:
  if (iVar6 != 0) {
    uVar4 = 0xffffffff;
    pcVar3 = &DAT_6606c264;
    do {
      pcVar9 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pCVar11 = pCVar7;
    do {
      pcVar3 = pCVar11;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar3 = pCVar11 + 1;
      cVar1 = *pCVar11;
      pCVar11 = pcVar3;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -uVar4;
    pcVar3 = pcVar3 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar3 = pcVar3 + 1;
    }
    uVar4 = 0xffffffff;
    do {
      pbVar8 = param_2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pbVar8 = param_2 + 1;
      bVar2 = *param_2;
      param_2 = pbVar8;
    } while (bVar2 != 0);
    uVar4 = ~uVar4;
    iVar6 = -1;
    pCVar11 = pCVar7;
    do {
      pcVar3 = pCVar11;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar3 = pCVar11 + 1;
      cVar1 = *pCVar11;
      pCVar11 = pcVar3;
    } while (cVar1 != '\0');
    pbVar8 = pbVar8 + -uVar4;
    pbVar10 = (byte *)(pcVar3 + -1);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar10 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar10 = pbVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar10 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar10 = pbVar10 + 1;
    }
    pcVar3 = FUN_66052140(pCVar7,&DAT_6606f3d8);
    if (pcVar3 != (char *)0x0) {
      uVar4 = 0xffffffff;
      pCVar11 = pCVar7;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pCVar11;
        pCVar11 = pCVar11 + 1;
      } while (cVar1 != '\0');
      memmove(pcVar3,pcVar3 + 4,(int)this + ((~uVar4 + 8) - (int)pcVar3));
    }
    uVar4 = 0xffffffff;
    pcVar3 = &DAT_6606c264;
    do {
      pcVar9 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pCVar11 = pCVar7;
    do {
      pcVar3 = pCVar11;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar3 = pCVar11 + 1;
      cVar1 = *pCVar11;
      pCVar11 = pcVar3;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -uVar4;
    pcVar3 = pcVar3 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar3 = pcVar3 + 1;
    }
    uVar4 = 0xffffffff;
    pCVar11 = pCVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pCVar11;
      pCVar11 = pCVar11 + 1;
    } while (cVar1 != '\0');
    sprintf((char *)(~uVar4 + 0xb + (int)this),s__d__d_6606f3d0,param_3,param_4);
  }
  uVar4 = 0xffffffff;
  pcVar3 = s__Preferences_6606f3c0;
  do {
    pcVar9 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pCVar11 = pCVar7;
  do {
    pcVar3 = pCVar11;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar3 = pCVar11 + 1;
    cVar1 = *pCVar11;
    pCVar11 = pcVar3;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -uVar4;
  pcVar3 = pcVar3 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar3 = pcVar3 + 1;
  }
  iVar6 = FUN_66051c20((undefined4 *)0x0);
  if ((iVar6 == 1) || (iVar6 == 2)) {
    pcVar3 = FUN_66052070(pCVar7,' ');
    while (pcVar3 != (char *)0x0) {
      *pcVar3 = '_';
      pcVar3 = FUN_66052070(pCVar7,' ');
    }
  }
  return this;
}


