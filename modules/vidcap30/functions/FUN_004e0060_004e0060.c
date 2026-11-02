/* Module: vidcap30.exe
   Function: FUN_004e0060
   Address: 004e0060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e0060(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int in_stack_00000028;
  int in_stack_00000030;
  int local_5c;
  int local_58;
  int local_4c;
  int local_3c;
  uint local_38;
  uint local_30;
  byte *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar1 = *(uint *)(in_stack_00000028 + 0x60);
  iVar2 = *(int *)(in_stack_00000028 + 0x6c);
  iVar3 = *(int *)(in_stack_00000028 + 0x18);
  iVar15 = (int)((*(uint *)(in_stack_00000028 + 0x10) & 0xffffc000) +
                ((int)*(uint *)(in_stack_00000028 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (iVar3 - 1U | 0x3fff) + 1;
  iVar7 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = *(int *)(in_stack_00000028 + 0x1c);
  iVar20 = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (iVar6 - 1U | 0x3fff) + 1;
  iVar18 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (*(int *)(in_stack_00000028 + 0x48) - 1U | 0x3fff) + 1;
  local_4c = (iVar15 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x10);
  local_24 = (byte *)((iVar20 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x14));
  if (iVar18 - iVar20 < 2) {
    local_24 = (byte *)(iVar6 - *(int *)(in_stack_00000028 + 0x14));
  }
  if (iVar7 - iVar15 < 2) {
    local_4c = iVar3 - *(int *)(in_stack_00000028 + 0x10);
  }
  local_10 = *(uint *)(in_stack_00000028 + 0x44);
  local_c = (int)local_24;
  for (; iVar20 < iVar18; iVar20 = iVar20 + 1) {
    local_3c = local_4c;
    local_30 = *(uint *)(in_stack_00000028 + 0x40);
    local_24 = (byte *)(*(int *)(in_stack_00000028 + 8) * iVar20 + *(int *)(in_stack_00000028 + 4) +
                       iVar15 * 4);
    uVar9 = (uint)((longlong)local_c * (longlong)iVar2) >> 0xe |
            (int)((ulonglong)((longlong)local_c * (longlong)iVar2) >> 0x20) << 0x12;
    iVar16 = (int)((local_10 & 0xffffc000) + ((int)local_10 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar10 = ((uVar9 - 1) + local_10 | 0x3fff) + 1;
    iVar11 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar10 = uVar9 + iVar11 * -0x4000 + 0x4000 + local_10;
    local_38 = (iVar16 + 1) * 0x4000 - local_10;
    if (iVar11 - iVar16 < 2) {
      local_38 = uVar9;
    }
    if (iVar15 < iVar7) {
      local_5c = iVar15;
      do {
        bVar4 = ((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe) + -1 <=
                (int)(local_30 + ((int)local_30 >> 0x1f & 0x3fffU)) >> 0xe;
        if (bVar4) {
          local_30 = (*(int *)(in_stack_00000028 + 0x48) - 1U | 0x3fff) - 0x3fff;
        }
        local_8 = (uint)!bVar4;
        iVar19 = (int)(local_30 + ((int)local_30 >> 0x1f & 0x3fffU)) >> 0xe;
        uVar21 = local_30 & 0x80003fff;
        if ((int)uVar21 < 0) {
          uVar21 = (uVar21 - 1 | 0xffffc000) + 1;
        }
        iVar14 = *(int *)(in_stack_00000028 + 0x38);
        iVar12 = local_8 + iVar19;
        iVar17 = iVar14 * iVar16 + *(int *)(in_stack_00000028 + 0x34);
        iVar22 = 0x4000 - uVar21;
        iVar13 = *(byte *)(iVar17 + iVar12 * 4) * uVar21 +
                 (uint)*(byte *)(iVar17 + iVar19 * 4) * iVar22;
        local_20 = ((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe) * local_38;
        iVar13 = *(byte *)(iVar17 + 1 + iVar12 * 4) * uVar21 +
                 (uint)*(byte *)(iVar17 + 1 + iVar19 * 4) * iVar22;
        local_1c = ((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe) * local_38;
        iVar13 = *(byte *)(iVar17 + 2 + iVar12 * 4) * uVar21 +
                 (uint)*(byte *)(iVar17 + 2 + iVar19 * 4) * iVar22;
        local_18 = ((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe) * local_38;
        iVar13 = *(byte *)(iVar17 + 3 + iVar12 * 4) * uVar21 +
                 (uint)*(byte *)(iVar17 + 3 + iVar19 * 4) * iVar22;
        local_14 = ((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe) * local_38;
        if (iVar16 + 1 < iVar11 + -1) {
          local_58 = (iVar11 + -1) - (iVar16 + 1);
          do {
            iVar17 = iVar17 + iVar14;
            iVar13 = *(byte *)(iVar17 + iVar12 * 4) * uVar21 +
                     (uint)*(byte *)(iVar17 + iVar19 * 4) * iVar22;
            local_20 = local_20 + ((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe) * 0x4000;
            iVar13 = *(byte *)(iVar17 + 1 + iVar12 * 4) * uVar21 +
                     (uint)*(byte *)(iVar17 + 1 + iVar19 * 4) * iVar22;
            local_1c = local_1c + ((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe) * 0x4000;
            iVar13 = *(byte *)(iVar17 + 2 + iVar12 * 4) * uVar21 +
                     (uint)*(byte *)(iVar17 + 2 + iVar19 * 4) * iVar22;
            local_18 = local_18 + ((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe) * 0x4000;
            iVar13 = *(byte *)(iVar17 + 3 + iVar12 * 4) * uVar21 +
                     (uint)*(byte *)(iVar17 + 3 + iVar19 * 4) * iVar22;
            local_14 = local_14 + ((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe) * 0x4000;
            local_58 = local_58 + -1;
          } while (local_58 != 0);
        }
        if (1 < iVar11 - iVar16) {
          iVar17 = iVar17 + iVar14;
          iVar14 = *(byte *)(iVar17 + iVar12 * 4) * uVar21 +
                   (uint)*(byte *)(iVar17 + iVar19 * 4) * iVar22;
          local_20 = local_20 + ((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe) * iVar10;
          iVar14 = *(byte *)(iVar17 + 1 + iVar12 * 4) * uVar21 +
                   (uint)*(byte *)(iVar17 + 1 + iVar19 * 4) * iVar22;
          local_1c = local_1c + ((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe) * iVar10;
          iVar14 = *(byte *)(iVar17 + 2 + iVar12 * 4) * uVar21 +
                   (uint)*(byte *)(iVar17 + 2 + iVar19 * 4) * iVar22;
          local_18 = local_18 + ((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe) * iVar10;
          iVar19 = *(byte *)(iVar17 + 3 + iVar12 * 4) * uVar21 +
                   (uint)*(byte *)(iVar17 + 3 + iVar19 * 4) * iVar22;
          local_14 = local_14 + ((int)(iVar19 + (iVar19 >> 0x1f & 0x3fffU)) >> 0xe) * iVar10;
        }
        if (((local_c == 0x4000) && (local_3c == 0x4000)) || (in_stack_00000030 != 0)) {
          *local_24 = (byte)(local_20 / iVar2);
          local_24[1] = (byte)(local_1c / iVar2);
          local_24[2] = (byte)(local_18 / iVar2);
          local_24[3] = (byte)(local_14 / iVar2);
        }
        else if (uVar9 != 0) {
          iVar19 = ((uint)((longlong)local_3c * (longlong)local_c) >> 0xe |
                   (int)((ulonglong)((longlong)local_3c * (longlong)local_c) >> 0x20) << 0x12) *
                   0xff;
          uVar21 = (int)(iVar19 + (iVar19 >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
          iVar19 = ((local_20 / (int)uVar9 & 0xffU) - (uint)*local_24) * uVar21;
          *local_24 = (char)(iVar19 + (iVar19 >> 0x1f & 0xffU) >> 8) + *local_24;
          iVar19 = ((local_1c / (int)uVar9 & 0xffU) - (uint)local_24[1]) * uVar21;
          local_24[1] = (char)(iVar19 + (iVar19 >> 0x1f & 0xffU) >> 8) + local_24[1];
          iVar19 = ((local_18 / (int)uVar9 & 0xffU) - (uint)local_24[2]) * uVar21;
          local_24[2] = (char)(iVar19 + (iVar19 >> 0x1f & 0xffU) >> 8) + local_24[2];
          iVar19 = ((local_14 / (int)uVar9 & 0xffU) - (uint)local_24[3]) * uVar21;
          local_24[3] = (char)(iVar19 + (iVar19 >> 0x1f & 0xffU) >> 8) + local_24[3];
        }
        local_24 = local_24 + 4;
        if (local_5c == iVar15) {
          lVar5 = (longlong)local_4c * (longlong)(int)uVar1;
          uVar21 = (uint)lVar5 >> 0xe | (int)((ulonglong)lVar5 >> 0x20) << 0x12;
          local_3c = iVar3 + iVar7 * -0x4000 + 0x4000;
        }
        else {
          local_3c = 0x4000;
          uVar21 = uVar1;
        }
        local_30 = local_30 + uVar21;
        local_5c = local_5c + 1;
      } while (local_5c < iVar7);
    }
    if (iVar20 == iVar18 + -2) {
      uVar9 = (uint)((longlong)local_c * (longlong)iVar2) >> 0xe |
              (int)((ulonglong)((longlong)local_c * (longlong)iVar2) >> 0x20) << 0x12;
      local_c = iVar6 + iVar18 * -0x4000 + 0x4000;
    }
    else {
      local_c = 0x4000;
    }
    local_10 = local_10 + uVar9;
  }
  return;
}


