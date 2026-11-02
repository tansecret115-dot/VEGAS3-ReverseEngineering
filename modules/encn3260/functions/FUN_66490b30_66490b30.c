/* Module: encn3260.dll
   Function: FUN_66490b30
   Address: 66490b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66490b30(int param_1)

{
  undefined4 uVar1;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(*(int **)(param_1 + 0x10),&local_c);
    if (999999 < local_8) {
      local_c = local_8 / 1000000 + local_c;
      local_8 = local_8 % 1000000;
    }
    local_8 = local_8 + *(int *)(param_1 + 0x82);
    if (999999 < local_8) {
      local_c = local_c + local_8 / 1000000;
      local_8 = local_8 % 1000000;
    }
    if (*(int *)(param_1 + 0x9a) == 0) {
      *(undefined4 *)(param_1 + 0x9a) = 1;
      uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))
                        (*(int **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x92),local_c,local_8);
      *(undefined4 *)(param_1 + 0x8e) = uVar1;
    }
  }
  return;
}


