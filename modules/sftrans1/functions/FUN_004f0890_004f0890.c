/* Module: sftrans1.dll
   Function: FUN_004f0890
   Address: 004f0890
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f0890(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  uint *puVar37;
  uint uVar38;
  byte bStack_d5;
  byte bStack_a5;
  int local_84;
  uint local_6c;
  uint local_44;
  char local_40;
  char cStack_3f;
  char cStack_3e;
  byte bStack_3d;
  undefined1 local_30;
  undefined1 uStack_2f;
  byte bStack_2e;
  undefined1 uStack_2d;
  int local_18;
  int local_14;
  int local_10;
  
  iVar26 = *(int *)(param_1 + 0x18);
  iVar20 = (int)((*(uint *)(param_1 + 0x10) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar7 = (iVar26 - 1U | 0x3fff) + 1;
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar28 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar34 = (int)((*(uint *)(param_1 + 0x14) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar7 = (iVar1 - 1U | 0x3fff) + 1;
  iVar8 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar7 = (*(int *)(param_1 + 0x48) - 1U | 0x3fff) + 1;
  iVar9 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar10 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
  iVar7 = iVar34 + 1;
  local_18 = iVar7 * 0x4000 - *(int *)(param_1 + 0x14);
  local_10 = (iVar20 + 1) * 0x4000 - *(int *)(param_1 + 0x10);
  iVar27 = iVar26 + iVar28 * -0x4000 + 0x4000;
  iVar29 = iVar28 - iVar20;
  if (iVar29 < 2) {
    local_10 = iVar26 - *(int *)(param_1 + 0x10);
  }
  if (iVar8 - iVar34 < 2) {
    local_18 = iVar1 - *(int *)(param_1 + 0x14);
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  iVar26 = *(int *)(param_1 + 100);
  uVar36 = *(uint *)(param_1 + 0x44);
  iVar11 = ftol();
  uVar21 = (uint)(iVar29 != 1);
  iVar12 = (int)(uVar36 + ((int)uVar36 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar30 = *(int *)(param_1 + 0x38) * iVar12 + *(int *)(param_1 + 0x34);
  iVar22 = iVar20 * (int)param_3;
  param_3 = (uint *)(iVar34 * *(int *)(param_1 + 8) + iVar22 + *(int *)(param_1 + 4));
  iVar23 = ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe) + -1;
  iVar10 = iVar30;
  if (iVar23 != iVar12) {
    iVar10 = *(int *)(param_1 + 0x38) + iVar30;
  }
  param_2 = *(uint *)(param_1 + 0x40);
  if (iVar20 < iVar28) {
    uVar13 = uVar36 & 0x80003fff;
    if ((int)uVar13 < 0) {
      uVar13 = (uVar13 - 1 | 0xffffc000) + 1;
    }
    local_14 = iVar20;
    do {
      uVar3 = *param_3;
      lVar6 = (longlong)iVar11 * (longlong)local_18;
      uVar17 = (uint)lVar6 >> 0xe;
      iVar12 = (int)((ulonglong)lVar6 >> 0x20) << 0x12;
      bStack_2e = (byte)((ulonglong)lVar6 >> 0x18) >> 6 | (byte)((uint)iVar12 >> 0x10);
      local_30 = (undefined1)uVar17;
      uStack_2f = (undefined1)(uVar17 >> 8);
      uStack_2d = (undefined1)((uint)iVar12 >> 0x18);
      local_6c = 1;
      iVar12 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
      if (local_14 == iVar20) {
        lVar6 = (longlong)CONCAT13(uStack_2d,CONCAT12(bStack_2e,(short)uVar17)) * (longlong)local_10
        ;
        uVar17 = (uint)lVar6 >> 0xe;
        iVar14 = (int)((ulonglong)lVar6 >> 0x20) << 0x12;
        bStack_2e = (byte)((ulonglong)lVar6 >> 0x18) >> 6 | (byte)((uint)iVar14 >> 0x10);
        local_30 = (undefined1)uVar17;
        uStack_2f = (undefined1)(uVar17 >> 8);
        uStack_2d = (undefined1)((uint)iVar14 >> 0x18);
        local_6c = uVar21;
      }
      else if (local_14 == iVar28 + -1) {
        lVar6 = (longlong)CONCAT13(uStack_2d,CONCAT12(bStack_2e,(short)uVar17)) * (longlong)iVar27;
        uVar17 = (uint)lVar6 >> 0xe;
        iVar12 = (int)((ulonglong)lVar6 >> 0x20) << 0x12;
        bStack_2e = (byte)((ulonglong)lVar6 >> 0x18) >> 6 | (byte)((uint)iVar12 >> 0x10);
        local_30 = (undefined1)uVar17;
        uStack_2f = (undefined1)(uVar17 >> 8);
        uStack_2d = (undefined1)((uint)iVar12 >> 0x18);
        iVar12 = iVar9 + -1;
        local_6c = 0;
      }
      uVar17 = *(uint *)(iVar30 + iVar12 * 4);
      uVar38 = *(uint *)(iVar10 + iVar12 * 4);
      iVar12 = (local_6c + iVar12) * 4;
      uVar4 = *(uint *)(iVar12 + iVar30);
      uVar5 = *(uint *)(iVar12 + iVar10);
      uVar31 = param_2 & 0x80003fff;
      if ((int)uVar31 < 0) {
        uVar31 = (uVar31 - 1 | 0xffffc000) + 1;
      }
      iVar12 = (0x4000 - uVar13) * (0x4000 - uVar31);
      iVar14 = (0x4000 - uVar13) * uVar31;
      iVar15 = (0x4000 - uVar31) * uVar13;
      iVar35 = (int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar32 = (int)(uVar13 * uVar31 + ((int)(uVar13 * uVar31) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar33 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar24 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar14 = (uVar5 & 0xff) * iVar32 + (uVar38 & 0xff) * iVar35 + (uVar4 & 0xff) * iVar33 +
               (uVar17 & 0xff) * iVar24;
      iVar15 = (uVar5 >> 8 & 0xff) * iVar32 + (uVar38 >> 8 & 0xff) * iVar35 +
               (uVar4 >> 8 & 0xff) * iVar33 + (uVar17 >> 8 & 0xff) * iVar24;
      iVar16 = (uVar5 >> 0x10 & 0xff) * iVar32 + (uVar38 >> 0x10 & 0xff) * iVar35 +
               (uVar4 >> 0x10 & 0xff) * iVar33 + (uVar17 >> 0x10 & 0xff) * iVar24;
      iVar12 = CONCAT13(uStack_2d,CONCAT12(bStack_2e,CONCAT11(uStack_2f,local_30)));
      iVar24 = (uVar5 >> 0x18) * iVar32 + (uVar38 >> 0x18) * iVar35 + (uVar4 >> 0x18) * iVar33 +
               (uVar17 >> 0x18) * iVar24;
      iVar14 = ((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * iVar12;
      iVar32 = ((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar3 & 0xff);
      iVar14 = ((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * iVar12;
      iVar15 = ((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar3 >> 8 & 0xff);
      iVar14 = ((int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * iVar12;
      iVar14 = ((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar3 >> 0x10 & 0xff);
      iVar12 = ((int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * iVar12;
      iVar12 = ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar3 >> 0x18);
      *param_3 = CONCAT13(((char)(iVar12 / 0xff) + (char)(iVar12 >> 0x1f)) -
                          (char)((longlong)iVar12 * 0x80808081 >> 0x3f),
                          CONCAT12(((char)(iVar14 / 0xff) + (char)(iVar14 >> 0x1f)) -
                                   (char)((longlong)iVar14 * 0x80808081 >> 0x3f),
                                   CONCAT11(((char)(iVar15 / 0xff) + (char)(iVar15 >> 0x1f)) -
                                            (char)((longlong)iVar15 * 0x80808081 >> 0x3f),
                                            ((char)(iVar32 / 0xff) + (char)(iVar32 >> 0x1f)) -
                                            (char)((longlong)iVar32 * 0x80808081 >> 0x3f))));
      param_3 = param_3 + 1;
      uVar3 = uVar2;
      if (local_14 == iVar20) {
        uVar3 = (uint)((longlong)(int)uVar2 * (longlong)local_10) >> 0xe |
                (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_10) >> 0x20) << 0x12;
      }
      param_2 = param_2 + uVar3;
      local_14 = local_14 + 1;
    } while (local_14 < iVar28);
  }
  lVar6 = (longlong)iVar26 * (longlong)local_18;
  uVar36 = uVar36 + ((uint)lVar6 >> 0xe | (int)((ulonglong)lVar6 >> 0x20) << 0x12);
  for (; iVar7 < iVar8 + -1; iVar7 = iVar7 + 1) {
    iVar30 = (int)(uVar36 + ((int)uVar36 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar14 = *(int *)(param_1 + 0x38) * iVar30 + *(int *)(param_1 + 0x34);
    puVar37 = (uint *)(iVar7 * *(int *)(param_1 + 8) + iVar22 + *(int *)(param_1 + 4));
    iVar12 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
    iVar10 = iVar14;
    if (((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe) + -1 != iVar30) {
      iVar10 = *(int *)(param_1 + 0x38) + iVar14;
    }
    uVar13 = *(uint *)(param_1 + 0x40);
    uVar3 = *puVar37;
    iVar12 = (int)(uVar13 + ((int)uVar13 >> 0x1f & 0x3fffU)) >> 0xe;
    uVar17 = *(uint *)(iVar14 + iVar12 * 4);
    iVar30 = (uVar21 + iVar12) * 4;
    uVar38 = *(uint *)(iVar30 + iVar14);
    uVar4 = *(uint *)(iVar10 + iVar12 * 4);
    uVar5 = *(uint *)(iVar30 + iVar10);
    uVar31 = uVar13 & 0x80003fff;
    if ((int)uVar31 < 0) {
      uVar31 = (uVar31 - 1 | 0xffffc000) + 1;
    }
    uVar25 = uVar36 & 0x80003fff;
    if ((int)uVar25 < 0) {
      uVar25 = (uVar25 - 1 | 0xffffc000) + 1;
    }
    iVar12 = (0x4000 - uVar31) * (0x4000 - uVar25);
    iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar30 = (0x4000 - uVar25) * uVar31;
    iVar30 = (int)(iVar30 + (iVar30 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar15 = (0x4000 - uVar31) * uVar25;
    iVar15 = (int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar33 = (int)(((int)(uVar25 * uVar31) >> 0x1f & 0x3fffU) + uVar25 * uVar31) >> 0xe;
    iVar16 = (uVar5 & 0xff) * iVar33 + (uVar4 & 0xff) * iVar15 + (uVar38 & 0xff) * iVar30 +
             (uVar17 & 0xff) * iVar12;
    iVar24 = (uVar5 >> 8 & 0xff) * iVar33 + (uVar4 >> 8 & 0xff) * iVar15 +
             (uVar38 >> 8 & 0xff) * iVar30 + (uVar17 >> 8 & 0xff) * iVar12;
    iVar32 = (uVar5 >> 0x10 & 0xff) * iVar33 + (uVar4 >> 0x10 & 0xff) * iVar15 +
             (uVar38 >> 0x10 & 0xff) * iVar30 + (uVar17 >> 0x10 & 0xff) * iVar12;
    iVar12 = (uVar5 >> 0x18) * iVar33 + (uVar4 >> 0x18) * iVar15 + (uVar38 >> 0x18) * iVar30 +
             (uVar17 >> 0x18) * iVar12;
    uVar17 = (uint)((longlong)iVar11 * (longlong)local_10) >> 0xe |
             (int)((ulonglong)((longlong)iVar11 * (longlong)local_10) >> 0x20) << 0x12;
    iVar30 = ((int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar17;
    iVar15 = ((int)(iVar30 + (iVar30 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar3 & 0xff);
    iVar30 = ((int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar17;
    iVar16 = ((int)(iVar30 + (iVar30 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar3 >> 8 & 0xff);
    iVar30 = ((int)(iVar32 + (iVar32 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar17;
    iVar30 = ((int)(iVar30 + (iVar30 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar3 >> 0x10 & 0xff);
    iVar12 = ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar17;
    iVar12 = ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar3 >> 0x18);
    uVar13 = uVar13 + ((uint)((longlong)(int)uVar2 * (longlong)local_10) >> 0xe |
                      (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_10) >> 0x20) << 0x12)
    ;
    *puVar37 = CONCAT13(((char)(iVar12 / 0xff) + (char)(iVar12 >> 0x1f)) -
                        (char)((longlong)iVar12 * 0x80808081 >> 0x3f),
                        CONCAT12(((char)(iVar30 / 0xff) + (char)(iVar30 >> 0x1f)) -
                                 (char)((longlong)iVar30 * 0x80808081 >> 0x3f),
                                 CONCAT11(((char)(iVar16 / 0xff) + (char)(iVar16 >> 0x1f)) -
                                          (char)((longlong)iVar16 * 0x80808081 >> 0x3f),
                                          ((char)(iVar15 / 0xff) + (char)(iVar15 >> 0x1f)) -
                                          (char)((longlong)iVar15 * 0x80808081 >> 0x3f))));
    puVar37 = puVar37 + 1;
    if (iVar20 + 1 < iVar28 + -1) {
      local_84 = (iVar28 + -1) - (iVar20 + 1);
      do {
        uVar3 = *puVar37;
        bStack_3d = (byte)(uVar3 >> 0x18);
        iVar12 = (int)(uVar13 + ((int)uVar13 >> 0x1f & 0x3fffU)) >> 0xe;
        uVar17 = *(uint *)(iVar14 + iVar12 * 4);
        uVar38 = *(uint *)(iVar14 + 4 + iVar12 * 4);
        uVar4 = *(uint *)(iVar10 + iVar12 * 4);
        uVar5 = *(uint *)(iVar10 + 4 + iVar12 * 4);
        uVar31 = uVar13 & 0x80003fff;
        if ((int)uVar31 < 0) {
          uVar31 = (uVar31 - 1 | 0xffffc000) + 1;
        }
        iVar12 = (0x4000 - uVar25) * (0x4000 - uVar31);
        iVar30 = (0x4000 - uVar25) * uVar31;
        iVar15 = (0x4000 - uVar31) * uVar25;
        iVar16 = (int)(((int)(uVar25 * uVar31) >> 0x1f & 0x3fffU) + uVar25 * uVar31) >> 0xe;
        iVar15 = (int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar24 = (int)(iVar30 + (iVar30 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar30 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar12 = (uVar5 & 0xff) * iVar16 + (uVar4 & 0xff) * iVar15 + (uVar38 & 0xff) * iVar24 +
                 (uVar17 & 0xff) * iVar30;
        uVar31 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar12 = (uVar5 >> 8 & 0xff) * iVar16 + (uVar4 >> 8 & 0xff) * iVar15 +
                 (uVar38 >> 8 & 0xff) * iVar24 + (uVar17 >> 8 & 0xff) * iVar30;
        uVar18 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar12 = (uVar5 >> 0x10 & 0xff) * iVar16 + (uVar4 >> 0x10 & 0xff) * iVar15 +
                 (uVar38 >> 0x10 & 0xff) * iVar24 + (uVar17 >> 0x10 & 0xff) * iVar30;
        uVar19 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar12 = (uVar5 >> 0x18) * iVar16 + (uVar4 >> 0x18) * iVar15 + (uVar38 >> 0x18) * iVar24 +
                 (uVar17 >> 0x18) * iVar30;
        uVar17 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
        if (iVar11 == 0x4000) {
          local_40 = (char)(((uVar3 & 0xff) * (uVar31 & 0xff)) / 0xff);
          cStack_3f = (char)(((uVar3 >> 8 & 0xff) * (uVar18 & 0xff)) / 0xff);
          uVar38 = (uint)bStack_3d;
          cStack_3e = (char)(((uVar3 >> 0x10 & 0xff) * (uVar19 & 0xff)) / 0xff);
          uVar17 = uVar17 & 0xff;
        }
        else {
          iVar12 = (uVar31 & 0xff) * iVar11;
          iVar12 = ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar3 & 0xff);
          local_40 = ((char)(iVar12 / 0xff) + (char)(iVar12 >> 0x1f)) -
                     (char)((longlong)iVar12 * 0x80808081 >> 0x3f);
          iVar12 = (uVar18 & 0xff) * iVar11;
          iVar12 = ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar3 >> 8 & 0xff);
          cStack_3f = ((char)(iVar12 / 0xff) + (char)(iVar12 >> 0x1f)) -
                      (char)((longlong)iVar12 * 0x80808081 >> 0x3f);
          iVar12 = (uVar19 & 0xff) * iVar11;
          iVar12 = ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar3 >> 0x10 & 0xff);
          cStack_3e = ((char)(iVar12 / 0xff) + (char)(iVar12 >> 0x1f)) -
                      (char)((longlong)iVar12 * 0x80808081 >> 0x3f);
          iVar12 = (uVar17 & 0xff) * iVar11;
          uVar17 = (uint)bStack_3d;
          uVar38 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
        }
        iVar12 = uVar38 * uVar17;
        *puVar37 = CONCAT13(((char)(iVar12 / 0xff) + (char)(iVar12 >> 0x1f)) -
                            (char)((longlong)iVar12 * 0x80808081 >> 0x3f),
                            CONCAT12(cStack_3e,CONCAT11(cStack_3f,local_40)));
        puVar37 = puVar37 + 1;
        uVar13 = uVar13 + uVar2;
        local_84 = local_84 + -1;
      } while (local_84 != 0);
    }
    if (iVar29 != 1) {
      uVar3 = *puVar37;
      uVar17 = *(uint *)(iVar14 + -4 + iVar9 * 4);
      uVar13 = uVar13 & 0x80003fff;
      bStack_a5 = (byte)(uVar17 >> 0x18);
      uVar38 = *(uint *)(iVar10 + -4 + iVar9 * 4);
      bStack_d5 = (byte)(uVar38 >> 0x18);
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xffffc000) + 1;
      }
      iVar10 = (0x4000 - uVar13) * (0x4000 - uVar25);
      iVar12 = (0x4000 - uVar25) * uVar13;
      iVar30 = (0x4000 - uVar13) * uVar25;
      iVar30 = (int)(iVar30 + (iVar30 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar15 = (int)(uVar25 * uVar13 + ((int)(uVar25 * uVar13) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar16 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar24 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar10 = (uVar38 & 0xff) * iVar15 + (uVar38 & 0xff) * iVar30 + (uVar17 & 0xff) * iVar16 +
               (uVar17 & 0xff) * iVar24;
      iVar12 = (uVar38 >> 8 & 0xff) * iVar15 + (uVar38 >> 8 & 0xff) * iVar30 +
               (uVar17 >> 8 & 0xff) * iVar16 + (uVar17 >> 8 & 0xff) * iVar24;
      iVar14 = (uVar38 >> 0x10 & 0xff) * iVar15 + (uVar38 >> 0x10 & 0xff) * iVar30 +
               (uVar17 >> 0x10 & 0xff) * iVar16 + (uVar17 >> 0x10 & 0xff) * iVar24;
      iVar30 = (uint)bStack_d5 * iVar15 + (uint)bStack_d5 * iVar30 + (uint)bStack_a5 * iVar16 +
               (uint)bStack_a5 * iVar24;
      uVar13 = (uint)((longlong)iVar11 * (longlong)iVar27) >> 0xe |
               (int)((ulonglong)((longlong)iVar11 * (longlong)iVar27) >> 0x20) << 0x12;
      iVar10 = ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar13;
      iVar15 = ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar3 & 0xff);
      iVar10 = ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar13;
      iVar12 = ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar3 >> 8 & 0xff);
      iVar10 = ((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar13;
      iVar14 = ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar3 >> 0x10 & 0xff);
      iVar10 = ((int)(iVar30 + (iVar30 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar13;
      iVar10 = ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar3 >> 0x18);
      *puVar37 = CONCAT13(((char)(iVar10 / 0xff) + (char)(iVar10 >> 0x1f)) -
                          (char)((longlong)iVar10 * 0x80808081 >> 0x3f),
                          CONCAT12(((char)(iVar14 / 0xff) + (char)(iVar14 >> 0x1f)) -
                                   (char)((longlong)iVar14 * 0x80808081 >> 0x3f),
                                   CONCAT11(((char)(iVar12 / 0xff) + (char)(iVar12 >> 0x1f)) -
                                            (char)((longlong)iVar12 * 0x80808081 >> 0x3f),
                                            ((char)(iVar15 / 0xff) + (char)(iVar15 >> 0x1f)) -
                                            (char)((longlong)iVar15 * 0x80808081 >> 0x3f))));
    }
    uVar36 = uVar36 + iVar26;
  }
  if (iVar8 - iVar34 != 1) {
    puVar37 = (uint *)((iVar8 + -1) * *(int *)(param_1 + 8) + iVar22 + *(int *)(param_1 + 4));
    iVar26 = iVar23 * *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34);
    param_2 = *(uint *)(param_1 + 0x40);
    for (iVar7 = iVar20; iVar7 < iVar28; iVar7 = iVar7 + 1) {
      uVar36 = *puVar37;
      lVar6 = (longlong)iVar11 * (longlong)(iVar1 + iVar8 * -0x4000 + 0x4000);
      uVar13 = (uint)lVar6 >> 0xe | (int)((ulonglong)lVar6 >> 0x20) << 0x12;
      local_44 = 1;
      iVar10 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar7 == iVar20) {
        uVar13 = (uint)((longlong)(int)uVar13 * (longlong)local_10) >> 0xe |
                 (int)((ulonglong)((longlong)(int)uVar13 * (longlong)local_10) >> 0x20) << 0x12;
        local_44 = uVar21;
      }
      else if (iVar7 == iVar28 + -1) {
        uVar13 = (uint)((longlong)(int)uVar13 * (longlong)iVar27) >> 0xe |
                 (int)((ulonglong)((longlong)(int)uVar13 * (longlong)iVar27) >> 0x20) << 0x12;
        local_44 = 0;
        iVar10 = iVar9 + -1;
      }
      uVar3 = *(uint *)(iVar26 + iVar10 * 4);
      uVar17 = *(uint *)(iVar26 + (iVar10 + local_44) * 4);
      uVar38 = param_2 & 0x80003fff;
      if ((int)uVar38 < 0) {
        uVar38 = (uVar38 - 1 | 0xffffc000) + 1;
      }
      iVar10 = (0x4000 - uVar38) * 0x4000;
      iVar12 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar22 = (int)(uVar38 * 0x4000 + ((int)(uVar38 * 0x4000) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar10 = (uVar17 & 0xff) * iVar22 + (uVar3 & 0xff) * iVar12;
      iVar29 = (uVar17 >> 8 & 0xff) * iVar22 + (uVar3 >> 8 & 0xff) * iVar12;
      iVar34 = (uVar17 >> 0x10 & 0xff) * iVar22 + (uVar3 >> 0x10 & 0xff) * iVar12;
      iVar12 = (uVar17 >> 0x18) * iVar22 + (uVar3 >> 0x18) * iVar12;
      iVar10 = ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar13;
      iVar22 = ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar36 & 0xff);
      iVar10 = ((int)(iVar29 + (iVar29 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar13;
      iVar29 = ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar36 >> 8 & 0xff);
      iVar10 = ((int)(iVar34 + (iVar34 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar13;
      iVar34 = ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar36 >> 0x10 & 0xff);
      iVar10 = ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar13;
      iVar10 = ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe) * (uVar36 >> 0x18);
      *puVar37 = CONCAT13(((char)(iVar10 / 0xff) + (char)(iVar10 >> 0x1f)) -
                          (char)((longlong)iVar10 * 0x80808081 >> 0x3f),
                          CONCAT12(((char)(iVar34 / 0xff) + (char)(iVar34 >> 0x1f)) -
                                   (char)((longlong)iVar34 * 0x80808081 >> 0x3f),
                                   CONCAT11(((char)(iVar29 / 0xff) + (char)(iVar29 >> 0x1f)) -
                                            (char)((longlong)iVar29 * 0x80808081 >> 0x3f),
                                            ((char)(iVar22 / 0xff) + (char)(iVar22 >> 0x1f)) -
                                            (char)((longlong)iVar22 * 0x80808081 >> 0x3f))));
      puVar37 = puVar37 + 1;
      uVar36 = uVar2;
      if (iVar7 == iVar20) {
        uVar36 = (uint)((longlong)(int)uVar2 * (longlong)local_10) >> 0xe |
                 (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_10) >> 0x20) << 0x12;
      }
      param_2 = param_2 + uVar36;
    }
  }
  return;
}


