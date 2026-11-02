/* Module: rmbe3260.dll
   Function: FUN_66001b70
   Address: 66001b70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66001b70(CPNRouter *param_1)

{
  bool bVar1;
  CPNGroupBox *this;
  undefined4 uVar2;
  CPNRadioBtn *pCVar3;
  CPNRadioGroup *this_00;
  CPNText *pCVar4;
  int iVar5;
  CPNPopupList *this_01;
  undefined3 extraout_var;
  int *piVar6;
  int iVar7;
  CPNRouter *pCVar8;
  uint uVar9;
  undefined1 local_10c [256];
  int local_c;
  uint local_8;
  
  FUN_66001260(param_1);
  this = operator_new(0xc0);
  iVar7 = 0;
  if (this == (CPNGroupBox *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CPNGroupBox::CPNGroupBox(this);
  }
  *(undefined4 *)(param_1 + 0x412) = uVar2;
  pCVar3 = operator_new(0xc0);
  if (pCVar3 == (CPNRadioBtn *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CPNRadioBtn::CPNRadioBtn(pCVar3);
  }
  *(undefined4 *)(param_1 + 0x416) = uVar2;
  pCVar3 = operator_new(0xc0);
  if (pCVar3 == (CPNRadioBtn *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CPNRadioBtn::CPNRadioBtn(pCVar3);
  }
  *(undefined4 *)(param_1 + 0x41a) = uVar2;
  this_00 = operator_new(0x20);
  if (this_00 == (CPNRadioGroup *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CPNRadioGroup::CPNRadioGroup(this_00);
  }
  *(undefined4 *)(param_1 + 0x41e) = uVar2;
  pCVar4 = operator_new(0xc0);
  if (pCVar4 == (CPNText *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = CPNText::CPNText(pCVar4);
  }
  *(int *)(param_1 + 0x422) = iVar5;
  if ((((*(int *)(param_1 + 0x416) != 0) && (*(int *)(param_1 + 0x41a) != 0)) &&
      (*(int *)(param_1 + 0x41e) != 0)) &&
     ((*(int **)(param_1 + 0x412) != (int *)0x0 && (iVar5 != 0)))) {
    (**(code **)(**(int **)(param_1 + 0x412) + 0xb8))(0x453,param_1);
    (**(code **)(**(int **)(param_1 + 0x416) + 0xb8))(0x4fb,param_1);
    (**(code **)(**(int **)(param_1 + 0x41a) + 0xb8))(0x4fc,param_1);
    CPNRadioGroup::AddRadio(*(CPNRadioGroup **)(param_1 + 0x41e),*(CPNRadioBtn **)(param_1 + 0x416))
    ;
    CPNRadioGroup::AddRadio(*(CPNRadioGroup **)(param_1 + 0x41e),*(CPNRadioBtn **)(param_1 + 0x41a))
    ;
    (**(code **)(**(int **)(param_1 + 0x422) + 0xb8))(0x462,param_1);
    piVar6 = *(int **)(param_1 + 0x40e);
    if ((piVar6 == (int *)0x0) || (*(int *)(param_1 + 0x118) == 1)) {
      (**(code **)(**(int **)(param_1 + 0x412) + 0x98))(0);
      (**(code **)(**(int **)(param_1 + 0x416) + 0x98))(0);
      (**(code **)(**(int **)(param_1 + 0x41a) + 0x98))(0);
      (**(code **)(**(int **)(param_1 + 0x422) + 0x98))(0);
    }
    else {
      (**(code **)(*piVar6 + 0x40))(piVar6,&local_8);
      if (local_8 == 0) {
        (**(code **)(**(int **)(param_1 + 0x416) + 0x130))(1);
        *(undefined4 *)(param_1 + 0x118) = 0;
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x41a) + 0x130))(1);
        *(undefined4 *)(param_1 + 0x118) = 2;
      }
      CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x416),param_1,0x80000000,1);
      CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x41a),param_1,0x80000000,1);
    }
    pCVar8 = param_1 + 0x162;
    do {
      this_01 = operator_new(0xc4);
      if (this_01 == (CPNPopupList *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = CPNPopupList::CPNPopupList(this_01);
      }
      *(int *)(pCVar8 + -0x10) = iVar5;
      pCVar4 = operator_new(0xc0);
      if (pCVar4 == (CPNText *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = CPNText::CPNText(pCVar4);
      }
      *(int *)pCVar8 = iVar5;
      pCVar4 = operator_new(0xc0);
      if (pCVar4 == (CPNText *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = CPNText::CPNText(pCVar4);
      }
      *(int *)(pCVar8 + 0x10) = iVar5;
      if (*(int **)(pCVar8 + -0x10) == (int *)0x0) {
        return;
      }
      if (*(int *)pCVar8 == 0) {
        return;
      }
      if (iVar5 == 0) {
        return;
      }
      (**(code **)(**(int **)(pCVar8 + -0x10) + 0xb8))
                (*(undefined4 *)((int)&DAT_6606c058 + iVar7),param_1);
      (**(code **)(**(int **)pCVar8 + 0xb8))(*(undefined4 *)((int)&DAT_6606c068 + iVar7),param_1);
      (**(code **)(**(int **)(pCVar8 + 0x10) + 0xb8))
                (*(undefined4 *)((int)&DAT_6606c078 + iVar7),param_1);
      iVar7 = iVar7 + 4;
      pCVar8 = pCVar8 + 4;
    } while (iVar7 < 0x10);
    FUN_660145d0(&local_c);
    local_8 = 0;
    if (*(int *)(param_1 + 0x40a) != 0) {
      do {
        uVar9 = local_8;
        FUN_660146d0(&local_c,*(undefined4 **)(*(int *)(param_1 + 0x406) + local_8 * 4));
        bVar1 = FUN_66014680(&local_c);
        if (CONCAT31(extraout_var,bVar1) != 0) {
          piVar6 = (int *)FUN_660145e0(&local_c);
          (**(code **)(*piVar6 + 0x10))(piVar6,local_10c,0xff);
          pCVar8 = param_1 + 0x152;
          iVar7 = 4;
          do {
            (**(code **)(**(int **)pCVar8 + 0x148))(local_10c);
            pCVar8 = pCVar8 + 4;
            iVar7 = iVar7 + -1;
            uVar9 = local_8;
          } while (iVar7 != 0);
        }
        local_8 = uVar9 + 1;
      } while (local_8 < *(uint *)(param_1 + 0x40a));
    }
    pCVar8 = param_1 + 0x152;
    iVar7 = 4;
    do {
      CPNRouter::AddObserver(*(CPNRouter **)pCVar8,param_1,0x80000000,2);
      CPNRouter::AddObserver(*(CPNRouter **)pCVar8,param_1,0x80000000,4);
      pCVar8 = pCVar8 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    *(undefined4 *)(param_1 + 0x114) = 1;
    thunk_FUN_66014790(&local_c);
  }
  return;
}


