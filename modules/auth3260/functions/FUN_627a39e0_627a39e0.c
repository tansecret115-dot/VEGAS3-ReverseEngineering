/* Module: auth3260.dll
   Function: FUN_627a39e0
   Address: 627a39e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a39e0(uint param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  undefined3 extraout_var;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int local_8;
  
  FUN_627a19b0(&local_8);
  uVar1 = param_1;
  if ((*(int *)(param_1 + 4) < 0) && (param_2 != -0x7fffbffb)) {
    *(int *)(param_1 + 4) = param_2;
  }
  piVar5 = (int *)(param_1 + 0x34);
  FUN_627a1a00(piVar5);
  piVar3 = FUN_627a1880((void *)(uVar1 + 0x1c),&param_1);
  bVar2 = FUN_627a1a40(piVar5,piVar3);
  FUN_627a19d0();
  if (CONCAT31(extraout_var,bVar2) == 0) {
    piVar5 = (int *)FUN_627a6140((undefined4 *)(uVar1 + 0x3c));
    iVar6 = *piVar5;
    uVar7 = *(uint *)(uVar1 + 4);
  }
  else {
    puVar4 = (undefined4 *)FUN_627a19f0(piVar5);
    puVar4 = (undefined4 *)FUN_627a6140(puVar4);
    FUN_627a60d0(&local_8,puVar4);
    uVar7 = -(uint)(uVar1 != 0x24) & uVar1;
    piVar5 = (int *)FUN_627a6140(&local_8);
    iVar6 = *piVar5;
  }
  (**(code **)(iVar6 + 0x10))(piVar5,uVar7,param_3);
  FUN_627a6080((int *)(uVar1 + 0x3c));
  thunk_FUN_627a6080(&local_8);
  return 0;
}


