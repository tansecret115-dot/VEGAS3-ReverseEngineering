/* Module: rmbe3260.dll
   Function: FUN_66004260
   Address: 66004260
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66004260(CPNRouter *param_1)

{
  uint uVar1;
  CPNCheckButton *pCVar2;
  undefined4 uVar3;
  CPNPopupList *this;
  CPNButton *this_00;
  CPNText *pCVar4;
  CPNGroupBox *this_01;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined1 local_12c;
  undefined4 local_12b;
  int local_2c [3];
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNCheckButton *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CPNCheckButton::CPNCheckButton(pCVar2);
  }
  *(undefined4 *)(param_1 + 0x104) = uVar3;
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNCheckButton *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CPNCheckButton::CPNCheckButton(pCVar2);
  }
  *(undefined4 *)(param_1 + 0x108) = uVar3;
  if (*(int *)(param_1 + 0x138) != 0) {
    pCVar2 = operator_new(0xc0);
    if (pCVar2 == (CPNCheckButton *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = CPNCheckButton::CPNCheckButton(pCVar2);
    }
    *(undefined4 *)(param_1 + 0x10c) = uVar3;
    this = operator_new(0xc4);
    if (this == (CPNPopupList *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = CPNPopupList::CPNPopupList(this);
    }
    *(undefined4 *)(param_1 + 0x110) = uVar3;
  }
  if (*(int *)(param_1 + 0x13c) != 0) {
    pCVar2 = operator_new(0xc0);
    if (pCVar2 == (CPNCheckButton *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = CPNCheckButton::CPNCheckButton(pCVar2);
    }
    *(undefined4 *)(param_1 + 0x114) = uVar3;
  }
  if (*(int *)(param_1 + 0x140) != 0) {
    pCVar2 = operator_new(0xc0);
    if (pCVar2 == (CPNCheckButton *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = CPNCheckButton::CPNCheckButton(pCVar2);
    }
    *(undefined4 *)(param_1 + 0x118) = uVar3;
  }
  this_00 = operator_new(0xfb);
  if (this_00 == (CPNButton *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CPNButton::CPNButton(this_00);
  }
  *(undefined4 *)(param_1 + 0x120) = uVar3;
  pCVar4 = operator_new(0xc0);
  if (pCVar4 == (CPNText *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CPNText::CPNText(pCVar4);
  }
  *(undefined4 *)(param_1 + 0x11c) = uVar3;
  pCVar4 = operator_new(0xc0);
  if (pCVar4 == (CPNText *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CPNText::CPNText(pCVar4);
  }
  *(undefined4 *)(param_1 + 0x124) = uVar3;
  pCVar4 = operator_new(0xc0);
  if (pCVar4 == (CPNText *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CPNText::CPNText(pCVar4);
  }
  *(undefined4 *)(param_1 + 0x128) = uVar3;
  this_01 = operator_new(0xc0);
  if (this_01 == (CPNGroupBox *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = CPNGroupBox::CPNGroupBox(this_01);
  }
  *(int *)(param_1 + 300) = iVar5;
  if (((((*(int **)(param_1 + 0x104) != (int *)0x0) && (*(int *)(param_1 + 0x108) != 0)) &&
       (*(int *)(param_1 + 0x130) != 0)) &&
      ((*(int *)(param_1 + 0x120) != 0 && (*(int *)(param_1 + 0x11c) != 0)))) &&
     ((*(int *)(param_1 + 0x124) != 0 && ((*(int *)(param_1 + 0x128) != 0 && (iVar5 != 0)))))) {
    (**(code **)(**(int **)(param_1 + 0x104) + 0xb8))(0x4bc,param_1);
    (**(code **)(**(int **)(param_1 + 0x108) + 0xb8))(0x454,param_1);
    (**(code **)(**(int **)(param_1 + 0x120) + 0xb8))(0x457,param_1);
    (**(code **)(**(int **)(param_1 + 0x11c) + 0xb8))(0x456,param_1);
    (**(code **)(**(int **)(param_1 + 0x124) + 0xb8))(0x458,param_1);
    (**(code **)(**(int **)(param_1 + 0x128) + 0xb8))(0x459,param_1);
    (**(code **)(**(int **)(param_1 + 300) + 0xb8))(0x455,param_1);
    if (*(int *)(param_1 + 0x13c) != 0) {
      (**(code **)(**(int **)(param_1 + 0x114) + 0xb8))(0x500,param_1);
    }
    if (*(int *)(param_1 + 0x140) != 0) {
      (**(code **)(**(int **)(param_1 + 0x118) + 0xb8))(0x501,param_1);
    }
    if (*(int *)(param_1 + 0x138) != 0) {
      (**(code **)(**(int **)(param_1 + 0x10c) + 0xb8))(0x468,param_1);
      (**(code **)(**(int **)(param_1 + 0x110) + 0xb8))(0x466,param_1);
    }
    piVar8 = *(int **)(param_1 + 0x130);
    local_1c = 0;
    local_20 = 0;
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0x54))(piVar8,&local_1c);
      (**(code **)(**(int **)(param_1 + 0x130) + 0x4c))(*(int **)(param_1 + 0x130),&local_20);
    }
    (**(code **)(**(int **)(param_1 + 0x104) + 0x130))(local_1c);
    (**(code **)(**(int **)(param_1 + 0x108) + 0x130))(local_20);
    if (*(int **)(param_1 + 0x13c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x114) + 0x130))(**(int **)(param_1 + 0x13c) == 0);
    }
    if (*(undefined4 **)(param_1 + 0x140) != (undefined4 *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x118) + 0x130))(**(undefined4 **)(param_1 + 0x140));
    }
    if (*(int **)(param_1 + 0x134) != (int *)0x0) {
      iVar5 = **(int **)(param_1 + 0x134);
      uVar3 = 0xff;
      iVar6 = FUN_6605bc10(param_1 + 0x144,0xff);
      (**(code **)(iVar5 + 0x3c))(*(undefined4 *)(param_1 + 0x134),iVar6,uVar3);
      FUN_6605bc90(param_1 + 0x144,-1);
    }
    piVar8 = *(int **)(param_1 + 0x138);
    if (piVar8 != (int *)0x0) {
      local_10 = 1;
      (**(code **)(*piVar8 + 0x10))(piVar8,s_Indexable_6606c20c,&local_10);
      (**(code **)(**(int **)(param_1 + 0x10c) + 0x130))(local_10 == 0);
      local_14 = 0;
      local_8 = (int *)0x0;
      iVar5 = (**(code **)(**(int **)(param_1 + 0x138) + 0x30))
                        (*(int **)(param_1 + 0x138),s_Content_Rating_6606c1fc,&local_8);
      if (-1 < iVar5) {
        pcVar7 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
        FUN_6605b7e0(local_2c,pcVar7);
        FUN_6604eaa0(local_2c,&local_14);
        FUN_6605b770(local_2c);
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
          local_8 = (int *)0x0;
        }
      }
      local_18 = 0;
      local_c = 0;
      piVar8 = &DAT_6606c1d4;
      do {
        local_12c = DAT_66075004;
        puVar9 = &local_12b;
        for (iVar5 = 0x3f; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        uVar1 = piVar8[-1];
        *(undefined2 *)puVar9 = 0;
        *(undefined1 *)((int)puVar9 + 2) = 0;
        FUN_6602e290(uVar1 | 0x5dd0000,&local_12c,0xff);
        (**(code **)(**(int **)(param_1 + 0x110) + 0x148))(&local_12c);
        if (local_14 == *piVar8) {
          local_18 = local_c;
        }
        piVar8 = piVar8 + 2;
        local_c = local_c + 1;
      } while ((int)piVar8 < 0x6606c1f4);
      (**(code **)(**(int **)(param_1 + 0x110) + 0x13c))(local_18);
    }
    CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x120),param_1,0x80000000,1);
    FUN_660047c0((int)param_1);
  }
  return;
}


