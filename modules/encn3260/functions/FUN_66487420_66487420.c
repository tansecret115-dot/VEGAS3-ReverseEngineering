/* Module: encn3260.dll
   Function: FUN_66487420
   Address: 66487420
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66487420(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_2c [2];
  void *local_24;
  int local_20 [4];
  void *local_10;
  void *local_c;
  uint local_8;
  
  iVar2 = 0;
  (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  local_24 = *(void **)(param_1 + 0x102);
  local_20[2] = 0;
  local_20[3] = 0;
  local_10 = (void *)0x0;
  local_c = (void *)0x0;
  local_8 = 0;
  local_2c[0] = -(uint)(*(int *)((int)local_24 + 8) != 0);
  local_20[0] = 0;
  local_2c[1] = local_2c[0];
  local_20[1] = 0;
  if (local_2c[0] != 0) {
    FUN_664bbeb0(local_24,local_2c + 1,local_20 + 1,local_20);
  }
  piVar3 = local_2c;
  piVar4 = local_20 + 2;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  do {
    if (local_20[2] == 0) break;
    iVar2 = FUN_6648da40(local_c,local_8);
    local_20[2] = local_20[3];
    if (local_20[3] != 0) {
      FUN_664bbeb0(local_10,local_20 + 3,(int *)&local_8,(int *)&local_c);
    }
  } while (iVar2 == 0);
  (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  return iVar2;
}


