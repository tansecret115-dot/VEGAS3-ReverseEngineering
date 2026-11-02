/* Module: aviplug.dll
   Function: FUN_5f967600
   Address: 5f967600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f967600(undefined4 param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar1 = *param_3 * 3 + param_2 + param_3[1] * param_5;
  if (*param_4 == 0x20) {
    local_1c = 8;
    do {
      local_10 = 4;
      do {
        local_c = 2;
        do {
          iVar2 = iVar1;
          FUN_5f96bc10(iVar2);
          iVar1 = iVar2 + 0xc;
          local_c = local_c + -1;
        } while (local_c != 0);
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_1c = local_1c + -1;
      iVar1 = iVar2 + -0x54 + param_5;
    } while (local_1c != 0);
    return;
  }
  local_14 = 0;
  do {
    local_18 = 0;
    do {
      local_c = 2;
      do {
        local_10 = 2;
        do {
          iVar2 = iVar1;
          FUN_5f96bc10(iVar2);
          iVar1 = iVar2 + 0xc;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
        local_c = local_c + -1;
      } while (local_c != 0);
      iVar1 = iVar2 + -0x24 + param_5;
      local_18 = local_18 + 1;
    } while (local_18 < 8);
    local_14 = local_14 + 0x10;
  } while (local_14 < 0x20);
  return;
}


