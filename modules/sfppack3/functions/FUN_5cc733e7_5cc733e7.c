/* Module: sfppack3.dll
   Function: FUN_5cc733e7
   Address: 5cc733e7
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cc733e7(int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  int iVar3;
  undefined4 local_4c [18];
  
  bVar1 = FUN_5cc7387d(param_1);
  if (CONCAT31(extraout_var,bVar1) == 1) {
    uVar2 = 0x80040203;
  }
  else {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
    FUN_5cc77f67(local_4c);
    iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x34))(*(int *)(param_1 + 4) + -1,local_4c);
    uVar2 = (uint)(iVar3 != 0);
    FUN_5cc77f60((int)local_4c);
  }
  return uVar2;
}


