/* Module: auth3260.dll
   Function: FUN_627a2300
   Address: 627a2300
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_627a2300(int param_1)

{
  void *this;
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined3 extraout_var;
  uint uVar5;
  undefined3 extraout_var_00;
  uint uVar6;
  int local_c;
  int local_8;
  int iVar4;
  
  FUN_627a19b0(&local_8);
  FUN_627a19b0(&local_c);
  uVar6 = 0;
  this = (void *)(param_1 + 0x30);
  puVar2 = FUN_627a1860(this,&param_1);
  FUN_627a19e0(&local_8,puVar2);
  FUN_627a19d0();
  piVar3 = FUN_627a1880(this,&param_1);
  bVar1 = FUN_627a1a40(&local_8,piVar3);
  FUN_627a19d0();
  iVar4 = CONCAT31(extraout_var,bVar1);
  while (iVar4 != 0) {
    puVar2 = (undefined4 *)FUN_627a19f0(&local_8);
    puVar2 = (undefined4 *)FUN_627a6140(puVar2);
    FUN_627a5fe0(&local_c,puVar2);
    piVar3 = (int *)FUN_627a6140(&local_c);
    uVar5 = (**(code **)(*piVar3 + 0x10))(piVar3);
    uVar6 = uVar6 | uVar5;
    FUN_627a1a00(&local_8);
    piVar3 = FUN_627a1880(this,&param_1);
    bVar1 = FUN_627a1a40(&local_8,piVar3);
    FUN_627a19d0();
    iVar4 = CONCAT31(extraout_var_00,bVar1);
  }
  thunk_FUN_627a6080(&local_c);
  FUN_627a19d0();
  return uVar6;
}


