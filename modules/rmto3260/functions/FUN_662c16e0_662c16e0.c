/* Module: rmto3260.dll
   Function: FUN_662c16e0
   Address: 662c16e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c16e0(int *param_1,char *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined1 local_10 [4];
  int *local_c;
  int *local_8;
  
  piVar3 = (int *)param_1[0x17];
  piVar1 = param_1 + 0x17;
  local_c = piVar1;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *piVar1 = 0;
  }
  piVar1 = param_1 + 5;
  FUN_662d08d0(piVar1);
  iVar2 = FUN_662d08f0(piVar1,param_2);
  if (iVar2 < 0) {
    return iVar2;
  }
  if (param_3 == (int *)0x0) {
    return iVar2;
  }
  local_8 = (int *)0x0;
  param_3 = (int *)0x0;
  iVar2 = RMACreateRMFF2Reader(&local_8);
  if (((-1 < iVar2) && (iVar2 = (**(code **)*local_8)(local_8,&DAT_663069c8,local_c), -1 < iVar2))
     && (iVar2 = (**(code **)*local_8)(local_8,&DAT_66306a68,&param_3), iVar2 == -0x7fffbffe)) {
    iVar2 = 0;
    param_3 = (int *)0x0;
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  piVar3 = local_c;
  if ((-1 < iVar2) &&
     (iVar2 = (**(code **)(*(int *)*local_c + 0x10))((int *)*local_c,*piVar1), piVar3 = local_c,
     -1 < iVar2)) {
    if (param_3 != (int *)0x0) {
      piVar3 = (int *)param_1[0x18];
      piVar1 = param_1 + 0x18;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *piVar1 = 0;
      }
      (**(code **)(*param_3 + 0xc))(param_3,piVar1);
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 8))(param_3);
        param_3 = (int *)0x0;
      }
      if (*piVar1 == 0) {
        piVar3 = operator_new(0x6c);
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          *piVar3 = (int)&PTR_LAB_66306468;
          piVar3[1] = 0;
          FUN_662ee790(piVar3 + 2,10);
          FUN_662ee790(piVar3 + 9,10);
          FUN_662ee790(piVar3 + 0x10,10);
          *piVar3 = (int)&PTR_FUN_66306428;
          piVar3[0x17] = 0;
          piVar3[0x18] = 0;
          piVar3[0x19] = 0;
          piVar3[0x1a] = 0;
        }
        *piVar1 = (int)piVar3;
        (**(code **)(*piVar3 + 4))(piVar3);
      }
    }
    piVar3 = local_c;
    if (-1 < iVar2) {
      param_2 = (char *)0x0;
      iVar2 = (**(code **)(*(int *)*local_c + 100))((int *)*local_c,&local_c,local_10);
      if (iVar2 < 0) goto LAB_662c19db;
      iVar2 = FUN_662d0970(&param_2,(undefined4 *)local_c[3],
                           CONCAT22(extraout_var,*(undefined2 *)((int)local_c + 10)));
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 0x14))(param_1,param_2);
      }
      FUN_662d08d0(&param_2);
      if (iVar2 < 0) goto LAB_662c19db;
      iVar2 = FUN_662d0970(&param_2,*(undefined4 **)((int)local_c + 0x12),
                           CONCAT22(extraout_var_00,(short)local_c[4]));
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
      }
      FUN_662d08d0(&param_2);
      if (iVar2 < 0) goto LAB_662c19db;
      iVar2 = FUN_662d0970(&param_2,(undefined4 *)local_c[6],
                           CONCAT22(extraout_var_01,*(undefined2 *)((int)local_c + 0x16)));
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 0x1c))(param_1,param_2);
      }
      FUN_662d08d0(&param_2);
      if (iVar2 < 0) goto LAB_662c19db;
      iVar2 = FUN_662d0970(&param_2,*(undefined4 **)((int)local_c + 0x1e),
                           CONCAT22(extraout_var_02,(short)local_c[7]));
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
      }
      FUN_662d08d0(&param_2);
    }
  }
  if (((-1 < iVar2) &&
      (iVar2 = (**(code **)(*(int *)*piVar3 + 0x5c))((int *)*piVar3,&param_2), -1 < iVar2)) &&
     ((iVar2 = (**(code **)(*param_1 + 0x24))(param_1,(uint)param_2 & 1), -1 < iVar2 &&
      ((iVar2 = (**(code **)(*param_1 + 0x28))(param_1,(uint)param_2 & 8), -1 < iVar2 &&
       (iVar2 = (**(code **)(*param_1 + 0x2c))(param_1,(uint)param_2 & 2), -1 < iVar2)))))) {
    iVar2 = (**(code **)(*(int *)*piVar3 + 0x68))((int *)*piVar3,param_1 + 0xd);
    param_1[0xc] = param_1[0xd];
  }
LAB_662c19db:
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))(param_3);
  }
  return iVar2;
}


