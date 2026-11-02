/* Module: encn3260.dll
   Function: FUN_664858b0
   Address: 664858b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664858b0(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_38 [10];
  int local_10 [3];
  
  (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  if (*(int *)(param_1 + 0xea) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0xde) + 8);
    piVar1 = (int *)FUN_66483800(iVar4);
    while (piVar1 != (int *)0x0) {
      FUN_6648e000(*piVar1);
      piVar1 = (int *)FUN_66483820(iVar4);
    }
  }
  piVar1 = operator_new(0x40);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_664bd560(piVar1);
    FUN_664bb2c0(piVar1 + 0xd);
    *piVar1 = (int)&PTR_FUN_664de058;
  }
  FUN_664bd1a0(local_38,param_2,param_3,2);
  FUN_664bb5e0(piVar1 + 0xd,*(char **)(param_1 + 0x6c));
  FUN_664bd620(piVar1,s_Session_664e23cc,*(char **)(param_1 + 0xb6),0);
  iVar4 = 0;
  puVar2 = FUN_664be390(local_38,local_10);
  FUN_664bd620(piVar1,s_Range_664e2470,(char *)*puVar2,iVar4);
  FUN_664bb3e0(local_10);
  iVar4 = FUN_6648bad0(*(void **)(param_1 + 0x40),param_1 + -0x30);
  uVar3 = FUN_6648c6d0((void *)(param_1 + -0x30),piVar1,iVar4);
  (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  FUN_664be1f0(local_38);
  return uVar3;
}


