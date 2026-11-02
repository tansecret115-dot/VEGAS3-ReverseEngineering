/* Module: sftrans1.dll
   Function: FUN_004ffc40
   Address: 004ffc40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005004fb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ffc40(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  byte *pbVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint *puVar29;
  bool bVar30;
  longlong lVar31;
  int in_stack_00000028;
  int in_stack_00000030;
  int local_c4;
  int local_bc;
  uint local_80;
  byte *local_74;
  char local_5c;
  uint uStack_58;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  uint local_30 [4];
  uint local_20;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  byte *local_8;
  
  iVar3 = *(int *)(in_stack_00000028 + 0x68);
  iVar4 = *(int *)(in_stack_00000028 + 0x6c);
  iVar5 = *(int *)(in_stack_00000028 + 0x18);
  iVar19 = (int)((*(uint *)(in_stack_00000028 + 0x10) & 0xffffc000) +
                ((int)*(uint *)(in_stack_00000028 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (iVar5 - 1U | 0x3fff) + 1;
  iVar9 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = *(int *)(in_stack_00000028 + 0x1c);
  iVar28 = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar10 = (iVar8 - 1U | 0x3fff) + 1;
  local_c4 = (iVar19 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x10);
  local_48 = (iVar28 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x14);
  iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
  lVar31 = __alldiv((longlong)iVar4 * (longlong)iVar3,0x4000,0);
  dVar6 = _DAT_00555908 / (double)lVar31;
  if (iVar10 - iVar28 < 2) {
    local_48 = iVar8 - *(int *)(in_stack_00000028 + 0x14);
  }
  if (iVar9 - iVar19 < 2) {
    local_c4 = iVar5 - *(int *)(in_stack_00000028 + 0x10);
  }
  uVar23 = *(uint *)(in_stack_00000028 + 0x44);
  for (; iVar28 < iVar10; iVar28 = iVar28 + 1) {
    local_74 = (byte *)(*(int *)(in_stack_00000028 + 8) * iVar28 + iVar19 * 4 +
                       *(int *)(in_stack_00000028 + 4));
    local_80 = *(uint *)(in_stack_00000028 + 0x40);
    local_40 = local_c4;
    uVar11 = (uint)((longlong)local_48 * (longlong)iVar4) >> 0xe |
             (int)((ulonglong)((longlong)local_48 * (longlong)iVar4) >> 0x20) << 0x12;
    iVar27 = (int)((uVar23 & 0xffffc000) + ((int)uVar23 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar12 = ((uVar11 - 1) + uVar23 | 0x3fff) + 1;
    iVar13 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar12 = uVar11 + iVar13 * -0x4000 + 0x4000 + uVar23;
    iVar24 = iVar13 - iVar27;
    local_4c = (iVar27 + 1) * 0x4000 - uVar23;
    if (iVar24 < 2) {
      local_4c = uVar11;
    }
    if (iVar19 < iVar9) {
      iVar13 = iVar13 + -1;
      local_bc = iVar19;
      do {
        uVar14 = (uint)((longlong)local_40 * (longlong)iVar3) >> 0xe |
                 (int)((ulonglong)((longlong)local_40 * (longlong)iVar3) >> 0x20) << 0x12;
        iVar20 = (int)((local_80 & 0xffffc000) + ((int)local_80 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar15 = ((uVar14 - 1) + local_80 | 0x3fff) + 1;
        iVar26 = iVar20 + 1;
        iVar25 = (int)((iVar15 >> 0x1f & 0x3fffU) + iVar15) >> 0xe;
        iVar15 = uVar14 + iVar25 * -0x4000 + 0x4000 + local_80;
        iVar16 = iVar25 - iVar20;
        local_3c = iVar26 * 0x4000 - local_80;
        if (iVar16 < 2) {
          local_3c = uVar14;
        }
        puVar29 = local_30;
        for (iVar21 = 10; iVar21 != 0; iVar21 = iVar21 + -1) {
          *puVar29 = 0;
          puVar29 = puVar29 + 1;
        }
        local_34 = iVar27 + 1;
        if (local_34 < iVar13) {
          local_8 = (byte *)(*(int *)(in_stack_00000028 + 0x38) * local_34 +
                            *(int *)(in_stack_00000028 + 0x34));
          local_34 = iVar13 - local_34;
          do {
            if (iVar26 < iVar25 + -1) {
              pbVar22 = (byte *)((int)local_8 + 2 + iVar26 * 4);
              local_38 = (iVar25 + -1) - iVar26;
              do {
                bVar30 = CARRY4(local_30[0],(uint)pbVar22[-2] * 0x4000);
                local_30[0] = local_30[0] + (uint)pbVar22[-2] * 0x4000;
                local_30[1] = local_30[1] + bVar30;
                bVar30 = CARRY4(local_30[2],(uint)pbVar22[-1] * 0x4000);
                local_30[2] = local_30[2] + (uint)pbVar22[-1] * 0x4000;
                local_30[3] = local_30[3] + bVar30;
                bVar30 = CARRY4(local_20,(uint)*pbVar22 * 0x4000);
                local_20 = local_20 + (uint)*pbVar22 * 0x4000;
                iStack_1c = iStack_1c + (uint)bVar30;
                bVar30 = CARRY4(local_18,(uint)pbVar22[1] * 0x4000);
                local_18 = local_18 + (uint)pbVar22[1] * 0x4000;
                iStack_14 = iStack_14 + (uint)bVar30;
                pbVar22 = pbVar22 + 4;
                local_38 = local_38 + -1;
              } while (local_38 != 0);
            }
            local_8 = (byte *)((int)local_8 + *(int *)(in_stack_00000028 + 0x38));
            local_34 = local_34 + -1;
          } while (local_34 != 0);
        }
        iVar20 = iVar20 * 4;
        local_8 = (byte *)(*(int *)(in_stack_00000028 + 0x38) * iVar27 + iVar20 +
                          *(int *)(in_stack_00000028 + 0x34));
        uVar17 = (uint)((longlong)(int)local_3c * (longlong)(int)local_4c) >> 0xe |
                 (int)((ulonglong)((longlong)(int)local_3c * (longlong)(int)local_4c) >> 0x20) <<
                 0x12;
        uVar18 = *local_8 * uVar17;
        bVar30 = CARRY4(local_30[0],uVar18);
        local_30[0] = local_30[0] + uVar18;
        local_30[1] = local_30[1] + ((int)uVar18 >> 0x1f) + (uint)bVar30;
        uVar18 = local_8[1] * uVar17;
        bVar30 = CARRY4(local_30[2],uVar18);
        local_30[2] = local_30[2] + uVar18;
        local_30[3] = local_30[3] + ((int)uVar18 >> 0x1f) + (uint)bVar30;
        uVar18 = local_8[2] * uVar17;
        bVar30 = CARRY4(local_20,uVar18);
        local_20 = local_20 + uVar18;
        iStack_1c = iStack_1c + ((int)uVar18 >> 0x1f) + (uint)bVar30;
        uVar17 = local_8[3] * uVar17;
        bVar30 = CARRY4(local_18,uVar17);
        local_18 = local_18 + uVar17;
        iStack_14 = iStack_14 + ((int)uVar17 >> 0x1f) + (uint)bVar30;
        if (1 < iVar16) {
          local_8 = (byte *)(*(int *)(in_stack_00000028 + 0x38) * iVar27 + iVar25 * 4 + -4 +
                            *(int *)(in_stack_00000028 + 0x34));
          uVar17 = (uint)((longlong)iVar15 * (longlong)(int)local_4c) >> 0xe |
                   (int)((ulonglong)((longlong)iVar15 * (longlong)(int)local_4c) >> 0x20) << 0x12;
          uVar18 = *local_8 * uVar17;
          bVar30 = CARRY4(local_30[0],uVar18);
          local_30[0] = local_30[0] + uVar18;
          local_30[1] = local_30[1] + ((int)uVar18 >> 0x1f) + (uint)bVar30;
          uVar18 = local_8[1] * uVar17;
          bVar30 = CARRY4(local_30[2],uVar18);
          local_30[2] = local_30[2] + uVar18;
          local_30[3] = local_30[3] + ((int)uVar18 >> 0x1f) + (uint)bVar30;
          uVar18 = local_8[2] * uVar17;
          bVar30 = CARRY4(local_20,uVar18);
          local_20 = local_20 + uVar18;
          iStack_1c = iStack_1c + ((int)uVar18 >> 0x1f) + (uint)bVar30;
          uVar17 = local_8[3] * uVar17;
          bVar30 = CARRY4(local_18,uVar17);
          local_18 = local_18 + uVar17;
          iStack_14 = iStack_14 + ((int)uVar17 >> 0x1f) + (uint)bVar30;
        }
        if (1 < iVar24) {
          local_8 = (byte *)(iVar13 * *(int *)(in_stack_00000028 + 0x38) + iVar20 +
                            *(int *)(in_stack_00000028 + 0x34));
          uVar17 = (uint)((longlong)(int)local_3c * (longlong)iVar12) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_3c * (longlong)iVar12) >> 0x20) << 0x12;
          uVar18 = *local_8 * uVar17;
          bVar30 = CARRY4(local_30[0],uVar18);
          local_30[0] = local_30[0] + uVar18;
          local_30[1] = local_30[1] + ((int)uVar18 >> 0x1f) + (uint)bVar30;
          uVar18 = local_8[1] * uVar17;
          bVar30 = CARRY4(local_30[2],uVar18);
          local_30[2] = local_30[2] + uVar18;
          local_30[3] = local_30[3] + ((int)uVar18 >> 0x1f) + (uint)bVar30;
          uVar18 = local_8[2] * uVar17;
          bVar30 = CARRY4(local_20,uVar18);
          local_20 = local_20 + uVar18;
          iStack_1c = iStack_1c + ((int)uVar18 >> 0x1f) + (uint)bVar30;
          uVar17 = local_8[3] * uVar17;
          bVar30 = CARRY4(local_18,uVar17);
          local_18 = local_18 + uVar17;
          iStack_14 = iStack_14 + ((int)uVar17 >> 0x1f) + (uint)bVar30;
          if (1 < iVar16) {
            local_8 = (byte *)(iVar13 * *(int *)(in_stack_00000028 + 0x38) + iVar25 * 4 + -4 +
                              *(int *)(in_stack_00000028 + 0x34));
            uVar17 = (uint)((longlong)iVar15 * (longlong)iVar12) >> 0xe |
                     (int)((ulonglong)((longlong)iVar15 * (longlong)iVar12) >> 0x20) << 0x12;
            uVar18 = *local_8 * uVar17;
            bVar30 = CARRY4(local_30[0],uVar18);
            local_30[0] = local_30[0] + uVar18;
            local_30[1] = local_30[1] + ((int)uVar18 >> 0x1f) + (uint)bVar30;
            uVar18 = local_8[1] * uVar17;
            bVar30 = CARRY4(local_30[2],uVar18);
            local_30[2] = local_30[2] + uVar18;
            local_30[3] = local_30[3] + ((int)uVar18 >> 0x1f) + (uint)bVar30;
            uVar18 = local_8[2] * uVar17;
            bVar30 = CARRY4(local_20,uVar18);
            local_20 = local_20 + uVar18;
            iStack_1c = iStack_1c + ((int)uVar18 >> 0x1f) + (uint)bVar30;
            uVar17 = local_8[3] * uVar17;
            bVar30 = CARRY4(local_18,uVar17);
            local_18 = local_18 + uVar17;
            iStack_14 = iStack_14 + ((int)uVar17 >> 0x1f) + (uint)bVar30;
          }
        }
        if (iVar26 < iVar25 + -1) {
          local_8 = (byte *)(*(int *)(in_stack_00000028 + 0x38) * iVar13 + iVar26 * 4 +
                            *(int *)(in_stack_00000028 + 0x34));
          pbVar22 = (byte *)(*(int *)(in_stack_00000028 + 0x38) * iVar27 + iVar26 * 4 +
                            *(int *)(in_stack_00000028 + 0x34));
          local_34 = (iVar25 + -1) - iVar26;
          do {
            uVar18 = *pbVar22 * local_4c;
            bVar30 = CARRY4(local_30[0],uVar18);
            local_30[0] = local_30[0] + uVar18;
            local_30[1] = local_30[1] + ((int)uVar18 >> 0x1f) + (uint)bVar30;
            uVar18 = pbVar22[1] * local_4c;
            bVar30 = CARRY4(local_30[2],uVar18);
            local_30[2] = local_30[2] + uVar18;
            local_30[3] = local_30[3] + ((int)uVar18 >> 0x1f) + (uint)bVar30;
            uVar18 = pbVar22[2] * local_4c;
            bVar30 = CARRY4(local_20,uVar18);
            local_20 = local_20 + uVar18;
            iStack_1c = iStack_1c + ((int)uVar18 >> 0x1f) + (uint)bVar30;
            uVar18 = pbVar22[3] * local_4c;
            bVar30 = CARRY4(local_18,uVar18);
            local_18 = local_18 + uVar18;
            iStack_14 = iStack_14 + ((int)uVar18 >> 0x1f) + (uint)bVar30;
            if (1 < iVar24) {
              uVar18 = (uint)*local_8 * iVar12;
              bVar30 = CARRY4(local_30[0],uVar18);
              local_30[0] = local_30[0] + uVar18;
              local_30[1] = local_30[1] + ((int)uVar18 >> 0x1f) + (uint)bVar30;
              uVar18 = (uint)local_8[1] * iVar12;
              bVar30 = CARRY4(local_30[2],uVar18);
              local_30[2] = local_30[2] + uVar18;
              local_30[3] = local_30[3] + ((int)uVar18 >> 0x1f) + (uint)bVar30;
              uVar18 = (uint)local_8[2] * iVar12;
              bVar30 = CARRY4(local_20,uVar18);
              local_20 = local_20 + uVar18;
              iStack_1c = iStack_1c + ((int)uVar18 >> 0x1f) + (uint)bVar30;
              uVar18 = (uint)local_8[3] * iVar12;
              bVar30 = CARRY4(local_18,uVar18);
              local_18 = local_18 + uVar18;
              iStack_14 = iStack_14 + ((int)uVar18 >> 0x1f) + (uint)bVar30;
            }
            pbVar22 = pbVar22 + 4;
            local_8 = local_8 + 4;
            local_34 = local_34 + -1;
          } while (local_34 != 0);
        }
        iVar26 = iVar27 + 1;
        if (iVar26 < iVar13) {
          iVar21 = *(int *)(in_stack_00000028 + 0x38);
          local_44 = iVar21 * iVar26;
          local_8 = (byte *)(*(int *)(in_stack_00000028 + 0x34) + iVar20 + local_44);
          uStack_58 = iVar13 - iVar26;
          do {
            uVar18 = *local_8 * local_3c;
            bVar30 = CARRY4(local_30[0],uVar18);
            local_30[0] = local_30[0] + uVar18;
            local_30[1] = local_30[1] + ((int)uVar18 >> 0x1f) + (uint)bVar30;
            uVar18 = local_8[1] * local_3c;
            bVar30 = CARRY4(local_30[2],uVar18);
            local_30[2] = local_30[2] + uVar18;
            local_30[3] = local_30[3] + ((int)uVar18 >> 0x1f) + (uint)bVar30;
            uVar18 = local_8[2] * local_3c;
            bVar30 = CARRY4(local_20,uVar18);
            local_20 = local_20 + uVar18;
            iStack_1c = iStack_1c + ((int)uVar18 >> 0x1f) + (uint)bVar30;
            uVar18 = local_8[3] * local_3c;
            bVar30 = CARRY4(local_18,uVar18);
            local_18 = local_18 + uVar18;
            iStack_14 = iStack_14 + ((int)uVar18 >> 0x1f) + (uint)bVar30;
            if (1 < iVar16) {
              iVar26 = *(int *)(in_stack_00000028 + 0x34) + iVar25 * 4;
              iVar20 = iVar26 + -4 + local_44;
              uVar18 = (uint)*(byte *)(iVar26 + -4 + local_44) * iVar15;
              bVar30 = CARRY4(local_30[0],uVar18);
              local_30[0] = local_30[0] + uVar18;
              local_30[1] = local_30[1] + ((int)uVar18 >> 0x1f) + (uint)bVar30;
              uVar18 = (uint)*(byte *)(iVar20 + 1) * iVar15;
              bVar30 = CARRY4(local_30[2],uVar18);
              local_30[2] = local_30[2] + uVar18;
              local_30[3] = local_30[3] + ((int)uVar18 >> 0x1f) + (uint)bVar30;
              uVar18 = (uint)*(byte *)(iVar20 + 2) * iVar15;
              bVar30 = CARRY4(local_20,uVar18);
              local_20 = local_20 + uVar18;
              iStack_1c = iStack_1c + ((int)uVar18 >> 0x1f) + (uint)bVar30;
              uVar18 = (uint)*(byte *)(iVar20 + 3) * iVar15;
              bVar30 = CARRY4(local_18,uVar18);
              local_18 = local_18 + uVar18;
              iStack_14 = iStack_14 + ((int)uVar18 >> 0x1f) + (uint)bVar30;
            }
            local_44 = local_44 + iVar21;
            local_8 = local_8 + iVar21;
            uStack_58 = uStack_58 + -1;
          } while (uStack_58 != 0);
        }
        uVar7 = local_30[2];
        uVar17 = local_30[1];
        uVar18 = local_30[0];
        if (((local_40 == 0x4000) && (local_48 == 0x4000)) || (in_stack_00000030 != 0)) {
          local_5c = SUB81((double)CONCAT44(local_30[1],local_30[0]) * dVar6 + _DAT_00560f00 +
                           _DAT_0056b158,0);
          *local_74 = local_5c - 2;
          local_5c = SUB81((double)CONCAT44(local_30[3],local_30[2]) * dVar6 + _DAT_00560f00 +
                           _DAT_0056b158,0);
          local_74[1] = local_5c - 2;
          local_5c = SUB81((double)CONCAT44(iStack_1c,local_20) * dVar6 + _DAT_00560f00 +
                           _DAT_0056b158,0);
          local_74[2] = local_5c - 2;
          local_5c = SUB81((double)CONCAT44(iStack_14,local_18) * dVar6 + _DAT_00560f00 +
                           _DAT_0056b158,0);
          local_74[3] = local_5c - 2;
        }
        else {
          lVar31 = __alldiv((longlong)(int)uVar14 * (longlong)(int)uVar11,0x4000,0);
          if (0 < lVar31) {
            iVar26 = ((uint)((longlong)local_40 * (longlong)local_48) >> 0xe |
                     (int)((ulonglong)((longlong)local_40 * (longlong)local_48) >> 0x20) << 0x12) *
                     0xff;
            bVar1 = *local_74;
            uStack_58 = (int)(iVar26 + (iVar26 >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
            uVar18 = __alldiv(uVar18,uVar17,lVar31);
            iVar26 = ((uVar18 & 0xff) - (uint)bVar1) * uStack_58;
            bVar2 = local_74[1];
            *local_74 = (char)(iVar26 + (iVar26 >> 0x1f & 0xffU) >> 8) + bVar1;
            uVar18 = __alldiv(uVar7,local_30[3],lVar31);
            bVar1 = local_74[2];
            iVar26 = ((uVar18 & 0xff) - (uint)bVar2) * uStack_58;
            local_74[1] = (char)(iVar26 + (iVar26 >> 0x1f & 0xffU) >> 8) + bVar2;
            uVar18 = __alldiv(local_20,iStack_1c,lVar31);
            iVar26 = ((uVar18 & 0xff) - (uint)bVar1) * uStack_58;
            bVar2 = local_74[3];
            local_74[2] = (char)(iVar26 + (iVar26 >> 0x1f & 0xffU) >> 8) + bVar1;
            uVar18 = __alldiv(local_18,iStack_14,lVar31);
            iVar26 = ((uVar18 & 0xff) - (uint)bVar2) * uStack_58;
            local_74[3] = (char)(iVar26 + (iVar26 >> 0x1f & 0xffU) >> 8) + bVar2;
          }
        }
        local_74 = local_74 + 4;
        if (local_bc == iVar9 + -2) {
          uVar14 = (uint)((longlong)local_40 * (longlong)iVar3) >> 0xe |
                   (int)((ulonglong)((longlong)local_40 * (longlong)iVar3) >> 0x20) << 0x12;
          local_40 = iVar5 + iVar9 * -0x4000 + 0x4000;
        }
        else {
          local_40 = 0x4000;
        }
        local_80 = local_80 + uVar14;
        local_bc = local_bc + 1;
      } while (local_bc < iVar9);
    }
    if (iVar28 == iVar10 + -2) {
      uVar11 = (uint)((longlong)local_48 * (longlong)iVar4) >> 0xe |
               (int)((ulonglong)((longlong)local_48 * (longlong)iVar4) >> 0x20) << 0x12;
      local_48 = iVar8 + iVar10 * -0x4000 + 0x4000;
    }
    else {
      local_48 = 0x4000;
    }
    uVar23 = uVar23 + uVar11;
  }
  return;
}


