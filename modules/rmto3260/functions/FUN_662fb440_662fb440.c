/* Module: rmto3260.dll
   Function: FUN_662fb440
   Address: 662fb440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined2 * __thiscall FUN_662fb440(void *this,short *param_1,short param_2)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 *puVar14;
  char *pcVar15;
  char cStack0000000b;
  
  cStack0000000b = param_2 == 0;
  uVar3 = (**(code **)(*(int *)this + 0x10c))();
  puVar4 = operator_new(uVar3 & 0xffff);
  if (puVar4 == (undefined2 *)0x0) {
    *param_1 = 0;
    return (undefined2 *)0x0;
  }
  uVar2 = 3;
  if (cStack0000000b != '\0') {
    uVar2 = FUN_662f2bb0(3);
  }
  *puVar4 = uVar2;
  uVar2 = *(undefined2 *)((int)this + 0x3e);
  if (cStack0000000b != '\0') {
    uVar2 = FUN_662f2bb0(uVar2);
  }
  puVar4[2] = uVar2;
  uVar5 = *(undefined4 *)((int)this + 8);
  if (cStack0000000b != '\0') {
    uVar5 = FUN_662f2bf0(uVar5);
  }
  *(undefined4 *)(puVar4 + 3) = uVar5;
  uVar5 = *(undefined4 *)((int)this + 0xc);
  if (cStack0000000b != '\0') {
    uVar5 = FUN_662f2bf0(uVar5);
  }
  *(undefined4 *)(puVar4 + 5) = uVar5;
  uVar5 = *(undefined4 *)((int)this + 0x10);
  if (cStack0000000b != '\0') {
    uVar5 = FUN_662f2bf0(uVar5);
  }
  *(undefined4 *)(puVar4 + 7) = uVar5;
  if (*(char **)((int)this + 0x67) == (char *)0x0) {
    bVar7 = 0;
  }
  else {
    iVar8 = -1;
    pcVar13 = *(char **)((int)this + 0x67);
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    bVar7 = ~(byte)iVar8 - 1;
  }
  *(byte *)(puVar4 + 9) = bVar7;
  if (bVar7 != 0) {
    puVar12 = *(undefined4 **)((int)this + 0x67);
    puVar14 = (undefined4 *)((int)puVar4 + 0x13);
    for (uVar3 = (uint)(bVar7 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar14 = puVar14 + 1;
    }
    for (uVar3 = bVar7 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      puVar14 = (undefined4 *)((int)puVar14 + 1);
    }
  }
  if (*(char **)((int)this + 0x6b) == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar13 = *(char **)((int)this + 0x6b);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
  }
  iVar8 = bVar7 + 0x14;
  *(char *)((int)puVar4 + bVar7 + 0x13) = (char)uVar3;
  if ((char)uVar3 != '\0') {
    puVar12 = *(undefined4 **)((int)this + 0x6b);
    puVar14 = (undefined4 *)((int)puVar4 + iVar8);
    for (uVar9 = (uVar3 & 0xff) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar14 = puVar14 + 1;
    }
    for (uVar9 = uVar3 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      puVar14 = (undefined4 *)((int)puVar14 + 1);
    }
  }
  iVar8 = iVar8 + (uVar3 & 0xff);
  if (*(char **)((int)this + 0x6f) == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar13 = *(char **)((int)this + 0x6f);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
  }
  iVar11 = iVar8 + 1;
  *(char *)((int)puVar4 + iVar8) = (char)uVar3;
  if ((char)uVar3 != '\0') {
    puVar12 = *(undefined4 **)((int)this + 0x6f);
    puVar14 = (undefined4 *)((int)puVar4 + iVar11);
    for (uVar9 = (uVar3 & 0xff) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar14 = puVar14 + 1;
    }
    for (uVar9 = uVar3 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      puVar14 = (undefined4 *)((int)puVar14 + 1);
    }
  }
  iVar11 = iVar11 + (uVar3 & 0xff);
  if (*(char **)((int)this + 0x73) == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar13 = *(char **)((int)this + 0x73);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
  }
  bVar6 = (byte)uVar3;
  iVar8 = iVar11 + 1;
  *(byte *)((int)puVar4 + iVar11) = bVar6;
  bVar7 = 0;
  if (bVar6 != 0) {
    puVar12 = *(undefined4 **)((int)this + 0x73);
    puVar14 = (undefined4 *)((int)puVar4 + iVar8);
    for (uVar9 = (uVar3 & 0xff) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar14 = puVar14 + 1;
    }
    for (uVar3 = uVar3 & 3; bVar7 = bVar6, uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      puVar14 = (undefined4 *)((int)puVar14 + 1);
    }
  }
  iVar8 = iVar8 + (uint)bVar7;
  *(undefined1 *)((int)puVar4 + iVar8) = *(undefined1 *)((int)this + 0x77);
  iVar11 = -1;
  pcVar13 = (char *)((int)this + 0x44);
  do {
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 != '\0');
  bVar7 = ~(byte)iVar11 - 1;
  *(byte *)((int)puVar4 + iVar8 + 1) = bVar7;
  pcVar13 = (char *)((int)this + 0x44);
  pcVar15 = (char *)((int)puVar4 + iVar8 + 2);
  for (uVar3 = (uint)(bVar7 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar3 = bVar7 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar15 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar15 = pcVar15 + 1;
  }
  sVar10 = (short)(iVar8 + 2) + (ushort)bVar7;
  *param_1 = sVar10;
  sVar10 = sVar10 + -4;
  if (cStack0000000b != '\0') {
    sVar10 = FUN_662f2bb0(sVar10);
  }
  puVar4[1] = sVar10;
  return puVar4;
}


