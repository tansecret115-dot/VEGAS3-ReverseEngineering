/* Module: encn3260.dll
   Function: FUN_66487550
   Address: 66487550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66487550(int param_1)

{
  undefined4 uVar1;
  int local_14;
  void *local_10;
  int local_c [2];
  
  (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  local_10 = *(void **)(param_1 + 0x102);
  uVar1 = 0;
  local_14 = -(uint)(*(int *)((int)local_10 + 8) != 0);
  local_c[0] = 0;
  local_c[1] = 0;
  if (local_14 != 0) {
    FUN_664bbeb0(local_10,&local_14,local_c + 1,local_c);
    uVar1 = FUN_6648da70(local_c[0]);
  }
  (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  return uVar1;
}


