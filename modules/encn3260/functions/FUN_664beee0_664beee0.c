/* Module: encn3260.dll
   Function: FUN_664beee0
   Address: 664beee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664beee0(char *param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  uint uVar8;
  char *pcVar9;
  int local_70 [7];
  undefined4 local_54 [5];
  undefined1 local_40 [20];
  int local_2c;
  int local_28;
  int local_24 [3];
  char *local_18 [3];
  int local_c;
  int local_8;
  
  uVar8 = 0xffffffff;
  pcVar9 = param_1;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_664c45c0(local_54,(undefined4 *)param_1,~uVar8 - 1);
  FUN_664c4750(local_70,local_54);
  FUN_664c4790(local_70,local_18,&DAT_664ef7c0);
  iVar3 = _stricmp(local_18[0],s_smpte_664ef934);
  if (iVar3 == 0) {
    param_1 = (char *)0xffffffff;
    local_8 = -1;
    piVar4 = FUN_664c4790(local_70,&local_28,&DAT_664ef744);
    FUN_664bb570(local_18,piVar4);
    local_c = piVar4[3];
    FUN_664bb3e0(&local_28);
    bVar2 = false;
    iVar3 = 0;
    if (0 < *(int *)(local_18[0] + -8)) {
      do {
        iVar5 = isspace((int)local_18[0][iVar3]);
        if (iVar5 == 0) {
          bVar2 = true;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_18[0] + -8));
    }
    if (bVar2) {
      FUN_664d5f20(local_40,local_18[0]);
      param_1 = (char *)FUN_6648bd10((int)local_40);
      FUN_664bb3e0(&local_28);
    }
    piVar4 = FUN_664c4790(local_70,&local_28,&DAT_664e3610);
    FUN_664bb570(local_18,piVar4);
    local_c = piVar4[3];
    FUN_664bb3e0(&local_28);
    bVar2 = false;
    iVar3 = 0;
    if (0 < *(int *)(local_18[0] + -8)) {
      do {
        iVar5 = isspace((int)local_18[0][iVar3]);
        if (iVar5 == 0) {
          bVar2 = true;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_18[0] + -8));
    }
    iVar3 = local_8;
    if (bVar2) {
      FUN_664d5f20(local_40,local_18[0]);
      iVar3 = FUN_6648bd10((int)local_40);
      FUN_664bb3e0(&local_28);
    }
    pvVar6 = operator_new(0x28);
    if (pvVar6 != (void *)0x0) {
      puVar7 = FUN_664bd1a0(pvVar6,(uint)param_1,iVar3,0);
      FUN_664be450(param_2,puVar7);
      goto LAB_664bf1b3;
    }
  }
  else {
    iVar3 = _stricmp(local_18[0],&DAT_664ef930);
    if (iVar3 != 0) {
      _stricmp(local_18[0],s_clock_664ef928);
      goto LAB_664bf1b3;
    }
    param_1 = (char *)0xffffffff;
    local_8 = -1;
    piVar4 = FUN_664c4790(local_70,&local_28,&DAT_664ef744);
    FUN_664bb570(local_18,piVar4);
    local_c = piVar4[3];
    FUN_664bb3e0(&local_28);
    bVar2 = false;
    iVar3 = 0;
    if (0 < *(int *)(local_18[0] + -8)) {
      do {
        iVar5 = isspace((int)local_18[0][iVar3]);
        if (iVar5 == 0) {
          bVar2 = true;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_18[0] + -8));
    }
    if (bVar2) {
      FUN_664d5bc0(&local_2c,local_18[0]);
      param_1 = (char *)thunk_FUN_664d5c20(&local_2c);
      FUN_664bb3e0(local_24);
    }
    piVar4 = FUN_664c4790(local_70,&local_28,&DAT_664e3610);
    FUN_664bb570(local_18,piVar4);
    local_c = piVar4[3];
    FUN_664bb3e0(&local_28);
    bVar2 = false;
    iVar3 = 0;
    if (0 < *(int *)(local_18[0] + -8)) {
      do {
        iVar5 = isspace((int)local_18[0][iVar3]);
        if (iVar5 == 0) {
          bVar2 = true;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_18[0] + -8));
    }
    iVar3 = local_8;
    if (bVar2) {
      FUN_664d5bc0(&local_2c,local_18[0]);
      iVar3 = thunk_FUN_664d5c20(&local_2c);
      FUN_664bb3e0(local_24);
    }
    pvVar6 = operator_new(0x28);
    if (pvVar6 != (void *)0x0) {
      puVar7 = FUN_664bd1a0(pvVar6,(uint)param_1,iVar3,2);
      FUN_664be450(param_2,puVar7);
      goto LAB_664bf1b3;
    }
  }
  FUN_664be450(param_2,0);
LAB_664bf1b3:
  FUN_664bb3e0((int *)local_18);
  FUN_664c4770(local_70);
  FUN_664c0180(local_54);
  return 0;
}


