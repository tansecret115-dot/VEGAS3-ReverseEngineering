/* Module: encn3260.dll
   Function: FUN_664a3140
   Address: 664a3140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a3140(int param_1,HANDLE param_2)

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
  FUN_664a2d10((int)this);
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 0x40;
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  (**(code **)**(undefined4 **)(param_1 + 0x1c))
            (*(undefined4 **)(param_1 + 0x1c),&DAT_664dcb00,&local_c);
  uVar5 = 0xffffffff;
  pcVar2 = s_FullScreenData_664e3274;
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
  pcVar2 = &DAT_664e32e0;
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
  pcVar2 = s_TestModes_664e3318;
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
      FUN_664ba900(&local_2c);
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
      pcVar2 = strtok(local_10,&DAT_664e3314);
      while (pcVar2 != (char *)0x0) {
        FUN_664baab0(&local_2c,pcVar2);
        pcVar2 = strtok((char *)0x0,&DAT_664e3314);
      }
      local_14 = &local_2c;
      if (local_28 != 0) {
        piVar4 = (int *)0x0;
        local_18 = local_28;
        if (local_28 == 0) goto LAB_664a32cd;
        do {
          puVar3 = (undefined4 *)FUN_664bab80(local_18);
          piVar4 = (int *)*puVar3;
LAB_664a32cd:
          FUN_664a3420(this,piVar4,param_2);
          FUN_664bab40(&local_18);
        } while (local_18 != 0);
      }
      operator_delete(local_10);
      FUN_664ba950(&local_2c);
      goto LAB_664a3307;
    }
  }
  FUN_664a2ef0(this);
LAB_664a3307:
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
  FUN_664a2eb0((int)this);
  return 0;
}


