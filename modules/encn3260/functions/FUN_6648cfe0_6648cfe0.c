/* Module: encn3260.dll
   Function: FUN_6648cfe0
   Address: 6648cfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6648cfe0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int local_30 [2];
  void *local_28;
  int local_24 [4];
  void *local_14;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  local_8 = param_1;
  local_28 = *(void **)(param_1 + 8);
  local_24[2] = 0;
  local_24[3] = 0;
  local_14 = (void *)0x0;
  local_10 = (undefined4 *)0x0;
  local_c = 0;
  local_30[0] = -(uint)(*(int *)((int)local_28 + 8) != 0);
  local_30[1] = local_30[0];
  local_24[0] = 0;
  local_24[1] = 0;
  if (local_30[0] != 0) {
    FUN_664bbeb0(local_28,local_30 + 1,local_24 + 1,local_24);
  }
  piVar3 = local_30;
  piVar4 = local_24 + 2;
  for (iVar1 = 5; puVar2 = local_10, iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  while (local_24[2] != 0) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
      puVar2 = local_10;
    }
    local_24[2] = local_24[3];
    if (local_24[3] != 0) {
      FUN_664bbeb0(local_14,local_24 + 3,&local_c,(int *)&local_10);
      puVar2 = local_10;
    }
  }
  puVar2 = *(undefined4 **)(local_8 + 8);
  if (puVar2 != (undefined4 *)0x0) {
    thunk_FUN_664bbcb0(puVar2);
    operator_delete(puVar2);
  }
  return;
}


