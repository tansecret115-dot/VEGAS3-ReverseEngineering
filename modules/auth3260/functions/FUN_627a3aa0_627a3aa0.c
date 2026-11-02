/* Module: auth3260.dll
   Function: FUN_627a3aa0
   Address: 627a3aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a3aa0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  undefined3 extraout_var;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int local_8;
  
  FUN_627a19b0(&local_8);
  piVar2 = param_1;
  if ((param_1[1] < 0) && (param_2 != -0x7fffbffb)) {
    param_1[1] = param_2;
  }
  piVar7 = param_1 + 0xd;
  FUN_627a1a00(piVar7);
  piVar4 = FUN_627a1880(piVar2 + 7,&param_1);
  bVar3 = FUN_627a1a40(piVar7,piVar4);
  FUN_627a19d0();
  if (CONCAT31(extraout_var,bVar3) == 0) {
    piVar7 = (int *)FUN_627a6140(piVar2 + 0xf);
    (**(code **)(*piVar7 + 0x14))(piVar7,piVar2[1],param_3);
  }
  else {
    puVar5 = (undefined4 *)FUN_627a19f0(piVar7);
    puVar5 = (undefined4 *)FUN_627a6140(puVar5);
    FUN_627a60d0(&local_8,puVar5);
    param_1 = (int *)FUN_627a6140(&local_8);
    iVar1 = *param_1;
    uVar6 = FUN_627a6140(piVar2 + 6);
    (**(code **)(iVar1 + 0x14))(param_1,-(uint)(piVar2 != (int *)0x24) & (uint)piVar2,param_3,uVar6)
    ;
  }
  FUN_627a6080(piVar2 + 0xf);
  thunk_FUN_627a6080(&local_8);
  return 0;
}


