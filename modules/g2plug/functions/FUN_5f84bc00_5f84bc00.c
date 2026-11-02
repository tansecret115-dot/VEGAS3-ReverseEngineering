/* Module: g2plug.dll
   Function: FUN_5f84bc00
   Address: 5f84bc00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f84bc00(void)

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
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  byte *pbVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  uint *puVar31;
  bool bVar32;
  longlong lVar33;
  undefined8 uVar34;
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
  uint uStack_1c;
  uint local_18;
  uint uStack_14;
  byte *local_8;
  
  iVar3 = *(int *)(in_stack_00000028 + 0x68);
  iVar4 = *(int *)(in_stack_00000028 + 0x6c);
  iVar5 = *(int *)(in_stack_00000028 + 0x18);
  iVar20 = (int)((*(uint *)(in_stack_00000028 + 0x10) & 0xffffc000) +
                ((int)*(uint *)(in_stack_00000028 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (iVar5 - 1U | 0x3fff) + 1;
  iVar9 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = *(int *)(in_stack_00000028 + 0x1c);
  iVar30 = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar10 = (iVar8 - 1U | 0x3fff) + 1;
  local_c4 = (iVar20 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x10);
  local_48 = (iVar30 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x14);
  iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
  lVar33 = __alldiv((uint)((longlong)iVar4 * (longlong)iVar3),
                    (uint)((ulonglong)((longlong)iVar4 * (longlong)iVar3) >> 0x20),0x4000,0);
  dVar6 = _DAT_5f870e28 / (double)lVar33;
  if (iVar10 - iVar30 < 2) {
    local_48 = iVar8 - *(int *)(in_stack_00000028 + 0x14);
  }
  if (iVar9 - iVar20 < 2) {
    local_c4 = iVar5 - *(int *)(in_stack_00000028 + 0x10);
  }
  uVar24 = *(uint *)(in_stack_00000028 + 0x44);
  for (; iVar30 < iVar10; iVar30 = iVar30 + 1) {
    local_74 = (byte *)(*(int *)(in_stack_00000028 + 8) * iVar30 + iVar20 * 4 +
                       *(int *)(in_stack_00000028 + 4));
    local_80 = *(uint *)(in_stack_00000028 + 0x40);
    local_40 = local_c4;
    uVar11 = (uint)((longlong)local_48 * (longlong)iVar4) >> 0xe |
             (int)((ulonglong)((longlong)local_48 * (longlong)iVar4) >> 0x20) << 0x12;
    iVar29 = (int)((uVar24 & 0xffffc000) + ((int)uVar24 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar12 = ((uVar11 - 1) + uVar24 | 0x3fff) + 1;
    iVar13 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar12 = uVar11 + iVar13 * -0x4000 + 0x4000 + uVar24;
    iVar25 = iVar13 - iVar29;
    local_4c = (iVar29 + 1) * 0x4000 - uVar24;
    if (iVar25 < 2) {
      local_4c = uVar11;
    }
    if (iVar20 < iVar9) {
      iVar13 = iVar13 + -1;
      local_bc = iVar20;
      do {
        uVar14 = (uint)((longlong)local_40 * (longlong)iVar3) >> 0xe |
                 (int)((ulonglong)((longlong)local_40 * (longlong)iVar3) >> 0x20) << 0x12;
        iVar21 = (int)((local_80 & 0xffffc000) + ((int)local_80 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar15 = ((uVar14 - 1) + local_80 | 0x3fff) + 1;
        iVar27 = iVar21 + 1;
        iVar26 = (int)((iVar15 >> 0x1f & 0x3fffU) + iVar15) >> 0xe;
        iVar15 = uVar14 + iVar26 * -0x4000 + 0x4000 + local_80;
        iVar16 = iVar26 - iVar21;
        local_3c = iVar27 * 0x4000 - local_80;
        if (iVar16 < 2) {
          local_3c = uVar14;
        }
        puVar31 = local_30;
        for (iVar22 = 10; iVar22 != 0; iVar22 = iVar22 + -1) {
          *puVar31 = 0;
          puVar31 = puVar31 + 1;
        }
        local_34 = iVar29 + 1;
        if (local_34 < iVar13) {
          local_8 = (byte *)(*(int *)(in_stack_00000028 + 0x38) * local_34 +
                            *(int *)(in_stack_00000028 + 0x34));
          local_34 = iVar13 - local_34;
          do {
            if (iVar27 < iVar26 + -1) {
              pbVar23 = (byte *)((int)local_8 + 2 + iVar27 * 4);
              local_38 = (iVar26 + -1) - iVar27;
              do {
                bVar32 = CARRY4(local_30[0],(uint)pbVar23[-2] * 0x4000);
                local_30[0] = local_30[0] + (uint)pbVar23[-2] * 0x4000;
                local_30[1] = local_30[1] + bVar32;
                bVar32 = CARRY4(local_30[2],(uint)pbVar23[-1] * 0x4000);
                local_30[2] = local_30[2] + (uint)pbVar23[-1] * 0x4000;
                local_30[3] = local_30[3] + bVar32;
                bVar32 = CARRY4(local_20,(uint)*pbVar23 * 0x4000);
                local_20 = local_20 + (uint)*pbVar23 * 0x4000;
                uStack_1c = uStack_1c + bVar32;
                bVar32 = CARRY4(local_18,(uint)pbVar23[1] * 0x4000);
                local_18 = local_18 + (uint)pbVar23[1] * 0x4000;
                uStack_14 = uStack_14 + bVar32;
                pbVar23 = pbVar23 + 4;
                local_38 = local_38 + -1;
              } while (local_38 != 0);
            }
            local_8 = (byte *)((int)local_8 + *(int *)(in_stack_00000028 + 0x38));
            local_34 = local_34 + -1;
          } while (local_34 != 0);
        }
        iVar21 = iVar21 * 4;
        local_8 = (byte *)(*(int *)(in_stack_00000028 + 0x38) * iVar29 + iVar21 +
                          *(int *)(in_stack_00000028 + 0x34));
        uVar17 = (uint)((longlong)(int)local_3c * (longlong)(int)local_4c) >> 0xe |
                 (int)((ulonglong)((longlong)(int)local_3c * (longlong)(int)local_4c) >> 0x20) <<
                 0x12;
        uVar18 = *local_8 * uVar17;
        bVar32 = CARRY4(local_30[0],uVar18);
        local_30[0] = local_30[0] + uVar18;
        local_30[1] = local_30[1] + ((int)uVar18 >> 0x1f) + (uint)bVar32;
        uVar18 = local_8[1] * uVar17;
        bVar32 = CARRY4(local_30[2],uVar18);
        local_30[2] = local_30[2] + uVar18;
        local_30[3] = local_30[3] + ((int)uVar18 >> 0x1f) + (uint)bVar32;
        uVar18 = local_8[2] * uVar17;
        bVar32 = CARRY4(local_20,uVar18);
        local_20 = local_20 + uVar18;
        uStack_1c = uStack_1c + ((int)uVar18 >> 0x1f) + (uint)bVar32;
        uVar17 = local_8[3] * uVar17;
        bVar32 = CARRY4(local_18,uVar17);
        local_18 = local_18 + uVar17;
        uStack_14 = uStack_14 + ((int)uVar17 >> 0x1f) + (uint)bVar32;
        if (1 < iVar16) {
          local_8 = (byte *)(*(int *)(in_stack_00000028 + 0x38) * iVar29 + iVar26 * 4 + -4 +
                            *(int *)(in_stack_00000028 + 0x34));
          uVar17 = (uint)((longlong)iVar15 * (longlong)(int)local_4c) >> 0xe |
                   (int)((ulonglong)((longlong)iVar15 * (longlong)(int)local_4c) >> 0x20) << 0x12;
          uVar18 = *local_8 * uVar17;
          bVar32 = CARRY4(local_30[0],uVar18);
          local_30[0] = local_30[0] + uVar18;
          local_30[1] = local_30[1] + ((int)uVar18 >> 0x1f) + (uint)bVar32;
          uVar18 = local_8[1] * uVar17;
          bVar32 = CARRY4(local_30[2],uVar18);
          local_30[2] = local_30[2] + uVar18;
          local_30[3] = local_30[3] + ((int)uVar18 >> 0x1f) + (uint)bVar32;
          uVar18 = local_8[2] * uVar17;
          bVar32 = CARRY4(local_20,uVar18);
          local_20 = local_20 + uVar18;
          uStack_1c = uStack_1c + ((int)uVar18 >> 0x1f) + (uint)bVar32;
          uVar17 = local_8[3] * uVar17;
          bVar32 = CARRY4(local_18,uVar17);
          local_18 = local_18 + uVar17;
          uStack_14 = uStack_14 + ((int)uVar17 >> 0x1f) + (uint)bVar32;
        }
        if (1 < iVar25) {
          local_8 = (byte *)(iVar13 * *(int *)(in_stack_00000028 + 0x38) + iVar21 +
                            *(int *)(in_stack_00000028 + 0x34));
          uVar17 = (uint)((longlong)(int)local_3c * (longlong)iVar12) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_3c * (longlong)iVar12) >> 0x20) << 0x12;
          uVar18 = *local_8 * uVar17;
          bVar32 = CARRY4(local_30[0],uVar18);
          local_30[0] = local_30[0] + uVar18;
          local_30[1] = local_30[1] + ((int)uVar18 >> 0x1f) + (uint)bVar32;
          uVar18 = local_8[1] * uVar17;
          bVar32 = CARRY4(local_30[2],uVar18);
          local_30[2] = local_30[2] + uVar18;
          local_30[3] = local_30[3] + ((int)uVar18 >> 0x1f) + (uint)bVar32;
          uVar18 = local_8[2] * uVar17;
          bVar32 = CARRY4(local_20,uVar18);
          local_20 = local_20 + uVar18;
          uStack_1c = uStack_1c + ((int)uVar18 >> 0x1f) + (uint)bVar32;
          uVar17 = local_8[3] * uVar17;
          bVar32 = CARRY4(local_18,uVar17);
          local_18 = local_18 + uVar17;
          uStack_14 = uStack_14 + ((int)uVar17 >> 0x1f) + (uint)bVar32;
          if (1 < iVar16) {
            local_8 = (byte *)(iVar13 * *(int *)(in_stack_00000028 + 0x38) + iVar26 * 4 + -4 +
                              *(int *)(in_stack_00000028 + 0x34));
            uVar17 = (uint)((longlong)iVar15 * (longlong)iVar12) >> 0xe |
                     (int)((ulonglong)((longlong)iVar15 * (longlong)iVar12) >> 0x20) << 0x12;
            uVar18 = *local_8 * uVar17;
            bVar32 = CARRY4(local_30[0],uVar18);
            local_30[0] = local_30[0] + uVar18;
            local_30[1] = local_30[1] + ((int)uVar18 >> 0x1f) + (uint)bVar32;
            uVar18 = local_8[1] * uVar17;
            bVar32 = CARRY4(local_30[2],uVar18);
            local_30[2] = local_30[2] + uVar18;
            local_30[3] = local_30[3] + ((int)uVar18 >> 0x1f) + (uint)bVar32;
            uVar18 = local_8[2] * uVar17;
            bVar32 = CARRY4(local_20,uVar18);
            local_20 = local_20 + uVar18;
            uStack_1c = uStack_1c + ((int)uVar18 >> 0x1f) + (uint)bVar32;
            uVar17 = local_8[3] * uVar17;
            bVar32 = CARRY4(local_18,uVar17);
            local_18 = local_18 + uVar17;
            uStack_14 = uStack_14 + ((int)uVar17 >> 0x1f) + (uint)bVar32;
          }
        }
        if (iVar27 < iVar26 + -1) {
          local_8 = (byte *)(*(int *)(in_stack_00000028 + 0x38) * iVar13 + iVar27 * 4 +
                            *(int *)(in_stack_00000028 + 0x34));
          pbVar23 = (byte *)(*(int *)(in_stack_00000028 + 0x38) * iVar29 + iVar27 * 4 +
                            *(int *)(in_stack_00000028 + 0x34));
          local_34 = (iVar26 + -1) - iVar27;
          do {
            uVar18 = *pbVar23 * local_4c;
            bVar32 = CARRY4(local_30[0],uVar18);
            local_30[0] = local_30[0] + uVar18;
            local_30[1] = local_30[1] + ((int)uVar18 >> 0x1f) + (uint)bVar32;
            uVar18 = pbVar23[1] * local_4c;
            bVar32 = CARRY4(local_30[2],uVar18);
            local_30[2] = local_30[2] + uVar18;
            local_30[3] = local_30[3] + ((int)uVar18 >> 0x1f) + (uint)bVar32;
            uVar18 = pbVar23[2] * local_4c;
            bVar32 = CARRY4(local_20,uVar18);
            local_20 = local_20 + uVar18;
            uStack_1c = uStack_1c + ((int)uVar18 >> 0x1f) + (uint)bVar32;
            uVar18 = pbVar23[3] * local_4c;
            bVar32 = CARRY4(local_18,uVar18);
            local_18 = local_18 + uVar18;
            uStack_14 = uStack_14 + ((int)uVar18 >> 0x1f) + (uint)bVar32;
            if (1 < iVar25) {
              uVar18 = (uint)*local_8 * iVar12;
              bVar32 = CARRY4(local_30[0],uVar18);
              local_30[0] = local_30[0] + uVar18;
              local_30[1] = local_30[1] + ((int)uVar18 >> 0x1f) + (uint)bVar32;
              uVar18 = (uint)local_8[1] * iVar12;
              bVar32 = CARRY4(local_30[2],uVar18);
              local_30[2] = local_30[2] + uVar18;
              local_30[3] = local_30[3] + ((int)uVar18 >> 0x1f) + (uint)bVar32;
              uVar18 = (uint)local_8[2] * iVar12;
              bVar32 = CARRY4(local_20,uVar18);
              local_20 = local_20 + uVar18;
              uStack_1c = uStack_1c + ((int)uVar18 >> 0x1f) + (uint)bVar32;
              uVar18 = (uint)local_8[3] * iVar12;
              bVar32 = CARRY4(local_18,uVar18);
              local_18 = local_18 + uVar18;
              uStack_14 = uStack_14 + ((int)uVar18 >> 0x1f) + (uint)bVar32;
            }
            pbVar23 = pbVar23 + 4;
            local_8 = local_8 + 4;
            local_34 = local_34 + -1;
          } while (local_34 != 0);
        }
        iVar27 = iVar29 + 1;
        if (iVar27 < iVar13) {
          iVar22 = *(int *)(in_stack_00000028 + 0x38);
          local_44 = iVar22 * iVar27;
          local_8 = (byte *)(*(int *)(in_stack_00000028 + 0x34) + iVar21 + local_44);
          uStack_58 = iVar13 - iVar27;
          do {
            uVar18 = *local_8 * local_3c;
            bVar32 = CARRY4(local_30[0],uVar18);
            local_30[0] = local_30[0] + uVar18;
            local_30[1] = local_30[1] + ((int)uVar18 >> 0x1f) + (uint)bVar32;
            uVar18 = local_8[1] * local_3c;
            bVar32 = CARRY4(local_30[2],uVar18);
            local_30[2] = local_30[2] + uVar18;
            local_30[3] = local_30[3] + ((int)uVar18 >> 0x1f) + (uint)bVar32;
            uVar18 = local_8[2] * local_3c;
            bVar32 = CARRY4(local_20,uVar18);
            local_20 = local_20 + uVar18;
            uStack_1c = uStack_1c + ((int)uVar18 >> 0x1f) + (uint)bVar32;
            uVar18 = local_8[3] * local_3c;
            bVar32 = CARRY4(local_18,uVar18);
            local_18 = local_18 + uVar18;
            uStack_14 = uStack_14 + ((int)uVar18 >> 0x1f) + (uint)bVar32;
            if (1 < iVar16) {
              iVar27 = *(int *)(in_stack_00000028 + 0x34) + iVar26 * 4;
              iVar21 = iVar27 + -4 + local_44;
              uVar18 = (uint)*(byte *)(iVar27 + -4 + local_44) * iVar15;
              bVar32 = CARRY4(local_30[0],uVar18);
              local_30[0] = local_30[0] + uVar18;
              local_30[1] = local_30[1] + ((int)uVar18 >> 0x1f) + (uint)bVar32;
              uVar18 = (uint)*(byte *)(iVar21 + 1) * iVar15;
              bVar32 = CARRY4(local_30[2],uVar18);
              local_30[2] = local_30[2] + uVar18;
              local_30[3] = local_30[3] + ((int)uVar18 >> 0x1f) + (uint)bVar32;
              uVar18 = (uint)*(byte *)(iVar21 + 2) * iVar15;
              bVar32 = CARRY4(local_20,uVar18);
              local_20 = local_20 + uVar18;
              uStack_1c = uStack_1c + ((int)uVar18 >> 0x1f) + (uint)bVar32;
              uVar18 = (uint)*(byte *)(iVar21 + 3) * iVar15;
              bVar32 = CARRY4(local_18,uVar18);
              local_18 = local_18 + uVar18;
              uStack_14 = uStack_14 + ((int)uVar18 >> 0x1f) + (uint)bVar32;
            }
            local_44 = local_44 + iVar22;
            local_8 = local_8 + iVar22;
            uStack_58 = uStack_58 + -1;
          } while (uStack_58 != 0);
        }
        uVar7 = local_30[2];
        uVar17 = local_30[1];
        uVar18 = local_30[0];
        if (((local_40 == 0x4000) && (local_48 == 0x4000)) || (in_stack_00000030 != 0)) {
          local_5c = SUB81((double)CONCAT44(local_30[1],local_30[0]) * dVar6 + _DAT_5f870e98 +
                           _DAT_5f870e90,0);
          *local_74 = local_5c - 2;
          local_5c = SUB81((double)CONCAT44(local_30[3],local_30[2]) * dVar6 + _DAT_5f870e98 +
                           _DAT_5f870e90,0);
          local_74[1] = local_5c - 2;
          local_5c = SUB81((double)CONCAT44(uStack_1c,local_20) * dVar6 + _DAT_5f870e98 +
                           _DAT_5f870e90,0);
          local_74[2] = local_5c - 2;
          local_5c = SUB81((double)CONCAT44(uStack_14,local_18) * dVar6 + _DAT_5f870e98 +
                           _DAT_5f870e90,0);
          local_74[3] = local_5c - 2;
        }
        else {
          lVar33 = __alldiv((uint)((longlong)(int)uVar14 * (longlong)(int)uVar11),
                            (uint)((ulonglong)((longlong)(int)uVar14 * (longlong)(int)uVar11) >>
                                  0x20),0x4000,0);
          uVar28 = (uint)((ulonglong)lVar33 >> 0x20);
          uVar19 = (uint)lVar33;
          if ((-1 < lVar33) && (lVar33 != 0)) {
            iVar27 = ((uint)((longlong)local_40 * (longlong)local_48) >> 0xe |
                     (int)((ulonglong)((longlong)local_40 * (longlong)local_48) >> 0x20) << 0x12) *
                     0xff;
            bVar1 = *local_74;
            uStack_58 = (int)(iVar27 + (iVar27 >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
            uVar34 = __alldiv(uVar18,uVar17,uVar19,uVar28);
            iVar27 = (((uint)uVar34 & 0xff) - (uint)bVar1) * uStack_58;
            bVar2 = local_74[1];
            *local_74 = (char)(iVar27 + (iVar27 >> 0x1f & 0xffU) >> 8) + bVar1;
            uVar34 = __alldiv(uVar7,local_30[3],uVar19,uVar28);
            bVar1 = local_74[2];
            iVar27 = (((uint)uVar34 & 0xff) - (uint)bVar2) * uStack_58;
            local_74[1] = (char)(iVar27 + (iVar27 >> 0x1f & 0xffU) >> 8) + bVar2;
            uVar34 = __alldiv(local_20,uStack_1c,uVar19,uVar28);
            iVar27 = (((uint)uVar34 & 0xff) - (uint)bVar1) * uStack_58;
            bVar2 = local_74[3];
            local_74[2] = (char)(iVar27 + (iVar27 >> 0x1f & 0xffU) >> 8) + bVar1;
            uVar34 = __alldiv(local_18,uStack_14,uVar19,uVar28);
            iVar27 = (((uint)uVar34 & 0xff) - (uint)bVar2) * uStack_58;
            local_74[3] = (char)(iVar27 + (iVar27 >> 0x1f & 0xffU) >> 8) + bVar2;
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
    if (iVar30 == iVar10 + -2) {
      uVar11 = (uint)((longlong)local_48 * (longlong)iVar4) >> 0xe |
               (int)((ulonglong)((longlong)local_48 * (longlong)iVar4) >> 0x20) << 0x12;
      local_48 = iVar8 + iVar10 * -0x4000 + 0x4000;
    }
    else {
      local_48 = 0x4000;
    }
    uVar24 = uVar24 + uVar11;
  }
  return;
}


