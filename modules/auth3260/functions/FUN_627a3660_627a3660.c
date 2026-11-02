/* Module: auth3260.dll
   Function: FUN_627a3660
   Address: 627a3660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a3660(int param_1,int *param_2,undefined4 param_3)

{
  void *this;
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined3 extraout_var;
  undefined4 *puVar4;
  undefined3 extraout_var_00;
  int *piVar5;
  int iVar6;
  undefined1 local_8 [4];
  
  iVar6 = param_1;
  if (param_2 == (int *)0x0) {
    return 0x80040009;
  }
  piVar5 = (int *)(param_1 + 0x40);
  FUN_627a6050(piVar5,param_2);
  this = (void *)(iVar6 + 0x20);
  piVar2 = FUN_627a1880(this,local_8);
  piVar3 = FUN_627a1860(this,&param_1);
  bVar1 = FUN_627a1a20(piVar3,piVar2);
  FUN_627a19d0();
  FUN_627a19d0();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    piVar2 = (int *)FUN_627a6140(piVar5);
    (**(code **)(*piVar2 + 0x10))(piVar2,0x80040009,param_3);
    FUN_627a6080(piVar5);
    return 0x80040009;
  }
  FUN_627a19b0(&param_2);
  *(undefined4 *)(iVar6 + 8) = 0x80004005;
  puVar4 = FUN_627a1860(this,&param_1);
  FUN_627a19e0((undefined4 *)(iVar6 + 0x38),puVar4);
  FUN_627a19d0();
  puVar4 = (undefined4 *)FUN_627a19f0((undefined4 *)(iVar6 + 0x38));
  puVar4 = (undefined4 *)FUN_627a6140(puVar4);
  FUN_627a60d0(&param_2,puVar4);
  bVar1 = FUN_627a6130((int *)&param_2);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    piVar2 = (int *)FUN_627a6140(piVar5);
    (**(code **)(*piVar2 + 0x10))(piVar2,0x80004002,param_3);
    FUN_627a6080(piVar5);
    thunk_FUN_627a6080((int *)&param_2);
    return 0x80004002;
  }
  if (iVar6 == 0x20) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 + 4;
  }
  piVar5 = (int *)FUN_627a6140(&param_2);
  (**(code **)(*piVar5 + 0x10))(piVar5,iVar6,param_3);
  thunk_FUN_627a6080((int *)&param_2);
  return 0;
}


