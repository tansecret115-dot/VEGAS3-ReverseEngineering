/* Module: encn3260.dll
   Function: FUN_6648a600
   Address: 6648a600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6648a600(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *this;
  int iVar1;
  undefined4 uVar2;
  char local_44 [64];
  
  (**(code **)(**(int **)(param_1 + 0x15c) + 4))();
  this = operator_new(0x40);
  if (this == (int *)0x0) {
    this = (int *)0x0;
  }
  else {
    FUN_664bd560(this);
    FUN_664bb2c0(this + 0xd);
    *this = (int)&PTR_FUN_664de0d0;
  }
  FUN_664bb5e0(this + 0xd,*(char **)(param_1 + 0x58));
  sprintf(local_44,s_Bandwidth__d_BackOff__d_664e2800,param_2,param_3);
  FUN_664bd620(this,s_SetDeliveryBandwidth_664e27e8,local_44,0);
  FUN_664bd620(this,s_Session_664e23cc,*(char **)(param_1 + 0xa2),0);
  iVar1 = FUN_6648bad0(*(void **)(param_1 + 0x2c),param_1 + -0x44);
  uVar2 = FUN_6648c6d0((void *)(param_1 + -0x44),this,iVar1);
  (**(code **)(**(int **)(param_1 + 0x15c) + 8))();
  return uVar2;
}


