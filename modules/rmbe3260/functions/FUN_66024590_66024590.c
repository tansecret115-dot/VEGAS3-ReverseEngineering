/* Module: rmbe3260.dll
   Function: FUN_66024590
   Address: 66024590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_66024590(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined3 extraout_var;
  int *piVar6;
  int *local_8;
  
  uVar3 = param_3;
  uVar2 = param_2;
  iVar1 = param_1;
  piVar6 = *(int **)(param_1 + 0x3e);
  if (piVar6 == (int *)0x0) {
    return 0x80040007;
  }
  local_8 = (int *)0x0;
  iVar5 = (**(code **)(*piVar6 + 0x14))(piVar6,param_2,param_3,&local_8);
  if (-1 < iVar5) {
    FUN_660145d0(&param_1);
    FUN_66014730(&param_1,local_8);
    bVar4 = FUN_66014680(&param_1);
    if (CONCAT31(extraout_var,bVar4) != 0) {
      *(undefined4 *)(iVar1 + 0x1c) = 1;
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
      *(uint *)(iVar1 + 0x18) = uVar3;
      piVar6 = (int *)FUN_660145e0(&param_1);
      (**(code **)(*piVar6 + 0xc))(piVar6,&param_3);
      *(float *)(iVar1 + 0x20) = (float)param_3 * _DAT_66066fc4;
      piVar6 = (int *)FUN_660145e0(&param_1);
      (**(code **)(*piVar6 + 0x10))(piVar6,iVar1 + 0x3a);
      piVar6 = (int *)FUN_660145e0(&param_1);
      (**(code **)(*piVar6 + 0x14))(piVar6,iVar1 + 0x32);
      piVar6 = (int *)FUN_660145e0(&param_1);
      (**(code **)(*piVar6 + 0x18))(piVar6,iVar1 + 0x36);
    }
    thunk_FUN_66014790(&param_1);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return 0;
}


