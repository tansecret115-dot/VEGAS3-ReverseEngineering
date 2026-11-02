/* Module: encn3260.dll
   Function: FUN_66487c90
   Address: 66487c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66487c90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *this;
  int iVar1;
  undefined4 uVar2;
  int local_14;
  void *local_10;
  int *local_c;
  int local_8;
  
  uVar2 = 0x80004005;
  (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  local_10 = *(void **)(param_1 + 0x102);
  local_14 = -(uint)(*(int *)((int)local_10 + 8) != 0);
  local_c = (int *)0x0;
  local_8 = 0;
  if (local_14 != 0) {
    FUN_664bbeb0(local_10,&local_14,&local_8,(int *)&local_c);
    this = local_c;
    iVar1 = (**(code **)(*local_c + 0x24))();
    if ((iVar1 == 4) || (iVar1 = (**(code **)(*this + 0x24))(), iVar1 == 2)) {
      uVar2 = FUN_664919a0(this,param_2,param_3,param_4);
    }
  }
  (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  return uVar2;
}


