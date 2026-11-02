/* Module: encn3260.dll
   Function: FUN_664868d0
   Address: 664868d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664868d0(int param_1,ushort *param_2,undefined4 *param_3,ushort *param_4)

{
  undefined4 uVar1;
  int local_14;
  void *local_10;
  void *local_c;
  int local_8;
  
  (**(code **)(**(int **)(param_1 + 0x168) + 4))();
  local_10 = *(void **)(param_1 + 0xfa);
  uVar1 = 0;
  local_14 = -(uint)(*(int *)((int)local_10 + 8) != 0);
  local_c = (void *)0x0;
  local_8 = 0;
  if (local_14 == 0) {
    *param_2 = 2;
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    FUN_664bbeb0(local_10,&local_14,&local_8,(int *)&local_c);
    if (local_c != (void *)0x0) {
      uVar1 = FUN_6648d960(local_c,param_2,param_3,param_4);
    }
  }
  (**(code **)(**(int **)(param_1 + 0x168) + 8))();
  return uVar1;
}


