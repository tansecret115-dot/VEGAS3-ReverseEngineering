/* Module: rnco3260.dll
   Function: FUN_6375e5b0
   Address: 6375e5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_6375e5b0(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,uint param_7,
            uint param_8,int param_9,int param_10,int param_11,int param_12,uint param_13,
            uint param_14,int param_15,int param_16)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  int local_8;
  
  iVar17 = param_12;
  iVar15 = param_9;
  iVar12 = param_4;
  iVar3 = FUN_6375e410((byte)param_1,param_2,param_3,(byte)param_4,param_5,param_6,param_7,param_8,
                       (byte)param_9,param_10,param_11,(byte)param_12,param_13,param_14,param_15,
                       param_16,&param_2,&local_8);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  iVar3 = FUN_6375e550(&param_5,&param_7,(int *)&param_13,&param_15,param_2);
  if ((iVar3 != 0) &&
     (iVar3 = FUN_6375e550(&param_6,&param_8,(int *)&param_14,&param_16,local_8), iVar3 != 0)) {
    if ((((param_13 & 1) != 0) || ((((param_14 & 1) != 0 || (iVar12 < 1)) || (iVar17 < 1)))) ||
       ((param_2 != 1 || (local_8 != 1)))) {
      return 0xffffffff;
    }
    if (((DAT_63793cb8 == 0 && DAT_63793cb4 == 0) && DAT_63791560 == 0) && DAT_637944e0 == 0) {
      puVar9 = (undefined4 *)(param_6 * iVar12 + param_5 + param_1);
      puVar4 = (undefined4 *)(param_14 * iVar17 + param_13 + iVar15);
      param_10 = 0;
      if (0 < (int)param_8) {
        do {
          puVar13 = puVar4;
          puVar16 = puVar9;
          for (uVar6 = param_7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar16 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar16 = puVar16 + 1;
          }
          puVar9 = (undefined4 *)((int)puVar9 + param_4);
          for (uVar6 = param_7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar16 = *(undefined1 *)puVar13;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
            puVar16 = (undefined4 *)((int)puVar16 + 1);
          }
          puVar4 = (undefined4 *)((int)puVar4 + param_12);
          param_10 = param_10 + 1;
          iVar17 = param_12;
          iVar12 = param_4;
          iVar15 = param_9;
        } while (param_10 < (int)param_8);
      }
      iVar12 = iVar12 * param_3;
      iVar3 = iVar17 * param_11;
      param_10 = 0;
      puVar9 = (undefined4 *)
               ((int)param_13 / 2 + iVar15 + (((int)param_14 / 2) * iVar17) / 2 + iVar3);
      puVar4 = (undefined4 *)
               ((int)param_5 / 2 + param_1 + (((int)param_6 / 2) * param_4) / 2 + iVar12);
      if (0 < (int)param_8 / 2) {
        do {
          puVar13 = (undefined4 *)(((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) + (int)puVar9);
          puVar16 = puVar4;
          for (uVar6 = (uint)((int)param_7 / 2) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar16 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar16 = puVar16 + 1;
          }
          for (uVar6 = (int)param_7 / 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar16 = *(undefined1 *)puVar13;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
            puVar16 = (undefined4 *)((int)puVar16 + 1);
          }
          puVar13 = puVar9;
          puVar16 = (undefined4 *)(((int)(iVar12 + (iVar12 >> 0x1f & 3U)) >> 2) + (int)puVar4);
          for (uVar6 = (uint)((int)param_7 / 2) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar16 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar16 = puVar16 + 1;
          }
          puVar9 = (undefined4 *)((int)puVar9 + param_12 / 2);
          for (uVar6 = (int)param_7 / 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar16 = *(undefined1 *)puVar13;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
            puVar16 = (undefined4 *)((int)puVar16 + 1);
          }
          puVar4 = (undefined4 *)((int)puVar4 + param_4 / 2);
          param_10 = param_10 + 1;
        } while (param_10 < (int)param_8 / 2);
        return 0;
      }
    }
    else {
      iVar12 = param_14 * iVar17 + param_13 + iVar15;
      puVar10 = (undefined1 *)(param_6 * param_4 + param_5 + param_1);
      param_9 = 0;
      if (0 < (int)param_8) {
        do {
          param_10 = 0;
          if (0 < (int)param_7) {
            puVar5 = puVar10;
            do {
              *puVar5 = *(undefined1 *)(&DAT_637940e0 + (byte)puVar5[iVar12 - (int)puVar10]);
              param_10 = param_10 + 1;
              puVar5 = puVar5 + 1;
              iVar17 = param_12;
            } while (param_10 < (int)param_7);
          }
          iVar12 = iVar12 + iVar17;
          puVar10 = puVar10 + param_4;
          param_9 = param_9 + 1;
        } while (param_9 < (int)param_8);
      }
      iVar7 = param_4 * param_3;
      iVar14 = iVar17 * param_11;
      iVar12 = (int)(iVar14 + (iVar14 >> 0x1f & 3U)) >> 2;
      iVar3 = (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
      pbVar11 = (byte *)((int)param_13 / 2 + iVar15 + (((int)param_14 / 2) * iVar17) / 2 + iVar14);
      iVar7 = (int)param_5 / 2 + param_1 + (((int)param_6 / 2) * param_4) / 2 + iVar7;
      param_9 = 0;
      if (DAT_637944e0 == 0) {
        if (0 < (int)param_8 / 2) {
          do {
            if (0 < (int)param_7 / 2) {
              pbVar8 = pbVar11;
              iVar15 = 0;
              do {
                pbVar8[iVar7 - (int)pbVar11] = *(byte *)(&DAT_63794500 + pbVar8[iVar12]);
                bVar1 = *pbVar8;
                iVar17 = iVar15 + 1;
                pbVar8 = pbVar8 + 1;
                *(undefined1 *)(iVar15 + iVar3 + iVar7) = *(undefined1 *)(&DAT_63792da0 + bVar1);
                iVar15 = iVar17;
              } while (iVar17 < (int)param_7 / 2);
            }
            pbVar11 = pbVar11 + param_12 / 2;
            iVar7 = iVar7 + param_4 / 2;
            param_9 = param_9 + 1;
          } while (param_9 < (int)param_8 / 2);
          return 0;
        }
      }
      else if (0 < (int)param_8 / 2) {
        do {
          if (0 < (int)param_7 / 2) {
            pbVar8 = pbVar11;
            iVar15 = 0;
            do {
              bVar1 = pbVar8[iVar12];
              bVar2 = *pbVar8;
              iVar17 = iVar15 + 1;
              pbVar8[iVar7 - (int)pbVar11] =
                   (&DAT_637903e0)[(&DAT_63794500)[bVar1] + (&DAT_63793cc0)[bVar2]];
              *(undefined *)(iVar15 + iVar3 + iVar7) =
                   (&DAT_637903e0)[(&DAT_637931a0)[bVar1] + (&DAT_63792da0)[bVar2]];
              pbVar8 = pbVar8 + 1;
              iVar15 = iVar17;
            } while (iVar17 < (int)param_7 / 2);
          }
          pbVar11 = pbVar11 + param_12 / 2;
          iVar7 = iVar7 + param_4 / 2;
          param_9 = param_9 + 1;
        } while (param_9 < (int)param_8 / 2);
        return 0;
      }
    }
  }
  return 0;
}


