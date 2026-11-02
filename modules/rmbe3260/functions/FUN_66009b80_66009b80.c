/* Module: rmbe3260.dll
   Function: FUN_66009b80
   Address: 66009b80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66009b80(int param_1)

{
  CPNCheckButton *this;
  undefined4 uVar1;
  CPNText *pCVar2;
  int iVar3;
  undefined4 *puVar4;
  char local_334;
  undefined4 local_333 [200];
  int local_10 [3];
  
  if (*(int *)(param_1 + 0x38) == 0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
    return 0x80004003;
  }
  this = operator_new(0xc0);
  if (this == (CPNCheckButton *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CPNCheckButton::CPNCheckButton(this);
  }
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNText *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CPNText::CPNText(pCVar2);
  }
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNText *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = CPNText::CPNText(pCVar2);
  }
  *(int *)(param_1 + 0x28) = iVar3;
  if (((*(int **)(param_1 + 0x20) != (int *)0x0) && (*(int *)(param_1 + 0x24) != 0)) && (iVar3 != 0)
     ) {
    iVar3 = param_1 + -0xd0;
    (**(code **)(**(int **)(param_1 + 0x20) + 0xb8))(0x454,iVar3);
    (**(code **)(**(int **)(param_1 + 0x24) + 0xb8))(0x463,iVar3);
    (**(code **)(**(int **)(param_1 + 0x28) + 0xb8))(0x464,iVar3);
    local_334 = DAT_66075004;
    puVar4 = local_333;
    for (iVar3 = 200; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    FUN_6605b650(local_10);
    FUN_6602e290(0x5dd003b,&local_334,800);
    FUN_6605bfd0(local_10,&local_334);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x11c))(local_10[0]);
    FUN_6602e290(0x5dd003c,&local_334,800);
    FUN_6605bfd0(local_10,&local_334);
    (**(code **)(**(int **)(param_1 + 0x28) + 0x11c))(local_10[0]);
    (**(code **)(**(int **)(param_1 + 0x20) + 0x130))(1);
    FUN_6605b770(local_10);
    return 0;
  }
  return 0x8007000e;
}


