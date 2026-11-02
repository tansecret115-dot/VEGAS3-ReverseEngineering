/* Module: encn3260.dll
   Function: FUN_6648f2b0
   Address: 6648f2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6648f2b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(*(int **)(param_1 + 0x10),&local_14);
  iVar3 = local_10;
  iVar2 = local_14;
  if (999999 < local_10) {
    iVar2 = local_10 / 1000000 + local_14;
    iVar3 = local_10 % 1000000;
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    local_8 = rand();
    local_c = ftol();
    iVar2 = iVar2 + local_c;
    local_10 = ftol();
    local_14 = iVar2;
    for (local_10 = iVar3 + local_10; 999999 < local_10; local_10 = local_10 + -1000000) {
      local_14 = local_14 + 1;
    }
  }
  else {
    local_10 = FUN_664d9c30(*(void **)(param_1 + 0x8c),0xb4);
    local_14 = 0;
    local_10 = local_10 * 1000;
    if (999999 < local_10) {
      local_14 = local_10 / 1000000;
      local_10 = local_10 % 1000000;
      local_c = local_14;
    }
    local_14 = iVar2 + local_14;
    for (local_10 = iVar3 + local_10; 999999 < local_10; local_10 = local_10 + -1000000) {
      local_14 = local_14 + 1;
    }
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))
                    (*(int **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x78),local_14,local_10);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  *(undefined4 *)(param_1 + 0x7c) = 1;
  return;
}


