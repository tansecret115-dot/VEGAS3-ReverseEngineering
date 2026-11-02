/* Module: rmbe3260.dll
   Function: FUN_66009fe0
   Address: 66009fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66009fe0(int param_1)

{
  CPNRouter *pCVar1;
  CPNText *pCVar2;
  undefined4 uVar3;
  CPNButton *this;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char local_334;
  undefined4 local_333 [200];
  int local_10 [3];
  
  if (*(int *)(param_1 + 0x48) == 0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    return 0x80004003;
  }
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNText *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CPNText::CPNText(pCVar2);
  }
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNText *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CPNText::CPNText(pCVar2);
  }
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNText *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CPNText::CPNText(pCVar2);
  }
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  this = operator_new(0xfb);
  if (this == (CPNButton *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CPNButton::CPNButton(this);
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNText *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CPNText::CPNText(pCVar2);
  }
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNText *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = CPNText::CPNText(pCVar2);
  }
  *(int *)(param_1 + 0x50) = iVar4;
  if ((((*(int **)(param_1 + 0x20) != (int *)0x0) && (*(int *)(param_1 + 0x2c) != 0)) &&
      (*(int *)(param_1 + 0x4c) != 0)) &&
     (((iVar4 != 0 && (*(int *)(param_1 + 0x28) != 0)) && (*(int *)(param_1 + 0x24) != 0)))) {
    pCVar1 = (CPNRouter *)(param_1 + -0xd0);
    (**(code **)(**(int **)(param_1 + 0x20) + 0xb8))(0x456,pCVar1);
    (**(code **)(**(int **)(param_1 + 0x24) + 0xb8))(0x45f,pCVar1);
    (**(code **)(**(int **)(param_1 + 0x28) + 0xb8))(0x462,pCVar1);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0xb8))(0x457,pCVar1);
    (**(code **)(**(int **)(param_1 + 0x4c) + 0xb8))(0x458,pCVar1);
    (**(code **)(**(int **)(param_1 + 0x50) + 0xb8))(0x459,pCVar1);
    local_334 = DAT_66075004;
    puVar6 = local_333;
    for (iVar4 = 200; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    FUN_6605b650(local_10);
    FUN_6602e290(0x5dd003d,&local_334,800);
    FUN_6605bfd0(local_10,&local_334);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x11c))(local_10[0]);
    FUN_6602e290(0x5dd003e,&local_334,800);
    FUN_6605bfd0(local_10,&local_334);
    (**(code **)(**(int **)(param_1 + 0x28) + 0x11c))(local_10[0]);
    CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x2c),pCVar1,0x80000000,1);
    uVar3 = 0xff;
    iVar4 = **(int **)(param_1 + 0x48);
    iVar5 = FUN_6605bc10((void *)(param_1 + 0x3c),0xff);
    (**(code **)(iVar4 + 0x3c))(*(undefined4 *)(param_1 + 0x48),iVar5,uVar3);
    FUN_6605bc90((void *)(param_1 + 0x3c),-1);
    FUN_6600a500((int)pCVar1);
    FUN_6605b770(local_10);
    return 0;
  }
  return 0x8007000e;
}


