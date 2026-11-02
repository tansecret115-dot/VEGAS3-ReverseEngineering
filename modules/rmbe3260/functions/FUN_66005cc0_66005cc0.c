/* Module: rmbe3260.dll
   Function: FUN_66005cc0
   Address: 66005cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_66005cc0(void *this,int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  undefined3 extraout_var;
  int *piVar3;
  uint uVar4;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  uVar4 = 0;
  local_c = 0;
  FUN_660145d0(&local_8);
  uVar1 = local_c;
  if (*(int *)((int)this + 0x128) != 0) {
    do {
      FUN_660146d0(&local_8,*(undefined4 **)(*(int *)((int)this + 0x124) + uVar4 * 4));
      bVar2 = FUN_66014680(&local_8);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        piVar3 = (int *)FUN_660145e0(&local_8);
        (**(code **)(*piVar3 + 0xc))(piVar3,&local_14);
        if ((param_1 == local_14) && (uVar1 = uVar4, param_2 == local_10)) break;
      }
      uVar4 = uVar4 + 1;
      uVar1 = local_c;
    } while (uVar4 < *(uint *)((int)this + 0x128));
  }
  local_c = uVar1;
  thunk_FUN_66014790(&local_8);
  return local_c;
}


