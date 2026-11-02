/* Module: rmbe3260.dll
   Function: FUN_66002150
   Address: 66002150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66002150(void *this,int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  undefined3 extraout_var;
  uint uVar4;
  undefined3 extraout_var_00;
  ulong uVar5;
  undefined4 uVar6;
  undefined3 extraout_var_01;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  char local_3fc;
  undefined4 local_3fb [63];
  char local_2fc;
  undefined4 local_2fb [63];
  char local_1fc;
  undefined4 local_1fb [63];
  undefined **local_fc [52];
  undefined4 local_2c;
  char *local_28 [3];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  piVar7 = param_2;
  piVar1 = param_1;
  FUN_66002570(this,(int)param_1,(int)param_2);
  param_1 = (int *)0x0;
  local_c = (int *)0x0;
  local_1c = (**(code **)(**(int **)((int)this + 0x104) + 0xc))
                       (*(int **)((int)this + 0x104),DAT_66075000,&param_1);
  FUN_660145d0(&local_10);
  if (piVar7 < *(int **)((int)this + 0x40a)) {
    local_8 = 1;
    piVar3 = (int *)(**(code **)(**(int **)((int)this + (int)piVar1 * 4 + 0x152) + 0x134))();
    if (piVar7 != piVar3) {
      (**(code **)(**(int **)((int)this + (int)piVar1 * 4 + 0x152) + 0x13c))();
    }
    if ((param_3 != (int *)0x0) &&
       (bVar2 = FUN_66002680(this,(int)piVar1), CONCAT31(extraout_var,bVar2) == 0)) {
      local_8 = 0;
      CPNDialog::CPNDialog((CPNDialog *)local_fc);
      local_2c = 0;
      local_fc[0] = &PTR_FUN_66062968;
      FUN_6605b650(local_28);
      local_1fc = DAT_66075004;
      local_3fc = DAT_66075004;
      puVar9 = local_1fb;
      for (iVar8 = 0x3f; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = 0;
      puVar9 = local_3fb;
      for (iVar8 = 0x3f; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      piVar7 = *(int **)((int)this + 0xe4);
      *(undefined2 *)puVar9 = 0;
      (**(code **)(*piVar7 + 0x24))(&local_3fc);
      local_2fc = DAT_66075004;
      puVar9 = local_2fb;
      for (iVar8 = 0x3f; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = 0;
      switch(piVar1) {
      default:
        uVar4 = 0x15;
        break;
      case (int *)0x1:
        uVar4 = 0x16;
        break;
      case (int *)0x2:
        uVar4 = 0x17;
        break;
      case (int *)0x3:
        uVar4 = 0x18;
      }
      FUN_6602e290(uVar4 | 0x5dd0000,&local_2fc,0xff);
      if (*(int *)((int)this + 0x118) == 1) {
        param_3 = (int *)0x0;
        if (-1 < local_1c) {
          local_1c = (**(code **)(*param_1 + 0x1c))(param_1);
        }
        FUN_6602e290(0x5dd0013,&local_1fc,0xff);
        FUN_6605bfd0(local_28,&local_1fc);
        CPNMessageBox::DoModal((CPNMessageBox *)local_fc,this,local_28[0],&local_3fc,0x10);
      }
      else {
        FUN_660145d0(&param_3);
        FUN_66014650(&param_3,param_1);
        local_14 = 0;
        bVar2 = FUN_66014680((int *)&param_3);
        if (CONCAT31(extraout_var_00,bVar2) != 0) {
          piVar7 = (int *)FUN_660145e0(&param_3);
          (**(code **)(*piVar7 + 0x14))(piVar7);
        }
        FUN_6602e290(0x5dd0014,&local_1fc,0xff);
        FUN_6605bfd0(local_28,&local_1fc);
        uVar5 = CPNMessageBox::DoModal((CPNMessageBox *)local_fc,this,local_28[0],&local_3fc,0x31);
        if (uVar5 == 1) {
          local_8 = 1;
        }
        thunk_FUN_66014790((int *)&param_3);
      }
      if (local_8 == 0) {
        if (-1 < local_1c) {
          iVar8 = *param_1;
          uVar6 = (**(code **)(iVar8 + 0xc))(param_1,*(undefined4 *)((int)this + 0x118),piVar1);
          (**(code **)(iVar8 + 0x10))(param_1,uVar6);
          (**(code **)(*local_c + 0xc))(local_c,&local_18);
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 8))();
            local_c = (int *)0x0;
          }
          iVar8 = FUN_66002b00(this,local_18,local_14,(uint *)&param_3);
          if (iVar8 == 0) {
            param_3 = param_2;
          }
        }
        (**(code **)(**(int **)((int)this + (int)piVar1 * 4 + 0x152) + 0x13c))();
        FUN_66002570(this,(int)piVar1,(int)param_3);
        (**(code **)(**(int **)((int)this + (int)piVar1 * 4 + 0x152) + 0x90))();
      }
      FUN_6605b770((int *)local_28);
      local_fc[0] = &PTR_FUN_66062818;
      CPNDialog::~CPNDialog((CPNDialog *)local_fc);
      piVar7 = param_2;
    }
    if (local_8 != 0) {
      FUN_660146d0(&local_10,*(undefined4 **)(*(int *)((int)this + 0x406) + (int)piVar7 * 4));
      bVar2 = FUN_66014680(&local_10);
      if (CONCAT31(extraout_var_01,bVar2) != 0) {
        piVar7 = (int *)FUN_660145e0(&local_10);
        iVar8 = (**(code **)(*piVar7 + 0xc))(piVar7,&local_18);
        if (-1 < iVar8) {
          param_2 = (int *)0x0;
          iVar8 = *param_1;
          uVar6 = (**(code **)(iVar8 + 0xc))
                            (param_1,*(undefined4 *)((int)this + 0x118),piVar1,&param_2);
          (**(code **)(iVar8 + 0x10))(param_1,uVar6);
          (**(code **)(*param_2 + 0x10))(param_2,local_18,local_14);
          if (param_2 != (int *)0x0) {
            (**(code **)(*param_2 + 8))();
          }
        }
      }
    }
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
    param_1 = (int *)0x0;
  }
  thunk_FUN_66014790(&local_10);
  return;
}


