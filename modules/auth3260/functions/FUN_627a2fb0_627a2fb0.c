/* Module: auth3260.dll
   Function: FUN_627a2fb0
   Address: 627a2fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a2fb0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  piVar5 = param_2;
  iVar1 = param_1;
  if (param_2 == (int *)0x0) {
    return 0x80040009;
  }
  piVar3 = FUN_627a1880((void *)(param_1 + 0x2c),local_c);
  piVar4 = FUN_627a1860((void *)(iVar1 + 0x2c),local_8);
  bVar2 = FUN_627a1a20(piVar4,piVar3);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    bVar2 = FUN_627a5f40((int *)(iVar1 + 0x48));
    param_2 = (int *)((uint)param_2 & 0xffffff);
    if (CONCAT31(extraout_var_00,bVar2) == 0) goto LAB_627a300d;
  }
  param_2 = (int *)CONCAT13(1,param_2._0_3_);
LAB_627a300d:
  FUN_627a19d0();
  FUN_627a19d0();
  if (param_2._3_1_ != '\0') {
    (**(code **)(*piVar5 + 0xc))(piVar5,0x80040009,0);
    return 0x80040009;
  }
  FUN_627a19b0(&param_1);
  *(undefined4 *)(iVar1 + 0x14) = 0x800400ce;
  FUN_627a6050((void *)(iVar1 + 0x48),piVar5);
  piVar5 = operator_new(0x6c);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = (int)&PTR_LAB_627a7ae0;
    piVar5[1] = 0;
    FUN_627a52c0(piVar5 + 2,10);
    FUN_627a52c0(piVar5 + 9,10);
    FUN_627a52c0(piVar5 + 0x10,10);
    piVar5[0x17] = 0;
    piVar5[0x18] = 0;
    piVar5[0x19] = 0;
    piVar5[0x1a] = 0;
    *piVar5 = (int)&PTR_FUN_627a7aa0;
  }
  FUN_627a6050((void *)(iVar1 + 0x24),piVar5);
  FUN_627a6050((undefined4 *)(iVar1 + 0x20),param_3);
  puVar6 = FUN_627a1860((void *)(iVar1 + 0x2c),&param_2);
  FUN_627a19e0((undefined4 *)(iVar1 + 0x44),puVar6);
  FUN_627a19d0();
  puVar6 = (undefined4 *)FUN_627a19f0((undefined4 *)(iVar1 + 0x44));
  puVar6 = (undefined4 *)FUN_627a6140(puVar6);
  FUN_627a6020(&param_1,puVar6);
  if (iVar1 == 0x14) {
    iVar8 = 0;
  }
  else {
    iVar8 = iVar1 + 4;
  }
  puVar6 = (undefined4 *)FUN_627a6140(&param_1);
  param_2 = (int *)*puVar6;
  uVar7 = FUN_627a6140((undefined4 *)(iVar1 + 0x20));
  (*(code *)param_2[3])(puVar6,iVar8,uVar7);
  thunk_FUN_627a6080(&param_1);
  return 0;
}


