/* Module: rmbe3260.dll
   Function: FUN_66003640
   Address: 66003640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_66003640(CPNWindow *param_1)

{
  CPNWindow *pCVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  float10 fVar8;
  char local_334;
  undefined4 local_333 [63];
  char local_234;
  undefined4 local_233 [63];
  undefined **local_134 [52];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  char *local_4c [3];
  uint local_40;
  uint auStack_3c [2];
  CPNWindow *local_34;
  int local_30;
  float local_2c;
  int local_28;
  int local_24;
  float local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_30 = 1;
  local_24 = 1;
  auStack_3c[1] = 0;
  local_50 = 0xffffff;
  local_8 = (int *)0x0;
  local_28 = 0;
  local_20 = 0.0;
  local_34 = param_1;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x104) + 0xc))
                    (*(int **)(param_1 + 0x104),DAT_66075000,&local_8);
  if (-1 < iVar3) {
    fVar8 = FUN_66003a30((int)param_1);
    local_2c = (float)fVar8;
    (**(code **)(*local_8 + 0x1c))(local_8,auStack_3c + 1);
    FUN_660145d0(&local_14);
    FUN_66014650(&local_14,local_8);
    bVar2 = FUN_66014680(&local_14);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      piVar4 = (int *)FUN_660145e0(&local_14);
      (**(code **)(*piVar4 + 0x14))(piVar4,&local_50);
    }
    auStack_3c[0] = 0;
    local_40 = DAT_6606dda4;
    if ((float)DAT_6606dda4 < local_2c) {
      local_28 = 1;
      local_24 = 0;
    }
    local_10 = (int *)0x0;
    iVar3 = FUN_660130d0(&local_10);
    if (-1 < iVar3) {
      local_c = (int *)0x0;
      local_1c = (int *)0x0;
      uVar6 = 0;
      do {
        local_18 = (int *)0x0;
        iVar3 = *local_8;
        uVar5 = (**(code **)(iVar3 + 0xc))
                          (local_8,*(undefined4 *)(local_34 + 0x118),uVar6,&local_18);
        (**(code **)(iVar3 + 0x10))(local_8,uVar5);
        (**(code **)(*local_18 + 0xc))(local_18,&local_60);
        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 8))(local_18);
          local_18 = (int *)0x0;
        }
        iVar3 = (**(code **)(*local_10 + 0x14))(local_10,local_60,local_5c,&local_c);
        if (-1 < iVar3) {
          iVar3 = (**(code **)*local_c)(local_c,&DAT_66065908,&local_1c);
          if (-1 < iVar3) {
            (**(code **)(*local_1c + 0xc))(local_1c,auStack_3c);
            uStack_54 = 0;
            local_58 = auStack_3c[0];
            if (local_20 < (float)auStack_3c[0] * _DAT_660624f0) {
              local_20 = (float)auStack_3c[0] * _DAT_660624f0;
            }
            if (local_1c != (int *)0x0) {
              (**(code **)(*local_1c + 8))(local_1c);
              local_1c = (int *)0x0;
            }
          }
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 8))(local_c);
            local_c = (int *)0x0;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 4);
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 8))(local_10);
        local_10 = (int *)0x0;
      }
    }
    if (local_2c <= local_20) {
      local_30 = 0;
      local_24 = 0;
    }
    thunk_FUN_66014790(&local_14);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (iVar3 < 0) {
    return 0;
  }
  CPNDialog::CPNDialog((CPNDialog *)local_134);
  local_334 = DAT_66075004;
  local_234 = DAT_66075004;
  puVar7 = local_333;
  for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  local_64 = 0;
  puVar7 = local_233;
  for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_134[0] = &PTR_FUN_66062968;
  *(undefined2 *)puVar7 = 0;
  FUN_6605b650(local_4c);
  pCVar1 = local_34;
  (**(code **)(**(int **)(local_34 + 0xe4) + 0x24))(&local_234,0xff);
  if (local_28 == 0) {
    if (local_30 != 0) goto LAB_6600392c;
    uVar5 = 0xff;
    iVar3 = FUN_6605bc10(local_4c,0xff);
    FUN_6602e290(0x5dd0019,iVar3,uVar5);
    FUN_6605bc90(local_4c,-1);
  }
  else {
    FUN_6602e290(0x5dd001f,&local_334,0xff);
    FUN_6605bfd0(local_4c,&local_334);
  }
  CPNMessageBox::DoModal((CPNMessageBox *)local_134,pCVar1,local_4c[0],&local_234,0x10);
LAB_6600392c:
  iVar3 = local_24;
  if (local_24 == 0) {
    FUN_66003550((int)pCVar1);
  }
  FUN_6605b770((int *)local_4c);
  local_134[0] = &PTR_FUN_66062818;
  CPNDialog::~CPNDialog((CPNDialog *)local_134);
  return iVar3;
}


