/* Module: rmbe3260.dll
   Function: FUN_66005f10
   Address: 66005f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66005f10(CPNRouter *param_1)

{
  byte bVar1;
  CPNRadioBtn *pCVar2;
  int iVar3;
  CPNCheckButton *pCVar4;
  int iVar5;
  CPNButton *pCVar6;
  int iVar7;
  int iVar8;
  CPNRouter *pCVar9;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  int local_18;
  int local_14;
  int local_10;
  undefined2 *local_c;
  int local_8;
  
  bVar1 = 1;
  local_24 = 0x533;
  local_22 = 0x531;
  local_20 = 0x532;
  local_1c = 0x41c;
  local_1a = 0x41d;
  pCVar9 = param_1 + 0x110;
  local_c = (undefined2 *)0x3;
  do {
    pCVar2 = operator_new(0xc0);
    if (pCVar2 == (CPNRadioBtn *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = CPNRadioBtn::CPNRadioBtn(pCVar2);
    }
    *(int *)pCVar9 = iVar3;
    bVar1 = bVar1 & iVar3 != 0;
    pCVar9 = pCVar9 + 4;
    local_c = (undefined2 *)((int)local_c + -1);
  } while (local_c != (undefined2 *)0x0);
  pCVar9 = param_1 + 0x11c;
  local_c = (undefined2 *)0x2;
  do {
    pCVar2 = operator_new(0xc0);
    if (pCVar2 == (CPNRadioBtn *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = CPNRadioBtn::CPNRadioBtn(pCVar2);
    }
    *(int *)pCVar9 = iVar3;
    bVar1 = bVar1 & iVar3 != 0;
    pCVar9 = pCVar9 + 4;
    local_c = (undefined2 *)((int)local_c + -1);
  } while (local_c != (undefined2 *)0x0);
  pCVar4 = operator_new(0xc0);
  if (pCVar4 == (CPNCheckButton *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = CPNCheckButton::CPNCheckButton(pCVar4);
  }
  *(int *)(param_1 + 0x124) = iVar3;
  pCVar4 = operator_new(0xc0);
  if (pCVar4 == (CPNCheckButton *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = CPNCheckButton::CPNCheckButton(pCVar4);
  }
  *(int *)(param_1 + 0x128) = iVar5;
  pCVar6 = operator_new(0xfb);
  if (pCVar6 == (CPNButton *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = CPNButton::CPNButton(pCVar6);
  }
  *(int *)(param_1 + 300) = iVar7;
  pCVar6 = operator_new(0xfb);
  if (pCVar6 == (CPNButton *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = CPNButton::CPNButton(pCVar6);
  }
  *(int *)(param_1 + 0x130) = iVar8;
  if (((bool)(bVar1 & iVar3 != 0 & iVar5 != 0 & iVar7 != 0 & iVar8 != 0)) &&
     (*(int *)(param_1 + 0x134) != 0)) {
    CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 300),param_1,0x80000000,1);
    CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x130),param_1,0x80000000,1);
    local_10 = 0;
    (**(code **)(**(int **)(param_1 + 0x134) + 0x24))(*(int **)(param_1 + 0x134),&local_10);
    local_c = &local_24;
    local_14 = 0;
    pCVar9 = param_1 + 0x110;
    local_18 = 3;
    do {
      (**(code **)(**(int **)pCVar9 + 0xb8))(*local_c,param_1);
      iVar3 = local_14;
      (**(code **)(**(int **)pCVar9 + 0x130))(local_14 == local_10);
      CPNRouter::AddObserver(*(CPNRouter **)pCVar9,param_1,0x80000000,1);
      local_14 = iVar3 + 1;
      pCVar9 = pCVar9 + 4;
      local_c = local_c + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    (**(code **)(**(int **)(param_1 + 0x134) + 0x1c))(*(int **)(param_1 + 0x134),&local_8);
    local_c = &local_1c;
    local_18 = 0;
    pCVar9 = param_1 + 0x11c;
    local_14 = 2;
    do {
      (**(code **)(**(int **)pCVar9 + 0xb8))(*local_c,param_1);
      iVar3 = local_18;
      (**(code **)(**(int **)pCVar9 + 0x130))(local_8 == local_18);
      CPNRouter::AddObserver(*(CPNRouter **)pCVar9,param_1,0x80000000,1);
      local_18 = iVar3 + 1;
      pCVar9 = pCVar9 + 4;
      local_c = local_c + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    (**(code **)(**(int **)(param_1 + 0x134) + 0xc))(*(int **)(param_1 + 0x134),&local_8);
    (**(code **)(**(int **)(param_1 + 0x124) + 0xb8))(0x53c,param_1);
    (**(code **)(**(int **)(param_1 + 0x124) + 0x130))(local_8);
    CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x124),param_1,0x80000000,1);
    (**(code **)(**(int **)(param_1 + 0x134) + 0x14))(*(int **)(param_1 + 0x134),&local_8);
    (**(code **)(**(int **)(param_1 + 0x128) + 0xb8))(0x53d,param_1);
    (**(code **)(**(int **)(param_1 + 0x128) + 0x130))(local_8);
    CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x128),param_1,0x80000000,1);
    (**(code **)(**(int **)(param_1 + 300) + 0xb8))(0x541,param_1);
    (**(code **)(**(int **)(param_1 + 0x130) + 0xb8))(0x542,param_1);
  }
  return;
}


