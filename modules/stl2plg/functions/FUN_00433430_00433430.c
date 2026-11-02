/* Module: stl2plg.dll
   Function: FUN_00433430
   Address: 00433430
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00433430(void)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  byte *pbVar14;
  int in_stack_00000018;
  int in_stack_00000028;
  int in_stack_00000030;
  uint local_15c;
  uint local_134;
  uint local_10c;
  uint local_104;
  int local_b8 [7];
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c [4];
  uint local_4c;
  int local_48;
  int local_44;
  byte *local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  undefined1 local_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  byte bStack_15;
  int local_10;
  byte *local_c;
  int local_8;
  
  local_60 = *(int *)(in_stack_00000028 + 0x68);
  local_64 = *(int *)(in_stack_00000028 + 0x6c);
  iVar1 = *(int *)(in_stack_00000028 + 0x18);
  local_6c = (int)((*(uint *)(in_stack_00000028 + 0x10) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar4 = (iVar1 - 1U | 0x3fff) + 1;
  iVar5 = (int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe;
  local_34 = iVar5;
  iVar4 = *(int *)(in_stack_00000028 + 0x1c);
  local_20 = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (iVar4 - 1U | 0x3fff) + 1;
  local_68 = (local_6c + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x10);
  local_24 = (local_20 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x14);
  iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
  if (iVar6 - local_20 < 2) {
    local_24 = iVar4 - *(int *)(in_stack_00000028 + 0x14);
  }
  if (iVar5 - local_6c < 2) {
    local_68 = iVar1 - *(int *)(in_stack_00000028 + 0x10);
  }
  local_4c = *(int *)(in_stack_00000028 + 0x6c) / 2 + 0x2000 + *(int *)(in_stack_00000028 + 0x44);
  local_28 = local_24;
  do {
    if (iVar6 <= local_20) {
      return;
    }
    local_38 = *(uint *)(in_stack_00000028 + 0x40);
    local_30 = local_68;
    local_24 = (int)(local_4c + ((int)local_4c >> 0x1f & 0x3fffU)) >> 0xe;
    uVar11 = local_4c & 0x80003fff;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xffffc000) + 1;
    }
    local_40 = (byte *)(*(int *)(in_stack_00000028 + 8) * local_20 + local_6c * 4 +
                       *(int *)(in_stack_00000028 + 4));
    local_10 = *(int *)(in_stack_00000018 + 4);
    iVar12 = ((int)uVar11 >> 2) * 0x10;
    iVar7 = local_24 + -2;
    piVar13 = (int *)(&DAT_00488b0c + iVar12);
    if (iVar7 < 0) {
      local_5c[0] = 0;
    }
    else {
      local_5c[0] = local_10 + -1;
      if (iVar7 <= local_10 + -1) {
        local_5c[0] = iVar7;
      }
    }
    iVar7 = local_24 + -1;
    if (iVar7 < 0) {
      local_5c[1] = 0;
    }
    else {
      local_5c[1] = local_10 + -1;
      if (iVar7 <= local_10 + -1) {
        local_5c[1] = iVar7;
      }
    }
    if (local_24 < 0) {
      local_5c[2] = 0;
    }
    else {
      local_5c[2] = local_10 + -1;
      if (local_24 <= local_10 + -1) {
        local_5c[2] = local_24;
      }
    }
    iVar7 = local_24 + 1;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    else if (local_10 + -1 < iVar7) {
      iVar7 = local_10 + -1;
    }
    if (local_24 < 0) {
      local_10 = 0;
LAB_0043363f:
      local_24 = local_10;
    }
    else {
      local_10 = local_10 + -1;
      if (local_10 < local_24) goto LAB_0043363f;
    }
    local_5c[0] = local_5c[0] - local_24;
    local_5c[3] = iVar7 - local_24;
    local_5c[1] = local_5c[1] - local_24;
    local_5c[2] = local_5c[2] - local_24;
    local_48 = local_6c;
    if (local_6c < local_34) {
      do {
        local_2c = (uint)((longlong)local_30 * (longlong)local_60) >> 0xe |
                   (int)((ulonglong)((longlong)local_30 * (longlong)local_60) >> 0x20) << 0x12;
        local_3c = (int)((local_38 & 0xffffc000) + ((int)local_38 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar7 = ((local_2c - 1) + local_38 | 0x3fff) + 1;
        iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
        local_44 = local_2c + iVar7 * -0x4000 + 0x4000 + local_38;
        local_8 = iVar7 - local_3c;
        uVar11 = (local_3c + 1) * 0x4000 - local_38;
        if (iVar7 - local_3c < 2) {
          uVar11 = local_2c;
        }
        piVar8 = local_b8;
        for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar8 = 0;
          piVar8 = piVar8 + 1;
        }
        local_78 = iVar7 + -1;
        local_70 = 4;
        iVar7 = *(int *)(in_stack_00000028 + 0x38);
        iVar9 = *(int *)(in_stack_00000028 + 0x34);
        piVar8 = local_b8 + 1;
        local_1c = local_5c;
        do {
          iVar10 = (local_24 + *local_1c) * iVar7 + iVar9;
          piVar8[-1] = piVar8[-1] + *(byte *)(iVar10 + local_3c * 4) * uVar11;
          *piVar8 = *piVar8 + *(byte *)(iVar10 + 1 + local_3c * 4) * uVar11;
          piVar8[1] = piVar8[1] + *(byte *)(iVar10 + 2 + local_3c * 4) * uVar11;
          iVar3 = local_78;
          piVar8[2] = piVar8[2] + *(byte *)(iVar10 + 3 + local_3c * 4) * uVar11;
          local_10 = local_3c + 1;
          if (local_10 < iVar3) {
            local_c = (byte *)(iVar10 + 2 + local_10 * 4);
            local_74 = local_78 - local_10;
            local_10 = local_10 + (local_78 - local_10);
            pbVar14 = local_c;
            do {
              piVar8[-1] = piVar8[-1] + (uint)pbVar14[-2] * 0x4000;
              *piVar8 = *piVar8 + (uint)pbVar14[-1] * 0x4000;
              piVar8[1] = piVar8[1] + (uint)*pbVar14 * 0x4000;
              piVar8[2] = piVar8[2] + (uint)pbVar14[1] * 0x4000;
              local_74 = local_74 + -1;
              pbVar14 = pbVar14 + 4;
            } while (local_74 != 0);
          }
          if (1 < local_8) {
            piVar8[-1] = piVar8[-1] + (uint)*(byte *)(iVar10 + local_10 * 4) * local_44;
            *piVar8 = *piVar8 + (uint)*(byte *)(iVar10 + 1 + local_10 * 4) * local_44;
            piVar8[1] = piVar8[1] + (uint)*(byte *)(iVar10 + 2 + local_10 * 4) * local_44;
            piVar8[2] = piVar8[2] + (uint)*(byte *)(iVar10 + 3 + local_10 * 4) * local_44;
          }
          piVar8 = piVar8 + 4;
          local_70 = local_70 + -1;
          local_1c = local_1c + 1;
        } while (local_70 != 0);
        if (((local_30 == 0x4000) && (local_28 == 0x4000)) || (in_stack_00000030 != 0)) {
          iVar7 = (int)(((uint)((longlong)*(int *)(&DAT_00488b18 + iVar12) * (longlong)local_88) >>
                         0xe | (int)((ulonglong)
                                     ((longlong)*(int *)(&DAT_00488b18 + iVar12) *
                                     (longlong)local_88) >> 0x20) << 0x12) +
                        ((uint)((longlong)*(int *)(&DAT_00488b14 + iVar12) * (longlong)local_98) >>
                         0xe | (int)((ulonglong)
                                     ((longlong)*(int *)(&DAT_00488b14 + iVar12) *
                                     (longlong)local_98) >> 0x20) << 0x12) +
                        ((uint)((longlong)*(int *)(&DAT_00488b10 + iVar12) * (longlong)local_b8[4])
                         >> 0xe | (int)((ulonglong)
                                        ((longlong)*(int *)(&DAT_00488b10 + iVar12) *
                                        (longlong)local_b8[4]) >> 0x20) << 0x12) + 0x2000 +
                       ((uint)((longlong)*piVar13 * (longlong)local_b8[0]) >> 0xe |
                       (int)((ulonglong)((longlong)*piVar13 * (longlong)local_b8[0]) >> 0x20) <<
                       0x12)) / local_60;
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          else if (0xff < iVar7) {
            iVar7 = 0xff;
          }
          *local_40 = (byte)iVar7;
          iVar7 = (int)(((uint)((longlong)*(int *)(&DAT_00488b18 + iVar12) * (longlong)local_84) >>
                         0xe | (int)((ulonglong)
                                     ((longlong)*(int *)(&DAT_00488b18 + iVar12) *
                                     (longlong)local_84) >> 0x20) << 0x12) +
                        ((uint)((longlong)*(int *)(&DAT_00488b14 + iVar12) * (longlong)local_94) >>
                         0xe | (int)((ulonglong)
                                     ((longlong)*(int *)(&DAT_00488b14 + iVar12) *
                                     (longlong)local_94) >> 0x20) << 0x12) +
                        ((uint)((longlong)*(int *)(&DAT_00488b10 + iVar12) * (longlong)local_b8[5])
                         >> 0xe | (int)((ulonglong)
                                        ((longlong)*(int *)(&DAT_00488b10 + iVar12) *
                                        (longlong)local_b8[5]) >> 0x20) << 0x12) + 0x2000 +
                       ((uint)((longlong)*piVar13 * (longlong)local_b8[1]) >> 0xe |
                       (int)((ulonglong)((longlong)*piVar13 * (longlong)local_b8[1]) >> 0x20) <<
                       0x12)) / local_60;
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          else if (0xff < iVar7) {
            iVar7 = 0xff;
          }
          local_40[1] = (byte)iVar7;
          iVar7 = (int)(((uint)((longlong)*(int *)(&DAT_00488b18 + iVar12) * (longlong)local_80) >>
                         0xe | (int)((ulonglong)
                                     ((longlong)*(int *)(&DAT_00488b18 + iVar12) *
                                     (longlong)local_80) >> 0x20) << 0x12) +
                        ((uint)((longlong)*(int *)(&DAT_00488b14 + iVar12) * (longlong)local_90) >>
                         0xe | (int)((ulonglong)
                                     ((longlong)*(int *)(&DAT_00488b14 + iVar12) *
                                     (longlong)local_90) >> 0x20) << 0x12) +
                        ((uint)((longlong)*(int *)(&DAT_00488b10 + iVar12) * (longlong)local_b8[6])
                         >> 0xe | (int)((ulonglong)
                                        ((longlong)*(int *)(&DAT_00488b10 + iVar12) *
                                        (longlong)local_b8[6]) >> 0x20) << 0x12) + 0x2000 +
                       ((uint)((longlong)*piVar13 * (longlong)local_b8[2]) >> 0xe |
                       (int)((ulonglong)((longlong)*piVar13 * (longlong)local_b8[2]) >> 0x20) <<
                       0x12)) / local_60;
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          else if (0xff < iVar7) {
            iVar7 = 0xff;
          }
          local_40[2] = (byte)iVar7;
          local_c = (byte *)*(int *)(&DAT_00488b18 + iVar12);
          lVar2 = (longlong)*(int *)(&DAT_00488b18 + iVar12) * (longlong)local_7c;
          iVar7 = (int)(((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) +
                        ((uint)((longlong)*(int *)(&DAT_00488b14 + iVar12) * (longlong)local_8c) >>
                         0xe | (int)((ulonglong)
                                     ((longlong)*(int *)(&DAT_00488b14 + iVar12) *
                                     (longlong)local_8c) >> 0x20) << 0x12) +
                        ((uint)((longlong)*(int *)(&DAT_00488b10 + iVar12) * (longlong)local_9c) >>
                         0xe | (int)((ulonglong)
                                     ((longlong)*(int *)(&DAT_00488b10 + iVar12) *
                                     (longlong)local_9c) >> 0x20) << 0x12) + 0x2000 +
                       ((uint)((longlong)*piVar13 * (longlong)local_b8[3]) >> 0xe |
                       (int)((ulonglong)((longlong)*piVar13 * (longlong)local_b8[3]) >> 0x20) <<
                       0x12)) / local_60;
          if (iVar7 < 0) {
            local_40[3] = 0;
          }
          else {
            if (0xff < iVar7) {
              iVar7 = 0xff;
            }
            local_40[3] = (byte)iVar7;
          }
        }
        else if (0 < (int)local_2c) {
          iVar7 = ((uint)((longlong)local_30 * (longlong)local_28) >> 0xe |
                  (int)((ulonglong)((longlong)local_30 * (longlong)local_28) >> 0x20) << 0x12) *
                  0xff;
          iVar9 = (int)(((uint)((longlong)*(int *)(&DAT_00488b18 + iVar12) * (longlong)local_88) >>
                         0xe | (int)((ulonglong)
                                     ((longlong)*(int *)(&DAT_00488b18 + iVar12) *
                                     (longlong)local_88) >> 0x20) << 0x12) +
                        ((uint)((longlong)*(int *)(&DAT_00488b14 + iVar12) * (longlong)local_98) >>
                         0xe | (int)((ulonglong)
                                     ((longlong)*(int *)(&DAT_00488b14 + iVar12) *
                                     (longlong)local_98) >> 0x20) << 0x12) +
                        ((uint)((longlong)*(int *)(&DAT_00488b10 + iVar12) * (longlong)local_b8[4])
                         >> 0xe | (int)((ulonglong)
                                        ((longlong)*(int *)(&DAT_00488b10 + iVar12) *
                                        (longlong)local_b8[4]) >> 0x20) << 0x12) + 0x2000 +
                       ((uint)((longlong)*piVar13 * (longlong)local_b8[0]) >> 0xe |
                       (int)((ulonglong)((longlong)*piVar13 * (longlong)local_b8[0]) >> 0x20) <<
                       0x12)) / (int)local_2c;
          if (iVar9 < 0) {
            local_18 = 0;
          }
          else {
            local_18 = 0xff;
            if (iVar9 < 0x100) {
              local_18 = (char)iVar9;
            }
          }
          iVar9 = (int)(((uint)((longlong)*(int *)(&DAT_00488b18 + iVar12) * (longlong)local_84) >>
                         0xe | (int)((ulonglong)
                                     ((longlong)*(int *)(&DAT_00488b18 + iVar12) *
                                     (longlong)local_84) >> 0x20) << 0x12) +
                        ((uint)((longlong)*(int *)(&DAT_00488b14 + iVar12) * (longlong)local_94) >>
                         0xe | (int)((ulonglong)
                                     ((longlong)*(int *)(&DAT_00488b14 + iVar12) *
                                     (longlong)local_94) >> 0x20) << 0x12) +
                        ((uint)((longlong)*(int *)(&DAT_00488b10 + iVar12) * (longlong)local_b8[5])
                         >> 0xe | (int)((ulonglong)
                                        ((longlong)*(int *)(&DAT_00488b10 + iVar12) *
                                        (longlong)local_b8[5]) >> 0x20) << 0x12) + 0x2000 +
                       ((uint)((longlong)*piVar13 * (longlong)local_b8[1]) >> 0xe |
                       (int)((ulonglong)((longlong)*piVar13 * (longlong)local_b8[1]) >> 0x20) <<
                       0x12)) / (int)local_2c;
          if (iVar9 < 0) {
            uStack_17 = 0;
          }
          else {
            uStack_17 = 0xff;
            if (iVar9 < 0x100) {
              uStack_17 = (char)iVar9;
            }
          }
          iVar9 = (int)(((uint)((longlong)*(int *)(&DAT_00488b18 + iVar12) * (longlong)local_80) >>
                         0xe | (int)((ulonglong)
                                     ((longlong)*(int *)(&DAT_00488b18 + iVar12) *
                                     (longlong)local_80) >> 0x20) << 0x12) +
                        ((uint)((longlong)*(int *)(&DAT_00488b14 + iVar12) * (longlong)local_90) >>
                         0xe | (int)((ulonglong)
                                     ((longlong)*(int *)(&DAT_00488b14 + iVar12) *
                                     (longlong)local_90) >> 0x20) << 0x12) +
                        ((uint)((longlong)*(int *)(&DAT_00488b10 + iVar12) * (longlong)local_b8[6])
                         >> 0xe | (int)((ulonglong)
                                        ((longlong)*(int *)(&DAT_00488b10 + iVar12) *
                                        (longlong)local_b8[6]) >> 0x20) << 0x12) + 0x2000 +
                       ((uint)((longlong)*piVar13 * (longlong)local_b8[2]) >> 0xe |
                       (int)((ulonglong)((longlong)*piVar13 * (longlong)local_b8[2]) >> 0x20) <<
                       0x12)) / (int)local_2c;
          if (iVar9 < 0) {
            uStack_16 = 0;
          }
          else {
            uStack_16 = 0xff;
            if (iVar9 < 0x100) {
              uStack_16 = (char)iVar9;
            }
          }
          local_c = (byte *)*(int *)(&DAT_00488b18 + iVar12);
          lVar2 = (longlong)*(int *)(&DAT_00488b18 + iVar12) * (longlong)local_7c;
          iVar9 = (int)(((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) +
                        ((uint)((longlong)*(int *)(&DAT_00488b14 + iVar12) * (longlong)local_8c) >>
                         0xe | (int)((ulonglong)
                                     ((longlong)*(int *)(&DAT_00488b14 + iVar12) *
                                     (longlong)local_8c) >> 0x20) << 0x12) +
                        ((uint)((longlong)*(int *)(&DAT_00488b10 + iVar12) * (longlong)local_9c) >>
                         0xe | (int)((ulonglong)
                                     ((longlong)*(int *)(&DAT_00488b10 + iVar12) *
                                     (longlong)local_9c) >> 0x20) << 0x12) + 0x2000 +
                       ((uint)((longlong)*piVar13 * (longlong)local_b8[3]) >> 0xe |
                       (int)((ulonglong)((longlong)*piVar13 * (longlong)local_b8[3]) >> 0x20) <<
                       0x12)) / (int)local_2c;
          if (iVar9 < 0) {
            bStack_15 = 0;
          }
          else {
            bStack_15 = 0xff;
            if (iVar9 < 0x100) {
              bStack_15 = (byte)iVar9;
            }
          }
          uVar11 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
          local_134 = (uint)*local_40;
          iVar7 = ((CONCAT12(uStack_16,CONCAT11(uStack_17,local_18)) & 0xff) - local_134) * uVar11;
          local_104 = (uint)local_40[1];
          *local_40 = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *local_40;
          iVar7 = ((CONCAT12(bStack_15,CONCAT11(uStack_16,uStack_17)) & 0xff) - local_104) * uVar11;
          local_15c = (uint)local_40[2];
          local_40[1] = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + local_40[1];
          iVar7 = ((CONCAT11(bStack_15,uStack_16) & 0xff) - local_15c) * uVar11;
          local_10c = (uint)local_40[3];
          local_40[2] = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + local_40[2];
          iVar7 = (bStack_15 - local_10c) * uVar11;
          local_40[3] = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + local_40[3];
        }
        local_40 = local_40 + 4;
        if (local_48 == local_34 + -2) {
          local_38 = local_38 +
                     ((uint)((longlong)local_30 * (longlong)local_60) >> 0xe |
                     (int)((ulonglong)((longlong)local_30 * (longlong)local_60) >> 0x20) << 0x12);
          local_30 = iVar1 + iVar5 * -0x4000 + 0x4000;
        }
        else {
          local_30 = 0x4000;
          local_38 = local_2c + local_38;
        }
        local_48 = local_48 + 1;
      } while (local_48 < local_34);
    }
    if (local_20 == iVar6 + -2) {
      local_4c = local_4c +
                 ((uint)((longlong)local_28 * (longlong)local_64) >> 0xe |
                 (int)((ulonglong)((longlong)local_28 * (longlong)local_64) >> 0x20) << 0x12);
      local_28 = iVar4 + iVar6 * -0x4000 + 0x4000;
    }
    else {
      local_28 = 0x4000;
      local_4c = local_4c + local_64;
    }
    local_20 = local_20 + 1;
  } while( true );
}


