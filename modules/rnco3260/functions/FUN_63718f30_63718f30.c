/* Module: rnco3260.dll
   Function: FUN_63718f30
   Address: 63718f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_63718f30(undefined1 *param_1,int param_2,undefined1 *param_3,int param_4,uint param_5,
            uint param_6,uint param_7,uint param_8,int param_9,int param_10,undefined1 *param_11,
            int param_12,int param_13,int param_14,int param_15,int param_16)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  int iVar18;
  int local_18;
  int local_14 [4];
  
  iVar10 = param_12;
  iVar15 = param_9;
  iVar9 = FUN_6375e410((byte)param_1,param_2,(int)param_3,(byte)param_4,param_5,param_6,param_7,
                       param_8,(byte)param_9,param_10,(int)param_11,(byte)param_12,param_13,param_14
                       ,param_15,param_16,local_14,&local_18);
  if (iVar9 == 0) {
    return 0xffffffff;
  }
  iVar9 = FUN_6375e550(&param_5,&param_7,&param_13,&param_15,local_14[0]);
  if ((iVar9 != 0) &&
     (iVar9 = FUN_6375e550(&param_6,&param_8,&param_14,&param_16,local_18), iVar9 != 0)) {
    if (iVar10 < 0) {
      iVar15 = iVar15 - (int)(param_11 + -1) * iVar10;
    }
    if (param_4 < 1) {
      return 0xffffffff;
    }
    pbVar11 = (byte *)(param_13 * 3 + iVar15 + param_14 * iVar10);
    pbVar16 = pbVar11 + iVar10;
    puVar13 = param_1 + param_6 * param_4 + param_5;
    param_11 = puVar13 + param_4;
    iVar15 = param_4 * (int)param_3;
    param_3 = param_1 + (int)param_5 / 2 + iVar15 + (((int)param_6 / 2) * param_4) / 2;
    param_1 = param_3 + ((int)(iVar15 + (iVar15 >> 0x1f & 3U)) >> 2);
    if (DAT_637940c0 == 1) {
      param_9 = 0;
      if (0 < (int)param_8 / 2) {
        do {
          param_10 = 0;
          pbVar12 = pbVar11;
          puVar14 = puVar13;
          pbVar17 = pbVar16;
          if (0 < (int)param_7 / 2) {
            do {
              bVar1 = *pbVar12;
              bVar2 = pbVar12[2];
              pbVar11 = pbVar12 + 6;
              pbVar16 = pbVar17 + 6;
              puVar13 = puVar14 + 2;
              iVar10 = (&DAT_63791160)[pbVar12[1]] + (&DAT_63794d00)[bVar2] + (&DAT_63794900)[bVar1]
              ;
              *puVar14 = *(undefined1 *)(&DAT_63792580 + iVar10);
              bVar3 = pbVar12[5];
              bVar4 = pbVar12[3];
              iVar15 = (&DAT_63791160)[pbVar12[4]] + (&DAT_63794d00)[bVar3] + (&DAT_63794900)[bVar4]
              ;
              iVar10 = iVar10 + iVar15;
              puVar14[1] = *(undefined1 *)(&DAT_63792580 + iVar15);
              *param_11 = *(undefined1 *)
                           (&DAT_63792580 +
                           (&DAT_63794d00)[pbVar17[2]] + (&DAT_63791160)[pbVar17[1]] +
                           (&DAT_63794900)[*pbVar17]);
              param_11[1] = *(undefined1 *)
                             (&DAT_63792580 +
                             (&DAT_63794d00)[pbVar17[5]] + (&DAT_63794900)[pbVar17[3]] +
                             (&DAT_63791160)[pbVar17[4]]);
              *param_1 = (&DAT_637953cc)[((int)(((uint)bVar2 + (uint)bVar3) - iVar10) / 2) * 4];
              param_11 = param_11 + 2;
              *param_3 = (&DAT_63793928)[((int)(((uint)bVar1 + (uint)bVar4) - iVar10) / 2) * 4];
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              param_10 = param_10 + 1;
              pbVar12 = pbVar11;
              puVar14 = puVar13;
              pbVar17 = pbVar16;
            } while (param_10 < (int)param_7 / 2);
          }
          iVar15 = param_12 * 2 + param_7 * -3;
          pbVar11 = pbVar11 + iVar15;
          pbVar16 = pbVar16 + iVar15;
          puVar13 = puVar13 + (param_4 * 2 - param_7);
          param_11 = param_11 + (param_4 * 2 - param_7);
          iVar15 = (int)(param_4 - param_7) / 2;
          param_3 = param_3 + iVar15;
          param_1 = param_1 + iVar15;
          param_9 = param_9 + 1;
        } while (param_9 < (int)param_8 / 2);
      }
    }
    else {
      param_9 = 0;
      if (DAT_637940c0 == 2) {
        if (0 < (int)param_8 / 2) {
          do {
            param_10 = 0;
            pbVar12 = pbVar11;
            if (0 < (int)param_7 / 2) {
              do {
                pbVar11 = pbVar12 + 6;
                *puVar13 = *(undefined1 *)
                            (&DAT_63792580 +
                            (&DAT_63794d00)[pbVar12[2]] + (&DAT_63791160)[pbVar12[1]] +
                            (&DAT_63794900)[*pbVar12]);
                puVar13[1] = *(undefined1 *)
                              (&DAT_63792580 +
                              (&DAT_63794d00)[pbVar12[5]] + (&DAT_63791160)[pbVar12[4]] +
                              (&DAT_63794900)[pbVar12[3]]);
                bVar1 = *pbVar16;
                bVar2 = pbVar16[2];
                iVar10 = (&DAT_63791160)[pbVar16[1]] + (&DAT_63794900)[bVar1] +
                         (&DAT_63794d00)[bVar2];
                *param_11 = *(undefined1 *)(&DAT_63792580 + iVar10);
                bVar3 = pbVar16[5];
                bVar4 = pbVar16[3];
                iVar15 = (&DAT_63791160)[pbVar16[4]] + (&DAT_63794900)[bVar4] +
                         (&DAT_63794d00)[bVar3];
                iVar10 = iVar10 + iVar15;
                param_11[1] = *(undefined1 *)(&DAT_63792580 + iVar15);
                *param_1 = (&DAT_637953cc)[((int)(((uint)bVar3 + (uint)bVar2) - iVar10) / 2) * 4];
                pbVar16 = pbVar16 + 6;
                *param_3 = (&DAT_63793928)[((int)(((uint)bVar4 + (uint)bVar1) - iVar10) / 2) * 4];
                puVar13 = puVar13 + 2;
                param_11 = param_11 + 2;
                param_3 = param_3 + 1;
                param_1 = param_1 + 1;
                param_10 = param_10 + 1;
                pbVar12 = pbVar11;
              } while (param_10 < (int)param_7 / 2);
            }
            iVar15 = param_12 * 2 + param_7 * -3;
            pbVar11 = pbVar11 + iVar15;
            pbVar16 = pbVar16 + iVar15;
            puVar13 = puVar13 + (param_4 * 2 - param_7);
            param_11 = param_11 + (param_4 * 2 - param_7);
            iVar15 = (int)(param_4 - param_7) / 2;
            param_3 = param_3 + iVar15;
            param_1 = param_1 + iVar15;
            param_9 = param_9 + 1;
          } while (param_9 < (int)param_8 / 2);
          return 0;
        }
      }
      else if (0 < (int)param_8 / 2) {
        do {
          param_10 = 0;
          if (0 < (int)param_7 / 2) {
            do {
              bVar1 = *pbVar11;
              bVar2 = pbVar11[2];
              iVar18 = (&DAT_63791160)[pbVar11[1]] + (&DAT_63794d00)[bVar2] + (&DAT_63794900)[bVar1]
              ;
              *puVar13 = *(undefined1 *)(&DAT_63792580 + iVar18);
              bVar3 = pbVar11[5];
              bVar4 = pbVar11[3];
              iVar15 = (&DAT_63791160)[pbVar11[4]] + (&DAT_63794d00)[bVar3] + (&DAT_63794900)[bVar4]
              ;
              puVar13[1] = *(undefined1 *)(&DAT_63792580 + iVar15);
              bVar5 = pbVar16[2];
              bVar6 = *pbVar16;
              iVar10 = (&DAT_63791160)[pbVar16[1]] + (&DAT_63794d00)[bVar5] + (&DAT_63794900)[bVar6]
              ;
              *param_11 = *(undefined1 *)(&DAT_63792580 + iVar10);
              bVar7 = pbVar16[3];
              bVar8 = pbVar16[5];
              iVar9 = (&DAT_63791160)[pbVar16[4]] + (&DAT_63794d00)[bVar8] + (&DAT_63794900)[bVar7];
              iVar10 = iVar18 + iVar15 + iVar10 + iVar9;
              param_11[1] = *(undefined1 *)(&DAT_63792580 + iVar9);
              iVar15 = ((uint)bVar8 + (uint)bVar2 + (uint)bVar3 + (uint)bVar5) - iVar10;
              pbVar11 = pbVar11 + 6;
              pbVar16 = pbVar16 + 6;
              puVar13 = puVar13 + 2;
              *param_1 = (&DAT_637953cc)[((int)(iVar15 + (iVar15 >> 0x1f & 3U)) >> 2) * 4];
              iVar10 = ((uint)bVar7 + (uint)bVar1 + (uint)bVar4 + (uint)bVar6) - iVar10;
              *param_3 = (&DAT_63793928)[((int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2) * 4];
              param_11 = param_11 + 2;
              param_3 = param_3 + 1;
              param_1 = param_1 + 1;
              param_10 = param_10 + 1;
            } while (param_10 < (int)param_7 / 2);
          }
          iVar15 = param_12 * 2 + param_7 * -3;
          pbVar11 = pbVar11 + iVar15;
          pbVar16 = pbVar16 + iVar15;
          puVar13 = puVar13 + (param_4 * 2 - param_7);
          param_11 = param_11 + (param_4 * 2 - param_7);
          iVar15 = (int)(param_4 - param_7) / 2;
          param_3 = param_3 + iVar15;
          param_1 = param_1 + iVar15;
          param_9 = param_9 + 1;
        } while (param_9 < (int)param_8 / 2);
        return 0;
      }
    }
  }
  return 0;
}


