/* Module: pncrt.dll
   Function: _Gettnames
   Address: 78014c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl _Gettnames(void)

{
  char cVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  char *pcVar13;
  char *pcVar14;
  int *local_10;
  int local_c;
  
                    /* 0x14c20  82  _Gettnames */
  puVar2 = PTR_PTR_7804051c;
  iVar9 = 0;
  local_10 = (int *)0x7;
  puVar3 = (undefined4 *)PTR_PTR_7804051c;
  do {
    uVar4 = 0xffffffff;
    pcVar10 = (char *)*puVar3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pcVar10 = (char *)puVar3[7];
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    local_10 = (int *)((int)local_10 + -1);
    iVar9 = ~uVar5 + iVar9 + ~uVar4;
    puVar3 = puVar3 + 1;
  } while (local_10 != (int *)0x0);
  local_10 = (int *)0xc;
  puVar3 = (undefined4 *)(PTR_PTR_7804051c + 0x38);
  do {
    uVar4 = 0xffffffff;
    pcVar10 = (char *)puVar3[0xc];
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pcVar10 = (char *)*puVar3;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    local_10 = (int *)((int)local_10 + -1);
    iVar9 = ~uVar5 + iVar9 + ~uVar4;
    puVar3 = puVar3 + 1;
  } while (local_10 != (int *)0x0);
  uVar4 = 0xffffffff;
  pcVar10 = *(char **)(PTR_PTR_7804051c + 0x98);
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar5 = 0xffffffff;
  pcVar10 = *(char **)(PTR_PTR_7804051c + 0x9c);
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar6 = 0xffffffff;
  pcVar10 = *(char **)(PTR_PTR_7804051c + 0xa0);
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar7 = 0xffffffff;
  pcVar10 = *(char **)(PTR_PTR_7804051c + 0xa4);
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar8 = 0xffffffff;
  pcVar10 = *(char **)(PTR_PTR_7804051c + 0xa8);
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  puVar3 = malloc(~uVar5 + iVar9 + ~uVar4 + ~uVar6 + ~uVar7 + ~uVar8 + 0xac);
  if (puVar3 != (undefined4 *)0x0) {
    puVar11 = (undefined4 *)PTR_PTR_7804051c;
    puVar12 = puVar3;
    for (iVar9 = 0x2b; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    pcVar10 = (char *)(puVar3 + 0x2b);
    local_c = 7;
    puVar11 = (undefined4 *)(puVar2 + 0x1c);
    puVar12 = puVar3;
    do {
      *puVar12 = pcVar10;
      uVar4 = 0xffffffff;
      pcVar13 = (char *)puVar11[-7];
      do {
        pcVar14 = pcVar13;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar14 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar13 = pcVar14 + -uVar4;
      pcVar14 = pcVar10;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar14 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar14 = pcVar14 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar13 = pcVar10;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + ~uVar4;
      *(char **)(((int)puVar3 - (int)puVar2) + -4 + (int)(puVar11 + 1)) = pcVar10;
      uVar4 = 0xffffffff;
      pcVar13 = (char *)*puVar11;
      do {
        pcVar14 = pcVar13;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar14 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar13 = pcVar14 + -uVar4;
      pcVar14 = pcVar10;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar14 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar14 = pcVar14 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar13 = pcVar10;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      puVar12 = puVar12 + 1;
      local_c = local_c + -1;
      pcVar10 = pcVar10 + ~uVar4;
      puVar11 = puVar11 + 1;
    } while (local_c != 0);
    local_10 = puVar3 + 0x1a;
    local_c = 0xc;
    puVar11 = (undefined4 *)(puVar2 + 0x38);
    do {
      *(char **)((int)puVar11 + ((int)puVar3 - (int)puVar2)) = pcVar10;
      uVar4 = 0xffffffff;
      pcVar13 = (char *)*puVar11;
      do {
        pcVar14 = pcVar13;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar14 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar13 = pcVar14 + -uVar4;
      pcVar14 = pcVar10;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar14 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar14 = pcVar14 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar13 = pcVar10;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + ~uVar4;
      *local_10 = (int)pcVar10;
      uVar4 = 0xffffffff;
      pcVar13 = (char *)puVar11[0xc];
      do {
        pcVar14 = pcVar13;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar14 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar13 = pcVar14 + -uVar4;
      pcVar14 = pcVar10;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar14 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar14 = pcVar14 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar13 = pcVar10;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + ~uVar4;
      local_10 = local_10 + 1;
      local_c = local_c + -1;
      puVar11 = puVar11 + 1;
    } while (local_c != 0);
    puVar3[0x26] = pcVar10;
    uVar4 = 0xffffffff;
    pcVar13 = *(char **)(puVar2 + 0x98);
    do {
      pcVar14 = pcVar13;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar13 = pcVar14 + -uVar4;
    pcVar14 = pcVar10;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar13 = pcVar10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + ~uVar4;
    puVar3[0x27] = pcVar10;
    uVar4 = 0xffffffff;
    pcVar13 = *(char **)(puVar2 + 0x9c);
    do {
      pcVar14 = pcVar13;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar13 = pcVar14 + -uVar4;
    pcVar14 = pcVar10;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar13 = pcVar10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + ~uVar4;
    puVar3[0x28] = pcVar10;
    uVar4 = 0xffffffff;
    pcVar13 = *(char **)(puVar2 + 0xa0);
    do {
      pcVar14 = pcVar13;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar13 = pcVar14 + -uVar4;
    pcVar14 = pcVar10;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar13 = pcVar10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + ~uVar4;
    puVar3[0x29] = pcVar10;
    uVar4 = 0xffffffff;
    pcVar13 = *(char **)(puVar2 + 0xa4);
    do {
      pcVar14 = pcVar13;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar13 = pcVar14 + -uVar4;
    pcVar14 = pcVar10;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar13 = pcVar10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    puVar3[0x2a] = pcVar10 + ~uVar4;
  }
  return puVar3;
}


