/* Module: rnco3260.dll
   Function: FUN_6375d090
   Address: 6375d090
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6375d090(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            undefined4 *param_6,undefined4 *param_7,int param_8,int param_9,int param_10,
            undefined4 param_11,uint param_12,undefined4 param_13,int param_14,int param_15,
            undefined *param_16,undefined *param_17)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_20;
  int local_14;
  int local_10;
  int local_c;
  
  puVar1 = param_6;
  local_14 = param_15 + param_8;
  iVar2 = param_15 >> 1;
  uVar3 = (int)param_7 * param_4;
  puVar8 = (undefined *)(param_5 >> 1);
  local_20 = param_5 * 3 - (int)puVar8;
  if ((param_14 + param_12 & 1) != 0) {
    local_20 = local_20 + param_5 * 2;
  }
  local_20 = local_20 / (param_14 * 2);
  if (param_5 == 0) {
    return;
  }
  if (((param_12 & 1) == 0) && (1 < param_14)) {
    local_30 = (undefined4 *)((int)param_6 + (int)param_1);
    puVar6 = local_30;
    iVar7 = param_5;
    while (iVar7 + -1 != 0) {
      puVar8 = puVar8 + param_14 * -2;
      if ((int)puVar8 < 0) {
        puVar8 = puVar8 + param_5;
        local_34 = (undefined4 *)((int)puVar6 + (int)param_6);
        iVar7 = iVar7 + -2;
        param_7 = local_34;
        if (iVar7 != 0) goto LAB_6375d660;
        break;
      }
      puVar6 = (undefined4 *)((int)puVar6 + (int)param_6);
      iVar7 = iVar7 + -1;
    }
  }
  goto LAB_6375d11b;
  while( true ) {
    param_7 = (undefined4 *)((int)param_7 + (int)param_6);
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) break;
LAB_6375d660:
    puVar8 = puVar8 + param_14 * -2;
    if ((int)puVar8 < 0) {
      (*(code *)param_17)(&DAT_63789758,&DAT_6378b758,param_1,puVar6,param_7,param_2,param_4,param_8
                          ,local_14,param_9,param_10,param_11,param_13);
      local_c = local_14 + param_15 * 2;
      local_14 = param_8 + param_15 * 2;
      param_8 = iVar7 - local_20;
      param_6 = puVar6;
      param_16 = puVar8;
      puVar6 = param_1;
      if (0 < param_8) goto LAB_6375d386;
      goto joined_r0x6375d5b1;
    }
  }
LAB_6375d11b:
  param_7 = param_1;
  (*(code *)param_16)(param_1,&DAT_6378b758,param_2,param_4,param_8,param_8,param_9,param_10,
                      param_11,param_13);
  local_c = local_14 + param_15;
  param_8 = param_5 - local_20;
  if (param_8 < 1) {
LAB_6375d60e:
    local_20 = param_8 + local_20;
    puVar6 = param_7;
    if (0 < local_20) {
      while (local_20 = local_20 + -1, local_20 != 0) {
        puVar6 = (undefined4 *)((int)puVar6 + (int)puVar1);
        puVar10 = param_7;
        puVar11 = puVar6;
        for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
      }
    }
    return;
  }
LAB_6375d17c:
  puVar10 = param_7;
  local_10 = param_9 + iVar2;
  param_10 = param_10 + iVar2;
  puVar6 = (undefined4 *)((int)param_7 + (int)puVar1);
  iVar7 = param_8 + -1;
  param_8 = 0;
  puVar11 = puVar6;
  if (iVar7 == 0) goto LAB_6375d60e;
  while (puVar8 = puVar8 + param_14 * -2, -1 < (int)puVar8) {
    puVar11 = (undefined4 *)((int)puVar11 + (int)puVar1);
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      param_8 = 0;
      goto LAB_6375d60e;
    }
  }
  puVar8 = puVar8 + param_5;
  puVar4 = (undefined4 *)((int)puVar11 + (int)puVar1);
  iVar7 = iVar7 + -1;
  param_8 = 0;
  param_1 = puVar4;
  if (iVar7 == 0) goto LAB_6375d60e;
  while (puVar8 = puVar8 + param_14 * -2, -1 < (int)puVar8) {
    param_1 = (undefined4 *)((int)param_1 + (int)puVar1);
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      param_8 = 0;
      goto LAB_6375d60e;
    }
  }
  param_16 = puVar8 + param_5;
  param_8 = iVar7 + -1;
  local_30 = (undefined4 *)((int)param_1 + (int)puVar1);
  param_6 = local_30;
  if (param_8 == 0) {
LAB_6375d207:
    (*(code *)param_17)(param_7,puVar11,param_1,param_6,param_7,param_2,param_4,local_14,local_c,
                        local_10,param_10,param_11,param_13);
    while (puVar6 != puVar11) {
      puVar10 = param_7;
      puVar9 = puVar6;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar6 = (undefined4 *)((int)puVar6 + (int)puVar1);
      for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    while (puVar6 = param_1, puVar4 != param_1) {
      puVar6 = puVar11;
      puVar10 = puVar4;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar10 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar10 = puVar10 + 1;
      }
      puVar4 = (undefined4 *)((int)puVar4 + (int)puVar1);
      for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
    }
joined_r0x6375d5b1:
    while (puVar6 = (undefined4 *)((int)puVar6 + (int)puVar1), puVar10 = param_6, puVar6 != param_6)
    {
      puVar10 = param_1;
      puVar11 = puVar6;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
    }
    while (puVar10 = (undefined4 *)((int)puVar10 + (int)puVar1), puVar10 != param_7) {
      puVar6 = param_6;
      puVar11 = puVar10;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
    }
    goto LAB_6375d60e;
  }
  while (param_16 = param_16 + param_14 * -2, -1 < (int)param_16) {
    param_6 = (undefined4 *)((int)param_6 + (int)puVar1);
    param_8 = param_8 + -1;
    if (param_8 == 0) {
      param_8 = 0;
      goto LAB_6375d207;
    }
  }
  param_16 = param_16 + param_5;
  param_8 = param_8 + -1;
  local_34 = (undefined4 *)((int)param_6 + (int)puVar1);
  param_7 = local_34;
  if (param_8 != 0) {
    while (param_16 = param_16 + param_14 * -2, -1 < (int)param_16) {
      param_7 = (undefined4 *)((int)param_7 + (int)puVar1);
      param_8 = param_8 + -1;
      if (param_8 == 0) {
        param_8 = 0;
        goto LAB_6375d3e6;
      }
    }
    (*(code *)param_17)(puVar10,puVar11,param_1,param_6,param_7,param_2,param_4,local_14,local_c,
                        local_10,param_10,param_11,param_13);
    local_14 = local_14 + param_15 * 2;
    local_c = local_c + param_15 * 2;
    while (puVar6 != puVar11) {
      puVar9 = puVar10;
      puVar12 = puVar6;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar12 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar6 = (undefined4 *)((int)puVar6 + (int)puVar1);
      for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
    }
    while (param_9 = local_10, puVar4 != param_1) {
      puVar6 = puVar11;
      puVar10 = puVar4;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar10 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar10 = puVar10 + 1;
      }
      puVar4 = (undefined4 *)((int)puVar4 + (int)puVar1);
      for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
    }
LAB_6375d386:
    param_16 = param_16 + param_5;
    while (local_30 != param_6) {
      puVar6 = param_1;
      puVar10 = local_30;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar10 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar10 = puVar10 + 1;
      }
      local_30 = (undefined4 *)((int)local_30 + (int)puVar1);
      for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
    }
    while (puVar8 = param_16, local_34 != param_7) {
      puVar6 = param_6;
      puVar10 = local_34;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar10 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar10 = puVar10 + 1;
      }
      local_34 = (undefined4 *)((int)local_34 + (int)puVar1);
      for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
    }
    goto LAB_6375d17c;
  }
LAB_6375d3e6:
  puVar6 = param_7;
  (*(code *)param_17)(puVar10,puVar11,param_1,param_6,param_7,param_2,param_4,local_14,local_c,
                      local_10,param_10,param_11,param_13);
  local_14 = local_14 + param_15 * 2;
  puVar4 = puVar10;
  while (puVar4 = (undefined4 *)((int)puVar4 + (int)puVar1), puVar9 = puVar11, puVar4 != puVar11) {
    puVar9 = puVar10;
    puVar12 = puVar4;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
  }
  while (puVar9 = (undefined4 *)((int)puVar9 + (int)puVar1), puVar10 = param_1, puVar9 != param_1) {
    puVar10 = puVar11;
    puVar4 = puVar9;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  while (puVar10 = (undefined4 *)((int)puVar10 + (int)puVar1), puVar11 = param_6, puVar10 != param_6
        ) {
    puVar11 = param_1;
    puVar4 = puVar10;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  while (puVar11 = (undefined4 *)((int)puVar11 + (int)puVar1), puVar11 != param_7) {
    puVar10 = param_6;
    puVar4 = puVar11;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  if ((param_14 + param_12 & 1) == 0) goto LAB_6375d60e;
  param_8 = param_8 + (local_20 >> 1);
  local_20 = local_20 - (local_20 >> 1);
  if (param_8 < 1) goto LAB_6375d60e;
  param_1 = param_7;
  do {
    iVar7 = param_8;
    param_8 = iVar7 + -1;
    param_6 = (undefined4 *)((int)param_7 + (int)puVar1);
    if (param_8 == 0) {
      param_7 = (undefined4 *)((int)param_6 + (int)puVar1);
      param_8 = -1;
      goto LAB_6375d56a;
    }
    param_16 = param_16 + param_14 * -2;
    param_7 = param_6;
  } while (-1 < (int)param_16);
  puVar8 = param_16 + param_5;
  param_8 = iVar7 + -2;
  while ((param_7 = (undefined4 *)((int)param_7 + (int)puVar1), param_8 != 0 &&
         (puVar8 = puVar8 + param_14 * -2, -1 < (int)puVar8))) {
    param_8 = param_8 + -1;
  }
LAB_6375d56a:
  (*(code *)param_17)(puVar6,param_6,param_7,&DAT_63789758,&DAT_6378b758,param_2,param_4,local_14,
                      local_14,local_10 + iVar2,param_10 + iVar2,param_11,param_13);
  goto joined_r0x6375d5b1;
}


