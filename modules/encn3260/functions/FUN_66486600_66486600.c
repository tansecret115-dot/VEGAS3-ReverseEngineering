/* Module: encn3260.dll
   Function: FUN_66486600
   Address: 66486600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66486600(int param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  int *this;
  int iVar1;
  undefined4 uVar2;
  
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
  FUN_664bd620(this,param_2,param_3,0);
  iVar1 = FUN_6648bad0(*(void **)(param_1 + 0x40),param_1 + -0x30);
  uVar2 = FUN_6648c650((void *)(param_1 + -0x30),this,param_5,param_4,iVar1);
  (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  return uVar2;
}


