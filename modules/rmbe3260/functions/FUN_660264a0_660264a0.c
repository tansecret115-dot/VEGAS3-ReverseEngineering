/* Module: rmbe3260.dll
   Function: FUN_660264a0
   Address: 660264a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660264a0(uint param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  int *piVar4;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar5;
  int local_c;
  int local_8;
  
  iVar5 = 0;
  FUN_660145d0(&local_c);
  FUN_660145d0(&local_8);
  uVar3 = FUN_66029ae0();
  uVar1 = param_1;
  if (uVar3 == 0) {
    iVar5 = -0x7ff8fff2;
  }
  if (-1 < iVar5) {
    iVar5 = (**(code **)(*(int *)(uVar3 + 0x10) + 0x24))
                      (uVar3 + 0x10,*(undefined4 *)(param_1 + 0x3e));
  }
  if (-1 < iVar5) {
    if (uVar3 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(uVar3 + 0x14);
    }
    FUN_66014620(&local_c,piVar4);
    if (-1 < iVar5) {
      bVar2 = FUN_66014680(&local_c);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        piVar4 = (int *)FUN_660145e0(&local_c);
        (**(code **)(*piVar4 + 0xc))(piVar4,param_2,7);
      }
    }
  }
  bVar2 = FUN_66014680(&local_c);
  if (CONCAT31(extraout_var_00,bVar2) == 0) {
    iVar5 = -0x7fffbffe;
  }
  if (-1 < iVar5) {
    if (uVar3 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(uVar3 + 0x10);
    }
    FUN_66014620(&local_8,piVar4);
    if (-1 < iVar5) {
      bVar2 = FUN_66014680(&local_8);
      if (CONCAT31(extraout_var_01,bVar2) != 0) {
        piVar4 = (int *)FUN_660145e0(&local_8);
        (**(code **)(*piVar4 + 0x14))(piVar4,&param_1);
        if (param_1 < 9) {
          piVar4 = (int *)FUN_660145e0(&local_8);
          (**(code **)(*piVar4 + 4))(piVar4);
          *(uint *)(*(int *)(uVar1 + 0x20) + param_1 * 4) = uVar3;
        }
      }
    }
  }
  bVar2 = FUN_66014680(&local_8);
  if (CONCAT31(extraout_var_02,bVar2) == 0) {
    iVar5 = -0x7fffbffe;
  }
  thunk_FUN_66014790(&local_8);
  thunk_FUN_66014790(&local_c);
  FUN_6605b770(&param_2);
  return iVar5;
}


