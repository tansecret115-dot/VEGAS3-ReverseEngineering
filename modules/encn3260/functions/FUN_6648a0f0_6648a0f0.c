/* Module: encn3260.dll
   Function: FUN_6648a0f0
   Address: 6648a0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6648a0f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_2c [2];
  void *local_24;
  int local_20 [4];
  void *local_10;
  int *local_c;
  int local_8;
  
  local_24 = (void *)*param_1;
  if (local_24 != (void *)0x0) {
    local_20[2] = 0;
    local_20[3] = 0;
    local_10 = (void *)0x0;
    local_c = (int *)0x0;
    local_8 = 0;
    local_2c[0] = -(uint)(*(int *)((int)local_24 + 8) != 0);
    local_2c[1] = local_2c[0];
    local_20[0] = 0;
    local_20[1] = 0;
    if (local_2c[0] != 0) {
      FUN_664bbeb0(local_24,local_2c + 1,local_20 + 1,local_20);
    }
    piVar3 = local_2c;
    piVar4 = local_20 + 2;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    while (local_20[2] != 0) {
      (**(code **)(*local_c + 8))(local_c);
      local_20[2] = local_20[3];
      if (local_20[3] != 0) {
        FUN_664bbeb0(local_10,local_20 + 3,&local_8,(int *)&local_c);
      }
    }
    puVar1 = (undefined4 *)*param_1;
    if (puVar1 != (undefined4 *)0x0) {
      thunk_FUN_664bbcb0(puVar1);
      operator_delete(puVar1);
    }
    *param_1 = 0;
  }
  return;
}


