/* Module: rnco3260.dll
   Function: FUN_6375cb70
   Address: 6375cb70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

void __cdecl
FUN_6375cb70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            int param_6,int param_7,int param_8,int param_9,int param_10,uint param_11,int param_12,
            undefined4 param_13,int param_14,int param_15,undefined *param_16)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = param_8;
  iVar4 = param_8 + param_15;
  uVar1 = param_7 * param_4;
  local_10 = param_9;
  local_c = param_10;
  iVar8 = param_5 >> 1;
  iVar2 = param_5 - iVar8;
  if ((param_12 + param_14 & 1U) != 0) {
    iVar2 = iVar2 + param_5;
  }
  if (param_5 != 0) {
    param_7 = param_5 - iVar2 / param_14;
    if (0 < param_7) {
      local_14 = iVar4;
      puVar3 = param_1;
      if ((param_11 & 1) == 0) goto joined_r0x6375cc3e;
      (*(code *)param_16)(param_1,&DAT_6378b758,param_2,param_4,param_8,param_8,param_9,param_10,
                          param_11,param_13);
      local_14 = iVar4 + param_15;
      local_18 = iVar4;
LAB_6375cd84:
      local_c = (param_15 >> 1) + param_10;
      local_10 = (param_15 >> 1) + param_9;
      puVar3 = param_1;
      while( true ) {
        param_7 = param_7 + -1;
        if (param_7 == 0) {
          param_7 = 0;
          if ((param_14 + param_12 & 1U) == 0) goto LAB_6375ccb1;
          param_1 = (undefined4 *)((int)param_1 + param_6);
          param_7 = 0;
          goto LAB_6375cddc;
        }
        puVar3 = (undefined4 *)(param_6 + (int)puVar3);
        iVar8 = iVar8 - param_14;
        if (iVar8 < 0) break;
        puVar7 = param_1;
        puVar6 = puVar3;
        for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        param_1 = (undefined4 *)((int)param_1 + param_6);
      }
      iVar8 = iVar8 + param_5;
      param_1 = (undefined4 *)((int)param_1 + param_6);
      puVar3 = param_1;
joined_r0x6375cc3e:
      param_7 = param_7 + -1;
      param_1 = (undefined4 *)((int)param_1 + param_6);
      if (param_7 != 0) goto LAB_6375cc40;
      param_1 = (undefined4 *)((int)param_1 + param_6);
      param_7 = -1;
      (*(code *)param_16)(puVar3,param_1,param_2,param_4,local_18,local_14,local_10,local_c,param_11
                          ,param_13);
      puVar7 = puVar3;
      while (puVar7 = (undefined4 *)(param_6 + (int)puVar7), puVar7 != param_1) {
        puVar6 = puVar3;
        puVar9 = puVar7;
        for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        puVar3 = (undefined4 *)((int)puVar3 + param_6);
      }
      goto LAB_6375ccb1;
    }
LAB_6375cddc:
    param_7 = param_7 + -1;
    (*(code *)param_16)(param_1,&DAT_6378b758,param_2,param_4,local_18,local_18,local_10,local_c,
                        param_11,param_13);
LAB_6375ccb1:
    puVar3 = param_1;
    for (iVar8 = param_7 + iVar2 / param_14; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar3 = (undefined4 *)((int)puVar3 + param_6);
      puVar7 = param_1;
      puVar6 = puVar3;
      for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      param_1 = (undefined4 *)((int)param_1 + param_6);
    }
  }
  return;
LAB_6375cc40:
  iVar8 = iVar8 - param_14;
  if (iVar8 < 0) goto LAB_6375ccf6;
  goto joined_r0x6375cc3e;
LAB_6375ccf6:
  iVar8 = iVar8 + param_5;
  (*(code *)param_16)(puVar3,param_1,param_2,param_4,local_18,local_14,local_10,local_c,param_11,
                      param_13);
  local_18 = local_18 + param_15 * 2;
  local_14 = local_14 + param_15 * 2;
  puVar7 = puVar3;
  while (puVar7 = (undefined4 *)(param_6 + (int)puVar7), param_9 = local_10, param_10 = local_c,
        puVar7 != param_1) {
    puVar6 = puVar3;
    puVar9 = puVar7;
    for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    puVar3 = (undefined4 *)((int)puVar3 + param_6);
  }
  goto LAB_6375cd84;
}


