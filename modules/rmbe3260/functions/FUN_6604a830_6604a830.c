/* Module: rmbe3260.dll
   Function: FUN_6604a830
   Address: 6604a830
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __thiscall FUN_6604a830(void *this,char *param_1)

{
  char cVar1;
  byte bVar2;
  undefined *this_00;
  undefined3 extraout_var;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  ushort uVar13;
  
  iVar3 = 4;
  bVar12 = true;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x21d) = 0;
  *(undefined4 *)((int)this + 0x221) = 0;
  *(undefined2 *)((int)this + 0x225) = 0;
  *(undefined4 *)((int)this + 0x227) = 0;
  *(undefined4 *)((int)this + 0x22b) = 0;
  *(undefined4 *)((int)this + 0x22f) = 0;
  *(undefined4 *)((int)this + 0x233) = 0;
  *(undefined4 *)((int)this + 0x237) = 0;
  *(undefined4 *)((int)this + 0x23b) = 0;
  *(undefined4 *)((int)this + 0x23f) = 0;
  *(undefined4 *)((int)this + 0x243) = 0;
  *(undefined4 *)((int)this + 0x247) = 0;
  *(undefined4 *)((int)this + 0x24b) = 0;
  *(undefined4 *)((int)this + 0x24f) = 0;
  *(undefined4 *)((int)this + 0x253) = 0;
  *(undefined4 *)((int)this + 599) = 0;
  *(undefined4 *)((int)this + 0x25b) = 0;
  pcVar9 = param_1;
  pcVar11 = &DAT_6606e200;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar12 = *pcVar9 == *pcVar11;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  } while (bVar12);
  uVar4 = _DAT_6606e210;
  if (!bVar12) {
    uVar4 = *(undefined4 *)param_1;
  }
  *(undefined4 *)((int)this + 0x218) = uVar4;
  uVar5 = 0xffffffff;
  *(undefined1 *)((int)this + 0x21c) = 0;
  pcVar9 = &DAT_66075004;
  do {
    pcVar11 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar9 = pcVar11 + -uVar5;
  pcVar11 = this;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  pbVar8 = &DAT_6606e210;
  pbVar7 = (byte *)((int)this + 0x218);
  do {
    bVar2 = *pbVar7;
    bVar12 = bVar2 < *pbVar8;
    if (bVar2 != *pbVar8) {
LAB_6604a937:
      iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_6604a93c;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar7[1];
    bVar12 = bVar2 < pbVar8[1];
    if (bVar2 != pbVar8[1]) goto LAB_6604a937;
    pbVar7 = pbVar7 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar2 != 0);
  iVar3 = 0;
LAB_6604a93c:
  pcVar9 = &DAT_6606e200;
  if (iVar3 != 0) {
    pcVar9 = (char *)((int)this + 0x218);
  }
  uVar5 = 0xffffffff;
  do {
    pcVar11 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  uVar13 = 2;
  iVar3 = -1;
  pcVar9 = this;
  do {
    pcVar10 = pcVar9;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar5;
  pcVar11 = pcVar10 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar9 = (char *)&DAT_6606e920;
  do {
    pcVar11 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar3 = -1;
  pcVar9 = this;
  do {
    pcVar10 = pcVar9;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar5;
  pcVar11 = pcVar10 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar9 = &DAT_6606e918;
  do {
    pcVar11 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar3 = -1;
  pcVar9 = this;
  do {
    pcVar10 = pcVar9;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar5;
  pcVar11 = pcVar10 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  *(undefined1 *)((int)this + 0x104) = 0;
  this_00 = FUN_6602dab0();
  pcVar9 = (char *)FUN_66052f60(this_00,uVar13);
  if (pcVar9 != (char *)0x0) {
    uVar5 = 0xffffffff;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = (char *)((int)this + 0x104);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  iVar3 = -1;
  pcVar9 = (char *)((int)this + 0x104);
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    uVar5 = 0xffffffff;
    pcVar9 = (char *)((int)this + 0x104);
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (*(char *)(~uVar5 + 0x102 + (int)this) != '\\') {
      uVar5 = 0xffffffff;
      pcVar9 = &DAT_6606c264;
      do {
        pcVar11 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar11 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar3 = -1;
      pcVar9 = (char *)((int)this + 0x104);
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar9 = pcVar11 + -uVar5;
      pcVar11 = pcVar10 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
  }
  uVar5 = 0xffffffff;
  pcVar9 = this;
  do {
    pcVar11 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar3 = -1;
  pcVar9 = (char *)((int)this + 0x104);
  do {
    pcVar10 = pcVar9;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar5;
  pcVar11 = pcVar10 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  bVar12 = FUN_6604aac0((int)this + 0x104);
  if (CONCAT31(extraout_var,bVar12) != 0) {
    iVar3 = FUN_6604ab00((int)this);
    if (iVar3 == 0) {
      *(undefined4 *)((int)this + 0x20c) = 0x80040202;
    }
    return this;
  }
  *(undefined4 *)((int)this + 0x20c) = 0x80040201;
  return this;
}


