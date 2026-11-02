/* Module: rmme3260.dll
   Function: FUN_662662b0
   Address: 662662b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662662b0(int *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  
  if (param_1[7] == 0) {
    return 0;
  }
  bVar9 = false;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete((void *)param_1[4]);
    param_1[4] = 0;
  }
  iVar3 = param_1[4];
  while ((iVar3 == 0 && (!bVar9))) {
    pcVar2 = (char *)(**(code **)(*param_1 + 8))();
    if (pcVar2 == (char *)0x0) {
      if ((char *)param_1[2] == (char *)0x0) {
        param_1[5] = 0;
      }
      else {
        pcVar2 = strtok((char *)0x0,(char *)param_1[2]);
        param_1[5] = (int)pcVar2;
      }
      if (param_1[5] == 0) {
        (**(code **)(*param_1 + 0xc))();
        bVar9 = true;
      }
      else {
        (**(code **)(*param_1 + 0xc))();
        iVar3 = (**(code **)(*param_1 + 4))(param_1[5]);
        bVar9 = iVar3 == 0;
      }
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x14))(pcVar2);
      if (iVar3 != 0) {
        uVar5 = 0xffffffff;
        pcVar4 = pcVar2;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        pcVar4 = operator_new(~uVar5);
        uVar5 = 0xffffffff;
        param_1[4] = (int)pcVar4;
        do {
          pcVar8 = pcVar2;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar8;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar2 = pcVar8 + -uVar5;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar4 = pcVar4 + 1;
        }
      }
    }
    iVar3 = param_1[4];
  }
  if (param_1[4] != 0) {
    if ((void *)param_1[6] != (void *)0x0) {
      operator_delete((void *)param_1[6]);
      param_1[6] = 0;
    }
    uVar5 = 0xffffffff;
    pcVar2 = &DAT_6626fdc0;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar6 = 0xffffffff;
    pcVar2 = (char *)param_1[5];
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar2 = (char *)param_1[4];
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = operator_new(~uVar5 + ~uVar6 + (~uVar7 - 2));
    param_1[6] = (int)pcVar2;
    if (pcVar2 == (char *)0x0) {
      return 0;
    }
    uVar5 = 0xffffffff;
    pcVar4 = (char *)param_1[5];
    do {
      pcVar8 = pcVar4;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar4 = pcVar8 + -uVar5;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar2 = pcVar2 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar2 = (char *)param_1[5];
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = 1;
    bVar9 = true;
    pcVar2 = (char *)param_1[5] + (~uVar5 - 2);
    pcVar4 = &DAT_6626fdc0;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar9 = *pcVar2 == *pcVar4;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar9);
    if (!bVar9) {
      uVar5 = 0xffffffff;
      pcVar2 = &DAT_6626fdc0;
      do {
        pcVar4 = pcVar2;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar4 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar4;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar3 = -1;
      pcVar2 = (char *)param_1[6];
      do {
        pcVar8 = pcVar2;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar8 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar8;
      } while (cVar1 != '\0');
      pcVar2 = pcVar4 + -uVar5;
      pcVar4 = pcVar8 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar4 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar4 = pcVar4 + 1;
      }
    }
    uVar5 = 0xffffffff;
    pcVar2 = (char *)param_1[4];
    do {
      pcVar4 = pcVar2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar4 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar4;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar3 = -1;
    pcVar2 = (char *)param_1[6];
    do {
      pcVar8 = pcVar2;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar8 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar8;
    } while (cVar1 != '\0');
    pcVar2 = pcVar4 + -uVar5;
    pcVar4 = pcVar8 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar4 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    }
  }
  return param_1[4];
}


