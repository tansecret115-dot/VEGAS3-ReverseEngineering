/* Module: rmbe3260.dll
   Function: FUN_66002680
   Address: 66002680
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_66002680(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar3;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  FUN_660145d0(&local_14);
  local_c = 0xffffff;
  local_18 = 0;
  local_8 = (int *)0x0;
  iVar2 = (**(code **)(**(int **)((int)this + 0x104) + 0xc))
                    (*(int **)((int)this + 0x104),DAT_66075000,&local_8);
  if (-1 < iVar2) {
    if ((*(int *)((int)this + 0x118) == 0) || (*(int *)((int)this + 0x118) == 2)) {
      FUN_660145d0(&local_10);
      FUN_66014650(&local_10,local_8);
      bVar1 = FUN_66014680(&local_10);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        piVar3 = (int *)FUN_660145e0(&local_10);
        (**(code **)(*piVar3 + 0x14))(piVar3,&local_c);
      }
      local_c = local_c + 1;
      thunk_FUN_66014790(&local_10);
    }
    else {
      (**(code **)(*local_8 + 0x1c))(local_8,&local_10);
      local_c = ftol();
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
  }
  iVar2 = (**(code **)(**(int **)((int)this + param_1 * 4 + 0x152) + 0x134))();
  FUN_66014730(&local_14,*(undefined4 **)(*(int *)((int)this + 0x406) + iVar2 * 4));
  bVar1 = FUN_66014680(&local_14);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    piVar3 = (int *)FUN_660145e0(&local_14);
    (**(code **)(*piVar3 + 0xc))(piVar3,&local_18);
  }
  local_18 = local_18 / 1000;
  bVar1 = local_18 < local_c;
  thunk_FUN_66014790(&local_14);
  return bVar1;
}


