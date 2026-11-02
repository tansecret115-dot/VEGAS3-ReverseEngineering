/* Module: tokr3260.dll
   Function: FUN_68052000
   Address: 68052000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_68052000(size_t param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            int *param_6,int param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  size_t sVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar1 = param_10;
  pvVar2 = calloc(param_1,4);
  *(void **)(param_10 + 0x48) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0xfff0bdc1;
  }
  pvVar2 = calloc(param_1,4);
  *(void **)(param_10 + 0x4c) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0xfff0bdc1;
  }
  pvVar2 = calloc(param_1,4);
  *(void **)(param_10 + 0x50) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0xfff0bdc1;
  }
  *(undefined4 *)(param_10 + 0xc) = param_2;
  *(size_t *)(param_10 + 8) = param_1;
  *(int *)(param_10 + 4) = param_3;
  *(int *)(param_10 + 0x14) = param_4;
  *(undefined4 *)(param_10 + 0x18) = param_5;
  *(undefined4 *)(param_10 + 0x1c) = 0;
  piVar3 = param_6;
  sVar6 = param_1;
  if (0 < (int)param_1) {
    do {
      *(int *)(param_10 + 0x1c) = *(int *)(param_10 + 0x1c) + param_4 * *piVar3;
      sVar6 = sVar6 - 1;
      piVar3 = piVar3 + 1;
    } while (sVar6 != 0);
  }
  *(undefined4 *)(param_10 + 0x24) = param_8;
  *(undefined4 *)(param_10 + 0x28) = param_9;
  iVar4 = FUN_68051a20(param_10);
  if (iVar4 != -999999) {
    iVar4 = FUN_68059970(*(int *)(param_10 + 0x4c),param_1);
    if (iVar4 == -999999) {
      return 0xfff0bdc1;
    }
    iVar4 = FUN_68059840(*(undefined4 **)(param_10 + 0x50),param_1);
    if (iVar4 == -999999) {
      return 0xfff0bdc1;
    }
    iVar4 = FUN_68057a10(param_10);
    if (iVar4 == -999999) {
      return 0xfff0bdc1;
    }
    param_10 = 0;
    if (0 < (int)param_1) {
      do {
        pvVar2 = malloc(0xf228);
        *(void **)(*(int *)(iVar1 + 0x48) + param_10 * 4) = pvVar2;
        puVar8 = *(undefined4 **)(*(int *)(iVar1 + 0x48) + param_10 * 4);
        if (puVar8 == (undefined4 *)0x0) {
          return 0xfff0bdc1;
        }
        puVar5 = puVar8;
        for (iVar4 = 0x3c8a; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        pvVar2 = malloc(0xf228);
        puVar8[0x3c86] = pvVar2;
        if (pvVar2 == (void *)0x0) {
          return 0xfff0bdc1;
        }
        pvVar2 = malloc(0xf228);
        puVar8[0x3c87] = pvVar2;
        if (pvVar2 == (void *)0x0) {
          return 0xfff0bdc1;
        }
        puVar8[0x3c75] = param_6[param_10];
        puVar8[0x3c76] = param_6[param_10];
        puVar8[0x186f] = 0xf;
        puVar5 = puVar8 + 0x1871;
        iVar4 = 4;
        do {
          puVar5[-8] = 3;
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        param_10 = param_10 + 1;
        puVar8[0x3c89] = iVar1;
      } while (param_10 < (int)param_1);
    }
    iVar4 = 0;
    if (0 < (int)param_1) {
      do {
        iVar7 = *(int *)(*(int *)(iVar1 + 0x48) + iVar4 * 4);
        *(int *)(iVar7 + 0xf214) = iVar4;
        FUN_68052330(param_3,*(int *)(param_7 + iVar4 * 4),iVar7);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_1);
    }
    iVar4 = 0;
    if (0 < (int)param_1) {
      do {
        puVar8 = *(undefined4 **)(*(int *)(iVar1 + 0x48) + iVar4 * 4);
        iVar4 = iVar4 + 1;
        puVar5 = puVar8;
        puVar9 = (undefined4 *)puVar8[0x3c86];
        for (iVar7 = 0x3c8a; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar5 = (undefined4 *)puVar8[0x3c87];
        for (iVar7 = 0x3c8a; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar5 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar5 = puVar5 + 1;
        }
      } while (iVar4 < (int)param_1);
    }
    return 0;
  }
  return 0xfff0bdc1;
}


