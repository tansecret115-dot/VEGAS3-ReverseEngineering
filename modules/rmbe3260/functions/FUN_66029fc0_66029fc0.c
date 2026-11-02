/* Module: rmbe3260.dll
   Function: FUN_66029fc0
   Address: 66029fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66029fc0(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  int *piVar9;
  char local_44c [1024];
  char *local_4c [3];
  int *local_40;
  float local_3c;
  undefined4 local_38;
  int *local_34;
  int *local_30;
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  int *local_10;
  undefined4 local_c;
  int *local_8;
  
  if (0x3ff < param_3) {
    FUN_6602e290(0x5dd000d,local_44c,0x400);
    FUN_6605b650(local_4c);
    piVar2 = (int *)(*(int *)(param_1 + 0x28) + 0x10);
    (**(code **)(*piVar2 + 0x1c))(piVar2,&local_3c);
    piVar2 = (int *)(*(int *)(param_1 + 0x28) + 0x10);
    (**(code **)(*piVar2 + 0x24))(piVar2,&local_14);
    piVar2 = (int *)(*(int *)(param_1 + 0x28) + 0x10);
    (**(code **)(*piVar2 + 0x34))(piVar2,&local_c);
    piVar2 = (int *)(*(int *)(param_1 + 0x28) + 0x10);
    (**(code **)(*piVar2 + 0x2c))(piVar2,&local_2c);
    piVar2 = (int *)(*(int *)(param_1 + 0x28) + 0x10);
    (**(code **)(*piVar2 + 0x3c))(piVar2,&param_3);
    piVar2 = (int *)(*(int *)(param_1 + 0x54) + 0x10);
    local_1c = (int *)(*(int *)(param_1 + 0x50) + 0x10);
    local_38 = *(undefined4 *)(param_1 + 8);
    local_34 = (int *)(*(int *)(param_1 + 0x4c) + 0x10);
    piVar9 = (int *)(*(int *)(param_1 + 0x28) + 0x10);
    local_24 = (int *)(*(int *)(param_1 + 0x48) + 0x10);
    piVar6 = (int *)(*(int *)(param_1 + 0x58) + 0x10);
    local_40 = (int *)(*(int *)(param_1 + 0x44) + 0x10);
    local_8 = (int *)(*(int *)(param_1 + 0x40) + 0x10);
    local_10 = (int *)(*(int *)(param_1 + 0x3c) + 0x10);
    local_18 = (int *)(*(int *)(param_1 + 0x38) + 0x10);
    local_20 = (int *)(*(int *)(param_1 + 0x34) + 0x10);
    local_28 = (int *)(*(int *)(param_1 + 0x30) + 0x10);
    local_30 = (int *)(*(int *)(param_1 + 0x2c) + 0x10);
    uVar3 = ftol(local_2c,local_c,param_2,param_3);
    uVar3 = (**(code **)(*piVar9 + 0x14))
                      (piVar9,(double)local_3c,*(undefined4 *)(param_1 + 0x1c),local_14,uVar3);
    uVar3 = (**(code **)(*piVar6 + 0x14))(piVar6,uVar3);
    uVar3 = (**(code **)(*piVar2 + 0x14))(piVar2,uVar3);
    uVar3 = (**(code **)(*local_1c + 0x14))(local_1c,uVar3);
    uVar3 = (**(code **)(*local_34 + 0x14))(local_34,uVar3);
    uVar3 = (**(code **)(*local_24 + 0x14))(local_24,uVar3);
    uVar3 = (**(code **)(*local_40 + 0x14))(local_40,uVar3);
    uVar3 = (**(code **)(*local_8 + 0x14))(local_8,uVar3);
    uVar3 = (**(code **)(*local_10 + 0x14))(local_10,uVar3);
    uVar3 = (**(code **)(*local_18 + 0x14))(local_18,uVar3);
    uVar3 = (**(code **)(*local_20 + 0x14))(local_20,uVar3);
    uVar3 = (**(code **)(*local_28 + 0x14))(local_28,uVar3);
    uVar3 = (**(code **)(*local_30 + 0x14))(local_30,uVar3);
    ftol(uVar3);
    FUN_6605bfd0(local_4c,local_44c);
    uVar4 = 0xffffffff;
    do {
      pcVar7 = local_4c[0];
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = local_4c[0] + 1;
      cVar1 = *local_4c[0];
      local_4c[0] = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar7 + -uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *param_2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      param_2 = param_2 + 1;
    }
    FUN_6605b770((int *)local_4c);
    return 0;
  }
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_66075004;
  do {
    pcVar8 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar8 + -uVar4;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    param_2 = param_2 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    param_2 = param_2 + 1;
  }
  return 0x8004000d;
}


