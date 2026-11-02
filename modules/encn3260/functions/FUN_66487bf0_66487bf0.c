/* Module: encn3260.dll
   Function: FUN_66487bf0
   Address: 66487bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66487bf0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int local_14;
  void *local_10;
  int *local_c;
  int local_8;
  
  uVar3 = 0x80004005;
  (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  local_10 = *(void **)(param_1 + 0x102);
  local_14 = -(uint)(*(int *)((int)local_10 + 8) != 0);
  local_c = (int *)0x0;
  local_8 = 0;
  if (local_14 != 0) {
    FUN_664bbeb0(local_10,&local_14,&local_8,(int *)&local_c);
    piVar1 = local_c;
    iVar2 = (**(code **)(*local_c + 0x24))();
    if ((iVar2 == 4) || (iVar2 = (**(code **)(*piVar1 + 0x24))(), iVar2 == 2)) {
      uVar3 = FUN_66491f20(piVar1);
    }
  }
  (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  return uVar3;
}


