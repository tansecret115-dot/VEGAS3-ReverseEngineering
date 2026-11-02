/* Module: encn3260.dll
   Function: FUN_66485c40
   Address: 66485c40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66485c40(int param_1)

{
  undefined4 *puVar1;
  int *this;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == -0xda) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xea);
  }
  if (iVar2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x170) + 4))();
    iVar2 = *(int *)(*(int *)(param_1 + 0xde) + 8);
    puVar1 = (undefined4 *)FUN_66483800(iVar2);
    while (puVar1 != (undefined4 *)0x0) {
      (**(code **)(*(int *)*puVar1 + 100))();
      puVar1 = (undefined4 *)FUN_66483820(iVar2);
    }
    this = operator_new(0x40);
    if (this == (int *)0x0) {
      this = (int *)0x0;
    }
    else {
      FUN_664bd560(this);
      FUN_664bb2c0(this + 0xd);
      *this = (int)&PTR_FUN_664de0a0;
    }
    FUN_664bb5e0(this + 0xd,*(char **)(param_1 + 0x6c));
    FUN_664bd620(this,s_Session_664e23cc,*(char **)(param_1 + 0xb6),0);
    iVar2 = FUN_6648bad0(*(void **)(param_1 + 0x40),param_1 + -0x30);
    uVar3 = FUN_6648c6d0((void *)(param_1 + -0x30),this,iVar2);
    (**(code **)(**(int **)(param_1 + 0x170) + 8))();
    return uVar3;
  }
  return 0;
}


