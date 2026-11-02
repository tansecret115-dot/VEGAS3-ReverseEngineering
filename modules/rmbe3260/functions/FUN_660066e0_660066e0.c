/* Module: rmbe3260.dll
   Function: FUN_660066e0
   Address: 660066e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660066e0(CPNRouter *param_1)

{
  CPNCheckButton *this;
  int iVar1;
  CPNButton *this_00;
  int iVar2;
  CPNEdit *pCVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_20 [3];
  undefined1 local_14 [4];
  int *local_10;
  int *local_c;
  int *local_8;
  
  this = operator_new(0xc0);
  if (this == (CPNCheckButton *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = CPNCheckButton::CPNCheckButton(this);
  }
  *(int *)(param_1 + 0x118) = iVar1;
  this_00 = operator_new(0xfb);
  if (this_00 == (CPNButton *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = CPNButton::CPNButton(this_00);
  }
  *(int *)(param_1 + 0x11c) = iVar2;
  pCVar3 = operator_new(0x113);
  if (pCVar3 == (CPNEdit *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = CPNEdit::CPNEdit(pCVar3);
  }
  *(int *)(param_1 + 0x110) = iVar4;
  pCVar3 = operator_new(0x113);
  if (pCVar3 == (CPNEdit *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = CPNEdit::CPNEdit(pCVar3);
  }
  *(int *)(param_1 + 0x114) = iVar5;
  if (((iVar1 != 0 && iVar2 != 0) && iVar4 != 0) && iVar5 != 0) {
    (**(code **)(**(int **)(param_1 + 0x118) + 0xb8))(0x471,param_1);
    (**(code **)(**(int **)(param_1 + 0x110) + 0xb8))(0x472,param_1);
    (**(code **)(**(int **)(param_1 + 0x114) + 0xb8))(0x473,param_1);
    (**(code **)(**(int **)(param_1 + 0x11c) + 0xb8))(0x477,param_1);
    if (*(int *)(param_1 + 0x120) != 0) {
      (**(code **)(**(int **)(param_1 + 0x118) + 0x98))(0);
      CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x118),param_1,0x80000000,1);
      if (*(short *)(param_1 + 0x124) == 0) {
        CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x114),param_1,0x80000000,1);
        CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x110),param_1,0x80000000,1);
      }
      CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x11c),param_1,0x80000000,1);
      CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x118),param_1,0x80000000,1);
      local_8 = (int *)0x0;
      local_c = (int *)0x0;
      local_10 = (int *)0x0;
      uVar6 = (**(code **)(**(int **)(param_1 + 0x120) + 0xc))
                        (*(int **)(param_1 + 0x120),0,&local_8);
      if ((uVar6 & 0x80000000) == 0) {
        uVar6 = (**(code **)(*local_8 + 0x10))(local_8,0xc,&local_c);
        if ((uVar6 & 0x80000000) == 0) {
          uVar6 = (**(code **)*local_c)(local_c,&DAT_66065c38,&local_10);
          if ((uVar6 & 0x80000000) == 0) {
            (**(code **)(**(int **)(param_1 + 0x118) + 0x130))(0);
            FUN_6605b650(local_20);
            (**(code **)(*local_10 + 0x34))(local_10,local_14);
            FUN_6605bfd0(local_20,&DAT_6606c2f8);
            (**(code **)(**(int **)(param_1 + 0x114) + 0x11c))(local_20[0]);
            (**(code **)(*local_10 + 0x3c))(local_10,local_14);
            FUN_6605bfd0(local_20,&DAT_6606c2f8);
            (**(code **)(**(int **)(param_1 + 0x110) + 0x11c))(local_20[0]);
            FUN_6605b770(local_20);
          }
        }
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 8))(local_c);
        local_c = (int *)0x0;
      }
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 8))(local_10);
      }
    }
  }
  return;
}


