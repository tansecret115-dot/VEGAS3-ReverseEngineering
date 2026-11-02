/* Module: auth3260.dll
   Function: FUN_627a37b0
   Address: 627a37b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a37b0(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  void *this;
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  undefined3 extraout_var;
  undefined4 *puVar6;
  undefined3 extraout_var_00;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 local_8 [4];
  
  iVar2 = param_1;
  if (param_2 == (int *)0x0) {
    return 0x80040009;
  }
  piVar7 = (int *)(param_1 + 0x40);
  FUN_627a6050(piVar7,param_2);
  this = (void *)(iVar2 + 0x20);
  piVar4 = FUN_627a1880(this,local_8);
  piVar5 = FUN_627a1860(this,&param_1);
  bVar3 = FUN_627a1a20(piVar5,piVar4);
  FUN_627a19d0();
  FUN_627a19d0();
  if (CONCAT31(extraout_var,bVar3) != 0) {
    piVar4 = (int *)FUN_627a6140(piVar7);
    (**(code **)(*piVar4 + 0x14))(piVar4,0x80040009,param_3);
    FUN_627a6080(piVar7);
    return 0x80040009;
  }
  FUN_627a19b0(&param_2);
  *(undefined4 *)(iVar2 + 8) = 0x80004005;
  FUN_627a6050((undefined4 *)(iVar2 + 0x1c),param_4);
  puVar6 = FUN_627a1860(this,&param_1);
  FUN_627a19e0((undefined4 *)(iVar2 + 0x38),puVar6);
  FUN_627a19d0();
  puVar6 = (undefined4 *)FUN_627a19f0((undefined4 *)(iVar2 + 0x38));
  puVar6 = (undefined4 *)FUN_627a6140(puVar6);
  FUN_627a60d0(&param_2,puVar6);
  bVar3 = FUN_627a6130((int *)&param_2);
  if (CONCAT31(extraout_var_00,bVar3) != 0) {
    piVar4 = (int *)FUN_627a6140(piVar7);
    (**(code **)(*piVar4 + 0x14))(piVar4,0x80004002,param_3);
    FUN_627a6080(piVar7);
    thunk_FUN_627a6080((int *)&param_2);
    return 0x80004002;
  }
  if (iVar2 == 0x20) {
    iVar9 = 0;
  }
  else {
    iVar9 = iVar2 + 4;
  }
  piVar7 = (int *)FUN_627a6140(&param_2);
  iVar1 = *piVar7;
  uVar8 = FUN_627a6140((undefined4 *)(iVar2 + 0x1c));
  (**(code **)(iVar1 + 0x14))(piVar7,iVar9,param_3,uVar8);
  thunk_FUN_627a6080((int *)&param_2);
  return 0;
}


