/* Module: erv23260.dll
   Function: FUN_63814d60
   Address: 63814d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_63814d60(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int *param_8,int *param_9,int *param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  code *local_8;
  
  local_8 = (code *)0x0;
  switch(*(undefined4 *)(param_7 + 0x18)) {
  case 0:
  case 1:
  case 2:
    local_8 = FUN_63815a40;
    break;
  case 3:
    local_8 = FUN_638161b0;
  }
  local_18 = 0;
  local_14 = 0;
  local_2c = param_9 + 3;
  local_30 = 4;
  do {
    local_c = *param_9 + *param_8;
    local_10 = param_9[1] + param_8[1];
    if (local_c + -1 < param_3) {
      local_c = local_c + 1;
    }
    if (param_5 < local_c + 1) {
      local_c = local_c + -1;
    }
    if (local_10 + -1 < param_4) {
      local_10 = local_10 + 1;
    }
    if (param_6 < local_10 + 1) {
      local_10 = local_10 + -1;
    }
    iVar4 = 0x7fffffff;
    local_28 = 0;
    local_24 = 0;
    param_7 = -1;
    local_20 = 3;
    iVar5 = local_c + (local_10 + -1 + (local_14 & 2) * 4) * param_2 + (local_14 & 1) * 8 + param_1;
    iVar1 = *(int *)((int)this + 0xe0);
    do {
      iVar3 = -1;
      local_1c = 3;
      do {
        iVar2 = (*local_8)(iVar1 + ((local_14 & 1) + (local_14 & 2) * 8) * 8,iVar5 + iVar3,0x10,
                           param_2,iVar4);
        if (iVar2 < iVar4) {
          local_28 = param_7;
          iVar4 = iVar2;
          local_24 = iVar3;
        }
        iVar3 = iVar3 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      iVar5 = iVar5 + param_2;
      param_7 = param_7 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    local_2c[-1] = (local_c + local_24) - *param_9;
    *local_2c = (local_10 + local_28) - param_9[1];
    local_2c = local_2c + 2;
    local_18 = local_18 + iVar4;
    local_14 = local_14 + 1;
    local_30 = local_30 + -1;
  } while (local_30 != 0);
  *param_10 = local_18;
  return;
}


