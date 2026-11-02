/* Module: sfpagepeel.dll
   Function: FUN_0044e590
   Address: 0044e590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044e590(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  int iVar21;
  bool bVar22;
  undefined8 uVar23;
  int in_stack_00000028;
  int in_stack_00000030;
  byte local_a8;
  byte local_a4;
  int local_9c;
  byte local_94;
  byte local_8c;
  int local_7c;
  int local_60;
  byte *local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48 [4];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  uVar3 = *(uint *)(in_stack_00000028 + 0x60);
  local_c = *(int *)(in_stack_00000028 + 0x6c);
  iVar4 = *(int *)(in_stack_00000028 + 0x18);
  iVar14 = (int)((*(uint *)(in_stack_00000028 + 0x10) & 0xffffc000) +
                ((int)*(uint *)(in_stack_00000028 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (iVar4 - 1U | 0x3fff) + 1;
  iVar7 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = *(int *)(in_stack_00000028 + 0x1c);
  local_18 = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (iVar6 - 1U | 0x3fff) + 1;
  iVar18 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (*(int *)(in_stack_00000028 + 0x48) - 1U | 0x3fff) + 1;
  local_60 = (iVar14 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x10);
  local_14 = (local_18 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x14);
  if (iVar18 - local_18 < 2) {
    local_14 = iVar6 - *(int *)(in_stack_00000028 + 0x14);
  }
  if (iVar7 - iVar14 < 2) {
    local_60 = iVar4 - *(int *)(in_stack_00000028 + 0x10);
  }
  local_1c = *(uint *)(in_stack_00000028 + 0x44);
  for (; local_18 < iVar18; local_18 = local_18 + 1) {
    local_54 = local_60;
    local_50 = *(uint *)(in_stack_00000028 + 0x40);
    local_58 = (byte *)(*(int *)(in_stack_00000028 + 8) * local_18 + *(int *)(in_stack_00000028 + 4)
                       + iVar14 * 4);
    local_20 = (uint)((longlong)local_14 * (longlong)local_c) >> 0xe |
               (int)((ulonglong)((longlong)local_14 * (longlong)local_c) >> 0x20) << 0x12;
    iVar19 = (int)((local_1c & 0xffffc000) + ((int)local_1c >> 0x1f & 0x3fffU)) >> 0xe;
    iVar9 = ((local_20 - 1) + local_1c | 0x3fff) + 1;
    iVar10 = (int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar9 = local_20 + iVar10 * -0x4000 + 0x4000 + local_1c;
    local_4c = (iVar19 + 1) * 0x4000 - local_1c;
    if (iVar10 - iVar19 < 2) {
      local_4c = local_20;
    }
    if (iVar14 < iVar7) {
      local_7c = iVar14;
      do {
        bVar22 = ((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe) + -1 <=
                 (int)(local_50 + ((int)local_50 >> 0x1f & 0x3fffU)) >> 0xe;
        if (bVar22) {
          local_50 = (*(int *)(in_stack_00000028 + 0x48) - 1U | 0x3fff) - 0x3fff;
        }
        local_8 = (uint)!bVar22;
        puVar20 = local_48;
        for (iVar15 = 10; uVar13 = local_20, iVar15 != 0; iVar15 = iVar15 + -1) {
          *puVar20 = 0;
          puVar20 = puVar20 + 1;
        }
        local_10 = (int)(local_50 + ((int)local_50 >> 0x1f & 0x3fffU)) >> 0xe;
        uVar17 = local_50 & 0x80003fff;
        if ((int)uVar17 < 0) {
          uVar17 = (uVar17 - 1 | 0xffffc000) + 1;
        }
        iVar15 = *(int *)(in_stack_00000028 + 0x38);
        iVar16 = iVar15 * iVar19 + *(int *)(in_stack_00000028 + 0x34);
        local_8 = local_8 + local_10;
        iVar21 = 0x4000 - uVar17;
        iVar11 = (uint)*(byte *)(iVar16 + local_10 * 4) * iVar21 +
                 *(byte *)(iVar16 + local_8 * 4) * uVar17;
        uVar12 = ((int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe) * local_4c;
        bVar22 = CARRY4(local_48[0],uVar12);
        local_48[0] = local_48[0] + uVar12;
        local_48[1] = local_48[1] + ((int)uVar12 >> 0x1f) + (uint)bVar22;
        iVar11 = *(byte *)(iVar16 + 1 + local_8 * 4) * uVar17 +
                 (uint)*(byte *)(iVar16 + 1 + local_10 * 4) * iVar21;
        uVar12 = ((int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe) * local_4c;
        bVar22 = CARRY4(local_48[2],uVar12);
        local_48[2] = local_48[2] + uVar12;
        local_48[3] = local_48[3] + ((int)uVar12 >> 0x1f) + (uint)bVar22;
        iVar11 = *(byte *)(iVar16 + 2 + local_8 * 4) * uVar17 +
                 (uint)*(byte *)(iVar16 + 2 + local_10 * 4) * iVar21;
        uVar12 = ((int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe) * local_4c;
        bVar22 = CARRY4(local_38,uVar12);
        local_38 = local_38 + uVar12;
        local_34 = local_34 + ((int)uVar12 >> 0x1f) + (uint)bVar22;
        iVar11 = *(byte *)(iVar16 + 3 + local_8 * 4) * uVar17 +
                 (uint)*(byte *)(iVar16 + 3 + local_10 * 4) * iVar21;
        uVar12 = ((int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe) * local_4c;
        bVar22 = CARRY4(local_30,uVar12);
        local_30 = local_30 + uVar12;
        local_2c = local_2c + ((int)uVar12 >> 0x1f) + (uint)bVar22;
        if (iVar19 + 1 < iVar10 + -1) {
          local_9c = (iVar10 + -1) - (iVar19 + 1);
          do {
            iVar16 = iVar16 + iVar15;
            iVar11 = *(byte *)(iVar16 + local_8 * 4) * uVar17 +
                     (uint)*(byte *)(iVar16 + local_10 * 4) * iVar21;
            uVar12 = ((int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe) * 0x4000;
            bVar22 = CARRY4(local_48[0],uVar12);
            local_48[0] = local_48[0] + uVar12;
            local_48[1] = local_48[1] + ((int)uVar12 >> 0x1f) + (uint)bVar22;
            iVar11 = *(byte *)(iVar16 + 1 + local_8 * 4) * uVar17 +
                     (uint)*(byte *)(iVar16 + 1 + local_10 * 4) * iVar21;
            uVar12 = ((int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe) * 0x4000;
            bVar22 = CARRY4(local_48[2],uVar12);
            local_48[2] = local_48[2] + uVar12;
            local_48[3] = local_48[3] + ((int)uVar12 >> 0x1f) + (uint)bVar22;
            iVar11 = *(byte *)(iVar16 + 2 + local_8 * 4) * uVar17 +
                     (uint)*(byte *)(iVar16 + 2 + local_10 * 4) * iVar21;
            uVar12 = ((int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe) * 0x4000;
            bVar22 = CARRY4(local_38,uVar12);
            local_38 = local_38 + uVar12;
            local_34 = local_34 + ((int)uVar12 >> 0x1f) + (uint)bVar22;
            iVar11 = (uint)*(byte *)(iVar16 + 3 + local_10 * 4) * iVar21 +
                     *(byte *)(iVar16 + 3 + local_8 * 4) * uVar17;
            uVar12 = ((int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe) * 0x4000;
            bVar22 = CARRY4(local_30,uVar12);
            local_30 = local_30 + uVar12;
            local_2c = local_2c + ((int)uVar12 >> 0x1f) + (uint)bVar22;
            local_9c = local_9c + -1;
          } while (local_9c != 0);
        }
        if (1 < iVar10 - iVar19) {
          iVar16 = iVar16 + iVar15;
          iVar15 = (uint)*(byte *)(iVar16 + local_10 * 4) * iVar21 +
                   *(byte *)(iVar16 + local_8 * 4) * uVar17;
          uVar12 = ((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe) * iVar9;
          bVar22 = CARRY4(local_48[0],uVar12);
          local_48[0] = local_48[0] + uVar12;
          local_48[1] = local_48[1] + ((int)uVar12 >> 0x1f) + (uint)bVar22;
          iVar15 = *(byte *)(iVar16 + 1 + local_8 * 4) * uVar17 +
                   (uint)*(byte *)(iVar16 + 1 + local_10 * 4) * iVar21;
          uVar12 = ((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe) * iVar9;
          bVar22 = CARRY4(local_48[2],uVar12);
          local_48[2] = local_48[2] + uVar12;
          local_48[3] = local_48[3] + ((int)uVar12 >> 0x1f) + (uint)bVar22;
          iVar15 = *(byte *)(iVar16 + 2 + local_8 * 4) * uVar17 +
                   (uint)*(byte *)(iVar16 + 2 + local_10 * 4) * iVar21;
          uVar12 = ((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe) * iVar9;
          bVar22 = CARRY4(local_38,uVar12);
          local_38 = local_38 + uVar12;
          local_34 = local_34 + ((int)uVar12 >> 0x1f) + (uint)bVar22;
          iVar15 = *(byte *)(iVar16 + 3 + local_8 * 4) * uVar17 +
                   (uint)*(byte *)(iVar16 + 3 + local_10 * 4) * iVar21;
          uVar17 = ((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe) * iVar9;
          bVar22 = CARRY4(local_30,uVar17);
          local_30 = local_30 + uVar17;
          local_2c = local_2c + ((int)uVar17 >> 0x1f) + (uint)bVar22;
        }
        if (((local_14 == 0x4000) && (local_54 == 0x4000)) || (in_stack_00000030 != 0)) {
          local_a8 = (byte)(CONCAT44(local_48[1],local_48[0]) / (longlong)local_c);
          *local_58 = local_a8;
          local_94 = (byte)(CONCAT44(local_48[3],local_48[2]) / (longlong)local_c);
          local_58[1] = local_94;
          local_a4 = (byte)(CONCAT44(local_34,local_38) / (longlong)local_c);
          local_58[2] = local_a4;
          local_8c = (byte)(CONCAT44(local_2c,local_30) / (longlong)local_c);
          local_58[3] = local_8c;
        }
        else if (local_20 != 0) {
          iVar15 = ((uint)((longlong)local_54 * (longlong)local_14) >> 0xe |
                   (int)((ulonglong)((longlong)local_54 * (longlong)local_14) >> 0x20) << 0x12) *
                   0xff;
          bVar1 = *local_58;
          uVar17 = (int)local_20 >> 0x1f;
          uVar12 = (int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
          uVar23 = __alldiv(local_48[0],local_48[1],local_20,uVar17);
          iVar15 = (((uint)uVar23 & 0xff) - (uint)bVar1) * uVar12;
          bVar2 = local_58[1];
          *local_58 = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + bVar1;
          uVar23 = __alldiv(local_48[2],local_48[3],uVar13,uVar17);
          iVar15 = (((uint)uVar23 & 0xff) - (uint)bVar2) * uVar12;
          bVar1 = local_58[2];
          local_58[1] = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + bVar2;
          uVar23 = __alldiv(local_38,local_34,uVar13,uVar17);
          iVar15 = (((uint)uVar23 & 0xff) - (uint)bVar1) * uVar12;
          local_58[2] = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + bVar1;
          bVar1 = local_58[3];
          uVar23 = __alldiv(local_30,local_2c,uVar13,uVar17);
          iVar15 = (((uint)uVar23 & 0xff) - (uint)bVar1) * uVar12;
          local_58[3] = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + bVar1;
        }
        local_58 = local_58 + 4;
        if (local_7c == iVar14) {
          lVar5 = (longlong)local_60 * (longlong)(int)uVar3;
          uVar13 = (uint)lVar5 >> 0xe | (int)((ulonglong)lVar5 >> 0x20) << 0x12;
          local_54 = iVar4 + iVar7 * -0x4000 + 0x4000;
        }
        else {
          local_54 = 0x4000;
          uVar13 = uVar3;
        }
        local_50 = local_50 + uVar13;
        local_7c = local_7c + 1;
      } while (local_7c < iVar7);
    }
    if (local_18 == iVar18 + -2) {
      local_20 = (uint)((longlong)local_14 * (longlong)local_c) >> 0xe |
                 (int)((ulonglong)((longlong)local_14 * (longlong)local_c) >> 0x20) << 0x12;
      local_14 = iVar6 + iVar18 * -0x4000 + 0x4000;
    }
    else {
      local_14 = 0x4000;
    }
    local_1c = local_1c + local_20;
  }
  return;
}


