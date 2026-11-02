/* Module: aviplug.dll
   Function: FUN_5f9ac300
   Address: 5f9ac300
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f9ac300(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  byte *pbVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  longlong lVar31;
  undefined8 uVar32;
  int in_stack_00000028;
  int in_stack_00000030;
  int local_c4;
  int local_a4;
  uint local_6c;
  byte *local_60;
  uint local_44;
  char local_40;
  int iStack_3c;
  int local_38;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  byte *local_8;
  
  iVar3 = *(int *)(in_stack_00000028 + 0x68);
  iVar4 = *(int *)(in_stack_00000028 + 0x6c);
  iVar5 = *(int *)(in_stack_00000028 + 0x18);
  iVar6 = *(int *)(in_stack_00000028 + 0x1c);
  iVar8 = (int)((*(uint *)(in_stack_00000028 + 0x10) & 0xffffc000) +
               ((int)*(uint *)(in_stack_00000028 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar9 = (iVar5 - 1U | 0x3fff) + 1;
  iVar10 = (int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar9 = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
               ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar11 = (iVar6 - 1U | 0x3fff) + 1;
  iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
  local_c4 = (iVar8 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x10);
  local_30 = (iVar9 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x14);
  dVar7 = _DAT_5f9d7c98 /
          (double)(int)((uint)((longlong)iVar3 * (longlong)iVar4) >> 0xe |
                       (int)((ulonglong)((longlong)iVar3 * (longlong)iVar4) >> 0x20) << 0x12);
  if (iVar11 - iVar9 < 2) {
    local_30 = *(int *)(in_stack_00000028 + 0x1c) - *(int *)(in_stack_00000028 + 0x14);
  }
  if (iVar10 - iVar8 < 2) {
    local_c4 = *(int *)(in_stack_00000028 + 0x18) - *(int *)(in_stack_00000028 + 0x10);
  }
  uVar30 = *(uint *)(in_stack_00000028 + 0x44);
  for (; iVar9 < iVar11; iVar9 = iVar9 + 1) {
    local_60 = (byte *)(*(int *)(in_stack_00000028 + 8) * iVar9 + iVar8 * 4 +
                       *(int *)(in_stack_00000028 + 4));
    local_6c = *(uint *)(in_stack_00000028 + 0x40);
    local_28 = local_c4;
    uVar12 = (uint)((longlong)local_30 * (longlong)iVar4) >> 0xe |
             (int)((ulonglong)((longlong)local_30 * (longlong)iVar4) >> 0x20) << 0x12;
    iVar25 = (int)((uVar30 & 0xffffc000) + ((int)uVar30 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar13 = ((uVar12 - 1) + uVar30 | 0x3fff) + 1;
    iVar14 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar13 = uVar12 + iVar14 * -0x4000 + 0x4000 + uVar30;
    iVar23 = iVar14 - iVar25;
    local_2c = (iVar25 + 1) * 0x4000 - uVar30;
    if (iVar23 < 2) {
      local_2c = uVar12;
    }
    if (iVar8 < iVar10) {
      iVar14 = iVar14 + -1;
      local_a4 = iVar8;
      do {
        uVar15 = (uint)((longlong)local_28 * (longlong)iVar3) >> 0xe |
                 (int)((ulonglong)((longlong)local_28 * (longlong)iVar3) >> 0x20) << 0x12;
        iVar28 = (int)((local_6c & 0xffffc000) + ((int)local_6c >> 0x1f & 0x3fffU)) >> 0xe;
        iVar16 = ((uVar15 - 1) + local_6c | 0x3fff) + 1;
        iVar21 = iVar28 + 1;
        iVar17 = (int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar18 = iVar17 - iVar28;
        iVar16 = uVar15 + iVar17 * -0x4000 + 0x4000 + local_6c;
        local_44 = iVar21 * 0x4000 - local_6c;
        if (iVar18 < 2) {
          local_44 = uVar15;
        }
        iVar27 = 0;
        iVar29 = 0;
        iVar26 = 0;
        local_24 = iVar25 + 1;
        local_14 = 0;
        if (local_24 < iVar14) {
          local_8 = (byte *)(*(int *)(in_stack_00000028 + 0x38) * local_24 +
                            *(int *)(in_stack_00000028 + 0x34));
          local_24 = iVar14 - local_24;
          do {
            if (iVar21 < iVar17 + -1) {
              local_38 = (iVar17 + -1) - iVar21;
              pbVar22 = (byte *)((int)local_8 + 2 + iVar21 * 4);
              do {
                iVar29 = iVar29 + (uint)pbVar22[-2] * 0x4000;
                iVar26 = iVar26 + (uint)pbVar22[-1] * 0x4000;
                local_14 = local_14 + (uint)*pbVar22 * 0x4000;
                iVar27 = iVar27 + (uint)pbVar22[1] * 0x4000;
                local_38 = local_38 + -1;
                pbVar22 = pbVar22 + 4;
              } while (local_38 != 0);
            }
            local_8 = (byte *)((int)local_8 + *(int *)(in_stack_00000028 + 0x38));
            local_24 = local_24 + -1;
          } while (local_24 != 0);
        }
        iVar28 = iVar28 * 4;
        pbVar22 = (byte *)(*(int *)(in_stack_00000028 + 0x38) * iVar25 + iVar28 +
                          *(int *)(in_stack_00000028 + 0x34));
        uVar19 = (uint)((longlong)(int)local_44 * (longlong)(int)local_2c) >> 0xe |
                 (int)((ulonglong)((longlong)(int)local_44 * (longlong)(int)local_2c) >> 0x20) <<
                 0x12;
        local_1c = iVar29 + *pbVar22 * uVar19;
        local_18 = iVar26 + pbVar22[1] * uVar19;
        local_14 = local_14 + pbVar22[2] * uVar19;
        local_10 = iVar27 + pbVar22[3] * uVar19;
        if (1 < iVar18) {
          pbVar22 = (byte *)(*(int *)(in_stack_00000028 + 0x38) * iVar25 + iVar17 * 4 + -4 +
                            *(int *)(in_stack_00000028 + 0x34));
          uVar19 = (uint)((longlong)iVar16 * (longlong)(int)local_2c) >> 0xe |
                   (int)((ulonglong)((longlong)iVar16 * (longlong)(int)local_2c) >> 0x20) << 0x12;
          local_1c = local_1c + *pbVar22 * uVar19;
          local_18 = local_18 + pbVar22[1] * uVar19;
          local_14 = local_14 + pbVar22[2] * uVar19;
          local_10 = local_10 + pbVar22[3] * uVar19;
        }
        if (1 < iVar23) {
          pbVar22 = (byte *)(iVar14 * *(int *)(in_stack_00000028 + 0x38) + iVar28 +
                            *(int *)(in_stack_00000028 + 0x34));
          uVar19 = (uint)((longlong)(int)local_44 * (longlong)iVar13) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_44 * (longlong)iVar13) >> 0x20) << 0x12;
          local_1c = local_1c + *pbVar22 * uVar19;
          local_18 = local_18 + pbVar22[1] * uVar19;
          local_14 = local_14 + pbVar22[2] * uVar19;
          local_10 = local_10 + pbVar22[3] * uVar19;
          if (1 < iVar18) {
            pbVar22 = (byte *)(iVar14 * *(int *)(in_stack_00000028 + 0x38) + iVar17 * 4 + -4 +
                              *(int *)(in_stack_00000028 + 0x34));
            uVar19 = (uint)((longlong)iVar16 * (longlong)iVar13) >> 0xe |
                     (int)((ulonglong)((longlong)iVar16 * (longlong)iVar13) >> 0x20) << 0x12;
            local_1c = local_1c + *pbVar22 * uVar19;
            local_18 = local_18 + pbVar22[1] * uVar19;
            local_14 = local_14 + pbVar22[2] * uVar19;
            local_10 = local_10 + pbVar22[3] * uVar19;
          }
        }
        if (iVar21 < iVar17 + -1) {
          pbVar22 = (byte *)(*(int *)(in_stack_00000028 + 0x38) * iVar14 + iVar21 * 4 +
                            *(int *)(in_stack_00000028 + 0x34));
          local_8 = (byte *)(*(int *)(in_stack_00000028 + 0x38) * iVar25 + iVar21 * 4 +
                            *(int *)(in_stack_00000028 + 0x34));
          local_24 = (iVar17 + -1) - iVar21;
          do {
            local_1c = local_1c + *local_8 * local_2c;
            local_18 = local_18 + local_8[1] * local_2c;
            local_14 = local_14 + local_8[2] * local_2c;
            local_10 = local_10 + local_8[3] * local_2c;
            if (1 < iVar23) {
              local_1c = local_1c + (uint)*pbVar22 * iVar13;
              local_18 = local_18 + (uint)pbVar22[1] * iVar13;
              local_14 = local_14 + (uint)pbVar22[2] * iVar13;
              local_10 = local_10 + (uint)pbVar22[3] * iVar13;
            }
            pbVar22 = pbVar22 + 4;
            local_8 = local_8 + 4;
            local_24 = local_24 + -1;
          } while (local_24 != 0);
        }
        iStack_3c = iVar25 + 1;
        if (iStack_3c < iVar14) {
          iVar21 = *(int *)(in_stack_00000028 + 0x38);
          local_38 = iVar21 * iStack_3c;
          pbVar22 = (byte *)(*(int *)(in_stack_00000028 + 0x34) + iVar28 + local_38);
          iStack_3c = iVar14 - iStack_3c;
          do {
            local_1c = local_1c + *pbVar22 * local_44;
            local_18 = local_18 + pbVar22[1] * local_44;
            local_14 = local_14 + pbVar22[2] * local_44;
            local_10 = local_10 + pbVar22[3] * local_44;
            if (1 < iVar18) {
              pbVar1 = (byte *)(local_38 + iVar17 * 4 + -4 + *(int *)(in_stack_00000028 + 0x34));
              local_1c = local_1c + (uint)*pbVar1 * iVar16;
              local_18 = local_18 + (uint)pbVar1[1] * iVar16;
              local_14 = local_14 + (uint)pbVar1[2] * iVar16;
              local_10 = local_10 + (uint)pbVar1[3] * iVar16;
            }
            local_38 = local_38 + iVar21;
            pbVar22 = pbVar22 + iVar21;
            iStack_3c = iStack_3c + -1;
          } while (iStack_3c != 0);
        }
        if (((local_28 == 0x4000) && (local_30 == 0x4000)) || (in_stack_00000030 != 0)) {
          local_40 = SUB81((double)(int)local_1c * dVar7 + _DAT_5f9ec618 + _DAT_5f9ec358,0);
          *local_60 = local_40 - 2;
          local_40 = SUB81((double)(int)local_18 * dVar7 + _DAT_5f9ec618 + _DAT_5f9ec358,0);
          local_60[1] = local_40 - 2;
          local_40 = SUB81((double)(int)local_14 * dVar7 + _DAT_5f9ec618 + _DAT_5f9ec358,0);
          local_60[2] = local_40 - 2;
          local_40 = SUB81((double)(int)local_10 * dVar7 + _DAT_5f9ec618 + _DAT_5f9ec358,0);
          local_60[3] = local_40 - 2;
        }
        else {
          lVar31 = __alldiv((uint)((longlong)(int)uVar15 * (longlong)(int)uVar12),
                            (uint)((ulonglong)((longlong)(int)uVar15 * (longlong)(int)uVar12) >>
                                  0x20),0x4000,0);
          uVar24 = (uint)((ulonglong)lVar31 >> 0x20);
          uVar19 = (uint)lVar31;
          if ((-1 < lVar31) && (lVar31 != 0)) {
            iVar21 = ((uint)((longlong)local_28 * (longlong)local_30) >> 0xe |
                     (int)((ulonglong)((longlong)local_28 * (longlong)local_30) >> 0x20) << 0x12) *
                     0xff;
            bVar2 = *local_60;
            uVar20 = (int)(iVar21 + (iVar21 >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
            uVar32 = __alldiv(local_1c,(int)local_1c >> 0x1f,uVar19,uVar24);
            iVar21 = (((uint)uVar32 & 0xff) - (uint)bVar2) * uVar20;
            *local_60 = (char)(iVar21 + (iVar21 >> 0x1f & 0xffU) >> 8) + bVar2;
            bVar2 = local_60[1];
            uVar32 = __alldiv(local_18,(int)local_18 >> 0x1f,uVar19,uVar24);
            iVar21 = (((uint)uVar32 & 0xff) - (uint)bVar2) * uVar20;
            local_60[1] = (char)(iVar21 + (iVar21 >> 0x1f & 0xffU) >> 8) + bVar2;
            bVar2 = local_60[2];
            uVar32 = __alldiv(local_14,(int)local_14 >> 0x1f,uVar19,uVar24);
            iVar21 = (((uint)uVar32 & 0xff) - (uint)bVar2) * uVar20;
            local_60[2] = (char)(iVar21 + (iVar21 >> 0x1f & 0xffU) >> 8) + bVar2;
            bVar2 = local_60[3];
            uVar32 = __alldiv(local_10,(int)local_10 >> 0x1f,uVar19,uVar24);
            iVar21 = (((uint)uVar32 & 0xff) - (uint)bVar2) * uVar20;
            local_60[3] = (char)(iVar21 + (iVar21 >> 0x1f & 0xffU) >> 8) + bVar2;
          }
        }
        local_60 = local_60 + 4;
        if (local_a4 == iVar10 + -2) {
          uVar15 = (uint)((longlong)local_28 * (longlong)iVar3) >> 0xe |
                   (int)((ulonglong)((longlong)local_28 * (longlong)iVar3) >> 0x20) << 0x12;
          local_28 = iVar5 + iVar10 * -0x4000 + 0x4000;
        }
        else {
          local_28 = 0x4000;
        }
        local_6c = local_6c + uVar15;
        local_a4 = local_a4 + 1;
      } while (local_a4 < iVar10);
    }
    if (iVar9 == iVar11 + -2) {
      uVar12 = (uint)((longlong)local_30 * (longlong)iVar4) >> 0xe |
               (int)((ulonglong)((longlong)local_30 * (longlong)iVar4) >> 0x20) << 0x12;
      local_30 = iVar6 + iVar11 * -0x4000 + 0x4000;
    }
    else {
      local_30 = 0x4000;
    }
    uVar30 = uVar30 + uVar12;
  }
  return;
}


