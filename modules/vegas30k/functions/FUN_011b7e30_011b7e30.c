/* Module: vegas30k.dll
   Function: FUN_011b7e30
   Address: 011b7e30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011b7e30(uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint local_4;
  
  iVar1 = param_1;
  uVar2 = 1;
  local_4 = 0;
  uVar3 = *(uint *)(param_1 + 0xc);
  if (uVar3 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(param_1 + 0x14) == 0) goto LAB_011b8030;
    if (param_2 != 1) {
      puVar5 = (uint *)(param_1 + 8);
      param_1 = 0;
      if (*puVar5 < uVar3) {
        do {
          if ((param_2 <= param_1) || (*param_4 <= param_1)) break;
          puVar5 = *(uint **)(*(int *)(*(int *)(*(int *)(iVar1 + 0x14) + 0x14) + 8) +
                             *(int *)(iVar1 + 8) * 4);
          if (puVar5 != (uint *)0x0) {
            uVar3 = *param_3;
            if (*puVar5 <= *param_3) {
              uVar3 = *puVar5;
            }
            puVar6 = param_3;
            for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(char *)puVar6 = (char)*puVar5;
              puVar5 = (uint *)((int)puVar5 + 1);
              puVar6 = (uint *)((int)puVar6 + 1);
            }
            *param_3 = uVar3;
            local_4 = local_4 + 1;
            *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
            uVar2 = 0;
          }
          uVar3 = *(int *)(iVar1 + 8) + 1;
          param_1 = param_1 + 1;
          param_3 = param_3 + 199;
          *(uint *)(iVar1 + 8) = uVar3;
        } while (uVar3 < *(uint *)(iVar1 + 0xc));
      }
      goto LAB_011b8030;
    }
    if ((uVar3 <= *(uint *)(param_1 + 8)) ||
       (puVar5 = *(uint **)(*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x14) + 8) +
                           *(uint *)(param_1 + 8) * 4), puVar5 == (uint *)0x0)) goto LAB_011b8030;
    uVar3 = *puVar5;
    uVar4 = *param_3;
    if (uVar3 <= uVar4) {
      local_4 = 1;
      puVar6 = param_3;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar6 = (char)*puVar5;
        puVar5 = (uint *)((int)puVar5 + 1);
        puVar6 = (uint *)((int)puVar6 + 1);
      }
      *param_3 = uVar3;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      uVar2 = 0;
      goto LAB_011b8030;
    }
  }
  else {
    if (param_2 != 1) {
      puVar5 = (uint *)(param_1 + 8);
      param_1 = 0;
      if (*puVar5 < uVar3) {
        do {
          if ((param_2 <= param_1) || (*param_4 <= param_1)) break;
          puVar5 = *(uint **)(*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x14) + 8) +
                             *(int *)(iVar1 + 8) * 4);
          if (puVar5 != (uint *)0x0) {
            uVar3 = *param_3;
            if (*puVar5 <= *param_3) {
              uVar3 = *puVar5;
            }
            puVar6 = param_3;
            for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(char *)puVar6 = (char)*puVar5;
              puVar5 = (uint *)((int)puVar5 + 1);
              puVar6 = (uint *)((int)puVar6 + 1);
            }
            *param_3 = uVar3;
            local_4 = local_4 + 1;
            *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
            uVar2 = 0;
          }
          uVar3 = *(int *)(iVar1 + 8) + 1;
          param_1 = param_1 + 1;
          param_3 = param_3 + 199;
          *(uint *)(iVar1 + 8) = uVar3;
        } while (uVar3 < *(uint *)(iVar1 + 0xc));
      }
      goto LAB_011b8030;
    }
    if ((uVar3 <= *(uint *)(param_1 + 8)) ||
       (puVar5 = *(uint **)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x14) + 8) +
                           *(uint *)(param_1 + 8) * 4), puVar5 == (uint *)0x0)) goto LAB_011b8030;
    uVar4 = *param_3;
    if (*puVar5 <= *param_3) {
      uVar4 = *puVar5;
    }
  }
  local_4 = 1;
  puVar6 = param_3;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)puVar6 = (char)*puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  *param_3 = uVar4;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  uVar2 = 0;
LAB_011b8030:
  if (param_4 != (uint *)0x0) {
    *param_4 = local_4;
  }
  return uVar2;
}


