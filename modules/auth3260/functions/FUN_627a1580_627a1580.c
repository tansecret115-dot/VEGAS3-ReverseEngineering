/* Module: auth3260.dll
   Function: FUN_627a1580
   Address: 627a1580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a1580(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int local_8;
  
  FUN_627a19b0(&local_8);
  *param_3 = 0;
  if ((((*param_2 == DAT_627a7740) && (param_2[1] == DAT_627a7744)) && (param_2[2] == DAT_627a7748))
     && (param_2[3] == DAT_627a774c)) {
    uVar1 = FUN_627a1b80(param_3);
    FUN_627a5f10(&local_8,(undefined4 *)*param_3);
    piVar2 = (int *)FUN_627a6140(&local_8);
    (**(code **)(*piVar2 + 0xc))(piVar2,*(undefined4 *)(param_1 + 4));
    thunk_FUN_627a6080(&local_8);
    return uVar1;
  }
  if (((*param_2 == DAT_627a7770) && (param_2[1] == DAT_627a7774)) &&
     ((param_2[2] == DAT_627a7778 && (param_2[3] == DAT_627a777c)))) {
    uVar1 = FUN_627a2b20(param_3);
    FUN_627a5f10(&local_8,(undefined4 *)*param_3);
    piVar2 = (int *)FUN_627a6140(&local_8);
    (**(code **)(*piVar2 + 0xc))(piVar2,*(undefined4 *)(param_1 + 4));
    thunk_FUN_627a6080(&local_8);
    return uVar1;
  }
  thunk_FUN_627a6080(&local_8);
  return 0x80004002;
}


