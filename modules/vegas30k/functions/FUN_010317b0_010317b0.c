/* Module: vegas30k.dll
   Function: FUN_010317b0
   Address: 010317b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010317b0(int param_1,undefined4 *param_2,int param_3,undefined4 *param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_1 < 1) {
    return param_3;
  }
  local_18 = param_2;
  local_1c = param_4;
  local_c = param_1;
  do {
    if (param_3 < param_5) {
      local_20 = param_5 / 2;
      local_14 = 0;
      iVar3 = 0;
      puVar1 = local_1c;
      puVar2 = local_18;
      if (0 < param_5) {
        local_10 = param_5;
        do {
          local_20 = local_20 - param_3;
          if (local_20 < 0) {
            local_20 = local_20 + param_5;
            *puVar2 = *puVar1;
            puVar2[1] = puVar1[1];
            puVar2 = puVar2 + param_1 * 2;
            local_14 = local_14 + 1;
          }
          puVar1 = puVar1 + param_1 * 2;
          local_10 = local_10 + -1;
          iVar3 = local_14;
        } while (local_10 != 0);
      }
      if (iVar3 < param_3) {
        iVar3 = param_3 - iVar3;
        do {
          *puVar2 = puVar1[param_1 * -2];
          puVar2[1] = (puVar1 + param_1 * -2)[1];
          puVar2 = puVar2 + param_1 * 2;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else {
      iVar3 = 0;
      local_20 = param_3 / 2;
      puVar1 = local_1c + (param_5 + -1) * param_1 * 2;
      local_14 = 0;
      puVar2 = local_18 + (param_3 + -1) * param_1 * 2;
      if (0 < param_5) {
        do {
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
          puVar2 = puVar2 + param_1 * -2;
          while (iVar3 = iVar3 + 1, iVar3 < param_3) {
            local_20 = local_20 - param_5;
            if (local_20 < 0) goto LAB_01031906;
            *puVar2 = *puVar1;
            puVar2[1] = puVar1[1];
            puVar2 = puVar2 + param_1 * -2;
          }
          local_14 = param_5;
LAB_01031906:
          local_20 = local_20 + param_3;
          puVar1 = puVar1 + param_1 * -2;
          local_14 = local_14 + 1;
        } while (local_14 < param_5);
      }
      if (iVar3 < param_3) {
        iVar3 = param_3 - iVar3;
        do {
          *puVar2 = puVar1[param_1 * 2];
          puVar2[1] = (puVar1 + param_1 * 2)[1];
          puVar2 = puVar2 + param_1 * -2;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    local_1c = local_1c + 2;
    local_18 = local_18 + 2;
    local_c = local_c + -1;
    if (local_c == 0) {
      return param_3;
    }
  } while( true );
}


