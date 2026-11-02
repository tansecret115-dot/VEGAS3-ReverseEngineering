/* Module: rmbe3260.dll
   Function: FUN_66003c90
   Address: 66003c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66003c90(CPNRouter *param_1)

{
  CPNCheckButton *this;
  undefined4 uVar1;
  CPNRadioBtn *pCVar2;
  CPNRadioGroup *this_00;
  int iVar3;
  int local_c;
  int local_8;
  
  this = operator_new(0xc0);
  if (this == (CPNCheckButton *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CPNCheckButton::CPNCheckButton(this);
  }
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNRadioBtn *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CPNRadioBtn::CPNRadioBtn(pCVar2);
  }
  *(undefined4 *)(param_1 + 0x108) = uVar1;
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNRadioBtn *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CPNRadioBtn::CPNRadioBtn(pCVar2);
  }
  *(undefined4 *)(param_1 + 0x10c) = uVar1;
  this_00 = operator_new(0x20);
  if (this_00 == (CPNRadioGroup *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = CPNRadioGroup::CPNRadioGroup(this_00);
  }
  *(int *)(param_1 + 0x110) = iVar3;
  if ((((*(int **)(param_1 + 0x104) != (int *)0x0) && (*(int *)(param_1 + 0x108) != 0)) &&
      (*(int *)(param_1 + 0x10c) != 0)) && ((iVar3 != 0 && (*(int *)(param_1 + 0x114) != 0)))) {
    (**(code **)(**(int **)(param_1 + 0x104) + 0xb8))(0x471,param_1);
    local_8 = 6;
    if (*(short *)(param_1 + 0x124) != 0) {
      (**(code **)(**(int **)(param_1 + 0x114) + 0x30))(*(int **)(param_1 + 0x114),&local_8);
    }
    (**(code **)(**(int **)(param_1 + 0x104) + 0x130))(local_8 == 5);
    (**(code **)(**(int **)(param_1 + 0x108) + 0xb8))(0x4fa,param_1);
    (**(code **)(**(int **)(param_1 + 0x10c) + 0xb8))(0x4fb,param_1);
    CPNRadioGroup::AddRadio(*(CPNRadioGroup **)(param_1 + 0x110),*(CPNRadioBtn **)(param_1 + 0x108))
    ;
    if (*(short *)(param_1 + 0x124) != 0) {
      CPNRadioGroup::AddRadio
                (*(CPNRadioGroup **)(param_1 + 0x110),*(CPNRadioBtn **)(param_1 + 0x10c));
    }
    local_c = 0;
    (**(code **)(**(int **)(param_1 + 0x114) + 0x38))(*(int **)(param_1 + 0x114),&local_c);
    if ((local_c == 0) && (*(short *)(param_1 + 0x124) != 0)) {
      (**(code **)(**(int **)(param_1 + 0x10c) + 0x130))(1);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x108) + 0x130))(1);
    }
    CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x104),param_1,0x80000000,1);
    CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x108),param_1,0x80000000,1);
    CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x10c),param_1,0x80000000,1);
  }
  return;
}


