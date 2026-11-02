/* Module: rmbe3260.dll
   Function: FUN_66002b00
   Address: 66002b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66002b00(void *this,int param_1,int param_2,uint *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  uint uVar3;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  uVar3 = 0;
  local_c = 0;
  if (param_3 == (uint *)0x0) {
    return 0;
  }
  *param_3 = 0;
  FUN_660145d0(&local_8);
  if (*(int *)((int)this + 0x40a) != 0) {
    do {
      FUN_660146d0(&local_8,*(undefined4 **)(*(int *)((int)this + 0x406) + uVar3 * 4));
      bVar1 = FUN_66014680(&local_8);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        piVar2 = (int *)FUN_660145e0(&local_8);
        (**(code **)(*piVar2 + 0xc))(piVar2,&local_14);
        if ((param_1 == local_14) && (param_2 == local_10)) {
          local_c = 1;
          *param_3 = uVar3;
          break;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x40a));
  }
  thunk_FUN_66014790(&local_8);
  return local_c;
}


