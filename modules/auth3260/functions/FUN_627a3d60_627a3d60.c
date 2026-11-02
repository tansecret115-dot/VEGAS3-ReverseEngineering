/* Module: auth3260.dll
   Function: FUN_627a3d60
   Address: 627a3d60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_627a3d60(void *this,char *param_1,undefined4 param_2,char *param_3,undefined4 *param_4,
            undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int local_14 [3];
  int local_8;
  
  FUN_627a19b0(&local_8);
  FUN_627a5be0(local_14);
  FUN_627a6150(&local_8,*(undefined4 **)((int)this + 0x2c));
  piVar1 = (int *)FUN_627a6140(&local_8);
  iVar2 = (**(code **)(*piVar1 + 0x60))(piVar1,param_2);
  if (iVar2 != 1) {
    FUN_627a5cb0(local_14);
    thunk_FUN_627a6080(&local_8);
    return 0x80004005;
  }
  FUN_627a5db0(local_14,param_1);
  FUN_627a5ed0(local_14,&DAT_627a80dc);
  FUN_627a5ed0(local_14,param_3);
  piVar1 = (int *)FUN_627a6140(&local_8);
  iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,local_14[0],param_4);
  if (iVar2 < 0) {
    pcVar3 = strrchr(param_1,0x2e);
    if (pcVar3 != (char *)0x0) {
      param_1 = pcVar3 + 1;
    }
    FUN_627a5a70(param_1,param_4);
  }
  piVar1 = (int *)FUN_627a6140(&local_8);
  uVar4 = (**(code **)(*piVar1 + 0x7c))(piVar1,param_2,param_5);
  FUN_627a5cb0(local_14);
  thunk_FUN_627a6080(&local_8);
  return uVar4;
}


