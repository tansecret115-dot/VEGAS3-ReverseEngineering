/* Module: rv203260.dll
   Function: FUN_638a7ea0
   Address: 638a7ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_638a7ea0(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint local_1b0 [51];
  uint local_e4 [50];
  uint local_1c;
  uint local_18;
  double local_14;
  uint local_c;
  undefined4 uStack_8;
  
  uVar7 = param_3;
  uVar5 = 0;
  puVar3 = local_1b0;
  for (iVar2 = 0x69; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_3 = *param_1;
  if (param_3 != 0) {
    puVar3 = local_1b0 + 1;
    puVar6 = param_1 + 0x33;
    do {
      uVar4 = *puVar6;
      if (uVar7 < uVar4) {
        uVar1 = (uVar7 - uVar4) - 1;
      }
      else {
        uVar1 = uVar7 - uVar4;
      }
      if (uVar1 < 1000) {
        uVar1 = puVar6[-0x32];
        puVar3[0x32] = uVar4;
        *puVar3 = uVar1;
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar6 = puVar6 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  if (uVar5 < 0x32) {
    local_e4[uVar5] = uVar7;
    local_1b0[uVar5 + 1] = param_2;
    uVar5 = uVar5 + 1;
  }
  uVar4 = 0;
  uVar7 = 0;
  local_1b0[0] = uVar5;
  local_1c = 0;
  local_18 = 0;
  if (uVar5 != 0) {
    puVar3 = local_1b0;
    uVar1 = uVar5;
    do {
      puVar3 = puVar3 + 1;
      local_18 = *puVar3;
      if (uVar7 < local_18) {
        uVar7 = local_18;
      }
      uVar4 = uVar4 + *puVar3;
      uVar1 = uVar1 - 1;
      local_1c = uVar4;
    } while (uVar1 != 0);
  }
  local_c = uVar5;
  uStack_8 = 0;
  local_14 = (double)uVar4 / (double)uVar5;
  puVar3 = local_1b0;
  for (iVar2 = 0x69; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


