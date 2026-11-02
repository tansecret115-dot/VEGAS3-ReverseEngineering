/* Module: rnco3260.dll
   Function: FUN_6375ce30
   Address: 6375ce30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6375ce30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,int param_6,int param_7,int param_8,undefined4 *param_9,
            undefined4 *param_10,undefined4 param_11,uint param_12,undefined4 param_13,uint param_14
            ,uint param_15,undefined *param_16,undefined *param_17)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_c;
  int local_8;
  
  puVar7 = param_10;
  puVar6 = param_9;
  puVar1 = (undefined4 *)(param_6 + (int)param_1);
  puVar2 = (undefined4 *)((int)puVar1 + param_6);
  puVar3 = (undefined *)(param_15 + param_8);
  iVar10 = (int)param_15 >> 1;
  if (param_14 != 0) {
    if (((param_12 & 1) == 0) && (1 < (int)param_14)) {
      (*(code *)param_17)(&DAT_63789758,&DAT_6378b758,param_1,puVar1,puVar2,param_2,param_4,param_8,
                          puVar3,param_9,param_10,param_11,param_13);
      iVar9 = param_6 * 4;
      param_14 = param_14 - 2;
      param_9 = puVar2;
      param_10 = (undefined4 *)((int)puVar2 + param_6);
      param_16 = (undefined *)(param_8 + param_15 * 2);
      uVar8 = param_15 * 2;
    }
    else {
      (*(code *)param_16)(param_1,&DAT_6378b758,param_2,param_4,param_8,param_8,param_9,param_10,
                          param_11,param_13);
      iVar9 = param_6 * 2;
      param_9 = param_1;
      param_14 = param_14 - 1;
      param_10 = puVar1;
      param_16 = puVar3;
      uVar8 = param_15;
    }
    local_8 = (int)puVar1 + iVar9;
    local_c = (int)param_1 + iVar9;
    param_12 = iVar10 + (int)puVar6;
    param_8 = iVar10 + (int)puVar7;
    param_1 = (undefined4 *)(puVar3 + uVar8);
    iVar9 = (int)puVar2 + iVar9;
    if (1 < (int)param_14) {
      iVar4 = param_6 * 4;
      iVar5 = param_15 * 2;
      param_15 = param_14 >> 1;
      do {
        (*(code *)param_17)(param_9,param_10,local_c,local_8,iVar9,param_2,param_4,param_16,param_1,
                            param_12,param_8,param_11,param_13);
        param_1 = (undefined4 *)((int)param_1 + iVar5);
        param_16 = param_16 + iVar5;
        param_8 = param_8 + iVar10;
        param_9 = param_9 + param_6;
        param_12 = param_12 + iVar10;
        local_c = local_c + iVar4;
        local_8 = local_8 + iVar4;
        param_10 = param_10 + param_6;
        iVar9 = iVar9 + iVar4;
        param_14 = param_14 - 2;
        param_15 = param_15 - 1;
      } while (param_15 != 0);
    }
    if (param_14 != 0) {
      (*(code *)param_17)(param_9,param_10,local_c,&DAT_63789758,&DAT_6378b758,param_2,param_4,
                          param_16,param_16,param_12,param_8,param_11,param_13);
      param_9 = (undefined4 *)((int)param_9 + param_6 * 2);
      param_10 = (undefined4 *)((int)param_10 + param_6 * 2);
    }
    for (uVar8 = (uint)(param_7 * param_4) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *param_10 = *param_9;
      param_9 = param_9 + 1;
      param_10 = param_10 + 1;
    }
    for (uVar8 = param_7 * param_4 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)param_10 = *(undefined1 *)param_9;
      param_9 = (undefined4 *)((int)param_9 + 1);
      param_10 = (undefined4 *)((int)param_10 + 1);
    }
  }
  return;
}


