/* Module: rmme3260.dll
   Function: FUN_66261690
   Address: 66261690
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66261690(int param_1)

{
  char cVar1;
  UINT UVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  CHAR local_10c;
  undefined4 local_10b [65];
  
  iVar4 = *(int *)(param_1 + 0x50);
  if (iVar4 == 0) {
    local_10c = DAT_6627cf3c;
    puVar8 = local_10b;
    for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    UVar2 = GetSystemDirectoryA(&local_10c,0x104);
    if (UVar2 == 0) {
      uVar5 = 0xffffffff;
      pcVar3 = &DAT_6627cf3c;
      do {
        pcVar7 = pcVar3;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar7 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar3 = pcVar7 + -uVar5;
      pcVar7 = &local_10c;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    iVar4 = -1;
    pcVar3 = &local_10c;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (iVar4 != -2) {
      uVar5 = 0xffffffff;
      pcVar3 = &local_10c;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (*(char *)((int)local_10b + (~uVar5 - 3)) != '\\') {
        uVar5 = 0xffffffff;
        pcVar3 = &DAT_6626fdc0;
        do {
          pcVar7 = pcVar3;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar7 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar7;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar4 = -1;
        pcVar3 = &local_10c;
        do {
          pcVar9 = pcVar3;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar9 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar9;
        } while (cVar1 != '\0');
        pcVar3 = pcVar7 + -uVar5;
        pcVar7 = pcVar9 + -1;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar7 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
    }
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_6627cb14;
    do {
      pcVar7 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar7 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar7;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar4 = -1;
    pcVar3 = &local_10c;
    do {
      pcVar9 = pcVar3;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    pcVar3 = pcVar7 + -uVar5;
    pcVar7 = pcVar9 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar3 = &local_10c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = operator_new(~uVar5);
    uVar5 = 0xffffffff;
    *(char **)(param_1 + 0x50) = pcVar3;
    pcVar7 = &local_10c;
    do {
      pcVar9 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar9 + -uVar5;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar3 = pcVar3 + 1;
    }
    iVar4 = *(int *)(param_1 + 0x50);
  }
  return iVar4;
}


