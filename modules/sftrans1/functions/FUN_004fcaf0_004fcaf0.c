/* Module: sftrans1.dll
   Function: FUN_004fcaf0
   Address: 004fcaf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fcaf0(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  byte bStack_bd;
  byte bStack_7e;
  undefined1 uStack_7d;
  byte bStack_6d;
  int local_48;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined4 local_8;
  
  iVar12 = param_1;
  iVar5 = *(int *)(param_1 + 0x18);
  local_28 = (int)((*(uint *)(param_1 + 0x10) & 0xffffc000) +
                  ((int)*(uint *)(param_1 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar3 = (iVar5 - 1U | 0x3fff) + 1;
  local_2c = *(int *)(param_1 + 0x1c);
  local_3c = (int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar22 = (int)((*(uint *)(param_1 + 0x14) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar3 = (local_2c - 1 | 0x3fff) + 1;
  local_10 = (int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar3 = (*(int *)(param_1 + 0x48) - 1U | 0x3fff) + 1;
  iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar4 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
  local_20 = iVar22 + 1;
  local_1c = local_20 * 0x4000 - *(int *)(param_1 + 0x14);
  iVar15 = local_2c + local_10 * -0x4000;
  local_38 = (local_28 + 1) * 0x4000 - *(int *)(param_1 + 0x10);
  iVar16 = iVar5 + local_3c * -0x4000 + 0x4000;
  iVar18 = local_3c - local_28;
  if (iVar18 < 2) {
    local_38 = iVar5 - *(int *)(param_1 + 0x10);
  }
  iVar5 = local_10 - iVar22;
  if (iVar5 < 2) {
    local_1c = local_2c - *(int *)(param_1 + 0x14);
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  iVar27 = *(int *)(param_1 + 100);
  local_30 = *(uint *)(param_1 + 0x44);
  iVar6 = ftol();
  uVar10 = (uint)(iVar18 != 1);
  iVar7 = (int)(local_30 + ((int)local_30 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar19 = *(int *)(iVar12 + 0x38) * iVar7 + *(int *)(iVar12 + 0x34);
  iVar11 = local_28 * (int)param_3;
  local_14 = (uint *)(iVar22 * *(int *)(iVar12 + 8) + *(int *)(iVar12 + 4) + iVar11);
  iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe) + -1;
  local_34 = iVar19;
  if (iVar4 != iVar7) {
    local_34 = *(int *)(iVar12 + 0x38) + iVar19;
  }
  param_3 = *(undefined4 **)(iVar12 + 0x40);
  local_18 = local_28;
  if (local_28 < local_3c) {
    local_2c = local_30 & 0x80003fff;
    if ((int)local_2c < 0) {
      local_2c = (local_2c - 1 | 0xffffc000) + 1;
    }
    iVar22 = 0x4000 - local_2c;
    do {
      local_8 = *local_14;
      local_24 = (uint)((longlong)iVar6 * (longlong)local_1c) >> 0xe |
                 (int)((ulonglong)((longlong)iVar6 * (longlong)local_1c) >> 0x20) << 0x12;
      local_40 = 1;
      iVar12 = (int)((int)param_3 + ((int)param_3 >> 0x1f & 0x3fffU)) >> 0xe;
      if (local_18 == local_28) {
        local_24 = (uint)((longlong)(int)local_24 * (longlong)local_38) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_24 * (longlong)local_38) >> 0x20) << 0x12;
        local_40 = uVar10;
      }
      else if (local_18 == local_3c + -1) {
        local_24 = (uint)((longlong)(int)local_24 * (longlong)iVar16) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_24 * (longlong)iVar16) >> 0x20) << 0x12;
        iVar12 = iVar3 + -1;
        local_40 = 0;
      }
      uVar9 = *(uint *)(iVar19 + iVar12 * 4);
      uVar14 = *(uint *)(local_34 + iVar12 * 4);
      iVar12 = (local_40 + iVar12) * 4;
      uVar13 = *(uint *)(iVar12 + iVar19);
      uVar26 = *(uint *)(iVar12 + local_34);
      uVar23 = (uint)param_3 & 0x80003fff;
      if ((int)uVar23 < 0) {
        uVar23 = (uVar23 - 1 | 0xffffc000) + 1;
      }
      iVar12 = (0x4000 - uVar23) * iVar22;
      iVar7 = iVar22 * uVar23;
      iVar8 = (0x4000 - uVar23) * local_2c;
      iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar24 = (int)(local_2c * uVar23 + ((int)(local_2c * uVar23) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar28 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar7 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar12 = (uVar26 & 0xff) * iVar24 + (uVar14 & 0xff) * iVar8 + (uVar13 & 0xff) * iVar28 +
               (uVar9 & 0xff) * iVar7;
      local_c = (undefined1)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
      iVar12 = (uVar26 >> 8 & 0xff) * iVar24 + (uVar14 >> 8 & 0xff) * iVar8 +
               (uVar13 >> 8 & 0xff) * iVar28 + (uVar9 >> 8 & 0xff) * iVar7;
      local_b = (undefined1)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
      iVar12 = (uVar26 >> 0x10 & 0xff) * iVar24 + (uVar14 >> 0x10 & 0xff) * iVar8 +
               (uVar13 >> 0x10 & 0xff) * iVar28 + (uVar9 >> 0x10 & 0xff) * iVar7;
      local_a = (undefined1)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
      iVar12 = (uVar26 >> 0x18) * iVar24 + (uVar14 >> 0x18) * iVar8 + (uVar13 >> 0x18) * iVar28 +
               (uVar9 >> 0x18) * iVar7;
      local_9 = (undefined1)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
      (*(code *)**(undefined4 **)(param_2 + 0xc))
                (&local_8,&local_c,
                 (int)(local_24 * 0xff + ((int)(local_24 * 0xff) >> 0x1f & 0x3fffU)) >> 0xe);
      *local_14 = local_8;
      local_14 = local_14 + 1;
      uVar9 = uVar1;
      if (local_18 == local_28) {
        uVar9 = (uint)((longlong)(int)uVar1 * (longlong)local_38) >> 0xe |
                (int)((ulonglong)((longlong)(int)uVar1 * (longlong)local_38) >> 0x20) << 0x12;
      }
      param_3 = (undefined4 *)((int)param_3 + uVar9);
      local_18 = local_18 + 1;
      iVar12 = param_1;
    } while (local_18 < local_3c);
  }
  lVar2 = (longlong)iVar27 * (longlong)local_1c;
  local_30 = local_30 + ((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12);
  iVar22 = local_10 + -1;
  for (local_2c = local_20; (int)local_2c < iVar22; local_2c = local_2c + 1) {
    iVar8 = (int)(local_30 + ((int)local_30 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar19 = *(int *)(iVar12 + 0x38) * iVar8 + *(int *)(iVar12 + 0x34);
    piVar20 = (int *)(local_2c * *(int *)(iVar12 + 8) + *(int *)(iVar12 + 4) + iVar11);
    iVar7 = (*(int *)(iVar12 + 0x4c) - 1U | 0x3fff) + 1;
    local_34 = iVar19;
    if (((int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe) + -1 != iVar8) {
      local_34 = *(int *)(iVar12 + 0x38) + iVar19;
    }
    uVar9 = *(uint *)(iVar12 + 0x40);
    local_18 = *piVar20;
    iVar12 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 0x3fffU)) >> 0xe;
    uVar14 = *(uint *)(iVar19 + iVar12 * 4);
    iVar7 = (uVar10 + iVar12) * 4;
    uVar13 = *(uint *)(iVar7 + iVar19);
    uVar26 = *(uint *)(iVar7 + local_34);
    uVar23 = *(uint *)(local_34 + iVar12 * 4);
    uVar17 = uVar9 & 0x80003fff;
    if ((int)uVar17 < 0) {
      uVar17 = (uVar17 - 1 | 0xffffc000) + 1;
    }
    uVar25 = local_30 & 0x80003fff;
    if ((int)uVar25 < 0) {
      uVar25 = (uVar25 - 1 | 0xffffc000) + 1;
    }
    local_20 = 0x4000 - uVar17;
    iVar12 = local_20 * (0x4000 - uVar25);
    local_14 = (uint *)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
    iVar12 = (0x4000 - uVar25) * uVar17;
    local_1c = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar12 = (int)(local_20 * uVar25 + ((int)(local_20 * uVar25) >> 0x1f & 0x3fffU)) >> 0xe;
    local_10 = (int)(((int)(uVar25 * uVar17) >> 0x1f & 0x3fffU) + uVar25 * uVar17) >> 0xe;
    iVar7 = (uVar26 & 0xff) * local_10 + (uVar23 & 0xff) * iVar12 + (uVar13 & 0xff) * local_1c +
            (uVar14 & 0xff) * (int)local_14;
    iVar8 = (uVar26 >> 8 & 0xff) * local_10 + (uVar23 >> 8 & 0xff) * iVar12 +
            (uVar13 >> 8 & 0xff) * local_1c + (uVar14 >> 8 & 0xff) * (int)local_14;
    iVar24 = (uVar26 >> 0x10 & 0xff) * local_10 + (uVar23 >> 0x10 & 0xff) * iVar12 +
             (uVar13 >> 0x10 & 0xff) * local_1c + (uVar14 >> 0x10 & 0xff) * (int)local_14;
    iVar12 = (uVar26 >> 0x18) * local_10 + (uVar23 >> 0x18) * iVar12 + (uVar13 >> 0x18) * local_1c +
             (uVar14 >> 0x18) * (int)local_14;
    local_8 = CONCAT13((char)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe),
                       CONCAT12((char)((int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe),
                                CONCAT11((char)((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe),
                                         (char)((int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe))));
    param_3 = *(undefined4 **)(param_2 + 0xc);
    iVar12 = ((uint)((longlong)iVar6 * (longlong)local_38) >> 0xe |
             (int)((ulonglong)((longlong)iVar6 * (longlong)local_38) >> 0x20) << 0x12) * 0xff;
    (*(code *)*param_3)(&local_18,&local_8,(int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
    param_3 = (undefined4 *)
              (uVar9 + ((uint)((longlong)(int)uVar1 * (longlong)local_38) >> 0xe |
                       (int)((ulonglong)((longlong)(int)uVar1 * (longlong)local_38) >> 0x20) << 0x12
                       ));
    *piVar20 = local_18;
    puVar21 = (uint *)(piVar20 + 1);
    if (local_28 + 1 < local_3c + -1) {
      local_1c = 0x4000 - uVar25;
      local_48 = (local_3c + -1) - (local_28 + 1);
      do {
        local_40 = *puVar21;
        iVar12 = (int)((int)param_3 + ((int)param_3 >> 0x1f & 0x3fffU)) >> 0xe;
        local_20 = (uint)param_3 & 0x80003fff;
        uVar9 = *(uint *)(iVar19 + iVar12 * 4);
        uVar14 = *(uint *)(iVar19 + 4 + iVar12 * 4);
        uVar13 = *(uint *)(local_34 + iVar12 * 4);
        uVar26 = *(uint *)(local_34 + 4 + iVar12 * 4);
        if ((int)local_20 < 0) {
          local_20 = (local_20 - 1 | 0xffffc000) + 1;
        }
        iVar12 = (0x4000 - local_20) * local_1c;
        iVar7 = (0x4000 - local_20) * uVar25;
        local_10 = (int)(((int)(uVar25 * local_20) >> 0x1f & 0x3fffU) + uVar25 * local_20) >> 0xe;
        iVar28 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar29 = (int)(local_1c * local_20 + ((int)(local_1c * local_20) >> 0x1f & 0x3fffU)) >> 0xe;
        iVar24 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar12 = (uVar26 & 0xff) * local_10 + (uVar13 & 0xff) * iVar28 + (uVar14 & 0xff) * iVar29 +
                 (uVar9 & 0xff) * iVar24;
        iVar7 = (uVar26 >> 8 & 0xff) * local_10 + (uVar13 >> 8 & 0xff) * iVar28 +
                (uVar14 >> 8 & 0xff) * iVar29 + (uVar9 >> 8 & 0xff) * iVar24;
        iVar8 = (uVar26 >> 0x10 & 0xff) * local_10 + (uVar13 >> 0x10 & 0xff) * iVar28 +
                (uVar14 >> 0x10 & 0xff) * iVar29 + (uVar9 >> 0x10 & 0xff) * iVar24;
        iVar24 = (uVar26 >> 0x18) * local_10 + (uVar13 >> 0x18) * iVar28 + (uVar14 >> 0x18) * iVar29
                 + (uVar9 >> 0x18) * iVar24;
        local_24 = CONCAT13((char)((int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe),
                            CONCAT12((char)((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe),
                                     CONCAT11((char)((int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe
                                                    ),(char)((int)(iVar12 + (iVar12 >> 0x1f &
                                                                            0x3fffU)) >> 0xe))));
        local_14 = puVar21;
        if (iVar6 == 0x4000) {
          (*(code *)**(undefined4 **)(param_2 + 0xc))(&local_40,&local_24,0xff);
        }
        else {
          (*(code *)**(undefined4 **)(param_2 + 0xc))
                    (&local_40,&local_24,
                     (int)(iVar6 * 0xff + (iVar6 * 0xff >> 0x1f & 0x3fffU)) >> 0xe);
        }
        *local_14 = local_40;
        puVar21 = local_14 + 1;
        param_3 = (undefined4 *)((int)param_3 + uVar1);
        local_48 = local_48 + -1;
      } while (local_48 != 0);
    }
    if (iVar18 != 1) {
      uVar9 = *(uint *)(iVar19 + -4 + iVar3 * 4);
      bStack_6d = (byte)(uVar9 >> 0x18);
      uVar14 = *(uint *)(local_34 + -4 + iVar3 * 4);
      uVar13 = (uint)param_3 & 0x80003fff;
      bStack_bd = (byte)(uVar14 >> 0x18);
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xffffc000) + 1;
      }
      iVar12 = (0x4000 - uVar13) * (0x4000 - uVar25);
      iVar7 = (0x4000 - uVar25) * uVar13;
      iVar19 = (0x4000 - uVar13) * uVar25;
      local_20 = (int)(iVar19 + (iVar19 >> 0x1f & 0x3fffU)) >> 0xe;
      local_10 = (int)(((int)(uVar25 * uVar13) >> 0x1f & 0x3fffU) + uVar25 * uVar13) >> 0xe;
      iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar19 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar12 = (uVar14 & 0xff) * local_10 + (uVar14 & 0xff) * local_20 + (uVar9 & 0xff) * iVar7 +
               (uVar9 & 0xff) * iVar19;
      local_c = (undefined1)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
      iVar12 = (uVar14 >> 8 & 0xff) * local_10 + (uVar14 >> 8 & 0xff) * local_20 +
               (uVar9 >> 8 & 0xff) * iVar7 + (uVar9 >> 8 & 0xff) * iVar19;
      local_b = (undefined1)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
      iVar12 = (uVar14 >> 0x10 & 0xff) * local_10 + (uVar14 >> 0x10 & 0xff) * local_20 +
               (uVar9 >> 0x10 & 0xff) * iVar7 + (uVar9 >> 0x10 & 0xff) * iVar19;
      local_a = (undefined1)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
      iVar12 = (uint)bStack_bd * local_10 + bStack_bd * local_20 + (uint)bStack_6d * iVar7 +
               (uint)bStack_6d * iVar19;
      local_9 = (undefined1)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
      lVar2 = (longlong)iVar6 * (longlong)iVar16;
      iVar12 = (int)((ulonglong)lVar2 >> 0x20) << 0x12;
      bStack_7e = (byte)((ulonglong)lVar2 >> 0x18) >> 6 | (byte)((uint)iVar12 >> 0x10);
      uStack_7d = (undefined1)((uint)iVar12 >> 0x18);
      iVar12 = CONCAT13(uStack_7d,CONCAT12(bStack_7e,(short)((uint)lVar2 >> 0xe))) * 0xff;
      param_3 = (undefined4 *)*puVar21;
      local_14 = puVar21;
      (*(code *)**(undefined4 **)(param_2 + 0xc))
                (&param_3,&local_c,(int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
      *puVar21 = (uint)param_3;
    }
    local_30 = local_30 + iVar27;
    iVar12 = param_1;
  }
  if (iVar5 != 1) {
    iVar5 = iVar4 * *(int *)(iVar12 + 0x38) + *(int *)(iVar12 + 0x34);
    local_14 = (uint *)(iVar22 * *(int *)(iVar12 + 8) + *(int *)(iVar12 + 4) + iVar11);
    param_3 = *(undefined4 **)(iVar12 + 0x40);
    local_18 = local_28;
    if (local_28 < local_3c) {
      do {
        local_8 = *local_14;
        lVar2 = (longlong)iVar6 * (longlong)(iVar15 + 0x4000);
        uVar9 = (uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12;
        uVar14 = 1;
        iVar12 = (int)((int)param_3 + ((int)param_3 >> 0x1f & 0x3fffU)) >> 0xe;
        if (local_18 == local_28) {
          lVar2 = (longlong)(int)uVar9 * (longlong)local_38;
          iVar4 = (int)((ulonglong)lVar2 >> 0x20) << 0x12;
          bStack_7e = (byte)((ulonglong)lVar2 >> 0x18) >> 6 | (byte)((uint)iVar4 >> 0x10);
          uStack_7d = (undefined1)((uint)iVar4 >> 0x18);
          uVar9 = CONCAT13(uStack_7d,CONCAT12(bStack_7e,(short)((uint)lVar2 >> 0xe)));
          uVar14 = uVar10;
        }
        else if (local_18 == local_3c + -1) {
          uVar9 = (uint)((longlong)(int)uVar9 * (longlong)iVar16) >> 0xe |
                  (int)((ulonglong)((longlong)(int)uVar9 * (longlong)iVar16) >> 0x20) << 0x12;
          uVar14 = 0;
          iVar12 = iVar3 + -1;
        }
        uVar13 = *(uint *)(iVar5 + iVar12 * 4);
        uVar14 = *(uint *)(iVar5 + (iVar12 + uVar14) * 4);
        uVar26 = (uint)param_3 & 0x80003fff;
        if ((int)uVar26 < 0) {
          uVar26 = (uVar26 - 1 | 0xffffc000) + 1;
        }
        iVar12 = (0x4000 - uVar26) * 0x4000;
        iVar22 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar27 = (int)(uVar26 * 0x4000 + ((int)(uVar26 * 0x4000) >> 0x1f & 0x3fffU)) >> 0xe;
        iVar12 = (uVar14 & 0xff) * iVar27 + (uVar13 & 0xff) * iVar22;
        iVar4 = (uVar14 >> 8 & 0xff) * iVar27 + (uVar13 >> 8 & 0xff) * iVar22;
        iVar18 = (uVar14 >> 0x10 & 0xff) * iVar27 + (uVar13 >> 0x10 & 0xff) * iVar22;
        iVar22 = (uVar14 >> 0x18) * iVar27 + (uVar13 >> 0x18) * iVar22;
        param_1 = CONCAT13((char)((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe),
                           CONCAT12((char)((int)(iVar18 + (iVar18 >> 0x1f & 0x3fffU)) >> 0xe),
                                    CONCAT11((char)((int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe)
                                             ,(char)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >>
                                                    0xe))));
        (*(code *)**(undefined4 **)(param_2 + 0xc))
                  (&local_8,&param_1,
                   (int)(uVar9 * 0xff + ((int)(uVar9 * 0xff) >> 0x1f & 0x3fffU)) >> 0xe);
        *local_14 = local_8;
        local_14 = local_14 + 1;
        uVar9 = uVar1;
        if (local_18 == local_28) {
          local_20 = (uint)((longlong)(int)uVar1 * (longlong)local_38) >> 0xe |
                     (int)((ulonglong)((longlong)(int)uVar1 * (longlong)local_38) >> 0x20) << 0x12;
          uVar9 = local_20;
        }
        param_3 = (undefined4 *)((int)param_3 + uVar9);
        local_18 = local_18 + 1;
      } while (local_18 < local_3c);
    }
  }
  return;
}


