/* Module: encn3260.dll
   Function: FUN_66481dd0
   Address: 66481dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66481dd0(int param_1,char *param_2,undefined4 param_3,int *param_4,char *param_5,
                 char *param_6,int *param_7)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int local_58 [3];
  int local_4c [3];
  int local_40 [3];
  int local_34 [3];
  int local_28 [3];
  int local_1c [3];
  char *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  puVar2 = operator_new(0x1b2);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_66483b90(puVar2);
  }
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = puVar2 + 0xc;
  }
  *(int **)(param_1 + 0x24) = piVar3;
  (**(code **)(*piVar3 + 4))(piVar3);
  pcVar10 = &DAT_664e20f8;
  puVar2 = FUN_664bb450(local_58,s_win32_664e20f0);
  pcVar9 = &DAT_664e20ec;
  puVar4 = FUN_664bb450(local_4c,s_6_0_7_1342_664e20e0);
  puVar4 = FUN_664bb720(local_40,s_RealMedia_EncoderClient_Version_664e20bc,puVar4);
  puVar4 = FUN_664bb6c0(local_34,puVar4,pcVar9);
  puVar2 = FUN_664bb670(local_28,puVar4,puVar2);
  puVar2 = FUN_664bb6c0(local_1c,puVar2,pcVar10);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x10))(*(int **)(param_1 + 0x24),*puVar2);
  FUN_664bb3e0(local_1c);
  FUN_664bb3e0(local_28);
  FUN_664bb3e0(local_34);
  FUN_664bb3e0(local_40);
  FUN_664bb3e0(local_4c);
  FUN_664bb3e0(local_58);
  if (*(int *)(param_1 + 0x9a) != -1) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0xc))(param_1 + 0x10,*(int *)(param_1 + 0x9a));
  }
  *(int **)(param_1 + 0x28) = param_4;
  (**(code **)(*param_4 + 4))(param_4);
  *(int **)(param_1 + 0x2c) = param_7;
  (**(code **)(*param_7 + 4))(param_7);
  uVar6 = 0xffffffff;
  pcVar9 = param_2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  pcVar10 = operator_new(~uVar6);
  uVar6 = 0xffffffff;
  pcVar9 = param_2;
  do {
    pcVar8 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar8 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar8 + -uVar6;
  pcVar8 = pcVar10;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar8 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(char **)(param_1 + 0x50) = pcVar10;
  *(undefined2 *)(param_1 + 0x58) = (undefined2)param_3;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(*(int **)(param_1 + 0x28),&local_10);
  if (iVar5 != 0) {
    return 0x80004005;
  }
  uVar6 = 0xffffffff;
  pcVar9 = local_10;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  pcVar9 = operator_new(~uVar6);
  uVar6 = 0xffffffff;
  do {
    pcVar10 = local_10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = local_10 + 1;
    cVar1 = *local_10;
    local_10 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar10 = pcVar10 + -uVar6;
  pcVar8 = pcVar9;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar8 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(char **)(param_1 + 0x4c) = pcVar9;
  FUN_664bb0e0(param_5,&local_c);
  FUN_664bb0e0(param_6,&local_8);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(*(int **)(param_1 + 0x20),local_c,local_8);
  (**(code **)**(undefined4 **)(param_1 + 0x2c))
            (*(undefined4 **)(param_1 + 0x2c),&DAT_664dccb0,param_1 + 0x5e);
  (**(code **)**(undefined4 **)(param_1 + 0x2c))
            (*(undefined4 **)(param_1 + 0x2c),&DAT_664dd010,param_1 + 0x30);
  if (*(int *)(param_1 + 0x3c) == 0) {
    return 0x80004005;
  }
  if (param_1 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = param_1 + 0x14;
  }
  iVar5 = (**(code **)(**(int **)(param_1 + 0x24) + 0xc))
                    (*(int **)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x20),param_2,param_3,iVar5
                     ,0,*(undefined4 *)(param_1 + 0x40),0,0,0,1);
  return -(uint)(iVar5 != 0) & 0x80004005;
}


