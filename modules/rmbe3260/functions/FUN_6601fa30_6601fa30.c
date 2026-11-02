/* Module: rmbe3260.dll
   Function: FUN_6601fa30
   Address: 6601fa30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_6601fa30(int param_1,undefined4 *param_2,CPNPropertyPage *param_3,CPNPropertyPage *param_4,
            CPNPropertyPage *param_5,int *param_6,undefined4 param_7,CPNPropertyPage *param_8,
            CPNPropertyPage *param_9,CPNPropertyPage *param_10)

{
  undefined4 *puVar1;
  bool bVar2;
  ulong uVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  CPNWindow *pCVar8;
  char local_340 [256];
  CPNPropertySheet local_240 [296];
  int local_118 [64];
  char *local_18 [3];
  int *local_c;
  int *local_8;
  
  if ((param_3 == (CPNPropertyPage *)0x0) || (param_4 == (CPNPropertyPage *)0x0)) {
    return 0x80004003;
  }
  FUN_6605b650(local_18);
  if (param_10 != (CPNPropertyPage *)0x0) {
    FUN_6605b970(local_18,(char *)param_10);
  }
  uVar3 = 1;
  if (*(int *)(local_18[0] + -8) != 0) {
    uVar3 = 9;
  }
  CPNPropertySheet::CPNPropertySheet(local_240,uVar3);
  uVar7 = 0x141;
  if (param_5 != (CPNPropertyPage *)0x0) {
    if ((param_6 == (int *)0x0) && (param_8 == (CPNPropertyPage *)0x0)) {
      uVar7 = 0xbc;
      goto LAB_6601fac1;
    }
    if (((param_5 != (CPNPropertyPage *)0x0) && (param_6 != (int *)0x0)) &&
       (((uint)param_9 & 2) == 0)) goto LAB_6601fac1;
  }
  uVar7 = 0x142;
LAB_6601fac1:
  FUN_6602e290(0x5dd0021,local_118,0xff);
  if (((uint)param_9 & 2) == 0) {
    pvVar4 = operator_new(0x15e);
    piVar6 = (int *)0x0;
    if (pvVar4 == (void *)0x0) {
      param_8 = (CPNPropertyPage *)0x0;
    }
    else {
      if (param_1 != 0x30) {
        piVar6 = (int *)(param_1 + -0x20);
      }
      param_8 = FUN_66004080(pvVar4,uVar7 | 0x5dd0000,(char *)local_118,(int *)param_3,param_5,
                             piVar6,param_6,(int *)param_8,local_18[0],
                             *(undefined2 *)(param_1 + 400));
    }
  }
  else {
    pvVar4 = operator_new(0x15e);
    if (pvVar4 == (void *)0x0) {
      param_8 = (CPNPropertyPage *)0x0;
    }
    else {
      if (param_1 == 0x30) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)(param_1 + -0x20);
      }
      param_8 = FUN_66004080(pvVar4,uVar7 | 0x5dd0000,(char *)local_118,(int *)param_3,0,piVar6,0,
                             (int *)param_8,local_18[0],*(undefined2 *)(param_1 + 400));
    }
  }
  CPNPropertySheet::AddPage(local_240,param_8);
  FUN_6602e290(0x5dd0020,local_118,0xff);
  pvVar4 = operator_new(0x126);
  if (pvVar4 == (void *)0x0) {
    param_4 = (CPNPropertyPage *)0x0;
  }
  else {
    param_4 = FUN_66003b70(pvVar4,0x5dd00bd,(char *)local_118,(int *)param_4,local_18[0],
                           *(undefined2 *)(param_1 + 400));
  }
  CPNPropertySheet::AddPage(local_240,param_4);
  local_8 = (int *)0x0;
  iVar5 = (*(code *)**(undefined4 **)param_3)(param_3,&DAT_66065a08,&local_8);
  param_3 = (CPNPropertyPage *)0x0;
  if (-1 < iVar5) {
    if (((uint)param_9 & 1) != 0) {
      FUN_6602e290(0x5dd0050,local_118,0xff);
      pvVar4 = operator_new(0x122);
      if (pvVar4 == (void *)0x0) {
        param_3 = (CPNPropertyPage *)0x0;
      }
      else {
        param_3 = FUN_66004fd0(pvVar4,0x5dd0143,(char *)local_118,local_8,local_18[0],
                               *(undefined2 *)(param_1 + 400));
      }
      CPNPropertySheet::AddPage(local_240,param_3);
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
  }
  local_c = (int *)0x0;
  (**(code **)**(undefined4 **)(param_1 + 0x58))
            (*(undefined4 **)(param_1 + 0x58),&DAT_660659d8,&local_c);
  FUN_6602e290(0x5dd0049,local_118,0xff);
  pvVar4 = operator_new(0x13a);
  if (pvVar4 == (void *)0x0) {
    param_5 = (CPNPropertyPage *)0x0;
  }
  else {
    param_5 = FUN_66005e00(pvVar4,0x5dd00f2,(char *)local_118,local_c,local_18[0],
                           *(undefined2 *)(param_1 + 400));
  }
  CPNPropertySheet::AddPage(local_240,param_5);
  FUN_6602e290(0x5dd0042,local_118,0xff);
  pvVar4 = operator_new(0x13e);
  if (pvVar4 == (void *)0x0) {
    param_9 = (CPNPropertyPage *)0x0;
  }
  else {
    if (param_1 == 0x30) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(param_1 + -0x20);
    }
    param_9 = FUN_66005350(pvVar4,0x5dd0145,local_118,piVar6,param_7,0,local_18[0],
                           *(undefined2 *)(param_1 + 400));
  }
  CPNPropertySheet::AddPage(local_240,param_9);
  FUN_6602e290(0x5dd0067,local_118,0xff);
  pvVar4 = operator_new(0x126);
  if (pvVar4 == (void *)0x0) {
    param_10 = (CPNPropertyPage *)0x0;
  }
  else {
    param_10 = FUN_660065f0(pvVar4,0x5dd0144,(char *)local_118,*(int **)(param_1 + 0x1aa),
                            local_18[0],*(undefined2 *)(param_1 + 400));
  }
  CPNPropertySheet::AddPage(local_240,param_10);
  FUN_6602e290(0x5dd001c,local_340,0xff);
  bVar2 = false;
  pCVar8 = (CPNWindow *)0x0;
  if ((param_2 != (undefined4 *)0x0) &&
     (pCVar8 = CPNWindow::GetPNWindow((void *)*param_2), pCVar8 == (CPNWindow *)0x0)) {
    bVar2 = true;
    pCVar8 = operator_new(0xb8);
    if (pCVar8 == (CPNWindow *)0x0) {
      pCVar8 = (CPNWindow *)0x0;
    }
    else {
      pCVar8 = (CPNWindow *)CPNWindow::CPNWindow(pCVar8);
    }
    (**(code **)(*(int *)pCVar8 + 0xc4))(*param_2);
  }
  uVar3 = CPNPropertySheet::DoModal(local_240,pCVar8,local_340,0);
  if (uVar3 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x1aa);
    param_6 = (int *)0x0;
    if (((puVar1 != (undefined4 *)0x0) &&
        (iVar5 = (**(code **)*puVar1)(puVar1,&DAT_66065b78,&param_6), -1 < iVar5)) &&
       ((**(code **)(*param_6 + 0x10))(param_6), param_6 != (int *)0x0)) {
      (**(code **)(*param_6 + 8))(param_6);
    }
  }
  if (bVar2) {
    CPNWindow::SetParent((CPNWindow *)local_240,(CPNWindow *)0x0);
    (**(code **)(*(int *)pCVar8 + 200))();
    if (pCVar8 != (CPNWindow *)0x0) {
      (*(code *)**(undefined4 **)pCVar8)(1);
    }
  }
  if (param_8 != (CPNPropertyPage *)0x0) {
    (*(code *)**(undefined4 **)param_8)(1);
  }
  if (param_4 != (CPNPropertyPage *)0x0) {
    (*(code *)**(undefined4 **)param_4)(1);
  }
  if (param_3 != (CPNPropertyPage *)0x0) {
    (*(code *)**(undefined4 **)param_3)(1);
  }
  if (param_9 != (CPNPropertyPage *)0x0) {
    (*(code *)**(undefined4 **)param_9)(1);
  }
  if (param_10 != (CPNPropertyPage *)0x0) {
    (*(code *)**(undefined4 **)param_10)(1);
  }
  if (param_5 != (CPNPropertyPage *)0x0) {
    (*(code *)**(undefined4 **)param_5)(1);
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  CPNPropertySheet::~CPNPropertySheet(local_240);
  FUN_6605b770((int *)local_18);
  return 0;
}


