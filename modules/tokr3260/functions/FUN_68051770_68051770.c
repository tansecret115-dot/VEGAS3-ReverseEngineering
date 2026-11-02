/* Module: tokr3260.dll
   Function: FUN_68051770
   Address: 68051770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_68051770(size_t param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            int param_6,int param_7)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = param_7;
  pvVar2 = calloc(param_1,4);
  *(void **)(param_7 + 0x48) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0xfff0bdc1;
  }
  pvVar2 = calloc(param_1,4);
  *(void **)(param_7 + 0x54) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0xfff0bdc1;
  }
  pvVar2 = calloc(0x800,4);
  *(void **)(param_7 + 0x58) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0xfff0bdc1;
  }
  *(undefined4 *)(param_7 + 0xc) = param_2;
  *(undefined4 *)(param_7 + 4) = param_3;
  *(size_t *)(param_7 + 8) = param_1;
  *(int *)(param_7 + 0x10) = param_4;
  *(undefined4 *)(param_7 + 0x18) = param_5;
  *(size_t *)(param_7 + 0x1c) = param_6 * param_4 * param_1;
  iVar3 = FUN_68051a20(param_7);
  if (iVar3 != -999999) {
    iVar3 = FUN_68056e40(*(int *)(param_7 + 0x54),param_1);
    if (iVar3 == -999999) {
      return 0xfff0bdc1;
    }
    iVar3 = FUN_68057a10(param_7);
    if (iVar3 == -999999) {
      return 0xfff0bdc1;
    }
    param_7 = 0;
    if (0 < (int)param_1) {
      do {
        pvVar2 = malloc(0xf228);
        *(void **)(*(int *)(iVar1 + 0x48) + param_7 * 4) = pvVar2;
        puVar6 = *(undefined4 **)(*(int *)(iVar1 + 0x48) + param_7 * 4);
        if (puVar6 == (undefined4 *)0x0) {
          return 0xfff0bdc1;
        }
        puVar4 = puVar6;
        for (iVar3 = 0x3c8a; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        puVar4 = malloc(0xf228);
        puVar6[0x3c86] = puVar4;
        if (puVar4 == (undefined4 *)0x0) {
          return 0xfff0bdc1;
        }
        for (iVar3 = 0x3c8a; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        puVar6[0x3c87] = puVar6[0x3c86];
        puVar6[0x3c75] = param_6;
        puVar6[0x186d] = 0xf;
        puVar6[0x186e] = 0xf;
        puVar6[0x3c85] = param_7;
        puVar6[0x1870] = 4;
        puVar4 = puVar6 + 0x1865;
        iVar3 = 4;
        do {
          puVar4[-4] = 3;
          *puVar4 = 3;
          puVar4 = puVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        param_7 = param_7 + 1;
        puVar6[0x3c89] = iVar1;
      } while (param_7 < (int)param_1);
    }
    iVar3 = 0;
    if (0 < (int)param_1) {
      do {
        puVar6 = *(undefined4 **)(*(int *)(iVar1 + 0x48) + iVar3 * 4);
        iVar3 = iVar3 + 1;
        puVar4 = (undefined4 *)puVar6[0x3c86];
        for (iVar5 = 0x3c8a; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar4 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar4 = puVar4 + 1;
        }
      } while (iVar3 < (int)param_1);
    }
    return 0;
  }
  return 0xfff0bdc1;
}


