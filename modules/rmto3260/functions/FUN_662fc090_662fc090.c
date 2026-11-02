/* Module: rmto3260.dll
   Function: FUN_662fc090
   Address: 662fc090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined2 * __thiscall FUN_662fc090(void *this,short *param_1,short param_2)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  char *pcVar12;
  undefined4 *puVar13;
  char *pcVar14;
  undefined4 *puVar15;
  char cStack0000000b;
  
  cStack0000000b = param_2 == 0;
  uVar3 = (**(code **)(*(int *)this + 0x10c))();
  puVar4 = operator_new(uVar3 & 0xffff);
  if (puVar4 == (undefined2 *)0x0) {
    *param_1 = 0;
    return (undefined2 *)0x0;
  }
  uVar2 = 4;
  if (cStack0000000b != '\0') {
    uVar2 = FUN_662f2bb0(4);
  }
  *puVar4 = uVar2;
  uVar2 = *(undefined2 *)((int)this + 0x3a);
  if (cStack0000000b != '\0') {
    uVar2 = FUN_662f2bb0(uVar2);
  }
  puVar4[1] = uVar2;
  if (cStack0000000b == '\0') {
    uVar2 = *(undefined2 *)((int)this + 0x3e);
  }
  else {
    uVar2 = FUN_662f2bb0(*(undefined2 *)((int)this + 0x3e));
  }
  puVar4[3] = uVar2;
  uVar5 = *(undefined4 *)((int)this + 8);
  if (cStack0000000b != '\0') {
    uVar5 = FUN_662f2bf0(uVar5);
  }
  *(undefined4 *)(puVar4 + 4) = uVar5;
  if (cStack0000000b == '\0') {
    uVar5 = *(undefined4 *)((int)this + 0x10);
  }
  else {
    uVar5 = FUN_662f2bf0(*(undefined4 *)((int)this + 0x10));
  }
  *(undefined4 *)(puVar4 + 6) = uVar5;
  if (cStack0000000b == '\0') {
    uVar5 = *(undefined4 *)((int)this + 0xc);
  }
  else {
    uVar5 = FUN_662f2bf0(*(undefined4 *)((int)this + 0xc));
  }
  *(undefined4 *)(puVar4 + 8) = uVar5;
  uVar5 = *(undefined4 *)((int)this + 0x40);
  if (cStack0000000b != '\0') {
    uVar5 = FUN_662f2bf0(uVar5);
  }
  *(undefined4 *)(puVar4 + 10) = uVar5;
  if (cStack0000000b == '\0') {
    uVar2 = *(undefined2 *)((int)this + 0x4e);
  }
  else {
    uVar2 = FUN_662f2bb0(*(undefined2 *)((int)this + 0x4e));
  }
  puVar4[0xc] = uVar2;
  if (cStack0000000b == '\0') {
    uVar2 = *(undefined2 *)((int)this + 0x50);
  }
  else {
    uVar2 = FUN_662f2bb0(*(undefined2 *)((int)this + 0x50));
  }
  puVar4[0xd] = uVar2;
  uVar5 = *(undefined4 *)((int)this + 0x61);
  if (cStack0000000b != '\0') {
    uVar5 = FUN_662f2bf0(uVar5);
  }
  *(undefined4 *)(puVar4 + 0xe) = uVar5;
  if (cStack0000000b == '\0') {
    uVar5 = *(undefined4 *)((int)this + 0x2c);
  }
  else {
    uVar5 = FUN_662f2bf0(*(undefined4 *)((int)this + 0x2c));
  }
  *(undefined4 *)(puVar4 + 0x10) = uVar5;
  if (cStack0000000b == '\0') {
    uVar2 = *(undefined2 *)((int)this + 0x34);
  }
  else {
    uVar2 = FUN_662f2bb0(*(undefined2 *)((int)this + 0x34));
  }
  puVar4[0x12] = uVar2;
  uVar2 = *(undefined2 *)((int)this + 0x36);
  if (cStack0000000b != '\0') {
    uVar2 = FUN_662f2bb0(uVar2);
  }
  puVar4[0x13] = uVar2;
  uVar3 = 0xffffffff;
  pcVar12 = (char *)((int)this + 0x49);
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  *(char *)(puVar4 + 0x14) = (char)uVar3;
  pcVar12 = (char *)((int)this + 0x49);
  pcVar14 = (char *)((int)puVar4 + 0x29);
  for (uVar7 = (uVar3 & 0xff) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar14 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar14 = pcVar14 + 1;
  }
  iVar8 = -1;
  pcVar12 = (char *)((int)this + 0x44);
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  bVar6 = ~(byte)iVar8 - 1;
  iVar8 = (uVar3 & 0xff) + 0x2a;
  *(byte *)((uVar3 & 0xff) + 0x29 + (int)puVar4) = bVar6;
  pcVar12 = (char *)((int)this + 0x44);
  pcVar14 = (char *)(iVar8 + (int)puVar4);
  for (uVar3 = (uint)(bVar6 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar3 = bVar6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar14 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar14 = pcVar14 + 1;
  }
  iVar8 = iVar8 + (uint)bVar6;
  *(undefined1 *)(iVar8 + (int)puVar4) = *(undefined1 *)((int)this + 0x65);
  *(undefined1 *)(iVar8 + 1 + (int)puVar4) = *(undefined1 *)((int)this + 0x77);
  *(undefined1 *)(iVar8 + 2 + (int)puVar4) = *(undefined1 *)((int)this + 0x66);
  if (*(char **)((int)this + 0x67) == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar12 = *(char **)((int)this + 0x67);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
  }
  *(char *)(iVar8 + 3 + (int)puVar4) = (char)uVar3;
  if ((char)uVar3 != '\0') {
    puVar13 = *(undefined4 **)((int)this + 0x67);
    puVar15 = (undefined4 *)(iVar8 + 4 + (int)puVar4);
    for (uVar7 = (uVar3 & 0xff) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar15 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar15 = puVar15 + 1;
    }
    for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
      puVar15 = (undefined4 *)((int)puVar15 + 1);
    }
  }
  iVar8 = iVar8 + 4 + (uVar3 & 0xff);
  if (*(char **)((int)this + 0x6b) == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar12 = *(char **)((int)this + 0x6b);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
  }
  iVar11 = iVar8 + 1;
  *(char *)(iVar8 + (int)puVar4) = (char)uVar3;
  if ((char)uVar3 != '\0') {
    puVar13 = *(undefined4 **)((int)this + 0x6b);
    puVar15 = (undefined4 *)(iVar11 + (int)puVar4);
    for (uVar7 = (uVar3 & 0xff) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar15 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar15 = puVar15 + 1;
    }
    for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
      puVar15 = (undefined4 *)((int)puVar15 + 1);
    }
  }
  iVar11 = iVar11 + (uVar3 & 0xff);
  if (*(char **)((int)this + 0x6f) == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar12 = *(char **)((int)this + 0x6f);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
  }
  iVar8 = iVar11 + 1;
  *(char *)(iVar11 + (int)puVar4) = (char)uVar3;
  if ((char)uVar3 != '\0') {
    puVar13 = *(undefined4 **)((int)this + 0x6f);
    puVar15 = (undefined4 *)(iVar8 + (int)puVar4);
    for (uVar7 = (uVar3 & 0xff) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar15 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar15 = puVar15 + 1;
    }
    for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
      puVar15 = (undefined4 *)((int)puVar15 + 1);
    }
  }
  iVar8 = iVar8 + (uVar3 & 0xff);
  if (*(char **)((int)this + 0x73) == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar12 = *(char **)((int)this + 0x73);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
  }
  uVar7 = iVar8 + 1;
  *(char *)(iVar8 + (int)puVar4) = (char)uVar3;
  if ((char)uVar3 != '\0') {
    puVar13 = *(undefined4 **)((int)this + 0x73);
    puVar15 = (undefined4 *)((uVar7 & 0xffff) + (int)puVar4);
    for (uVar9 = (uVar3 & 0xff) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar15 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar15 = puVar15 + 1;
    }
    for (uVar9 = uVar3 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
      puVar15 = (undefined4 *)((int)puVar15 + 1);
    }
  }
  sVar10 = (short)uVar7 + ((ushort)uVar3 & 0xff);
  *param_1 = sVar10;
  if (cStack0000000b != '\0') {
    sVar10 = FUN_662f2bb0(sVar10);
  }
  puVar4[2] = sVar10;
  return puVar4;
}


