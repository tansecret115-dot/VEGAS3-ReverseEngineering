/* Module: vegas30.exe
   Function: FUN_00584f00
   Address: 00584f00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00584f00(int *param_1,int param_2,uint param_3,int param_4)

{
  LPSTR pCVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int local_c;
  int local_8;
  char *local_4;
  
  param_1[1] = param_4;
  FUN_005808d0();
  if (param_2 == 0) {
    pCVar1 = GetCommandLineA();
    FUN_00580c90(pCVar1);
    uVar4 = param_3 | 4;
  }
  else {
    FUN_00580c90(param_2);
    uVar4 = param_3;
  }
  FUN_005808d0();
  iVar5 = 0;
  local_8 = 0;
  param_4 = 0;
  if ((uVar4 & 2) == 0) {
    iVar2 = FUN_005812d0(&local_8,&param_4);
    if (iVar2 == 0) goto LAB_00585076;
  }
  else {
    iVar2 = 1;
  }
  for (; param_4 < *(int *)(local_c + -8); param_4 = param_4 + 1) {
    if (*(char *)(param_4 + local_c) != ' ') {
      if ((iVar2 != 0) && (iVar5 = (**(code **)(*param_1 + 4))(uVar4), -1 < iVar5))
      goto LAB_00584fbf;
      break;
    }
  }
  goto LAB_00585076;
  while (iVar5 = (**(code **)(*param_1 + 8))(&local_4,uVar4), -1 < iVar5) {
LAB_00584fbf:
    local_8 = param_4;
    iVar2 = FUN_005812d0(&local_8,&param_4);
    if (iVar2 == 0) break;
    uVar3 = FUN_0057fc10(&param_2,local_8,param_4 - local_8);
    FUN_00580c30(uVar3);
    FUN_00580a90();
    if ((*local_4 == '/') || (*local_4 == '-')) {
      FUN_0057fc80(&param_3,*(int *)(local_4 + -8) + -1);
      iVar5 = (**(code **)(*param_1 + 0xc))(&param_3,uVar4);
      if (iVar5 < 0) {
        FUN_00580a90();
        break;
      }
      FUN_00580a90();
      goto LAB_00584fbf;
    }
  }
  iVar5 = (**(code **)(*param_1 + 0x10))(iVar5,uVar4);
LAB_00585076:
  param_1[1] = 0;
  FUN_00580a90();
  FUN_00580a90();
  return iVar5;
}


