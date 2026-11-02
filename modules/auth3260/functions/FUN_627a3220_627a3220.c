/* Module: auth3260.dll
   Function: FUN_627a3220
   Address: 627a3220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a3220(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  undefined4 uVar4;
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
  piVar2 = param_1;
  if ((param_1[4] < 0) && (param_2 != (int *)0x80004005)) {
    param_1[4] = (int)param_2;
  }
  if (param_3 != (int *)0x0) {
    iVar1 = *param_3;
    uVar4 = FUN_627a17b0(&local_8);
    (**(code **)(iVar1 + 0x18))(piVar5,uVar4);
  }
  if (-1 < piVar2[4]) {
    bVar3 = FUN_627a5f40(&local_8);
    if (CONCAT31(extraout_var,bVar3) != 0) {
      piVar5 = (int *)FUN_627a6140(&local_8);
      piVar6 = (int *)FUN_627a6140(piVar2 + 8);
      FUN_627a4fb0(piVar6,piVar5);
    }
  }
  piVar5 = piVar2 + 0x10;
  FUN_627a1a00(piVar5);
  piVar6 = FUN_627a1880(piVar2 + 10,&param_1);
  bVar3 = FUN_627a1a40(piVar5,piVar6);
  FUN_627a19d0();
  if (CONCAT31(extraout_var_00,bVar3) == 0) {
    piVar5 = piVar2 + 7;
    param_1 = (int *)FUN_627a6140(piVar5);
    iVar1 = *param_1;
    param_3 = piVar2 + 8;
    uVar4 = FUN_627a6140(param_3);
    (**(code **)(iVar1 + 0x14))(param_1,uVar4);
    param_2 = piVar2 + 0x11;
    param_1 = (int *)FUN_627a6140(param_2);
    iVar1 = *param_1;
    uVar4 = FUN_627a6140(piVar5);
    (**(code **)(iVar1 + 0xc))(param_1,piVar2[4],uVar4);
    FUN_627a6080(param_2);
    FUN_627a6080(piVar5);
    FUN_627a6080(param_3);
  }
  else {
    puVar7 = (undefined4 *)FUN_627a19f0(piVar5);
    puVar7 = (undefined4 *)FUN_627a6140(puVar7);
    FUN_627a6020(&local_c,puVar7);
    puVar7 = (undefined4 *)FUN_627a6140(&local_c);
    param_1 = (int *)*puVar7;
    uVar4 = FUN_627a6140(piVar2 + 7);
    (*(code *)param_1[3])(puVar7,-(uint)(piVar2 != (int *)0x18) & (uint)piVar2,uVar4);
  }
  thunk_FUN_627a6080(&local_8);
  thunk_FUN_627a6080(&local_10);
  thunk_FUN_627a6080(&local_c);
  return 0;
}


