/* Module: vidpcore.dll
   Function: FUN_5de6af20
   Address: 5de6af20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5de6af20(uint param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
            uint param_7,uint *param_8,int param_9,undefined4 param_10,undefined4 param_11,
            undefined4 param_12,uint param_13)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int local_3c;
  int local_34;
  int local_30;
  int local_1c;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  uVar1 = param_7;
  iVar29 = 0;
  FUN_5debbf10(&local_c,&param_1,&local_8,param_1,param_2,param_3,0,param_7);
  FUN_5debbf10(&local_14,&local_10,&param_2,param_4,param_5,param_6,0,uVar1);
  uVar19 = *param_8 & 0x80003fff;
  if ((int)uVar19 < 0) {
    uVar19 = (uVar19 - 1 | 0xffffc000) + 1;
  }
  if (uVar19 == 0) {
    local_1c = 0;
  }
  else {
    local_1c = 0x4000 - uVar19;
  }
  uVar19 = param_8[2];
  uVar20 = uVar19 & 0x80003fff;
  if ((int)uVar20 < 0) {
    uVar20 = (uVar20 - 1 | 0xffffc000) + 1;
  }
  uVar21 = param_8[1] & 0x80003fff;
  if ((int)uVar21 < 0) {
    uVar21 = (uVar21 - 1 | 0xffffc000) + 1;
  }
  if (uVar21 != 0) {
    iVar29 = 0x4000 - uVar21;
  }
  uVar21 = param_8[3];
  uVar6 = uVar21 & 0x80003fff;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xffffc000) + 1;
  }
  iVar7 = (*param_8 - 1 | 0x3fff) + 1;
  iVar8 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar9 = (int)(uVar19 + ((int)uVar19 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar7 = (param_8[1] - 1 | 0x3fff) + 1;
  iVar10 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar11 = (int)(uVar21 + ((int)uVar21 >> 0x1f & 0x3fffU)) >> 0xe;
  uVar2 = ftol();
  uVar3 = ftol();
  uVar4 = ftol();
  bVar5 = ftol();
  ceil((double)CONCAT44(param_11,param_10));
  iVar12 = ftol();
  ceil((double)CONCAT44(param_13,param_12));
  param_8 = (uint *)ftol();
  param_9 = (int)param_8 * 3 + 2;
  iVar7 = iVar12 * 3 + 2;
  local_30 = 0;
  if (0 < local_10) {
    local_3c = 0;
    do {
      puVar18 = (undefined4 *)(local_3c + param_2);
      iVar22 = 0;
      if (0 < local_14) {
        do {
          *puVar18 = 0xff000000;
          iVar22 = iVar22 + 1;
          puVar18 = puVar18 + 1;
        } while (iVar22 < local_14);
      }
      local_30 = local_30 + 1;
      local_3c = local_3c + param_6;
    } while (local_30 < local_10);
  }
  local_3c = (int)param_8 + 1;
  if (local_3c < param_9) {
    iVar22 = iVar12 + 1;
    iVar30 = local_3c * param_6;
    local_3c = param_9 - local_3c;
    do {
      if (iVar22 < iVar7) {
        puVar18 = (undefined4 *)(param_2 + iVar30 + iVar22 * 4);
        for (iVar23 = iVar7 - iVar22; iVar23 != 0; iVar23 = iVar23 + -1) {
          *puVar18 = CONCAT13(bVar5,CONCAT12(uVar4,CONCAT11(uVar3,uVar2)));
          puVar18 = puVar18 + 1;
        }
      }
      iVar30 = iVar30 + param_6;
      local_3c = local_3c + -1;
    } while (local_3c != 0);
  }
  if (iVar29 != 0) {
    iVar22 = (int)param_8 * param_6 + param_2;
    if (local_1c != 0) {
      uVar19 = (uint)((longlong)local_1c * (longlong)iVar29) >> 0xe |
               (int)((ulonglong)((longlong)local_1c * (longlong)iVar29) >> 0x20) << 0x12;
      iVar30 = (CONCAT12(uVar4,CONCAT11(uVar3,uVar2)) & 0xff) * uVar19;
      *(char *)(iVar22 + iVar12 * 4) = (char)((int)(iVar30 + (iVar30 >> 0x1f & 0x3fffU)) >> 0xe);
      iVar30 = (CONCAT12(bVar5,CONCAT11(uVar4,uVar3)) & 0xff) * uVar19;
      *(char *)(iVar22 + 1 + iVar12 * 4) = (char)((int)(iVar30 + (iVar30 >> 0x1f & 0x3fffU)) >> 0xe)
      ;
      iVar30 = (CONCAT11(bVar5,uVar4) & 0xff) * uVar19;
      *(char *)(iVar22 + 2 + iVar12 * 4) = (char)((int)(iVar30 + (iVar30 >> 0x1f & 0x3fffU)) >> 0xe)
      ;
      *(char *)(iVar22 + 3 + iVar12 * 4) =
           (char)((int)(bVar5 * uVar19 + ((int)(bVar5 * uVar19) >> 0x1f & 0x3fffU)) >> 0xe);
    }
    uVar19 = CONCAT12(uVar4,CONCAT11(uVar3,uVar2)) & 0xff;
    iVar30 = uVar19 * iVar29;
    uVar21 = CONCAT12(bVar5,CONCAT11(uVar4,uVar3)) & 0xff;
    iVar23 = uVar21 * iVar29;
    uVar13 = CONCAT11(bVar5,uVar4) & 0xff;
    iVar14 = uVar13 * iVar29;
    iVar15 = (uint)bVar5 * iVar29;
    iVar31 = iVar12 + 1;
    if (iVar31 < iVar7) {
      puVar18 = (undefined4 *)(iVar22 + iVar31 * 4);
      for (iVar24 = iVar7 - iVar31; iVar24 != 0; iVar24 = iVar24 + -1) {
        *puVar18 = CONCAT13((char)((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe),
                            CONCAT12((char)((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe),
                                     CONCAT11((char)((int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >>
                                                    0xe),
                                              (char)((int)(iVar30 + (iVar30 >> 0x1f & 0x3fffU)) >>
                                                    0xe))));
        puVar18 = puVar18 + 1;
      }
    }
    if (uVar20 != 0) {
      uVar16 = (uint)((longlong)(int)uVar20 * (longlong)iVar29) >> 0xe |
               (int)((ulonglong)((longlong)(int)uVar20 * (longlong)iVar29) >> 0x20) << 0x12;
      iVar29 = uVar16 * uVar19;
      *(char *)(iVar22 + iVar7 * 4) = (char)((int)(iVar29 + (iVar29 >> 0x1f & 0x3fffU)) >> 0xe);
      iVar29 = uVar16 * uVar21;
      *(char *)(iVar22 + 1 + iVar7 * 4) = (char)((int)(iVar29 + (iVar29 >> 0x1f & 0x3fffU)) >> 0xe);
      iVar29 = uVar16 * uVar13;
      *(char *)(iVar22 + 2 + iVar7 * 4) = (char)((int)(iVar29 + (iVar29 >> 0x1f & 0x3fffU)) >> 0xe);
      iVar29 = uVar16 * bVar5;
      *(char *)(iVar22 + 3 + iVar7 * 4) = (char)((int)(iVar29 + (iVar29 >> 0x1f & 0x3fffU)) >> 0xe);
    }
  }
  if ((local_1c != 0) &&
     (iVar29 = (CONCAT12(uVar4,CONCAT11(uVar3,uVar2)) & 0xff) * local_1c,
     iVar22 = (CONCAT12(bVar5,CONCAT11(uVar4,uVar3)) & 0xff) * local_1c,
     iVar30 = (CONCAT11(bVar5,uVar4) & 0xff) * local_1c, (int)param_8 + 1 < param_9)) {
    iVar23 = ((int)param_8 + 1) * param_6 + iVar12 * 4;
    iVar14 = param_9 - ((int)param_8 + 1);
    do {
      *(uint *)(iVar23 + param_2) =
           CONCAT13((char)((int)((uint)bVar5 * local_1c +
                                ((int)((uint)bVar5 * local_1c) >> 0x1f & 0x3fffU)) >> 0xe),
                    CONCAT12((char)((int)(iVar30 + (iVar30 >> 0x1f & 0x3fffU)) >> 0xe),
                             CONCAT11((char)((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe),
                                      (char)((int)(iVar29 + (iVar29 >> 0x1f & 0x3fffU)) >> 0xe))));
      iVar23 = iVar23 + param_6;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  if ((uVar20 != 0) &&
     (iVar29 = (CONCAT12(uVar4,CONCAT11(uVar3,uVar2)) & 0xff) * uVar20,
     iVar22 = (CONCAT12(bVar5,CONCAT11(uVar4,uVar3)) & 0xff) * uVar20,
     iVar30 = (CONCAT11(bVar5,uVar4) & 0xff) * uVar20, (int)param_8 + 1 < param_9)) {
    iVar23 = ((int)param_8 + 1) * param_6 + iVar7 * 4;
    iVar14 = param_9 - ((int)param_8 + 1);
    do {
      *(uint *)(iVar23 + param_2) =
           CONCAT13((char)((int)(bVar5 * uVar20 + ((int)(bVar5 * uVar20) >> 0x1f & 0x3fffU)) >> 0xe)
                    ,CONCAT12((char)((int)(iVar30 + (iVar30 >> 0x1f & 0x3fffU)) >> 0xe),
                              CONCAT11((char)((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe),
                                       (char)((int)(iVar29 + (iVar29 >> 0x1f & 0x3fffU)) >> 0xe))));
      iVar23 = iVar23 + param_6;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  if (uVar6 != 0) {
    iVar29 = param_9 * param_6 + param_2;
    if (local_1c != 0) {
      uVar19 = (uint)((longlong)local_1c * (longlong)(int)uVar6) >> 0xe |
               (int)((ulonglong)((longlong)local_1c * (longlong)(int)uVar6) >> 0x20) << 0x12;
      iVar22 = (CONCAT12(uVar4,CONCAT11(uVar3,uVar2)) & 0xff) * uVar19;
      *(char *)(iVar29 + iVar12 * 4) = (char)((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe);
      iVar22 = (CONCAT12(bVar5,CONCAT11(uVar4,uVar3)) & 0xff) * uVar19;
      *(char *)(iVar29 + 1 + iVar12 * 4) = (char)((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe)
      ;
      iVar22 = (CONCAT11(bVar5,uVar4) & 0xff) * uVar19;
      *(char *)(iVar29 + 2 + iVar12 * 4) = (char)((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe)
      ;
      *(char *)(iVar29 + 3 + iVar12 * 4) =
           (char)((int)(bVar5 * uVar19 + ((int)(bVar5 * uVar19) >> 0x1f & 0x3fffU)) >> 0xe);
    }
    uVar21 = CONCAT12(uVar4,CONCAT11(uVar3,uVar2)) & 0xff;
    uVar13 = CONCAT12(bVar5,CONCAT11(uVar4,uVar3)) & 0xff;
    iVar30 = uVar21 * uVar6;
    iVar23 = uVar13 * uVar6;
    uVar19 = CONCAT11(bVar5,uVar4) & 0xff;
    iVar14 = uVar19 * uVar6;
    iVar15 = bVar5 * uVar6;
    iVar22 = iVar12 + 1;
    if (iVar22 < iVar7) {
      puVar18 = (undefined4 *)(iVar29 + iVar22 * 4);
      for (iVar31 = iVar7 - iVar22; iVar31 != 0; iVar31 = iVar31 + -1) {
        *puVar18 = CONCAT13((char)((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe),
                            CONCAT12((char)((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe),
                                     CONCAT11((char)((int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >>
                                                    0xe),
                                              (char)((int)(iVar30 + (iVar30 >> 0x1f & 0x3fffU)) >>
                                                    0xe))));
        puVar18 = puVar18 + 1;
      }
    }
    if (uVar20 != 0) {
      uVar20 = (uint)((longlong)(int)uVar20 * (longlong)(int)uVar6) >> 0xe |
               (int)((ulonglong)((longlong)(int)uVar20 * (longlong)(int)uVar6) >> 0x20) << 0x12;
      iVar22 = uVar20 * uVar21;
      *(char *)(iVar29 + iVar7 * 4) = (char)((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe);
      iVar22 = uVar20 * uVar13;
      *(char *)(iVar29 + 1 + iVar7 * 4) = (char)((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe);
      iVar22 = uVar20 * uVar19;
      *(char *)(iVar29 + 2 + iVar7 * 4) = (char)((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe);
      iVar22 = uVar20 * bVar5;
      *(char *)(iVar29 + 3 + iVar7 * 4) = (char)((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe);
    }
  }
  FUN_5dec9430(param_4,param_5,param_6,param_5,param_4,param_5,param_6,param_5,param_10,param_11,
               param_12,param_13,param_7);
  uVar19 = (iVar8 - iVar12) - 1;
  uVar6 = (iVar10 - (int)param_8) - 1;
  iVar29 = (iVar9 - iVar7) + 1;
  iVar7 = (iVar11 - param_9) + 1;
  uVar13 = ((int)uVar19 < 1) - 1 & uVar19;
  uVar20 = iVar12 + iVar8;
  uVar21 = uVar20;
  if ((int)local_c <= (int)uVar20) {
    uVar21 = local_c;
  }
  uVar25 = ((int)uVar6 < 1) - 1 & uVar6;
  uVar16 = (int)param_8 + iVar10;
  uVar17 = uVar16;
  if ((int)param_1 <= (int)uVar16) {
    uVar17 = param_1;
  }
  if ((int)uVar25 < (int)uVar17) {
    iVar10 = uVar25 * param_3;
    iVar8 = uVar25 * param_6;
    param_4 = uVar17 - uVar25;
    do {
      if ((int)uVar13 < (int)uVar21) {
        iVar30 = uVar21 - uVar13;
        iVar22 = uVar13 * 4;
        do {
          iVar30 = iVar30 + -1;
          *(undefined4 *)(iVar22 + local_8 + iVar10) =
               *(undefined4 *)(iVar22 + uVar19 * -4 + (iVar8 - uVar6 * param_6) + param_2);
          iVar22 = iVar22 + 4;
        } while (iVar30 != 0);
      }
      iVar8 = iVar8 + param_6;
      iVar10 = iVar10 + param_3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  uVar17 = (iVar11 - (int)param_8) + 1;
  uVar26 = ((int)uVar17 < 1) - 1 & uVar17;
  uVar25 = (int)param_8 + 2 + iVar11;
  uVar28 = uVar25;
  if ((int)param_1 <= (int)uVar25) {
    uVar28 = param_1;
  }
  if ((int)uVar26 < (int)uVar28) {
    iVar10 = uVar26 * param_3;
    iVar8 = uVar26 * param_6;
    param_4 = uVar28 - uVar26;
    do {
      if ((int)uVar13 < (int)uVar21) {
        iVar22 = uVar21 - uVar13;
        iVar11 = uVar13 * 4;
        do {
          iVar22 = iVar22 + -1;
          *(undefined4 *)(iVar11 + local_8 + iVar10) =
               *(undefined4 *)(iVar11 + uVar19 * -4 + (iVar8 - iVar7 * param_6) + param_2);
          iVar11 = iVar11 + 4;
        } while (iVar22 != 0);
      }
      iVar8 = iVar8 + param_6;
      iVar10 = iVar10 + param_3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  uVar21 = (iVar9 - iVar12) + 1;
  uVar28 = ((int)uVar21 < 1) - 1 & uVar21;
  uVar13 = iVar12 + 2 + iVar9;
  param_7 = uVar13;
  if ((int)local_c <= (int)uVar13) {
    param_7 = local_c;
  }
  uVar27 = ((int)uVar6 < 1) - 1 & uVar6;
  uVar26 = uVar16;
  if ((int)param_1 <= (int)uVar16) {
    uVar26 = param_1;
  }
  if ((int)uVar27 < (int)uVar26) {
    iVar9 = uVar27 * param_3;
    iVar8 = uVar27 * param_6;
    local_30 = uVar26 - uVar27;
    do {
      if ((int)uVar28 < (int)param_7) {
        iVar11 = param_7 - uVar28;
        iVar10 = uVar28 * 4;
        do {
          iVar11 = iVar11 + -1;
          *(undefined4 *)(iVar10 + iVar9 + local_8) =
               *(undefined4 *)(iVar10 + iVar29 * -4 + param_2 + (iVar8 - uVar6 * param_6));
          iVar10 = iVar10 + 4;
        } while (iVar11 != 0);
      }
      iVar8 = iVar8 + param_6;
      iVar9 = iVar9 + param_3;
      local_30 = local_30 + -1;
    } while (local_30 != 0);
  }
  uVar27 = ((int)uVar17 < 1) - 1 & uVar17;
  uVar26 = uVar25;
  if ((int)param_1 <= (int)uVar25) {
    uVar26 = param_1;
  }
  if ((int)uVar27 < (int)uVar26) {
    iVar9 = uVar27 * param_3;
    iVar8 = uVar27 * param_6;
    local_30 = uVar26 - uVar27;
    do {
      if ((int)uVar28 < (int)param_7) {
        iVar11 = param_7 - uVar28;
        iVar10 = uVar28 * 4;
        do {
          iVar11 = iVar11 + -1;
          *(undefined4 *)(iVar10 + iVar9 + local_8) =
               *(undefined4 *)(iVar10 + iVar29 * -4 + param_2 + (iVar8 - iVar7 * param_6));
          iVar10 = iVar10 + 4;
        } while (iVar11 != 0);
      }
      iVar8 = iVar8 + param_6;
      iVar9 = iVar9 + param_3;
      local_30 = local_30 + -1;
    } while (local_30 != 0);
  }
  uVar28 = ((int)uVar20 < 1) - 1 & uVar20;
  param_7 = uVar21;
  if ((int)local_c <= (int)uVar21) {
    param_7 = local_c;
  }
  uVar27 = ((int)uVar6 < 1) - 1 & uVar6;
  uVar26 = uVar16;
  if ((int)param_1 <= (int)uVar16) {
    uVar26 = param_1;
  }
  iVar8 = iVar12 * 2 + 1;
  if ((int)uVar27 < (int)uVar26) {
    iVar9 = uVar27 * param_6;
    iVar10 = uVar27 * param_3;
    param_4 = uVar26 - uVar27;
    do {
      if ((int)uVar28 < (int)param_7) {
        iVar11 = param_7 - uVar28;
        puVar18 = (undefined4 *)(local_8 + iVar10 + uVar28 * 4);
        do {
          iVar11 = iVar11 + -1;
          *puVar18 = *(undefined4 *)(param_2 + (iVar9 - uVar6 * param_6) + iVar8 * 4);
          puVar18 = puVar18 + 1;
        } while (iVar11 != 0);
      }
      iVar9 = iVar9 + param_6;
      iVar10 = iVar10 + param_3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  uVar6 = ((int)uVar17 < 1) - 1 & uVar17;
  if ((int)param_1 <= (int)uVar25) {
    uVar25 = param_1;
  }
  if ((int)uVar6 < (int)uVar25) {
    iVar10 = uVar6 * param_3;
    iVar9 = uVar6 * param_6;
    param_4 = uVar25 - uVar6;
    do {
      if ((int)uVar28 < (int)param_7) {
        iVar11 = param_7 - uVar28;
        puVar18 = (undefined4 *)(local_8 + iVar10 + uVar28 * 4);
        do {
          iVar11 = iVar11 + -1;
          *puVar18 = *(undefined4 *)(param_2 + (iVar9 - iVar7 * param_6) + iVar8 * 4);
          puVar18 = puVar18 + 1;
        } while (iVar11 != 0);
      }
      iVar9 = iVar9 + param_6;
      iVar10 = iVar10 + param_3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  uVar6 = ((int)uVar19 < 1) - 1 & uVar19;
  param_7 = uVar20;
  if ((int)local_c <= (int)uVar20) {
    param_7 = local_c;
  }
  uVar25 = ((int)uVar16 < 1) - 1 & uVar16;
  param_13 = uVar17;
  if ((int)param_1 <= (int)uVar17) {
    param_13 = param_1;
  }
  iVar7 = (int)param_8 * 2 + 1;
  if ((int)uVar25 < (int)param_13) {
    iVar8 = uVar25 * param_3;
    local_34 = param_13 - uVar25;
    do {
      if ((int)uVar6 < (int)param_7) {
        iVar10 = param_7 - uVar6;
        iVar9 = uVar6 << 2;
        do {
          iVar10 = iVar10 + -1;
          *(undefined4 *)(iVar9 + local_8 + iVar8) =
               *(undefined4 *)(iVar9 + uVar19 * -4 + param_2 + iVar7 * param_6);
          iVar9 = iVar9 + 4;
        } while (iVar10 != 0);
      }
      iVar8 = iVar8 + param_3;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
  }
  uVar19 = ((int)uVar21 < 1) - 1 & uVar21;
  param_7 = uVar13;
  if ((int)local_c <= (int)uVar13) {
    param_7 = local_c;
  }
  if ((int)uVar25 < (int)param_13) {
    iVar8 = uVar25 * param_3;
    param_4 = param_13 - uVar25;
    do {
      if ((int)uVar19 < (int)param_7) {
        iVar10 = param_7 - uVar19;
        iVar9 = uVar19 * 4;
        do {
          iVar10 = iVar10 + -1;
          *(undefined4 *)(iVar8 + local_8 + -4 + iVar9 + 4) =
               *(undefined4 *)(iVar7 * param_6 + param_2 + iVar9 + iVar29 * -4);
          iVar9 = iVar9 + 4;
        } while (iVar10 != 0);
      }
      iVar8 = iVar8 + param_3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if ((int)uVar16 < (int)uVar17) {
    iVar7 = uVar16 * param_3;
    iVar29 = uVar17 - uVar16;
    do {
      if ((int)uVar20 < (int)uVar21) {
        puVar18 = (undefined4 *)(local_8 + iVar7 + uVar20 * 4);
        for (iVar8 = uVar21 - uVar20; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar18 = CONCAT13(bVar5,CONCAT12(uVar4,CONCAT11(uVar3,uVar2)));
          puVar18 = puVar18 + 1;
        }
      }
      iVar7 = iVar7 + param_3;
      iVar29 = iVar29 + -1;
    } while (iVar29 != 0);
  }
  return 0;
}


