/* Module: encn3260.dll
   Function: FUN_66487a90
   Address: 66487a90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66487a90(int param_1,int *param_2)

{
  char cVar1;
  int *this;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  
  (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  this = operator_new(0x40);
  if (this == (int *)0x0) {
    this = (int *)0x0;
  }
  else {
    FUN_664bd560(this);
    FUN_664bb2c0(this + 0xd);
    *this = (int)&PTR_FUN_664de0d0;
  }
  piVar2 = (int *)(**(code **)(*param_2 + 0x10))(param_2);
  FUN_664bb5e0(this + 0xd,*(char **)(param_1 + 0x6c));
  iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
  pcVar4 = operator_new(iVar3 * 2 + 4);
  iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,pcVar4);
  piVar9 = piVar2;
  iVar5 = (**(code **)(*piVar2 + 0x1c))();
  FUN_664be5b0(iVar5,(int)piVar9,iVar3);
  uVar8 = 0xffffffff;
  pcVar6 = pcVar4;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  pcVar6 = operator_new(~uVar8 + 0xb);
  sprintf(pcVar6,&DAT_664e25bc,pcVar4);
  FUN_664bd620(this,s_BackChannel_664e25b0,pcVar6,0);
  uVar8 = (**(code **)(*param_2 + 0x18))(param_2);
  sprintf(pcVar6,&DAT_664e2400,uVar8 & 0xffff);
  FUN_664bd620(this,s_StreamNumber_664e2140,pcVar6,0);
  FUN_664bd620(this,s_Session_664e23cc,*(char **)(param_1 + 0xb6),0);
  operator_delete(pcVar6);
  iVar3 = FUN_6648bad0(*(void **)(param_1 + 0x40),param_1 + -0x30);
  (**(code **)(*piVar2 + 8))(piVar2);
  operator_delete(pcVar4);
  uVar7 = FUN_6648c6d0((void *)(param_1 + -0x30),this,iVar3);
  (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  return uVar7;
}


