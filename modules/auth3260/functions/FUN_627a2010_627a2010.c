/* Module: auth3260.dll
   Function: FUN_627a2010
   Address: 627a2010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a2010(int param_1,int *param_2)

{
  void *this;
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int local_8;
  int iVar6;
  
  iVar6 = param_1;
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(iVar6 + 0x18) = 0;
  }
  piVar1 = param_2;
  if (param_2 != (int *)0x0) {
    *(int **)(iVar6 + 0x18) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
  }
  piVar5 = *(int **)(iVar6 + 0x54);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
    *(undefined4 *)(iVar6 + 0x54) = 0;
  }
  (**(code **)**(undefined4 **)(iVar6 + 0x18))
            (*(undefined4 **)(iVar6 + 0x18),&DAT_627a7640,(undefined4 *)(iVar6 + 0x54));
  iVar3 = (**(code **)**(undefined4 **)(iVar6 + 0x18))
                    (*(undefined4 **)(iVar6 + 0x18),&DAT_627a78b0,(undefined4 *)(iVar6 + 0x5c));
  if (iVar3 != 0) {
    *(undefined4 *)(iVar6 + 0x5c) = 0;
  }
  FUN_627a2860(iVar6 + -0x10);
  FUN_627a19b0(&param_1);
  FUN_627a19b0(&local_8);
  this = (void *)(iVar6 + 0x34);
  puVar4 = FUN_627a1860(this,&param_2);
  FUN_627a19e0(&param_1,puVar4);
  FUN_627a19d0();
  piVar5 = FUN_627a1880(this,&param_2);
  bVar2 = FUN_627a1a40(&param_1,piVar5);
  FUN_627a19d0();
  iVar6 = CONCAT31(extraout_var,bVar2);
  while (iVar6 != 0) {
    puVar4 = (undefined4 *)FUN_627a19f0(&param_1);
    puVar4 = (undefined4 *)FUN_627a6140(puVar4);
    FUN_627a5f10(&local_8,puVar4);
    piVar5 = (int *)FUN_627a6140(&local_8);
    (**(code **)(*piVar5 + 0xc))(piVar5,piVar1);
    FUN_627a1a00(&param_1);
    piVar5 = FUN_627a1880(this,&param_2);
    bVar2 = FUN_627a1a40(&param_1,piVar5);
    FUN_627a19d0();
    iVar6 = CONCAT31(extraout_var_00,bVar2);
  }
  thunk_FUN_627a6080(&local_8);
  FUN_627a19d0();
  return 0;
}


