/* Module: rmbe3260.dll
   Function: FUN_66026700
   Address: 66026700
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66026700(int *param_1,uint param_2,int *param_3,int *param_4,CPNWindow *param_5)

{
  undefined4 uVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  CPNWindow *pCVar8;
  int iVar9;
  undefined3 extraout_var;
  int *piVar10;
  undefined3 extraout_var_00;
  CPNPropertyPage *pCVar11;
  uint uVar12;
  undefined4 uVar13;
  char local_3c4 [256];
  CPNPropertySheet local_2c4 [296];
  int local_19c [64];
  CPNPropertyPage local_9c [108];
  int local_30;
  char *local_2c [3];
  CPNPropertyPage *local_20;
  CPNPropertyPage *local_1c;
  CPNPropertyPage *local_18;
  int local_14;
  int local_10;
  int *local_c;
  CPNPropertyPage *local_8;
  
  if (2 < param_2) {
    return -0x7ff8ffa9;
  }
  local_c = (int *)0x0;
  iVar5 = (**(code **)param_1[-4])(param_1 + -4,&DAT_66064ee8,&local_c);
  if (iVar5 < 0) {
    return iVar5;
  }
  uVar3 = GetKeyState(0x10);
  uVar4 = GetKeyState(0x11);
  piVar10 = param_4;
  uVar12 = (uint)((uVar3 & uVar4 & 0x8000) == 0x8000);
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 4))(param_4);
    if (param_2 == 0) {
      (**(code **)(*piVar10 + 0x44))(piVar10,0);
    }
    else if (param_2 == 2) {
      (**(code **)(*piVar10 + 0x44))(piVar10,1);
    }
  }
  FUN_6605b650(local_2c);
  if (param_5 != (CPNWindow *)0x0) {
    FUN_6605b970(local_2c,(char *)param_5);
  }
  uVar6 = 1;
  if ((short)param_1[0xb] != 0) {
    uVar6 = 3;
  }
  if (*(int *)(local_2c[0] + -8) != 0) {
    uVar6 = uVar6 | 8;
  }
  CPNPropertySheet::CPNPropertySheet(local_2c4,uVar6);
  local_1c = (CPNPropertyPage *)0x0;
  local_18 = (CPNPropertyPage *)0x0;
  FUN_6602e290(0x5dd0001,local_19c,0xff);
  pvVar7 = operator_new(0x426);
  if (pvVar7 == (void *)0x0) {
    local_8 = (CPNPropertyPage *)0x0;
  }
  else {
    local_8 = (CPNPropertyPage *)
              FUN_660017d0(pvVar7,0x5dd00be,local_19c,local_c,param_2,piVar10,local_2c[0]);
  }
  CPNPropertySheet::AddPage(local_2c4,local_8);
  if (param_2 == 1) {
    FUN_6602e290(0x5dd0002,local_19c,0xff);
    pvVar7 = operator_new(0x15a);
    if (pvVar7 == (void *)0x0) {
      local_1c = (CPNPropertyPage *)0x0;
    }
    else {
      local_1c = (CPNPropertyPage *)
                 FUN_66002c60(pvVar7,0x5dd00b7,local_19c,local_c,1,uVar12,local_2c[0]);
    }
    CPNPropertySheet::AddPage(local_2c4,local_1c);
    FUN_6602e290(0x5dd0003,local_19c,0xff);
    pvVar7 = operator_new(0x166);
    if (pvVar7 == (void *)0x0) {
      local_18 = (CPNPropertyPage *)0x0;
    }
    else {
      local_18 = (CPNPropertyPage *)
                 FUN_660032e0(pvVar7,0x5dd00b8,local_19c,local_c,1,uVar12,local_2c[0]);
    }
    CPNPropertySheet::AddPage(local_2c4,local_18);
    uVar12 = 0x5dd0004;
  }
  else if ((param_2 == 0) && (piVar10 == (int *)0x0)) {
    uVar12 = 0x5dd0037;
  }
  else {
    if (param_2 == 2) {
      if (piVar10 == (int *)0x0) {
        uVar12 = 0x5dd000e;
        goto LAB_66026966;
      }
    }
    else if (piVar10 == (int *)0x0) goto LAB_6602696e;
    if ((param_2 != 0) && (param_2 != 2)) goto LAB_6602696e;
    uVar12 = 0x5dd0005;
  }
LAB_66026966:
  FUN_6602e290(uVar12,local_3c4,0xff);
LAB_6602696e:
  piVar10 = param_3;
  param_5 = (CPNWindow *)0x0;
  local_10 = 0;
  if (((void *)*param_3 != (void *)0x0) &&
     (param_5 = CPNWindow::GetPNWindow((void *)*param_3), param_5 == (CPNWindow *)0x0)) {
    local_10 = 1;
    pCVar8 = operator_new(0xb8);
    if (pCVar8 == (CPNWindow *)0x0) {
      param_5 = (CPNWindow *)0x0;
    }
    else {
      param_5 = (CPNWindow *)CPNWindow::CPNWindow(pCVar8);
    }
    (**(code **)(*(int *)param_5 + 0xc0))(piVar10);
  }
  pCVar11 = local_9c;
  iVar5 = 9;
  do {
    FUN_6605b650((undefined4 *)pCVar11);
    pCVar11 = pCVar11 + 0xc;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  pCVar11 = local_9c;
  iVar5 = 0;
  do {
    param_3 = (int *)0x0;
    local_20 = pCVar11;
    iVar9 = (**(code **)(*param_1 + 0xc))(param_1,iVar5,&param_3);
    if (-1 < iVar9) {
      FUN_660145d0(&local_14);
      FUN_66014650(&local_14,param_3);
      bVar2 = FUN_66014680(&local_14);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        piVar10 = (int *)FUN_660145e0(&local_14);
        uVar13 = 0x400;
        local_30 = *piVar10;
        iVar9 = FUN_6605bc10(pCVar11,0x400);
        (**(code **)(local_30 + 0x10))(piVar10,iVar9,uVar13);
        pCVar11 = local_20;
        FUN_6605bc90(local_20,-1);
      }
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 8))(param_3);
        param_3 = (int *)0x0;
      }
      thunk_FUN_66014790(&local_14);
    }
    pCVar8 = param_5;
    iVar5 = iVar5 + 1;
    pCVar11 = pCVar11 + 0xc;
  } while (iVar5 < 9);
  local_20 = pCVar11;
  param_5 = (CPNWindow *)CPNPropertySheet::DoModal(local_2c4,param_5,local_3c4,0);
  if (local_10 != 0) {
    CPNWindow::SetParent((CPNWindow *)local_2c4,(CPNWindow *)0x0);
    (**(code **)(*(int *)pCVar8 + 200))();
    if (pCVar8 != (CPNWindow *)0x0) {
      (*(code *)**(undefined4 **)pCVar8)(1);
    }
  }
  if (local_8 != (CPNPropertyPage *)0x0) {
    (*(code *)**(undefined4 **)local_8)(1);
  }
  if (local_1c != (CPNPropertyPage *)0x0) {
    (*(code *)**(undefined4 **)local_1c)(1);
  }
  if (local_18 != (CPNPropertyPage *)0x0) {
    (*(code *)**(undefined4 **)local_18)(1);
  }
  if (param_5 == (CPNWindow *)0x0) {
    local_8 = local_9c;
    local_10 = 0;
    do {
      iVar5 = local_10;
      param_5 = (CPNWindow *)0x0;
      iVar9 = (**(code **)(*param_1 + 0xc))(param_1,local_10,&param_5);
      if (-1 < iVar9) {
        FUN_660145d0(&param_3);
        FUN_66014650(&param_3,(undefined4 *)param_5);
        bVar2 = FUN_66014680((int *)&param_3);
        if (CONCAT31(extraout_var_00,bVar2) != 0) {
          if (param_2 == 0) {
            uVar13 = 1;
joined_r0x66026b7a:
            if (param_4 != (int *)0x0) {
              uVar13 = 5;
            }
          }
          else if (param_2 == 1) {
            uVar13 = 2;
          }
          else {
            if (param_2 == 2) {
              uVar13 = 4;
              goto joined_r0x66026b7a;
            }
            uVar13 = 2;
          }
          uVar1 = *(undefined4 *)local_8;
          piVar10 = (int *)FUN_660145e0(&param_3);
          (**(code **)(*piVar10 + 0xc))(piVar10,uVar1,uVar13);
          iVar5 = local_10;
        }
        if (param_5 != (CPNWindow *)0x0) {
          (**(code **)(*(int *)param_5 + 8))(param_5);
          param_5 = (CPNWindow *)0x0;
        }
        thunk_FUN_66014790((int *)&param_3);
      }
      local_10 = iVar5 + 1;
      local_8 = local_8 + 0xc;
    } while (local_10 < 9);
  }
  else {
    (**(code **)(param_1[3] + 0x10))(param_1 + 3);
  }
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))(param_4);
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  piVar10 = &local_30;
  iVar5 = 9;
  do {
    piVar10 = piVar10 + -3;
    FUN_6605b770(piVar10);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  CPNPropertySheet::~CPNPropertySheet(local_2c4);
  FUN_6605b770((int *)local_2c);
  return 0;
}


