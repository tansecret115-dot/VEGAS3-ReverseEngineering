/* Module: vegas30k.dll
   Function: FUN_010e5820
   Address: 010e5820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010e5820(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int unaff_EBX;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  uint local_218;
  int local_20c;
  undefined4 local_204;
  undefined4 local_200;
  int local_1dc;
  int local_1d8;
  undefined1 local_1a4 [4];
  int local_1a0;
  int local_19c;
  int local_198;
  uint local_194 [3];
  code *local_188;
  code *pcStack_184;
  code *local_180;
  undefined4 uStack_158;
  undefined4 uStack_154;
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
  undefined4 uStack_a0;
  uint uStack_80;
  int iStack_7c;
  int local_64;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_1c [7];
  
  iVar1 = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(param_1 + 0xa0);
  local_1d8 = *(int *)(param_1 + 0x70);
  iVar3 = *(int *)(param_1 + 0x80);
  uVar19 = _SfGetPixelType_4(*(undefined4 *)(param_1 + 0x88));
  uVar20 = _SfGetPixelType_4(*(undefined4 *)(param_1 + 0x68));
  iVar21 = _SfGetPixelBitsPerChannel_8(uVar19,local_1a4);
  iVar22 = _SfGetPixelBitsPerChannel_8(uVar20,local_1a4);
  _SfXCHGGetFunctionPointers_20(uVar20,uVar19,*(undefined4 *)(param_1 + 0xac),local_194,0);
  local_108 = *(undefined4 *)(param_1 + 0xa4);
  local_104 = *(undefined4 *)(param_1 + 0x84);
  local_100 = *(undefined4 *)(param_1 + 0xa8);
  local_120 = iVar2;
  if ((local_194[0] & 0x10) == 0) {
    uVar12 = ftol();
    uVar13 = ftol();
    uVar14 = ftol();
    uVar15 = ftol();
    local_204 = CONCAT13(uVar15,CONCAT21(CONCAT11(uVar12,uVar13),uVar14));
  }
  else {
    uVar16 = ftol();
    uVar17 = ftol();
    uVar18 = ftol();
    local_204 = CONCAT22(uVar17,uVar18);
    uVar17 = ftol();
    local_200 = CONCAT22(uVar17,uVar16);
  }
  iVar4 = *(int *)(param_1 + 0x14);
  iVar30 = *(int *)(param_1 + 8);
  iVar31 = *(int *)(param_1 + 4);
  local_19c = *(int *)(param_1 + 0x10);
  local_1a0 = *(int *)(param_1 + 0xc);
  iVar5 = *(int *)(param_1 + 0x9c);
  iVar6 = *(int *)(param_1 + 0x98);
  iVar7 = *(int *)(param_1 + 0x34);
  iVar8 = *(int *)(param_1 + 0x18);
  iVar9 = *(int *)(param_1 + 0x38);
  iVar10 = *(int *)(param_1 + 0x78);
  local_198 = *(int *)(param_1 + 0xb0);
  local_1dc = *(int *)(param_1 + 0x7c);
  iVar11 = *(int *)(param_1 + 0x40);
  iVar26 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar33 = *(int *)(param_1 + 0x3c) * iVar26;
  iVar23 = iVar33 / (iVar10 / 2);
  iVar29 = (int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar24 = ftol();
  local_1c[0] = 3;
  _SfXCHGGetFunctionPointers_20(uVar19,uVar20,*(undefined4 *)(param_1 + 0xac),local_d8,local_1c);
  local_4c = *(undefined4 *)(param_1 + 0x84);
  local_48 = *(undefined4 *)(param_1 + 0xa4);
  local_44 = *(undefined4 *)(param_1 + 0xa8);
  if (0 < local_1dc) {
    uVar28 = iVar30 + 0x2000;
    uVar27 = iVar31 + 0x2000;
    iVar30 = (iVar29 + -1) * iVar11;
    local_64 = iVar3;
    do {
      local_130 = local_1d8;
      iVar31 = (iVar30 - iVar33) + 0x4000;
      local_12c = 0;
      local_218 = uVar28;
      local_20c = iVar10;
      if (local_198 == 0) {
        uVar36 = uVar27;
        if (0 < iVar10) {
          do {
            if (iVar31 == 0) {
              iVar31 = 1;
            }
            iVar34 = (int)(uVar36 - iVar7) / iVar31 + iVar26;
            if ((iVar34 < 0) || (iVar6 <= iVar34)) {
              uStack_158 = local_204;
              uStack_154 = local_200;
            }
            else {
              iVar35 = (int)(local_218 - iVar9) / iVar31 + iVar29;
              if (iVar35 < 0) {
                uStack_158 = local_204;
                uStack_154 = local_200;
              }
              else if ((iVar34 < iVar6 + -1) && (iVar35 < iVar5 + -1)) {
                uVar25 = iVar34 * iVar21;
                local_134 = uVar25 & 7;
                local_138 = ((int)(uVar25 + ((int)uVar25 >> 0x1f & 7U)) >> 3) +
                            iVar1 + iVar35 * iVar2;
                local_11c = uVar36 & 0x3fff;
                local_118 = local_218 & 0x3fff;
                (*local_180)(local_194);
              }
              else if (iVar35 < iVar5) {
                uVar25 = iVar34 * iVar21;
                local_134 = uVar25 & 7;
                local_138 = ((int)(uVar25 + ((int)uVar25 >> 0x1f & 7U)) >> 3) +
                            iVar1 + iVar35 * iVar2;
                (*local_188)(local_194);
              }
              else {
                uStack_158 = local_204;
                uStack_154 = local_200;
              }
            }
            (*pcStack_184)(local_194);
            iVar31 = iVar31 + iVar23;
            local_20c = local_20c + -1;
            uVar36 = uVar36 + iVar4;
            local_218 = local_218 + iVar8;
          } while (local_20c != 0);
        }
      }
      else {
        uVar36 = uVar27;
        if (0 < iVar10) {
          do {
            if (iVar31 == 0) {
              iVar31 = 1;
            }
            iVar34 = (int)(uVar36 - iVar7) / iVar31 + iVar26;
            if ((iVar34 < 0) || (iVar6 <= iVar34)) {
              uVar25 = local_12c + iVar22;
              local_12c = uVar25 & 7;
              local_130 = local_130 + ((int)(uVar25 + ((int)uVar25 >> 0x1f & 7U)) >> 3);
            }
            else {
              iVar35 = (int)(local_218 - iVar9) / iVar31 + iVar29;
              if (iVar35 < 0) {
LAB_010e5e06:
                uVar25 = local_12c + iVar22;
                local_12c = uVar25 & 7;
                local_130 = local_130 + ((int)(uVar25 + ((int)uVar25 >> 0x1f & 7U)) >> 3);
              }
              else {
                if ((iVar34 < iVar6 + -1) && (iVar35 < iVar5 + -1)) {
                  uVar25 = iVar34 * iVar21;
                  local_134 = uVar25 & 7;
                  local_138 = ((int)(uVar25 + ((int)uVar25 >> 0x1f & 7U)) >> 3) +
                              iVar1 + iVar35 * iVar2;
                  local_11c = uVar36 & 0x3fff;
                  local_118 = local_218 & 0x3fff;
                  (*local_180)(local_194);
                  if (iVar24 != 0) {
                    iVar32 = 0;
                    if ((iVar34 < iVar24) && ((uVar28 & 0x4000) != 0)) {
                      iVar32 = iVar24 - iVar34;
                    }
                    if (((iVar35 < iVar24) && ((uVar28 & 0x2000) != 0)) &&
                       (iVar32 <= iVar24 - iVar35)) {
                      iVar32 = iVar24 - iVar35;
                    }
                    if (((local_20c - iVar24 < iVar34) && ((uVar28 & 0x8000) != 0)) &&
                       (iVar31 = (iVar34 - local_20c) + iVar24, iVar32 < iVar31)) {
                      iVar32 = iVar31;
                    }
                    if ((((int)(uVar36 - iVar24) < iVar35) && ((uVar28 & 0x1000) != 0)) &&
                       (iVar31 = (iVar35 - uVar36) + iVar24, iVar32 < iVar31)) {
                      iVar32 = iVar31;
                    }
joined_r0x010e5dfb:
                    iVar31 = unaff_EBX;
                    if (iVar32 != 0) {
                      uStack_80 = local_134;
                      iStack_7c = local_130;
                      (*pcStack_d0)(auStack_dc);
                      uStack_154 = uStack_a0;
                      uStack_158 = uStack_a4;
                      sStack_f4 = (short)iVar9 * (short)iVar32;
                      uStack_ea = (undefined1)
                                  (iVar32 * iVar9 + (iVar32 * iVar9 >> 0x1f & 0xffU) >> 8);
                      (*pcStack_b8)(&local_19c);
                    }
                  }
                }
                else {
                  if (iVar5 <= iVar35) goto LAB_010e5e06;
                  uVar25 = iVar34 * iVar21;
                  local_134 = uVar25 & 7;
                  local_138 = ((int)(uVar25 + ((int)uVar25 >> 0x1f & 7U)) >> 3) +
                              iVar1 + iVar35 * iVar2;
                  (*local_188)(local_194);
                  if (iVar24 != 0) {
                    iVar32 = 0;
                    if ((iVar34 < iVar24) && ((uVar28 & 0x4000) != 0)) {
                      iVar32 = iVar24 - iVar34;
                    }
                    if (((iVar35 < iVar24) && ((uVar28 & 0x2000) != 0)) &&
                       (iVar32 <= iVar24 - iVar35)) {
                      iVar32 = iVar24 - iVar35;
                    }
                    if (((local_20c - iVar24 < iVar34) && ((uVar28 & 0x8000) != 0)) &&
                       (iVar31 = (iVar34 - local_20c) + iVar24, iVar32 < iVar31)) {
                      iVar32 = iVar31;
                    }
                    if ((((int)(uVar36 - iVar24) < iVar35) && ((uVar28 & 0x1000) != 0)) &&
                       (iVar31 = (iVar35 - uVar36) + iVar24, iVar32 < iVar31)) {
                      iVar32 = iVar31;
                    }
                    goto joined_r0x010e5dfb;
                  }
                }
                (*local_188)(&local_198);
              }
            }
            iVar31 = iVar31 + iVar23;
            local_20c = local_20c + -1;
            uVar36 = uVar36 + iVar4;
            local_218 = local_218 + iVar8;
          } while (local_20c != 0);
        }
      }
      local_1d8 = local_1d8 + iVar3;
      uVar27 = uVar27 + local_1a0;
      uVar28 = uVar28 + local_19c;
      local_1dc = local_1dc + -1;
      iVar30 = iVar30 - iVar11;
    } while (local_1dc != 0);
  }
  return 0;
}


