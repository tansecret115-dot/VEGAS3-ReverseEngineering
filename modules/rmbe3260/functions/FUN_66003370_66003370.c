/* Module: rmbe3260.dll
   Function: FUN_66003370
   Address: 66003370
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66003370(CPNRouter *param_1)

{
  CPNEdit *this;
  undefined4 uVar1;
  CPNText *pCVar2;
  int iVar3;
  undefined1 local_804 [2048];
  
  FUN_66001260(param_1);
  this = operator_new(0x113);
  if (this == (CPNEdit *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CPNEdit::CPNEdit(this);
  }
  *(undefined4 *)(param_1 + 0x152) = uVar1;
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNText *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CPNText::CPNText(pCVar2);
  }
  *(undefined4 *)(param_1 + 0x156) = uVar1;
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNText *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CPNText::CPNText(pCVar2);
  }
  *(undefined4 *)(param_1 + 0x15a) = uVar1;
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNText *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = CPNText::CPNText(pCVar2);
  }
  *(int *)(param_1 + 0x15e) = iVar3;
  if ((((*(int **)(param_1 + 0x152) != (int *)0x0) && (*(int *)(param_1 + 0x156) != 0)) &&
      (*(int *)(param_1 + 0x15a) != 0)) && (iVar3 != 0)) {
    (**(code **)(**(int **)(param_1 + 0x152) + 0xb8))(0x412,param_1);
    (**(code **)(**(int **)(param_1 + 0x152) + 0x13c))(4);
    (**(code **)(**(int **)(param_1 + 0x156) + 0xb8))(0x416,param_1);
    (**(code **)(**(int **)(param_1 + 0x15a) + 0xb8))(0x41c,param_1);
    (**(code **)(**(int **)(param_1 + 0x15e) + 0xb8))(0x415,param_1);
    FUN_6602e290(0x5dd0006,local_804,0x800);
    (**(code **)(**(int **)(param_1 + 0x156) + 0x11c))(local_804);
    FUN_6602e290(0x5dd0011,local_804,0x800);
    (**(code **)(**(int **)(param_1 + 0x15e) + 0x11c))(local_804);
    FUN_6602e290(0x5dd0012,local_804,0x800);
    (**(code **)(**(int **)(param_1 + 0x15a) + 0x11c))(local_804);
    CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x152),param_1,0x80000000,1);
    *(undefined4 *)(param_1 + 0x114) = 1;
  }
  return;
}


