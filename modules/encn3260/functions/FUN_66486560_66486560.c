/* Module: encn3260.dll
   Function: FUN_66486560
   Address: 66486560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66486560(int param_1,undefined4 param_2,char *param_3,int *param_4)

{
  int *this;
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
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
  FUN_664bb5e0(this + 0xd,*(char **)(param_1 + 0x6c));
  FUN_664bd620(this,s_Session_664e23cc,*(char **)(param_1 + 0xb6),0);
  pcVar1 = (char *)(**(code **)(*param_4 + 0x1c))(param_4,0);
  FUN_664bd620(this,param_3,pcVar1,(int)param_4);
  iVar2 = FUN_6648bad0(*(void **)(param_1 + 0x40),param_1 + -0x30);
  uVar3 = FUN_6648c6d0((void *)(param_1 + -0x30),this,iVar2);
  (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  return uVar3;
}


