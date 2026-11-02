/* Module: rmbe3260.dll
   Function: FUN_660574f0
   Address: 660574f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_660574f0(char *param_1,char param_2)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *extraout_ECX;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int local_1000 [1018];
  undefined4 uStackY_18;
  
  FUN_66060bf0();
  if ((param_1 != (char *)0x0) || (cRam00000000 != '\0')) {
    extraout_ECX[1] = param_1;
    *(undefined4 *)((int)extraout_ECX + 0x15) = 1;
    *(undefined4 *)((int)extraout_ECX + 0x11) = 1;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      pcVar3 = (char *)extraout_ECX[1];
      if ((*pcVar3 == param_2) && (param_1 < pcVar3)) {
        local_1000[*(int *)((int)extraout_ECX + 0x15) + -1] = (int)pcVar3;
        *(int *)((int)extraout_ECX + 0x15) = *(int *)((int)extraout_ECX + 0x15) + 1;
      }
      iVar4 = extraout_ECX[1];
      extraout_ECX[1] = (char *)(iVar4 + 1);
      *(int *)((int)extraout_ECX + 0x11) = *(int *)((int)extraout_ECX + 0x11) + 1;
      cVar1 = *(char *)(iVar4 + 1);
    }
    local_1000[*(int *)((int)extraout_ECX + 0x15) + -1] = extraout_ECX[1];
    uStackY_18 = 0x6605757d;
    pvVar2 = operator_new(*(int *)((int)extraout_ECX + 0x15) * 4 + 4);
    *(void **)((int)extraout_ECX + 0x19) = pvVar2;
    uStackY_18 = 0x6605758c;
    pcVar3 = operator_new(*(uint *)((int)extraout_ECX + 0x11));
    uVar5 = 0xffffffff;
    *extraout_ECX = pcVar3;
    pcVar7 = param_1;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar3 = pcVar3 + 4;
    }
    iVar4 = 1;
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar3 = pcVar3 + 1;
    }
    **(undefined4 **)((int)extraout_ECX + 0x19) = *extraout_ECX;
    if (1 < *(int *)((int)extraout_ECX + 0x15) + 1) {
      do {
        (*(int **)((int)extraout_ECX + 0x19))[iVar4] =
             (local_1000[iVar4 + -1] - (int)param_1) + **(int **)((int)extraout_ECX + 0x19);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)((int)extraout_ECX + 0x15) + 1);
    }
    extraout_ECX[1] = *extraout_ECX;
    extraout_ECX[2] = 0;
    *(char *)(extraout_ECX + 4) = param_2;
    pcVar3 = *(char **)(*(int *)((int)extraout_ECX + 0x19) + -4 +
                       *(int *)((int)extraout_ECX + 0x15) * 4);
    extraout_ECX[3] = pcVar3;
    if (*pcVar3 == param_2) {
      extraout_ECX[3] = pcVar3 + 1;
    }
  }
  return extraout_ECX;
}


