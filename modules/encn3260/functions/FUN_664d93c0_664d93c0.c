/* Module: encn3260.dll
   Function: FUN_664d93c0
   Address: 664d93c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664d93c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_38 [5];
  int local_24 [2];
  void *local_1c;
  void *local_18;
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = param_1 + 9;
  local_24[0] = 0;
  local_24[1] = 0;
  local_1c = (void *)0x0;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_8 = param_1;
  FUN_6648f710(local_38,local_c,-(uint)(param_1[0xb] != 0));
  piVar3 = local_38;
  piVar4 = local_24;
  for (iVar2 = 5; puVar1 = local_c, iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  FUN_6648f710(local_38,local_c,0);
  if (local_24[0] != local_38[0]) {
    do {
      operator_delete(local_18);
      local_24[0] = local_24[1];
      if (local_24[1] != 0) {
        FUN_664bbeb0(local_1c,local_24 + 1,&local_14,(int *)&local_18);
      }
      FUN_6648f710(local_38,puVar1,0);
    } while (local_24[0] != local_38[0]);
  }
  local_10 = local_8 + 3;
  FUN_6648f710(local_38,local_10,-(uint)(local_8[5] != 0));
  piVar3 = local_38;
  piVar4 = local_24;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  while (puVar1 = local_8, local_24[0] != 0) {
    if (local_18 != (void *)0x0) {
      operator_delete(local_18);
    }
    local_24[0] = local_24[1];
    if (local_24[1] != 0) {
      FUN_664bbeb0(local_1c,local_24 + 1,&local_14,(int *)&local_18);
    }
  }
  if ((void *)local_8[2] != (void *)0x0) {
    operator_delete((void *)local_8[2]);
    puVar1[2] = 0;
  }
  if ((void *)*puVar1 != (void *)0x0) {
    operator_delete((void *)*puVar1);
    *puVar1 = 0;
  }
  thunk_FUN_664bbcb0(local_c);
  thunk_FUN_664bbcb0(local_10);
  return;
}


