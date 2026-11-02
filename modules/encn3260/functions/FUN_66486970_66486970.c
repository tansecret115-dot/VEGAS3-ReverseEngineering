/* Module: encn3260.dll
   Function: FUN_66486970
   Address: 66486970
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66486970(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_14;
  void *local_10;
  void *local_c;
  int local_8;
  
  iVar1 = -0x7fffbffb;
  (**(code **)(**(int **)(param_1 + 0x164) + 4))();
  local_10 = *(void **)(param_1 + 0xf6);
  local_14 = -(uint)(*(int *)((int)local_10 + 8) != 0);
  local_c = (void *)0x0;
  local_8 = 0;
  if (local_14 != 0) {
    FUN_664bbeb0(local_10,&local_14,&local_8,(int *)&local_c);
    iVar1 = FUN_6648db30(local_c,param_2);
  }
  (**(code **)(**(int **)(param_1 + 0x164) + 8))();
  return iVar1;
}


