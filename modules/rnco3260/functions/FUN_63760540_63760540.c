/* Module: rnco3260.dll
   Function: FUN_63760540
   Address: 63760540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_63760540(undefined4 *param_1,int param_2,undefined4 *param_3,int param_4,uint param_5,
            uint param_6,uint param_7,uint param_8,undefined4 *param_9,int param_10,
            undefined1 *param_11,undefined1 *param_12,uint param_13,uint param_14,int param_15,
            int param_16)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int local_10;
  int local_c;
  int local_8;
  
  puVar9 = param_12;
  puVar2 = param_9;
  iVar1 = FUN_6375e410((byte)param_1,param_2,(int)param_3,(byte)param_4,param_5,param_6,param_7,
                       param_8,(byte)param_9,param_10,(int)param_11,(byte)param_12,param_13,param_14
                       ,param_15,param_16,&local_c,&local_10);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_6375e550(&param_5,&param_7,(int *)&param_13,&param_15,local_c);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_6375e550(&param_6,&param_8,(int *)&param_14,&param_16,local_10), iVar1 != 0)) {
    if (((param_13 & 1) != 0) || ((((param_14 & 1) != 0 || (param_4 < 1)) || ((int)puVar9 < 1)))) {
      return 0xffffffff;
    }
    puVar2 = (undefined4 *)(param_14 * (int)puVar9 + param_13 + (int)puVar2);
    param_10 = 0;
    puVar6 = (undefined4 *)(param_6 * param_4 + param_5 + (int)param_1);
    if (0 < (int)param_8) {
      do {
        puVar8 = puVar2;
        puVar10 = puVar6;
        for (uVar5 = param_7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar5 = param_7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        puVar2 = (undefined4 *)((int)puVar2 + (int)param_12);
        puVar6 = (undefined4 *)((int)puVar6 + param_4);
        param_10 = param_10 + 1;
        puVar9 = param_12;
      } while (param_10 < (int)param_8);
    }
    iVar11 = param_4 * (int)param_3;
    iVar7 = (int)puVar9 * (int)param_11;
    local_8 = (int)(iVar7 + (iVar7 >> 0x1f & 0xfU)) >> 4;
    iVar1 = (int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2;
    iVar3 = ((int)(param_14 + ((int)param_14 >> 0x1f & 3U)) >> 2) * (int)puVar9;
    puVar9 = (undefined1 *)
             ((int)param_9 +
             iVar7 + ((int)(param_13 + ((int)param_13 >> 0x1f & 3U)) >> 2) +
                     ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2));
    puVar2 = (undefined4 *)
             ((int)param_1 + iVar11 + (int)param_5 / 2 + (((int)param_6 / 2) * param_4) / 2);
    if ((param_14 & 2) != 0) {
      param_11 = puVar9;
      FUN_637608b0((undefined1 *)puVar2,puVar9,(byte)param_13,param_7);
      FUN_637608b0((undefined1 *)(iVar1 + (int)puVar2),puVar9 + local_8,(byte)param_13,param_7);
      puVar9 = puVar9 + ((int)(param_12 + ((int)param_12 >> 0x1f & 3)) >> 2);
      puVar2 = (undefined4 *)((int)puVar2 + param_4 / 2);
      param_8 = param_8 - 2;
    }
    param_10 = 0;
    param_11 = puVar9;
    if (0 < (int)(param_8 + ((int)param_8 >> 0x1f & 3U)) >> 2) {
      param_3 = (undefined4 *)(iVar1 + (int)puVar2);
      puVar4 = param_12 + ((int)param_12 >> 0x1f & 3);
      param_9 = (undefined4 *)((int)puVar2 + param_4 / 2 + iVar1);
      param_1 = (undefined4 *)(param_4 / 2 + (int)puVar2);
      param_12 = puVar9 + local_8;
      do {
        FUN_637608b0((undefined1 *)puVar2,param_11,(byte)param_13,param_7);
        puVar6 = puVar2;
        puVar8 = param_1;
        for (uVar5 = (uint)((int)param_7 / 2) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = (int)param_7 / 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        FUN_637608b0((undefined1 *)param_3,param_12,(byte)param_13,param_7);
        puVar6 = param_3;
        puVar8 = param_9;
        for (uVar5 = (uint)((int)param_7 / 2) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = (int)param_7 / 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        param_11 = param_11 + ((int)puVar4 >> 2);
        param_12 = param_12 + ((int)puVar4 >> 2);
        puVar2 = (undefined4 *)((int)puVar2 + param_4);
        param_1 = (undefined4 *)((int)param_1 + param_4);
        param_3 = (undefined4 *)((int)param_3 + param_4);
        param_9 = (undefined4 *)((int)param_9 + param_4);
        param_10 = param_10 + 1;
      } while (param_10 < (int)(param_8 + ((int)param_8 >> 0x1f & 3U)) >> 2);
    }
    puVar9 = param_11;
    if ((param_8 & 2) != 0) {
      FUN_637608b0((undefined1 *)puVar2,param_11,(byte)param_13,param_7);
      FUN_637608b0((undefined1 *)(iVar1 + (int)puVar2),puVar9 + local_8,(byte)param_13,param_7);
      return 0;
    }
  }
  return 0;
}


