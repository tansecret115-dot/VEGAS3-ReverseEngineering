/* Module: rmbe3260.dll
   Function: FUN_66024bb0
   Address: 66024bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66024bb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  undefined3 extraout_var;
  int *local_8;
  
  uVar4 = param_3;
  uVar3 = param_2;
  iVar2 = param_1;
  piVar1 = *(int **)(param_1 + 0x7a);
  if (piVar1 == (int *)0x0) {
    return 0x80040007;
  }
  local_8 = (int *)0x0;
  iVar6 = (**(code **)(*piVar1 + 0x14))(piVar1,param_2,param_3,&local_8);
  if (-1 < iVar6) {
    FUN_660145d0(&param_1);
    FUN_66014760(&param_1,local_8);
    bVar5 = FUN_66014680(&param_1);
    if (CONCAT31(extraout_var,bVar5) != 0) {
      *(undefined4 *)(iVar2 + 0x1c) = 1;
      *(undefined4 *)(iVar2 + 0x14) = uVar3;
      *(undefined4 *)(iVar2 + 0x18) = uVar4;
    }
    thunk_FUN_66014790(&param_1);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return 0;
}


