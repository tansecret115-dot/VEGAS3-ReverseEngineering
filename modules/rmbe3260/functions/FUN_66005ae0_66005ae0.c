/* Module: rmbe3260.dll
   Function: FUN_66005ae0
   Address: 66005ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66005ae0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined3 extraout_var;
  int *piVar4;
  uint uVar5;
  ushort uVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  FUN_660145d0(&local_14);
  uVar6 = 0;
  local_10 = (int *)0x0;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_18 = 0;
  local_1c = (**(code **)(**(int **)(param_1 + 0x114) + 0x134))();
  local_20 = (**(code **)(**(int **)(param_1 + 0x118) + 0x134))();
  uVar2 = (**(code **)(**(int **)(param_1 + 0x110) + 0x134))();
  if (*(undefined4 **)(param_1 + 0x138) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x138) = uVar2;
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x11c) + 0x134))();
  FUN_660146d0(&local_14,*(undefined4 **)(*(int *)(param_1 + 0x124) + iVar3 * 4));
  bVar1 = FUN_66014680(&local_14);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    piVar4 = (int *)FUN_660145e0(&local_14);
    (**(code **)(*piVar4 + 0xc))(piVar4,&local_28);
    local_18 = 1;
  }
  do {
    uVar5 = (**(code **)(**(int **)(param_1 + 0x134) + 0xc))
                      (*(int **)(param_1 + 0x134),uVar6,&local_10);
    if ((uVar5 & 0x80000000) == 0) {
      uVar5 = (**(code **)(*local_10 + 0x10))(local_10,0xc,&local_8);
      if ((uVar5 & 0x80000000) == 0) {
        if (local_18 != 0) {
          (**(code **)(*local_8 + 0x10))(local_8,local_28,local_24);
        }
        uVar5 = (**(code **)*local_8)(local_8,&DAT_66065c38,&local_c);
        if ((uVar5 & 0x80000000) == 0) {
          (**(code **)(*local_c + 0x28))(local_c,local_1c);
          (**(code **)(*local_c + 0x30))(local_c,local_20);
        }
      }
    }
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 8))(local_10);
      local_10 = (int *)0x0;
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
      local_c = (int *)0x0;
    }
  } while ((-1 < (int)uVar5) && (uVar6 = uVar6 + 1, uVar6 < 9));
  thunk_FUN_66014790(&local_14);
  return 1;
}


