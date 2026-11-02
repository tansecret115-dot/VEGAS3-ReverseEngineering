/* Module: vegas30k.dll
   Function: FUN_010e6bf0
   Address: 010e6bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010e6bf0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int local_1f8;
  undefined4 local_1ec;
  undefined4 local_1e8;
  int local_1d8;
  int local_1c8;
  int local_1c0;
  int local_1bc;
  undefined1 local_19c [4];
  int local_198;
  uint local_194 [3];
  code *local_188;
  code *pcStack_184;
  code *local_180;
  undefined4 uStack_158;
  uint uStack_154;
  int local_138;
  uint local_134;
  int local_130;
  uint local_12c;
  int local_120;
  uint local_11c;
  uint local_118;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  short sStack_f4;
  undefined1 uStack_ea;
  undefined1 auStack_dc [4];
  undefined1 local_d8 [8];
  code *pcStack_d0;
  code *pcStack_b8;
  undefined4 uStack_a4;
  uint uStack_a0;
  uint uStack_80;
  int iStack_7c;
  int local_64;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_1c [7];
  
  iVar1 = *(int *)(param_1 + 0x80);
  iVar2 = *(int *)(param_1 + 0x90);
  local_1c0 = *(int *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x70);
  uVar18 = _SfGetPixelType_4(*(undefined4 *)(param_1 + 0x78));
  uVar19 = _SfGetPixelType_4(*(undefined4 *)(param_1 + 0x58));
  iVar20 = _SfGetPixelBitsPerChannel_8(uVar18,local_19c);
  iVar21 = _SfGetPixelBitsPerChannel_8(uVar19,local_19c);
  _SfXCHGGetFunctionPointers_20(uVar19,uVar18,*(undefined4 *)(param_1 + 0x9c),local_194,0);
  local_108 = *(undefined4 *)(param_1 + 0x94);
  local_104 = *(undefined4 *)(param_1 + 0x74);
  local_100 = *(undefined4 *)(param_1 + 0x98);
  local_120 = iVar2;
  if ((local_194[0] & 0x10) == 0) {
    uVar11 = ftol();
    uVar12 = ftol();
    uVar13 = ftol();
    uVar14 = ftol();
    local_1ec = CONCAT13(uVar14,CONCAT21(CONCAT11(uVar11,uVar12),uVar13));
  }
  else {
    uVar15 = ftol();
    uVar16 = ftol();
    uVar17 = ftol();
    local_1ec = CONCAT22(uVar16,uVar17);
    uVar16 = ftol();
    local_1e8 = CONCAT22(uVar16,uVar15);
  }
  iVar4 = *(int *)(param_1 + 0x14);
  local_1d8 = *(int *)(param_1 + 0x6c);
  local_198 = *(int *)(param_1 + 0x10);
  local_1c8 = *(int *)(param_1 + 4);
  local_1bc = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0x68);
  iVar6 = *(int *)(param_1 + 0x18);
  iVar7 = *(int *)(param_1 + 0xc);
  uVar8 = *(uint *)(param_1 + 0x88);
  iVar9 = *(int *)(param_1 + 0x8c);
  iVar10 = *(int *)(param_1 + 0xa0);
  iVar22 = ftol();
  local_1c[0] = 3;
  _SfXCHGGetFunctionPointers_20(uVar18,uVar19,*(undefined4 *)(param_1 + 0x9c),local_d8,local_1c);
  local_4c = *(undefined4 *)(param_1 + 0x74);
  local_48 = *(undefined4 *)(param_1 + 0x94);
  local_44 = *(undefined4 *)(param_1 + 0x98);
  local_64 = iVar3;
  if (0 < local_1d8) {
    do {
      uVar24 = local_1bc + 0x2000;
      local_130 = local_1c0;
      uVar26 = local_1c8 + 0x2000;
      local_12c = 0;
      local_1f8 = iVar5;
      if (iVar10 == 0) {
        if (0 < iVar5) {
          do {
            iVar27 = (int)(uVar26 + ((int)uVar26 >> 0x1f & 0x3fffU)) >> 0xe;
            iVar28 = (int)(uVar24 + ((int)uVar24 >> 0x1f & 0x3fffU)) >> 0xe;
            if (((int)uVar26 < 0) || ((int)uVar24 < 0)) {
              uStack_158 = local_1ec;
              uStack_154 = local_1e8;
            }
            else if ((iVar27 < (int)(uVar8 - 1)) && (iVar28 < iVar9 + -1)) {
              uVar23 = iVar27 * iVar20;
              local_134 = uVar23 & 7;
              local_138 = ((int)(uVar23 + ((int)uVar23 >> 0x1f & 7U)) >> 3) + iVar1 + iVar28 * iVar2
              ;
              local_11c = uVar26 & 0x80003fff;
              if ((int)local_11c < 0) {
                local_11c = (local_11c - 1 | 0xffffc000) + 1;
              }
              local_118 = uVar24 & 0x80003fff;
              if ((int)local_118 < 0) {
                local_118 = (local_118 - 1 | 0xffffc000) + 1;
              }
              (*local_180)(local_194);
            }
            else if ((iVar27 < (int)uVar8) && (iVar28 < iVar9)) {
              uVar23 = iVar27 * iVar20;
              local_134 = uVar23 & 7;
              local_138 = ((int)(uVar23 + ((int)uVar23 >> 0x1f & 7U)) >> 3) + iVar1 + iVar28 * iVar2
              ;
              (*local_188)(local_194);
            }
            else {
              uStack_158 = local_1ec;
              uStack_154 = local_1e8;
            }
            (*pcStack_184)(local_194);
            uVar26 = uVar26 + iVar4;
            uVar24 = uVar24 + iVar6;
            local_1f8 = local_1f8 + -1;
          } while (local_1f8 != 0);
        }
      }
      else if (0 < iVar5) {
        do {
          iVar27 = (int)(uVar26 + ((int)uVar26 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar28 = (int)(uVar24 + ((int)uVar24 >> 0x1f & 0x3fffU)) >> 0xe;
          if (((int)uVar26 < 0) || ((int)uVar24 < 0)) {
LAB_010e70fc:
            uVar23 = local_12c + iVar21;
            local_12c = uVar23 & 7;
            local_130 = local_130 + ((int)(uVar23 + ((int)uVar23 >> 0x1f & 7U)) >> 3);
          }
          else {
            if ((iVar27 < (int)(uVar8 - 1)) && (iVar28 < iVar9 + -1)) {
              uVar23 = iVar27 * iVar20;
              local_134 = uVar23 & 7;
              local_138 = ((int)(uVar23 + ((int)uVar23 >> 0x1f & 7U)) >> 3) + iVar1 + iVar28 * iVar2
              ;
              local_11c = uVar26 & 0x80003fff;
              if ((int)local_11c < 0) {
                local_11c = (local_11c - 1 | 0xffffc000) + 1;
              }
              local_118 = uVar24 & 0x80003fff;
              if ((int)local_118 < 0) {
                local_118 = (local_118 - 1 | 0xffffc000) + 1;
              }
              (*local_180)(local_194);
              if (iVar22 != 0) {
                iVar25 = 0;
                if ((iVar27 < iVar22) && ((uVar8 & 0x4000) != 0)) {
                  iVar25 = iVar22 - iVar27;
                }
                if (((iVar28 < iVar22) && ((uVar8 & 0x2000) != 0)) && (iVar25 <= iVar22 - iVar28)) {
                  iVar25 = iVar22 - iVar28;
                }
                if (((local_1d8 - iVar22 < iVar27) && ((uVar8 & 0x8000) != 0)) &&
                   (iVar27 = (iVar27 - local_1d8) + iVar22, iVar25 < iVar27)) {
                  iVar25 = iVar27;
                }
                if (((local_1f8 - iVar22 < iVar28) && ((uVar8 & 0x1000) != 0)) &&
                   (iVar27 = (iVar28 - local_1f8) + iVar22, iVar25 < iVar27)) {
                  iVar25 = iVar27;
                }
joined_r0x010e706c:
                uVar26 = local_1e8;
                if (iVar25 != 0) {
                  uStack_80 = local_134;
                  iStack_7c = local_130;
                  (*pcStack_d0)(auStack_dc);
                  uStack_154 = uStack_a0;
                  uStack_158 = uStack_a4;
                  sStack_f4 = (short)iVar21 * (short)iVar25;
                  uStack_ea = (undefined1)(iVar25 * iVar21 + (iVar25 * iVar21 >> 0x1f & 0xffU) >> 8)
                  ;
                  (*pcStack_b8)(local_19c);
                }
              }
            }
            else {
              if (((int)uVar8 <= iVar27) || (iVar9 <= iVar28)) goto LAB_010e70fc;
              uVar23 = iVar27 * iVar20;
              local_134 = uVar23 & 7;
              local_138 = ((int)(uVar23 + ((int)uVar23 >> 0x1f & 7U)) >> 3) + iVar1 + iVar28 * iVar2
              ;
              (*local_188)(local_194);
              if (iVar22 != 0) {
                iVar25 = 0;
                if ((iVar27 < iVar22) && ((uVar8 & 0x4000) != 0)) {
                  iVar25 = iVar22 - iVar27;
                }
                if (((iVar28 < iVar22) && ((uVar8 & 0x2000) != 0)) && (iVar25 <= iVar22 - iVar28)) {
                  iVar25 = iVar22 - iVar28;
                }
                if (((local_1d8 - iVar22 < iVar27) && ((uVar8 & 0x8000) != 0)) &&
                   (iVar27 = (iVar27 - local_1d8) + iVar22, iVar25 < iVar27)) {
                  iVar25 = iVar27;
                }
                if (((local_1f8 - iVar22 < iVar28) && ((uVar8 & 0x1000) != 0)) &&
                   (iVar27 = (iVar28 - local_1f8) + iVar22, iVar25 < iVar27)) {
                  iVar25 = iVar27;
                }
                goto joined_r0x010e706c;
              }
            }
            (*local_188)(&local_198);
          }
          uVar26 = uVar26 + iVar4;
          uVar24 = uVar24 + iVar6;
          local_1f8 = local_1f8 + -1;
        } while (local_1f8 != 0);
      }
      local_1c8 = local_1c8 + iVar7;
      local_1c0 = local_1c0 + iVar3;
      local_1bc = local_1bc + local_198;
      local_1d8 = local_1d8 + -1;
    } while (local_1d8 != 0);
  }
  return 0;
}


