/* Module: encn3260.dll
   Function: FUN_664869f0
   Address: 664869f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664869f0(int param_1)

{
  undefined4 uVar1;
  int local_14;
  void *local_10;
  int local_c [2];
  
  uVar1 = 0x80004005;
  (**(code **)(**(int **)(param_1 + 0x164) + 4))();
  local_10 = *(void **)(param_1 + 0xf6);
  local_14 = -(uint)(*(int *)((int)local_10 + 8) != 0);
  local_c[0] = 0;
  local_c[1] = 0;
  if (local_14 != 0) {
    FUN_664bbeb0(local_10,&local_14,local_c + 1,local_c);
    uVar1 = FUN_6648dc60(local_c[0]);
  }
  (**(code **)(**(int **)(param_1 + 0x164) + 8))();
  return uVar1;
}


