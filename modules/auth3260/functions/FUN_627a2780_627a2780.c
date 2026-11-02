/* Module: auth3260.dll
   Function: FUN_627a2780
   Address: 627a2780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a2780(int param_1,int param_2,char *param_3,char *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_8;
  
  FUN_627a19b0(&local_8);
  if (-1 < param_2) {
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
      puVar1 = (undefined4 *)FUN_627a17b0(&local_8);
      iVar2 = FUN_627a5a70(param_3,puVar1);
      if (-1 < iVar2) {
        piVar3 = (int *)FUN_627a6140((undefined4 *)(param_1 + 0x14));
        iVar2 = *piVar3;
        uVar4 = FUN_627a6140(&local_8);
        (**(code **)(iVar2 + 0x2c))(piVar3,s_Username_627a80a8,uVar4);
      }
    }
    FUN_627a6080(&local_8);
    if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
      puVar1 = (undefined4 *)FUN_627a17b0(&local_8);
      iVar2 = FUN_627a5a70(param_4,puVar1);
      if (-1 < iVar2) {
        piVar3 = (int *)FUN_627a6140((undefined4 *)(param_1 + 0x14));
        iVar2 = *piVar3;
        uVar4 = FUN_627a6140(&local_8);
        (**(code **)(iVar2 + 0x2c))(piVar3,s_Password_627a809c,uVar4);
      }
    }
  }
  iVar2 = *(int *)(param_1 + -4);
  uVar4 = FUN_627a6140((undefined4 *)(param_1 + 0x14));
  uVar4 = (**(code **)(iVar2 + 0xc))(param_1 + -4,param_2,uVar4);
  thunk_FUN_627a6080(&local_8);
  return uVar4;
}


