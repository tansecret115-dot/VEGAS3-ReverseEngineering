/* Module: rmbe3260.dll
   Function: FUN_66004b70
   Address: 66004b70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66004b70(CPNWindow *param_1)

{
  CPNWindow *this;
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  undefined3 extraout_var;
  byte *pbVar10;
  bool bVar11;
  char local_300;
  undefined4 local_2ff [63];
  char local_200;
  undefined4 local_1ff [63];
  undefined **local_100 [52];
  undefined4 local_30;
  int local_2c [3];
  int local_20 [3];
  char *local_14 [3];
  CPNWindow *local_8;
  
  if ((*(int *)(param_1 + 0x130) == 0) || (*(int *)(param_1 + 0x134) == 0)) {
    return 1;
  }
  uVar3 = (**(code **)(**(int **)(param_1 + 0x104) + 0x134))();
  uVar4 = (**(code **)(**(int **)(param_1 + 0x108) + 0x134))();
  piVar2 = *(int **)(param_1 + 0x130);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x58))(piVar2,uVar3);
    (**(code **)(**(int **)(param_1 + 0x130) + 0x50))(*(int **)(param_1 + 0x130),uVar4);
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    iVar5 = (**(code **)(**(int **)(param_1 + 0x10c) + 0x134))();
    (**(code **)(**(int **)(param_1 + 0x138) + 0xc))
              (*(int **)(param_1 + 0x138),s_Indexable_6606c20c,iVar5 == 0);
    local_8 = (CPNWindow *)0x0;
    FUN_6605b650(local_2c);
    iVar5 = (**(code **)(**(int **)(param_1 + 0x138) + 0x30))
                      (*(int **)(param_1 + 0x138),s_Generated_By_6606c268,&local_8);
    if (-1 < iVar5) {
      pcVar6 = (char *)(**(code **)(*(int *)local_8 + 0x1c))(local_8);
      FUN_6605b970(local_2c,pcVar6);
      if (local_8 != (CPNWindow *)0x0) {
        (**(code **)(*(int *)local_8 + 8))(local_8);
        local_8 = (CPNWindow *)0x0;
      }
    }
    (**(code **)(**(int **)(param_1 + 0x110) + 0x134))();
    FUN_6604eb40(local_20);
    puVar7 = operator_new(0x28);
    if (puVar7 == (undefined4 *)0x0) {
      local_8 = (CPNWindow *)0x0;
    }
    else {
      local_8 = (CPNWindow *)FUN_6605c060(puVar7);
    }
    (**(code **)(*(int *)local_8 + 4))(local_8);
    (**(code **)(*(int *)local_8 + 0x10))(local_8,local_20[0],*(int *)(local_20[0] + -8) + 1);
    (**(code **)(**(int **)(param_1 + 0x138) + 0x2c))
              (*(int **)(param_1 + 0x138),s_Content_Rating_6606c1fc,local_8);
    if (local_8 != (CPNWindow *)0x0) {
      (**(code **)(*(int *)local_8 + 8))(local_8);
      local_8 = (CPNWindow *)0x0;
    }
    FUN_6605b770(local_20);
    FUN_6605b770(local_2c);
  }
  if (*(int *)(param_1 + 0x13c) != 0) {
    iVar5 = (**(code **)(**(int **)(param_1 + 0x114) + 0x134))();
    **(uint **)(param_1 + 0x13c) = (uint)(iVar5 == 0);
  }
  if (*(int *)(param_1 + 0x140) != 0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x118) + 0x134))();
    **(undefined4 **)(param_1 + 0x140) = uVar3;
  }
  this = param_1 + 0x144;
  uVar3 = 0xff;
  iVar5 = **(int **)(param_1 + 0x11c);
  local_8 = this;
  iVar8 = FUN_6605bc10(this,0xff);
  (**(code **)(iVar5 + 0x118))(iVar8,uVar3);
  FUN_6605bc90(this,-1);
  FUN_6605b670(local_14,(int *)this);
  puVar7 = FUN_6605bec0(local_14,local_20,1);
  pbVar9 = (byte *)*puVar7;
  pbVar10 = &DAT_6606c264;
  do {
    bVar1 = *pbVar9;
    bVar11 = bVar1 < *pbVar10;
    if (bVar1 != *pbVar10) {
LAB_66004da5:
      iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_66004daa;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar9[1];
    bVar11 = bVar1 < pbVar10[1];
    if (bVar1 != pbVar10[1]) goto LAB_66004da5;
    pbVar9 = pbVar9 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_66004daa:
  FUN_6605b770(local_20);
  if (iVar5 != 0) {
    FUN_6605bba0(local_14,&DAT_6606c264);
  }
  FUN_6605bba0(local_14,&DAT_6606c25c);
  bVar11 = FUN_6604e680(local_14[0]);
  if (CONCAT31(extraout_var,bVar11) == 0) {
    CPNDialog::CPNDialog((CPNDialog *)local_100);
    local_300 = DAT_66075004;
    local_200 = DAT_66075004;
    puVar7 = local_2ff;
    for (iVar5 = 0x3f; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = 0;
    local_30 = 0;
    puVar7 = local_1ff;
    for (iVar5 = 0x3f; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    piVar2 = *(int **)(param_1 + 0xe4);
    local_100[0] = &PTR_FUN_66062968;
    *(undefined2 *)puVar7 = 0;
    (**(code **)(*piVar2 + 0x24))(&local_200,0xff);
    FUN_6602e290(0x5dd0038,&local_300,0xff);
    CPNMessageBox::DoModal((CPNMessageBox *)local_100,param_1,&local_300,&local_200,0x10);
    local_100[0] = &PTR_FUN_66062818;
    CPNDialog::~CPNDialog((CPNDialog *)local_100);
    FUN_6605b770((int *)local_14);
    return 0;
  }
  piVar2 = *(int **)(param_1 + 0x134);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x40))(piVar2,*(int *)local_8);
  }
  FUN_6605b770((int *)local_14);
  return 1;
}


