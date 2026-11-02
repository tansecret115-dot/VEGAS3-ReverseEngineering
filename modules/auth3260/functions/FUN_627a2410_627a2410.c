/* Module: auth3260.dll
   Function: FUN_627a2410
   Address: 627a2410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a2410(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined3 extraout_var;
  int *piVar5;
  int *piVar6;
  undefined3 extraout_var_00;
  undefined4 *puVar7;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_627a19b0(&local_c);
  FUN_627a19b0(&local_10);
  FUN_627a19b0(&local_8);
  piVar5 = param_3;
  piVar1 = param_1;
  if (param_1[0x12] < 0) {
    if (param_2 != (int *)0x80004005) {
      param_1[0x12] = (int)param_2;
    }
    if (param_1[0x12] < 0) goto LAB_627a248f;
  }
  if (param_3 != (int *)0x0) {
    iVar4 = *param_3;
    uVar3 = FUN_627a17b0(&local_8);
    iVar4 = (**(code **)(iVar4 + 0x18))(piVar5,uVar3);
    if (-1 < iVar4) {
      bVar2 = FUN_627a5f40(&local_8);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        piVar5 = (int *)FUN_627a6140(&local_8);
        piVar6 = (int *)FUN_627a6140(piVar1 + 6);
        FUN_627a4fb0(piVar6,piVar5);
      }
    }
  }
LAB_627a248f:
  piVar5 = piVar1 + 0x11;
  FUN_627a1a00(piVar5);
  piVar6 = FUN_627a1880(piVar1 + 0xb,&param_1);
  bVar2 = FUN_627a1a40(piVar5,piVar6);
  FUN_627a19d0();
  if (CONCAT31(extraout_var_00,bVar2) == 0) {
    piVar5 = piVar1 + 7;
    param_1 = (int *)FUN_627a6140(piVar5);
    iVar4 = *param_1;
    param_3 = piVar1 + 6;
    uVar3 = FUN_627a6140(param_3);
    (**(code **)(iVar4 + 0x14))(param_1,uVar3);
    param_2 = piVar1 + 9;
    param_1 = (int *)FUN_627a6140(param_2);
    iVar4 = *param_1;
    uVar3 = FUN_627a6140(piVar5);
    (**(code **)(iVar4 + 0xc))(param_1,piVar1[0x12],uVar3);
    FUN_627a6080(param_2);
    FUN_627a6080(param_3);
    FUN_627a6080(piVar5);
  }
  else {
    puVar7 = (undefined4 *)FUN_627a19f0(piVar5);
    puVar7 = (undefined4 *)FUN_627a6140(puVar7);
    FUN_627a5fe0(&local_c,puVar7);
    puVar7 = (undefined4 *)FUN_627a6140(&local_c);
    param_1 = (int *)*puVar7;
    uVar3 = FUN_627a6140(piVar1 + 7);
    (*(code *)param_1[3])(puVar7,-(uint)(piVar1 != (int *)0x18) & (uint)piVar1,uVar3);
  }
  thunk_FUN_627a6080(&local_8);
  thunk_FUN_627a6080(&local_10);
  thunk_FUN_627a6080(&local_c);
  return 0;
}


