/* Module: rmto3260.dll
   Function: FUN_66304970
   Address: 66304970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_66304970(void *this,char *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

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
  
  FUN_663048c0(this);
  *(undefined ***)this = &PTR_FUN_66308628;
  uVar4 = 0xffffffff;
  pCVar7 = (LPCSTR)((int)this + 0xc);
  pcVar3 = s_Software__66311c2c;
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
  pcVar3 = FUN_662f4500(pCVar7,',');
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
  }
  pcVar3 = s_RealShared_66311c00;
  pbVar8 = param_2;
  do {
    bVar2 = *pbVar8;
    bVar12 = bVar2 < (byte)*pcVar3;
    if (bVar2 != *pcVar3) {
LAB_66304a16:
      iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_66304a1b;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar8[1];
    bVar12 = bVar2 < (byte)pcVar3[1];
    if (bVar2 != pcVar3[1]) goto LAB_66304a16;
    pbVar8 = pbVar8 + 2;
    pcVar3 = pcVar3 + 2;
  } while (bVar2 != 0);
  iVar6 = 0;
LAB_66304a1b:
  if (iVar6 != 0) {
    uVar4 = 0xffffffff;
    pcVar3 = &DAT_6630b51c;
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
    pcVar3 = FUN_662f45d0(pCVar7,&DAT_66311c24);
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
    pcVar3 = &DAT_6630b51c;
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
    sprintf((char *)(~uVar4 + 0xb + (int)this),s__d__d_66311c1c,param_3,param_4);
  }
  uVar4 = 0xffffffff;
  pcVar3 = s__Preferences_66311c0c;
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
  iVar6 = FUN_663050d0((undefined4 *)0x0);
  if ((iVar6 == 1) || (iVar6 == 2)) {
    pcVar3 = FUN_662f4500(pCVar7,' ');
    while (pcVar3 != (char *)0x0) {
      *pcVar3 = '_';
      pcVar3 = FUN_662f4500(pCVar7,' ');
    }
  }
  return this;
}


