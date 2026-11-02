/* Module: rmbe3260.dll
   Function: FUN_6601e0a0
   Address: 6601e0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6601e0a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar3 = *(int **)(param_1 + 0x144);
  if ((piVar3 == (int *)0x0) || (*(int *)(param_1 + 0x140) == 0)) {
    return -0x7ffbfdaf;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  iVar2 = (**(code **)**(undefined4 **)(param_1 + 0x144))
                    (*(undefined4 **)(param_1 + 0x144),&DAT_66066138,&local_18);
  if ((-1 < iVar2) &&
     ((**(code **)(*local_18 + 0x10))(local_18,*(undefined4 *)(param_1 + 0x1d6)),
     local_18 != (int *)0x0)) {
    (**(code **)(*local_18 + 8))(local_18);
    local_18 = (int *)0x0;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x144) + 0x1c))
                    (*(int **)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x140));
  piVar3 = *(int **)(param_1 + 0x80);
  if (piVar3 == (int *)0x0) {
    return iVar2;
  }
  local_c = (int *)0x0;
  if ((-1 < iVar2) && (iVar2 = (**(code **)(*piVar3 + 0x3c))(piVar3,&local_c), -1 < iVar2)) {
    local_8 = (int *)0x0;
    iVar2 = (**(code **)(*local_c + 0xc))(local_c,&local_8);
    while ((-1 < iVar2 && (iVar2 != 0x40012))) {
      FUN_660145d0(&local_10);
      FUN_660145f0(&local_10,local_8);
      if (-1 < iVar2) {
        piVar3 = (int *)FUN_660145e0(&local_10);
        iVar2 = (**(code **)(*piVar3 + 0xc))(piVar3,&local_20);
        if (-1 < iVar2) {
          piVar3 = (int *)FUN_660145e0(&local_10);
          iVar2 = (**(code **)(*piVar3 + 0x14))(piVar3,&local_24);
        }
      }
      if ((local_20 != 0) && (-1 < iVar2)) {
        puVar1 = *(undefined4 **)(param_1 + 0x84);
        if (puVar1 == (undefined4 *)0x0) {
          iVar2 = -0x7fffbffb;
        }
        local_1c = (int *)0x0;
        if ((-1 < iVar2) &&
           (iVar2 = (**(code **)*puVar1)(puVar1,&DAT_66066108,&local_1c), -1 < iVar2)) {
          iVar2 = (**(code **)(*local_1c + 0x14))(local_1c,local_20,&local_2c);
          (**(code **)(*local_1c + 8))(local_1c);
          if ((-1 < iVar2) &&
             (iVar2 = (**(code **)(**(int **)(param_1 + 0x144) + 0x10))
                                (*(int **)(param_1 + 0x144),local_2c), -1 < iVar2)) {
            local_30 = 1;
            iVar2 = (**(code **)(*(int *)(param_1 + 0x10) + 0x28))(param_1 + 0x10,&local_30);
            if ((-1 < iVar2) && (local_30 == 0)) {
              iVar2 = (**(code **)(**(int **)(param_1 + 0x144) + 0x14))
                                (*(int **)(param_1 + 0x144),local_2c);
            }
          }
        }
      }
      if ((local_24 != 0) && (-1 < iVar2)) {
        puVar1 = *(undefined4 **)(param_1 + 0x88);
        if (puVar1 == (undefined4 *)0x0) {
          iVar2 = -0x7fffbffb;
        }
        local_1c = (int *)0x0;
        if ((-1 < iVar2) &&
           (iVar2 = (**(code **)*puVar1)(puVar1,&DAT_66066108,&local_1c), -1 < iVar2)) {
          iVar2 = (**(code **)(*local_1c + 0x14))(local_1c,local_24,&local_28);
          (**(code **)(*local_1c + 8))(local_1c);
          if ((-1 < iVar2) &&
             (iVar2 = (**(code **)(**(int **)(param_1 + 0x144) + 0x10))
                                (*(int **)(param_1 + 0x144),local_28), -1 < iVar2)) {
            local_30 = 1;
            iVar2 = (**(code **)(*(int *)(param_1 + 0x10) + 0x28))(param_1 + 0x10,&local_30);
            if ((-1 < iVar2) && (local_30 == 0)) {
              iVar2 = (**(code **)(**(int **)(param_1 + 0x144) + 0x14))
                                (*(int **)(param_1 + 0x144),local_28);
            }
          }
        }
      }
      if (((local_20 != 0) && (local_24 != 0)) && (-1 < iVar2)) {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x144) + 0x18))
                          (*(int **)(param_1 + 0x144),local_2c,local_28);
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*local_c + 0x10))(local_c,&local_8);
      }
      thunk_FUN_66014790((int *)&local_10);
    }
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
      local_c = (int *)0x0;
    }
  }
  local_14 = (int *)0x0;
  if ((iVar2 < 0) ||
     (iVar2 = (**(code **)(**(int **)(param_1 + 0x80) + 0x40))(*(int **)(param_1 + 0x80),&local_14),
     iVar2 < 0)) goto LAB_6601e4ef;
  local_10 = (int *)0x0;
  iVar2 = (**(code **)(*local_14 + 0xc))(local_14,&local_10);
  if ((-1 < iVar2) && (iVar2 != 0x40012)) {
    FUN_660145d0(&local_8);
    FUN_660145f0(&local_8,local_10);
    piVar3 = (int *)FUN_660145e0(&local_8);
    iVar2 = (**(code **)(*piVar3 + 0xc))(piVar3,&local_30);
    if (-1 < iVar2) {
      piVar3 = (int *)FUN_660145e0(&local_8);
      iVar2 = (**(code **)(*piVar3 + 0x14))(piVar3,&local_28);
    }
    if ((local_30 != 0) && (-1 < iVar2)) {
      puVar1 = *(undefined4 **)(param_1 + 0x84);
      if (puVar1 == (undefined4 *)0x0) {
        iVar2 = -0x7fffbffb;
      }
      local_2c = (int *)0x0;
      if ((-1 < iVar2) && (iVar2 = (**(code **)*puVar1)(puVar1,&DAT_66066108,&local_2c), -1 < iVar2)
         ) {
        iVar2 = (**(code **)(*local_2c + 0x14))(local_2c,local_30,&local_24);
        (**(code **)(*local_2c + 8))(local_2c);
        if (-1 < iVar2) {
          iVar2 = (**(code **)(**(int **)(param_1 + 0x144) + 0x14))
                            (*(int **)(param_1 + 0x144),local_24);
          goto LAB_6601e45c;
        }
      }
      iVar2 = 0;
    }
LAB_6601e45c:
    if ((local_28 != 0) && (-1 < iVar2)) {
      puVar1 = *(undefined4 **)(param_1 + 0x88);
      if (puVar1 == (undefined4 *)0x0) {
        iVar2 = -0x7fffbffb;
      }
      local_2c = (int *)0x0;
      if ((-1 < iVar2) && (iVar2 = (**(code **)*puVar1)(puVar1,&DAT_66066108,&local_2c), -1 < iVar2)
         ) {
        iVar2 = (**(code **)(*local_2c + 0x14))(local_2c,local_28,&local_20);
        (**(code **)(*local_2c + 8))(local_2c);
        if (-1 < iVar2) {
          iVar2 = (**(code **)(**(int **)(param_1 + 0x144) + 0x14))
                            (*(int **)(param_1 + 0x144),local_20);
          goto LAB_6601e4c7;
        }
      }
      iVar2 = 0;
    }
LAB_6601e4c7:
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 8))(local_10);
      local_10 = (int *)0x0;
    }
    thunk_FUN_66014790((int *)&local_8);
  }
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
    local_14 = (int *)0x0;
  }
LAB_6601e4ef:
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_66015c90(*(void **)(param_1 + 0x8c),(undefined2 *)&local_30);
    (**(code **)(**(int **)(param_1 + 0x144) + 0x10))(*(int **)(param_1 + 0x144),local_30);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x144) + 0x14))(*(int **)(param_1 + 0x144),local_30);
    (**(code **)(**(int **)(param_1 + 0x8c) + 0x2c))(*(int **)(param_1 + 0x8c));
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    iVar2 = FUN_66015c90(*(void **)(param_1 + 0x90),(undefined2 *)&local_30);
    (**(code **)(**(int **)(param_1 + 0x144) + 0x10))(*(int **)(param_1 + 0x144),local_30);
    (**(code **)(**(int **)(param_1 + 0x144) + 0x14))(*(int **)(param_1 + 0x144),local_30);
    (**(code **)(**(int **)(param_1 + 0x90) + 0x2c))(*(int **)(param_1 + 0x90));
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    (**(code **)(**(int **)(param_1 + 0x94) + 0x2c))(*(int **)(param_1 + 0x94));
  }
  return iVar2;
}


