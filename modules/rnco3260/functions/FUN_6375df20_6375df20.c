/* Module: rnco3260.dll
   Function: FUN_6375df20
   Address: 6375df20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_6375df20(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,uint param_7,
            uint param_8,int param_9,int param_10,int param_11,int param_12,uint param_13,
            uint param_14,int param_15,int param_16)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  int local_8;
  
  iVar11 = param_12;
  iVar16 = param_9;
  iVar12 = param_4;
  iVar4 = FUN_6375e410((byte)param_1,param_2,param_3,(byte)param_4,param_5,param_6,param_7,param_8,
                       (byte)param_9,param_10,param_11,(byte)param_12,param_13,param_14,param_15,
                       param_16,&param_2,&local_8);
  if (iVar4 == 0) {
    return 0xffffffff;
  }
  iVar4 = FUN_6375e550(&param_5,&param_7,(int *)&param_13,&param_15,param_2);
  if ((iVar4 != 0) &&
     (iVar4 = FUN_6375e550(&param_6,&param_8,(int *)&param_14,&param_16,local_8), iVar4 != 0)) {
    if ((((param_13 & 1) != 0) || ((((param_14 & 1) != 0 || (iVar12 < 1)) || (iVar11 < 1)))) ||
       ((param_2 != 1 || (local_8 != 1)))) {
      return 0xffffffff;
    }
    if (((DAT_63793cb8 == 0 && DAT_63793cb4 == 0) && DAT_63791560 == 0) && DAT_637944e0 == 0) {
      puVar9 = (undefined4 *)(param_6 * iVar12 + param_5 + param_1);
      puVar5 = (undefined4 *)(param_14 * iVar11 + param_13 + iVar16);
      param_10 = 0;
      if (0 < (int)param_8) {
        do {
          puVar13 = puVar5;
          puVar15 = puVar9;
          for (uVar7 = param_7 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar15 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar15 = puVar15 + 1;
          }
          puVar9 = (undefined4 *)((int)puVar9 + param_4);
          for (uVar7 = param_7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
            puVar15 = (undefined4 *)((int)puVar15 + 1);
          }
          puVar5 = (undefined4 *)((int)puVar5 + param_12);
          param_10 = param_10 + 1;
          iVar11 = param_12;
          iVar12 = param_4;
          iVar16 = param_9;
        } while (param_10 < (int)param_8);
      }
      iVar12 = iVar12 * param_3;
      iVar4 = iVar11 * param_11;
      param_10 = 0;
      puVar9 = (undefined4 *)
               ((int)param_13 / 2 + iVar16 + (((int)param_14 / 2) * iVar11) / 2 + iVar4);
      puVar5 = (undefined4 *)
               ((int)param_5 / 2 + param_1 + (((int)param_6 / 2) * param_4) / 2 + iVar12);
      if (0 < (int)param_8 / 2) {
        do {
          puVar13 = puVar9;
          puVar15 = puVar5;
          for (uVar7 = (uint)((int)param_7 / 2) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar15 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar15 = puVar15 + 1;
          }
          for (uVar7 = (int)param_7 / 2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
            puVar15 = (undefined4 *)((int)puVar15 + 1);
          }
          puVar13 = (undefined4 *)(((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) + (int)puVar9);
          puVar15 = (undefined4 *)(((int)(iVar12 + (iVar12 >> 0x1f & 3U)) >> 2) + (int)puVar5);
          for (uVar7 = (uint)((int)param_7 / 2) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar15 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar15 = puVar15 + 1;
          }
          puVar9 = (undefined4 *)((int)puVar9 + param_12 / 2);
          for (uVar7 = (int)param_7 / 2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
            puVar15 = (undefined4 *)((int)puVar15 + 1);
          }
          puVar5 = (undefined4 *)((int)puVar5 + param_4 / 2);
          param_10 = param_10 + 1;
        } while (param_10 < (int)param_8 / 2);
        return 0;
      }
    }
    else {
      iVar12 = param_14 * iVar11 + param_13 + iVar16;
      puVar10 = (undefined1 *)(param_6 * param_4 + param_5 + param_1);
      param_9 = 0;
      if (0 < (int)param_8) {
        do {
          param_10 = 0;
          if (0 < (int)param_7) {
            puVar6 = puVar10;
            do {
              *puVar6 = *(undefined1 *)(&DAT_637940e0 + (byte)puVar6[iVar12 - (int)puVar10]);
              param_10 = param_10 + 1;
              puVar6 = puVar6 + 1;
              iVar11 = param_12;
            } while (param_10 < (int)param_7);
          }
          iVar12 = iVar12 + iVar11;
          puVar10 = puVar10 + param_4;
          param_9 = param_9 + 1;
        } while (param_9 < (int)param_8);
      }
      iVar8 = param_4 * param_3;
      iVar14 = iVar11 * param_11;
      iVar12 = (int)(iVar14 + (iVar14 >> 0x1f & 3U)) >> 2;
      iVar4 = (int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2;
      iVar14 = (int)param_13 / 2 + iVar16 + (((int)param_14 / 2) * iVar11) / 2 + iVar14;
      puVar10 = (undefined1 *)
                ((int)param_5 / 2 + param_1 + (((int)param_6 / 2) * param_4) / 2 + iVar8);
      param_9 = 0;
      if (DAT_637944e0 == 0) {
        if (0 < (int)param_8 / 2) {
          do {
            iVar16 = 0;
            if (0 < (int)param_7 / 2) {
              puVar6 = puVar10;
              do {
                *puVar6 = *(undefined1 *)(&DAT_63794500 + (byte)puVar6[iVar14 - (int)puVar10]);
                pbVar1 = (byte *)(iVar16 + iVar12 + iVar14);
                iVar16 = iVar16 + 1;
                puVar6 = puVar6 + 1;
                puVar6[iVar4 + -1] = *(undefined1 *)(&DAT_63792da0 + *pbVar1);
              } while (iVar16 < (int)param_7 / 2);
            }
            iVar14 = iVar14 + param_12 / 2;
            puVar10 = puVar10 + param_4 / 2;
            param_9 = param_9 + 1;
          } while (param_9 < (int)param_8 / 2);
          return 0;
        }
      }
      else if (0 < (int)param_8 / 2) {
        do {
          iVar16 = 0;
          if (0 < (int)param_7 / 2) {
            puVar6 = puVar10;
            do {
              bVar2 = puVar6[iVar14 - (int)puVar10];
              bVar3 = *(byte *)(iVar16 + iVar12 + iVar14);
              iVar16 = iVar16 + 1;
              *puVar6 = (&DAT_637903e0)[(&DAT_63793cc0)[bVar3] + (&DAT_63794500)[bVar2]];
              (puVar6 + 1)[iVar4 + -1] =
                   (&DAT_637903e0)[(&DAT_63792da0)[bVar3] + (&DAT_637931a0)[bVar2]];
              puVar6 = puVar6 + 1;
            } while (iVar16 < (int)param_7 / 2);
          }
          iVar14 = iVar14 + param_12 / 2;
          puVar10 = puVar10 + param_4 / 2;
          param_9 = param_9 + 1;
        } while (param_9 < (int)param_8 / 2);
        return 0;
      }
    }
  }
  return 0;
}


