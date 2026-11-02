/* Module: sfppack1.dll
   Function: FUN_5cdfda57
   Address: 5cdfda57
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cdfda57(int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  int iVar3;
  undefined4 local_4c [18];
  
  bVar1 = FUN_5cdfdeed(param_1);
  if (CONCAT31(extraout_var,bVar1) == 1) {
    uVar2 = 0x80040203;
  }
  else {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
    FUN_5ce00556(local_4c);
    iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x34))(*(int *)(param_1 + 4) + -1,local_4c);
    uVar2 = (uint)(iVar3 != 0);
    FUN_5ce0054f((int)local_4c);
  }
  return uVar2;
}


