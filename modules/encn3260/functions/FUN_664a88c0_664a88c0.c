/* Module: encn3260.dll
   Function: FUN_664a88c0
   Address: 664a88c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664a88c0(void *this,HBITMAP param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char local_130 [256];
  int local_30;
  int local_2c;
  int local_1c;
  int *local_18;
  char *local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_10 = 0;
  if (*(int *)((int)this + 0x144) == 0) {
    local_10 = 1;
    (**(code **)(*(int *)((int)this + 8) + 0x14))((int)this + 8,0,0x80000000);
  }
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  (**(code **)**(undefined4 **)((int)this + 0x94))
            (*(undefined4 **)((int)this + 0x94),&DAT_664dcb00,&local_c);
  uVar5 = 0xffffffff;
  pcVar3 = s_FullScreenData_664e3274;
  do {
    pcVar9 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar3 = pcVar9 + -uVar5;
  pcVar9 = local_130;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar3 = &DAT_664e32e0;
  do {
    pcVar9 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pcVar3 = local_130;
  do {
    pcVar8 = pcVar3;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  pcVar3 = pcVar9 + -uVar5;
  pcVar9 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar3 = s_TestModes_664e3318;
  do {
    pcVar9 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pcVar3 = local_130;
  do {
    pcVar8 = pcVar3;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  pcVar3 = pcVar9 + -uVar5;
  pcVar9 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; piVar2 = local_c, uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar9 = pcVar9 + 1;
  }
  (**(code **)(*piVar2 + 0xc))(piVar2,local_130,&local_8);
  if (local_8 != (int *)0x0) {
    pcVar3 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
    iVar7 = -1;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (iVar7 != -2) {
      pcVar3 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
      uVar5 = 0xffffffff;
      pcVar9 = pcVar3;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      local_14 = operator_new(uVar5);
      FUN_664ba900(&local_30);
      pcVar9 = local_14;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar9 = pcVar9 + 1;
      }
      pcVar3 = strtok(local_14,&DAT_664e3314);
      while (pcVar3 != (char *)0x0) {
        FUN_664baab0(&local_30,pcVar3);
        pcVar3 = strtok((char *)0x0,&DAT_664e3314);
      }
      if (local_10 != 0) {
        (**(code **)(*(int *)((int)this + 4) + 0x10))((int)this + 4,1);
      }
      local_18 = &local_30;
      local_1c = local_2c;
      if (local_2c != 0) {
        pcVar3 = (char *)0x0;
        if (local_2c == 0) goto LAB_664a8a74;
        do {
          puVar4 = (undefined4 *)FUN_664bab80(local_1c);
          pcVar3 = (char *)*puVar4;
LAB_664a8a74:
          FUN_664a8f30(this,pcVar3,param_1,param_2);
          FUN_664bab40(&local_1c);
        } while (local_1c != 0);
      }
      operator_delete(local_14);
      FUN_664ba950(&local_30);
      goto LAB_664a8aae;
    }
  }
  FUN_664aa290(this);
LAB_664a8aae:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (local_10 != 0) {
    (**(code **)(*(int *)((int)this + 8) + 0x18))((int)this + 8);
  }
  return 0;
}


