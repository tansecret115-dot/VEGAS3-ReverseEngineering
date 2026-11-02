/* Module: erv33260.dll
   Function: FUN_6707f0a0
   Address: 6707f0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6707f0a0(void *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  uVar1 = 0;
  local_c = 0;
  local_10 = 0;
  local_8 = 0;
  local_14 = 0;
  local_1c = 0;
  if (*(int *)((int)param_1 + 0xa4) != 0) {
    do {
      local_18 = 0;
      if (*(int *)((int)param_1 + 0xa0) != 0) {
        iVar3 = uVar1 << 4;
        iVar2 = uVar1 * 0xc;
        do {
          uVar1 = FUN_6707f1d0(param_1,uVar1);
          iVar2 = iVar2 + 0xc;
          iVar3 = iVar3 + 0x10;
          *(char *)(*(int *)((int)param_1 + 0x88) + -7 + iVar2) = (char)uVar1;
          *(char *)(*(int *)((int)param_1 + 0x8c) + -7 + iVar2) = (char)uVar1;
          *(int *)(*(int *)((int)param_1 + 0x90) + -0x10 + iVar3) = local_10;
          local_10 = local_10 + 0x10;
          *(int *)(*(int *)((int)param_1 + 0x90) + -0xc + iVar3) = local_8;
          *(int *)(*(int *)((int)param_1 + 0x90) + -8 + iVar3) = local_14;
          local_8 = local_8 + 8;
          local_14 = local_14 + 4;
          local_18 = local_18 + 1;
          uVar1 = local_c + 1;
          local_c = uVar1;
        } while (local_18 < *(uint *)((int)param_1 + 0xa0));
      }
      local_10 = local_10 +
                 (*(int *)((int)param_1 + 0xa0) * 0xfffffff + *(int *)((int)param_1 + 0x9c)) * 0x10;
      local_8 = local_8 + (*(int *)((int)param_1 + 0xa0) * 0x1fffffff +
                          *(int *)((int)param_1 + 0x9c)) * 8;
      local_14 = *(int *)((int)param_1 + 0xa8) * 3 + local_14;
      local_1c = local_1c + 1;
    } while (local_1c < *(uint *)((int)param_1 + 0xa4));
  }
  FUN_6707f290((int)param_1);
  return;
}


