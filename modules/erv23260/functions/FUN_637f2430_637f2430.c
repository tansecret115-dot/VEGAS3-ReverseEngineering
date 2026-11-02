/* Module: erv23260.dll
   Function: FUN_637f2430
   Address: 637f2430
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_637f2430(byte *param_1,byte *param_2,byte *param_3,undefined4 *param_4,int param_5,
                 int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint local_40;
  uint local_34;
  
  param_4 = (undefined4 *)((param_6 * 3 + -3) * param_5 + (int)param_4);
  pbVar18 = param_1 + param_7;
  if (0 < param_6) {
    local_40 = param_6 + 1U >> 1;
    pbVar17 = param_1;
    param_1 = (byte *)((int)param_4 + param_5 * -3);
    do {
      if (0 < param_5) {
        local_34 = param_5 + 3U >> 2;
        do {
          pbVar19 = param_2 + 1;
          iVar16 = (&DAT_638313f0)[*param_3];
          iVar1 = (&DAT_63830bf0)[*param_2];
          iVar2 = (&DAT_63831bf0)[*param_2];
          iVar3 = (&DAT_63830ff0)[*param_3];
          param_2 = param_2 + 2;
          iVar4 = (&DAT_638313f0)[param_3[1]];
          iVar5 = (&DAT_63830ff0)[param_3[1]];
          iVar6 = (&DAT_63830bf0)[*pbVar19];
          iVar7 = (&DAT_63831bf0)[*pbVar19];
          param_3 = param_3 + 2;
          pbVar19 = pbVar17 + 3;
          iVar8 = (&DAT_638307e8)[*pbVar17];
          iVar9 = (&DAT_638307e8)[pbVar17[1]];
          iVar10 = (&DAT_638307e8)[pbVar17[2]];
          pbVar17 = pbVar17 + 4;
          iVar11 = (&DAT_638307e8)[*pbVar19];
          iVar12 = (&DAT_638307e8)[*pbVar18];
          iVar13 = (&DAT_638307e8)[pbVar18[1]];
          pbVar19 = pbVar18 + 3;
          iVar14 = (&DAT_638307e8)[pbVar18[2]];
          pbVar18 = pbVar18 + 4;
          iVar15 = (&DAT_638307e8)[*pbVar19];
          *param_4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                 ((iVar2 + iVar9 >> 0x10) + DAT_63830be8),
                                                *(undefined1 *)
                                                 ((iVar8 + iVar16 >> 0x10) + DAT_63830be8)),
                                       *(undefined1 *)
                                        (((iVar8 - iVar1) - iVar3 >> 0x10) + DAT_63830be8)),
                              *(undefined1 *)((iVar2 + iVar8 >> 0x10) + DAT_63830be8));
          param_4[1] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                   (((iVar10 - iVar6) - iVar5 >> 0x10) +
                                                   DAT_63830be8),
                                                  *(undefined1 *)
                                                   ((iVar7 + iVar10 >> 0x10) + DAT_63830be8)),
                                         *(undefined1 *)((iVar9 + iVar16 >> 0x10) + DAT_63830be8)),
                                *(undefined1 *)(((iVar9 - iVar1) - iVar3 >> 0x10) + DAT_63830be8));
          param_4[2] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                   ((iVar4 + iVar11 >> 0x10) + DAT_63830be8),
                                                  *(undefined1 *)
                                                   (((iVar11 - iVar6) - iVar5 >> 0x10) +
                                                   DAT_63830be8)),
                                         *(undefined1 *)((iVar7 + iVar11 >> 0x10) + DAT_63830be8)),
                                *(undefined1 *)((iVar4 + iVar10 >> 0x10) + DAT_63830be8));
          param_4 = param_4 + 3;
          *(uint *)param_1 =
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((iVar2 + iVar13 >> 0x10) + DAT_63830be8),
                                          *(undefined1 *)((iVar16 + iVar12 >> 0x10) + DAT_63830be8))
                                 ,*(undefined1 *)(((iVar12 - iVar1) - iVar3 >> 0x10) + DAT_63830be8)
                                ),*(undefined1 *)((iVar2 + iVar12 >> 0x10) + DAT_63830be8));
          *(uint *)(param_1 + 4) =
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                           (((iVar14 - iVar6) - iVar5 >> 0x10) + DAT_63830be8),
                                          *(undefined1 *)((iVar7 + iVar14 >> 0x10) + DAT_63830be8)),
                                 *(undefined1 *)((iVar13 + iVar16 >> 0x10) + DAT_63830be8)),
                        *(undefined1 *)(((iVar13 - iVar1) - iVar3 >> 0x10) + DAT_63830be8));
          *(uint *)(param_1 + 8) =
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((iVar4 + iVar15 >> 0x10) + DAT_63830be8),
                                          *(undefined1 *)
                                           (((iVar15 - iVar6) - iVar5 >> 0x10) + DAT_63830be8)),
                                 *(undefined1 *)((iVar7 + iVar15 >> 0x10) + DAT_63830be8)),
                        *(undefined1 *)((iVar4 + iVar14 >> 0x10) + DAT_63830be8));
          param_1 = param_1 + 0xc;
          local_34 = local_34 - 1;
        } while (local_34 != 0);
      }
      iVar16 = param_5 * 9 >> 2;
      param_4 = param_4 + -iVar16;
      param_1 = param_1 + iVar16 * -4;
      pbVar17 = pbVar17 + (param_7 * 2 - param_5);
      pbVar18 = pbVar18 + (param_7 * 2 - param_5);
      param_2 = param_2 + (param_7 - param_5 / 2);
      param_3 = param_3 + (param_7 - param_5 / 2);
      local_40 = local_40 - 1;
    } while (local_40 != 0);
  }
  return;
}


