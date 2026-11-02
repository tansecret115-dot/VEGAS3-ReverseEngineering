/* Module: encn3260.dll
   Function: FUN_66485ef0
   Address: 66485ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66485ef0(int param_1,char *param_2)

{
  int *this;
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x40) != 0) && (*(int *)(*(int *)(param_1 + 0xb6) + -8) != 0)) {
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
    FUN_664bd620(this,s_PlayerStats_664e24d0,param_2,0);
    iVar1 = FUN_6648bad0(*(void **)(param_1 + 0x40),param_1 + -0x30);
    uVar2 = FUN_6648c6d0((void *)(param_1 + -0x30),this,iVar1);
    (**(code **)(**(int **)(param_1 + 0x170) + 8))();
    return uVar2;
  }
  return 0;
}


