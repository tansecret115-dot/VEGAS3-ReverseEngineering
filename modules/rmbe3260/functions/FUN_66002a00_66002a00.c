/* Module: rmbe3260.dll
   Function: FUN_66002a00
   Address: 66002a00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66002a00(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  FUN_660145d0(&local_10);
  iVar5 = 0;
  local_8 = (int *)0x0;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x104) + 0xc))
                    (*(int **)(param_1 + 0x104),DAT_66075000,&local_8);
  if (-1 < iVar2) {
    local_14 = (undefined4 *)(param_1 + 0x152);
    do {
      iVar2 = (**(code **)(*(int *)*local_14 + 0x134))();
      FUN_660146d0(&local_10,*(undefined4 **)(*(int *)(param_1 + 0x406) + iVar2 * 4));
      bVar1 = FUN_66014680(&local_10);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        piVar3 = (int *)FUN_660145e0(&local_10);
        (**(code **)(*piVar3 + 0xc))(piVar3,&local_1c);
        local_c = (int *)0x0;
        iVar2 = *local_8;
        uVar4 = (**(code **)(iVar2 + 0xc))(local_8,*(undefined4 *)(param_1 + 0x118),iVar5,&local_c);
        (**(code **)(iVar2 + 0x10))(local_8,uVar4);
        (**(code **)(*local_c + 0x10))(local_c,local_1c,local_18);
        if (local_c != (int *)0x0) {
          (**(code **)(*local_c + 8))(local_c);
          local_c = (int *)0x0;
        }
      }
      iVar5 = iVar5 + 1;
      local_14 = local_14 + 1;
    } while (iVar5 < 4);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  thunk_FUN_66014790(&local_10);
  return;
}


