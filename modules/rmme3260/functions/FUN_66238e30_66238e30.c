/* Module: rmme3260.dll
   Function: FUN_66238e30
   Address: 66238e30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66238e30(int param_1,HANDLE param_2)

{
  void *this;
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char local_12c [256];
  int local_2c;
  int local_28;
  int local_18;
  int *local_14;
  char *local_10;
  int *local_c;
  int *local_8;
  
  this = (void *)(param_1 + -0xc);
  FUN_66238a00((int)this);
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 0x40;
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  (**(code **)**(undefined4 **)(param_1 + 0x1c))
            (*(undefined4 **)(param_1 + 0x1c),&DAT_6626abb8,&local_c);
  uVar5 = 0xffffffff;
  pcVar2 = s_FullScreenData_6626fd54;
  do {
    pcVar9 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar2 = pcVar9 + -uVar5;
  pcVar9 = local_12c;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar2 = &DAT_6626fdc0;
  do {
    pcVar9 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pcVar2 = local_12c;
  do {
    pcVar8 = pcVar2;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar8 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar8;
  } while (cVar1 != '\0');
  pcVar2 = pcVar9 + -uVar5;
  pcVar9 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar2 = s_TestModes_6626fdf8;
  do {
    pcVar9 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pcVar2 = local_12c;
  do {
    pcVar8 = pcVar2;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar8 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar8;
  } while (cVar1 != '\0');
  pcVar2 = pcVar9 + -uVar5;
  pcVar9 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; piVar4 = local_c, uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar9 = pcVar9 + 1;
  }
  (**(code **)(*piVar4 + 0xc))(piVar4,local_12c,&local_8);
  if (local_8 != (int *)0x0) {
    pcVar2 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
    iVar7 = -1;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (iVar7 != -2) {
      pcVar2 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
      uVar5 = 0xffffffff;
      pcVar9 = pcVar2;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      local_10 = operator_new(uVar5);
      FUN_662509f0(&local_2c);
      pcVar9 = local_10;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar9 = pcVar9 + 1;
      }
      pcVar2 = strtok(local_10,&DAT_6626fdf4);
      while (pcVar2 != (char *)0x0) {
        FUN_66250b60(&local_2c,pcVar2);
        pcVar2 = strtok((char *)0x0,&DAT_6626fdf4);
      }
      local_14 = &local_2c;
      if (local_28 != 0) {
        piVar4 = (int *)0x0;
        local_18 = local_28;
        if (local_28 == 0) goto LAB_66238fbd;
        do {
          puVar3 = (undefined4 *)FUN_66250c10(local_18);
          piVar4 = (int *)*puVar3;
LAB_66238fbd:
          FUN_66239050(this,piVar4,param_2);
          FUN_66250bf0(&local_18);
        } while (local_18 != 0);
      }
      operator_delete(local_10);
      FUN_66250a40(&local_2c);
      goto LAB_66238ff7;
    }
  }
  FUN_66238be0(this);
LAB_66238ff7:
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xbf;
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  piVar4 = *(int **)(param_1 + 0x101);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x4c))(piVar4);
  }
  FUN_66238ba0((int)this);
  return 0;
}


