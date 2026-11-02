/* Module: rnco3260.dll
   Function: FUN_637602e0
   Address: 637602e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_637602e0(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,uint param_7,
            uint param_8,int param_9,int param_10,int param_11,int param_12,uint param_13,
            uint param_14,int param_15,int param_16)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_8;
  
  iVar5 = param_12;
  iVar8 = param_9;
  iVar6 = param_4;
  iVar1 = FUN_6375e410((byte)param_1,param_2,param_3,(byte)param_4,param_5,param_6,param_7,param_8,
                       (byte)param_9,param_10,param_11,(byte)param_12,param_13,param_14,param_15,
                       param_16,&param_2,&local_8);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_6375e550(&param_5,&param_7,(int *)&param_13,&param_15,param_2);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_6375e550(&param_6,&param_8,(int *)&param_14,&param_16,local_8), iVar1 != 0)) {
    if (((param_13 & 1) != 0) || ((((param_14 & 1) != 0 || (iVar6 < 1)) || (iVar5 < 1)))) {
      return 0xffffffff;
    }
    puVar4 = (undefined4 *)(param_6 * iVar6 + param_5 + param_1);
    puVar2 = (undefined4 *)(param_14 * iVar5 + param_13 + iVar8);
    param_10 = 0;
    if (0 < (int)param_8) {
      do {
        puVar7 = puVar2;
        puVar9 = puVar4;
        for (uVar3 = param_7 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar4 = (undefined4 *)((int)puVar4 + param_4);
        for (uVar3 = param_7 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        puVar2 = (undefined4 *)((int)puVar2 + param_12);
        param_10 = param_10 + 1;
        iVar5 = param_12;
        iVar6 = param_4;
        iVar8 = param_9;
      } while (param_10 < (int)param_8);
    }
    iVar6 = iVar6 * param_3;
    iVar1 = iVar5 * param_11;
    param_10 = 0;
    puVar4 = (undefined4 *)((int)param_13 / 2 + iVar8 + (((int)param_14 / 2) * iVar5) / 2 + iVar1);
    puVar2 = (undefined4 *)((int)param_5 / 2 + param_1 + (((int)param_6 / 2) * param_4) / 2 + iVar6)
    ;
    if (0 < (int)param_8 / 2) {
      do {
        puVar7 = (undefined4 *)(((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) + (int)puVar4);
        puVar9 = puVar2;
        for (uVar3 = (uint)((int)param_7 / 2) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar3 = (int)param_7 / 2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        puVar7 = puVar4;
        puVar9 = (undefined4 *)(((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) + (int)puVar2);
        for (uVar3 = (uint)((int)param_7 / 2) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar4 = (undefined4 *)((int)puVar4 + param_12 / 2);
        for (uVar3 = (int)param_7 / 2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        puVar2 = (undefined4 *)((int)puVar2 + param_4 / 2);
        param_10 = param_10 + 1;
      } while (param_10 < (int)param_8 / 2);
      return 0;
    }
  }
  return 0;
}


