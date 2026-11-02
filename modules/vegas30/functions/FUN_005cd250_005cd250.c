/* Module: vegas30.exe
   Function: FUN_005cd250
   Address: 005cd250
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005cd8b4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_005cd250(int param_1,int param_2,int param_3,uint param_4,int *param_5,int *param_6,
                 uint *param_7,int param_8)

{
  float fVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined8 uVar23;
  int local_b0;
  uint local_ac;
  uint local_a8;
  int *local_a4;
  uint local_98;
  uint local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_74;
  float local_70;
  float local_6c;
  uint local_68;
  int local_64;
  uint local_5c;
  int local_58;
  int local_48;
  
  uVar7 = param_4;
  iVar6 = DAT_00647788;
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 3) {
    local_48 = DAT_00649978;
    local_84 = DAT_00649980;
    local_80 = DAT_00649984;
  }
  else {
    local_48 = DAT_00647798;
    local_84 = DAT_006477a0;
    local_80 = DAT_006477a4;
  }
  iVar3 = **(int **)(param_1 + 0x24);
  uVar8 = *(uint *)(param_3 + 0x20) + *(uint *)(param_3 + 0x18);
  iVar9 = *(int *)(param_3 + 0x24) + *(int *)(param_3 + 0x1c) +
          (uint)CARRY4(*(uint *)(param_3 + 0x20),*(uint *)(param_3 + 0x18));
  local_b0 = 0;
  local_8c = 0;
  if ((*(int *)(param_3 + 0x50) == 0) || (*(int *)(*(int *)(param_3 + 0x50) + 0x18) == 0)) {
    local_88 = 0;
  }
  else {
    local_88 = FUN_005f13f0(iVar2);
  }
  iVar16 = *(int *)(param_3 + 0x50);
  if (iVar16 == 0) {
    local_68 = 0;
    local_64 = 0;
  }
  else {
    local_68 = *(uint *)(iVar16 + 8);
    local_64 = *(int *)(iVar16 + 0xc);
  }
  local_6c = *(float *)(param_3 + 0x60);
  if ((*(uint *)(param_3 + 0x10) & 0x200) != 0) {
    local_6c = local_6c * *(float *)(param_3 + 100);
  }
  iVar16 = *param_6 + 1;
  *param_6 = iVar16;
  if (iVar16 < iVar3) {
    while( true ) {
      iVar16 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 8) + iVar16 * 4);
      uVar18 = *(uint *)(iVar16 + 0x18);
      iVar12 = *(int *)(iVar16 + 0x1c);
      iVar10 = iVar12 + *(int *)(iVar16 + 0x24) + (uint)CARRY4(uVar18,*(uint *)(iVar16 + 0x20));
      if ((iVar9 < iVar10) || ((iVar9 <= iVar10 && (uVar8 < uVar18 + *(uint *)(iVar16 + 0x20)))))
      break;
      if (((int)param_7[1] <= iVar12) && (((int)param_7[1] < iVar12 || (*param_7 < uVar18)))) {
        iVar12 = *param_5;
        *param_5 = iVar12 + 1;
        piVar11 = (int *)(*(int *)(param_2 + 4) * iVar12 + *(int *)(param_2 + 8));
        piVar11[0x32] = 0;
        piVar11[4] = *param_7;
        piVar11[5] = param_7[1];
        piVar11[8] = local_88;
        uVar18 = *param_7;
        uVar13 = *(uint *)(param_3 + 0x18);
        iVar12 = *(int *)(param_3 + 0x1c);
        uVar17 = uVar18 - uVar13;
        uVar20 = param_7[1];
        piVar11[6] = uVar17 + local_68;
        piVar11[7] = ((uVar20 - iVar12) - (uint)(uVar18 < uVar13)) + local_64 +
                     (uint)CARRY4(uVar17,local_68);
        *piVar11 = param_3;
        piVar11[0x1e] = 0;
        piVar11[10] = *(int *)(param_3 + 0xf8);
        piVar11[1] = 0;
        piVar11[2] = 0;
        piVar11[9] = 0;
        piVar11[0x20] = 1000;
        piVar11[0x32] = ((param_4 & 1) << 1 | uVar7 & 1) << 2;
        piVar11[0xb] = (int)local_6c;
        piVar11[0x12] = *(int *)(param_3 + 0x28);
        uVar18 = piVar11[0x1a];
        piVar11[0x13] = *(int *)(param_3 + 0x2c);
        uVar13 = *(uint *)(param_3 + 0x10) >> 8 & 1;
        piVar11[0x1a] = uVar13 | uVar18 & 0xfffffffe;
        uVar18 = uVar18 & 0xffffffce;
        uVar13 = *(uint *)(param_3 + 0x10) >> 0x18 & 0x30 | uVar13 | uVar18;
        piVar11[0x1a] = uVar13;
        uVar13 = (uVar13 ^ *(uint *)(param_3 + 0x10)) & 2 ^ uVar13;
        piVar11[0x1a] = uVar13;
        uVar18 = CONCAT22((short)(uVar18 >> 0x10),CONCAT11((char)(uVar18 >> 8),(char)uVar13));
        uVar13 = ((*(uint *)(param_1 + 0x634) ^ *(uint *)(param_3 + 0xfc)) & 1) << 9;
        piVar11[0x1a] = uVar13 | uVar18 & 0xfffffdff;
        uVar18 = *(uint *)(param_3 + 0x10) >> 0x12 & 4 | uVar13 | uVar18 & 0xfffffdf3;
        piVar11[0x1a] = uVar18;
        if (local_88 != 0) {
          uVar13 = *(uint *)(*(int *)(local_88 + 8) + 0x134) >> 5 & 1;
          if (uVar13 == 0) {
            uVar13 = *(uint *)(local_88 + 0x8c) & 1;
          }
          piVar11[0x1a] = uVar13 << 3 | uVar18;
        }
        *param_7 = *(uint *)(iVar16 + 0x18);
        param_7[1] = *(uint *)(iVar16 + 0x1c);
      }
      uVar13 = *(uint *)(iVar16 + 0x18) + *(uint *)(iVar16 + 0x20);
      bVar4 = false;
      uVar20 = *(int *)(iVar16 + 0x1c) + *(int *)(iVar16 + 0x24) +
               (uint)CARRY4(*(uint *)(iVar16 + 0x18),*(uint *)(iVar16 + 0x20));
      local_98 = uVar13 - *(uint *)(iVar16 + 0x80);
      local_70 = *(float *)(iVar16 + 0x60);
      uVar18 = *(uint *)(iVar16 + 0x10);
      local_94 = (uVar20 - *(int *)(iVar16 + 0x84)) - (uint)(uVar13 < *(uint *)(iVar16 + 0x80));
      if ((uVar18 & 0x200) != 0) {
        local_70 = local_70 * *(float *)(iVar16 + 100);
      }
      local_ac = 0xffffffff;
      local_a8 = 0x7fffffff;
      local_74 = 0;
      if ((*param_6 + 1 < iVar3) &&
         (local_74 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 8) + (*param_6 + 1) * 4),
         local_74 != 0)) {
        local_a8 = *(uint *)(local_74 + 0x1c);
        local_ac = *(uint *)(local_74 + 0x18);
        uVar19 = *(uint *)(local_74 + 0x20) + local_ac;
        uVar17 = *(int *)(local_74 + 0x24) + local_a8 +
                 (uint)CARRY4(*(uint *)(local_74 + 0x20),local_ac);
        if (((int)uVar20 < (int)uVar17) || (((int)uVar20 <= (int)uVar17 && (uVar13 < uVar19)))) {
          bVar4 = false;
          if (((int)local_a8 <= (int)uVar20) &&
             (((((int)local_a8 < (int)uVar20 || (local_ac < uVar13)) &&
               ((int)local_94 <= (int)local_a8)) &&
              (((int)local_94 < (int)local_a8 || (local_98 <= local_ac)))))) {
            local_98 = local_ac;
            local_94 = local_a8;
          }
        }
        else {
          bVar4 = true;
          if (((int)local_94 <= (int)uVar17) &&
             (((int)local_94 < (int)uVar17 || (local_98 <= uVar19)))) {
            local_98 = uVar19;
            local_94 = uVar17;
          }
        }
      }
      if (iVar16 != 0) {
        if (param_8 != 0) {
          *(uint *)(iVar16 + 0x58) = *(uint *)(iVar16 + 0x58) & 0xffffff7f;
        }
        if (iVar6 != 0) {
          if (local_b0 == 0) {
            if (((*(uint *)(iVar16 + 0x58) & 1) != 0) && ((uVar18 & 8) == 0)) {
              iVar12 = *(int *)(iVar16 + 0x8c);
              uVar18 = *(uint *)(iVar16 + 0x88);
              if ((iVar12 < 1) && (iVar12 < 0)) {
                uVar18 = 0;
                iVar12 = 0;
              }
              else {
                iVar10 = *(int *)(iVar16 + 0x24);
                if ((iVar10 <= iVar12) && ((iVar10 < iVar12 || (*(uint *)(iVar16 + 0x20) < uVar18)))
                   ) {
                  uVar18 = *(uint *)(iVar16 + 0x20);
                  iVar12 = iVar10;
                }
              }
              *(uint *)(iVar16 + 0x78) = uVar18;
              *(int *)(iVar16 + 0x7c) = iVar12;
            }
            *(uint *)(iVar16 + 0x58) = *(uint *)(iVar16 + 0x58) & 0xffffff7e;
          }
          else {
            uVar17 = *(uint *)(iVar16 + 0x58);
            if (((((uVar17 & 0x10) == 0) && ((uVar18 & 8) == 0)) &&
                (uVar19 = *(uint *)(local_b0 + 0x58), (uVar19 & 0x10) == 0)) &&
               ((*(uint *)(local_b0 + 0x10) & 8) == 0)) {
              if (((((*(uint *)(local_b0 + 0x10) ^ uVar18) & 0x800000) == 0) &&
                  ((uVar19 >> 1 & 0x20) == (uVar17 & 0x20))) &&
                 (((uVar17 & 0x300) == 0 &&
                  (((uVar19 & 0x300) == 0 &&
                   (*(int *)(*(int *)(iVar16 + 0x218) + 0xa8) ==
                    *(int *)(*(int *)(local_b0 + 0x218) + 0xa8))))))) {
                if (((uVar17 & 0x80) != 0) &&
                   (*(uint *)(iVar16 + 0x58) = uVar17 & 0xffffff7f, (uVar17 & 1) != 0)) {
                  *(undefined4 *)(iVar16 + 0x78) = *(undefined4 *)(iVar16 + 0x88);
                  *(undefined4 *)(iVar16 + 0x7c) = *(undefined4 *)(iVar16 + 0x8c);
                  *(uint *)(iVar16 + 0x58) = uVar17 & 0xffffff7e;
                }
              }
              else {
                uVar19 = *(uint *)(local_b0 + 0x20);
                uVar14 = *(uint *)(local_b0 + 0x18);
                uVar15 = uVar19 + uVar14;
                iVar12 = *(int *)(local_b0 + 0x24);
                iVar10 = *(int *)(local_b0 + 0x1c);
                if ((uVar17 & 1) == 0) {
                  *(undefined4 *)(iVar16 + 0x88) = *(undefined4 *)(iVar16 + 0x78);
                  *(undefined4 *)(iVar16 + 0x8c) = *(undefined4 *)(iVar16 + 0x7c);
                  *(uint *)(iVar16 + 0x58) = uVar17 | 2;
                }
                uVar17 = uVar15 - *(uint *)(iVar16 + 0x18);
                iVar12 = ((iVar12 + iVar10 + (uint)CARRY4(uVar19,uVar14)) - *(int *)(iVar16 + 0x1c))
                         - (uint)(uVar15 < *(uint *)(iVar16 + 0x18));
                if ((iVar12 < 1) && (iVar12 < 0)) {
                  uVar17 = 0;
                  iVar12 = 0;
                }
                else {
                  iVar10 = *(int *)(iVar16 + 0x24);
                  if ((iVar10 <= iVar12) &&
                     ((iVar10 < iVar12 || (*(uint *)(iVar16 + 0x20) < uVar17)))) {
                    uVar17 = *(uint *)(iVar16 + 0x20);
                    iVar12 = iVar10;
                  }
                }
                *(uint *)(iVar16 + 0x78) = uVar17;
                *(int *)(iVar16 + 0x7c) = iVar12;
                uVar17 = *(uint *)(iVar16 + 0x58);
                uVar19 = uVar17 | 1;
                *(uint *)(iVar16 + 0x58) = uVar19;
                *(uint *)(iVar16 + 0x58) =
                     (uVar18 ^ *(uint *)(local_b0 + 0x10)) >> 0x10 & 0x80 |
                     CONCAT31((int3)(uVar17 >> 8),(char)uVar19) & 0xffffff7f;
              }
            }
          }
        }
        if ((local_48 != 0) && (uVar18 = *(uint *)(iVar16 + 0x58), (uVar18 & 8) == 0)) {
          uVar21 = __allmul(local_84,local_80,2,0);
          iVar10 = (int)((ulonglong)uVar21 >> 0x20);
          iVar12 = *(int *)(iVar16 + 0x24);
          lVar22 = CONCAT44(local_80,local_84);
          if ((iVar12 <= iVar10) &&
             ((iVar12 < iVar10 ||
              (lVar22 = CONCAT44(local_80,local_84), *(uint *)(iVar16 + 0x20) < (uint)uVar21)))) {
            lVar22 = __alldiv(*(undefined4 *)(iVar16 + 0x20),iVar12,2,0);
          }
          iVar12 = (int)((ulonglong)lVar22 >> 0x20);
          if (local_b0 == 0) {
            if ((uVar18 & 1) == 0) {
              *(undefined4 *)(iVar16 + 0x88) = *(undefined4 *)(iVar16 + 0x78);
              *(undefined4 *)(iVar16 + 0x8c) = *(undefined4 *)(iVar16 + 0x7c);
              *(uint *)(iVar16 + 0x58) = uVar18 | 2;
            }
            lVar5 = *(longlong *)(iVar16 + 0x78);
            if (*(longlong *)(iVar16 + 0x78) < lVar22) {
              lVar5 = lVar22;
            }
            *(longlong *)(iVar16 + 0x78) = lVar5;
          }
          if (((int)uVar20 <= (int)local_a8) &&
             (((int)uVar20 < (int)local_a8 || (uVar13 <= local_ac)))) {
            if ((*(uint *)(iVar16 + 0x58) & 1) == 0) {
              *(undefined4 *)(iVar16 + 0x90) = *(undefined4 *)(iVar16 + 0x80);
              *(undefined4 *)(iVar16 + 0x94) = *(undefined4 *)(iVar16 + 0x84);
              *(uint *)(iVar16 + 0x58) = *(uint *)(iVar16 + 0x58) | 4;
            }
            iVar10 = *(int *)(iVar16 + 0x84);
            if ((iVar12 < iVar10) ||
               ((iVar12 <= iVar10 && ((uint)lVar22 <= *(uint *)(iVar16 + 0x80))))) {
              lVar22 = CONCAT44(iVar10,*(undefined4 *)(iVar16 + 0x80));
            }
            *(longlong *)(iVar16 + 0x80) = lVar22;
            local_98 = uVar13 - *(uint *)(iVar16 + 0x80);
            local_94 = (uVar20 - (int)((ulonglong)lVar22 >> 0x20)) -
                       (uint)(uVar13 < *(uint *)(iVar16 + 0x80));
          }
          *(uint *)(iVar16 + 0x58) = *(uint *)(iVar16 + 0x58) | 8;
        }
      }
      uVar18 = uVar7;
      if (local_b0 != 0) {
        uVar18 = param_4;
      }
      local_58 = *(int *)(iVar16 + 0x7c);
      local_5c = *(uint *)(iVar16 + 0x78);
      param_4 = (uint)(uVar18 == 0);
      if (local_5c == 0 && local_58 == 0) {
LAB_005ce08b:
        if (local_b0 != 0) {
          local_8c = local_b0;
        }
        local_b0 = 0;
        if (((int)local_94 < (int)param_7[1]) ||
           (((int)local_94 <= (int)param_7[1] && (local_98 <= *param_7)))) {
LAB_005ce396:
          if (((int)param_7[1] <= (int)uVar20) &&
             (((int)param_7[1] < (int)uVar20 || (*param_7 < uVar13)))) {
            iVar12 = *param_5;
            *param_5 = iVar12 + 1;
            iVar12 = *(int *)(param_2 + 4) * iVar12;
            iVar10 = *(int *)(param_2 + 8);
            *(undefined4 *)(iVar12 + 200 + iVar10) = 0;
            piVar11 = (int *)(iVar12 + iVar10);
            piVar11[4] = *param_7;
            uVar18 = param_7[1];
            piVar11[8] = 0;
            piVar11[5] = uVar18;
            piVar11[0x1e] = local_88;
            piVar11[10] = 1000;
            piVar11[0x20] = *(int *)(param_3 + 0xf8);
            uVar18 = *param_7;
            uVar17 = *(uint *)(param_3 + 0x18);
            iVar12 = *(int *)(param_3 + 0x1c);
            uVar14 = uVar18 - uVar17;
            uVar19 = param_7[1];
            piVar11[0x1c] = uVar14 + local_68;
            piVar11[0x1d] =
                 ((uVar19 - iVar12) - (uint)(uVar18 < uVar17)) + local_64 +
                 (uint)CARRY4(uVar14,local_68);
            *piVar11 = iVar16;
            piVar11[1] = param_3;
            piVar11[2] = 0;
            piVar11[0x32] = ((uVar7 & 1) << 1 | param_4) << 2 | 2;
            if (*(int *)(iVar16 + 0x50) != 0) {
              if (*(int *)(*(int *)(iVar16 + 0x50) + 0x18) == 0) {
                iVar12 = 0;
              }
              else {
                iVar12 = FUN_005f13f0(iVar2);
              }
              piVar11[8] = iVar12;
              uVar18 = *(uint *)(*(int *)(iVar16 + 0x50) + 8);
              uVar17 = *(uint *)(iVar16 + 0x18);
              uVar15 = uVar18 - *(uint *)(iVar16 + 0x18);
              iVar12 = *(int *)(*(int *)(iVar16 + 0x50) + 0xc);
              iVar10 = *(int *)(iVar16 + 0x1c);
              uVar19 = *param_7;
              uVar14 = param_7[1];
              piVar11[6] = uVar15 + *param_7;
              piVar11[7] = ((iVar12 - iVar10) - (uint)(uVar18 < uVar17)) + uVar14 +
                           (uint)CARRY4(uVar15,uVar19);
              piVar11[10] = *(int *)(iVar16 + 0xf8);
            }
            iVar12 = *(int *)(iVar16 + 0x6c);
            piVar11[0xe] = 0;
            piVar11[9] = iVar12;
            piVar11[0xc] = (int)local_70;
            piVar11[0xb] = 0;
            piVar11[0xf] = 0;
            uVar18 = *param_7;
            uVar17 = param_7[1];
            piVar11[0x10] = uVar13 - uVar18;
            piVar11[0x11] = (uVar20 - uVar17) - (uint)(uVar13 < uVar18);
            piVar11[0x12] = *(int *)(iVar16 + 0x28);
            uVar18 = piVar11[0x1a];
            piVar11[0x13] = *(int *)(iVar16 + 0x2c);
            uVar17 = *(uint *)(iVar16 + 0x10) >> 8 & 1 | uVar18 & 0xfffffffe;
            piVar11[0x1a] = uVar17;
            uVar19 = *(uint *)(iVar16 + 0x10) >> 0x18 & 0x30;
            uVar18 = CONCAT31((int3)((uVar18 & 0xfffffffe) >> 8),(char)uVar17);
            piVar11[0x1a] = uVar19 | uVar18 & 0xffffffcf;
            uVar18 = uVar18 & 0xfffffe0f;
            uVar17 = *(uint *)(iVar16 + 0x10) >> 0x13 & 0x1c0 | uVar19 | uVar18;
            piVar11[0x1a] = uVar17;
            uVar19 = (*(uint *)(iVar16 + 0x10) ^ uVar17) & 2 ^ uVar17;
            piVar11[0x1a] = uVar19;
            uVar18 = CONCAT22((short)(uVar18 >> 0x10),CONCAT11((char)(uVar17 >> 8),(char)uVar19));
            uVar17 = ((*(uint *)(iVar16 + 0xfc) ^ *(uint *)(param_1 + 0x634)) & 1) << 9;
            piVar11[0x1a] = uVar17 | uVar18 & 0xfffffdff;
            uVar18 = *(uint *)(iVar16 + 0x10) >> 0x12 & 4 | uVar17 | uVar18 & 0xfffffdf3;
            iVar12 = piVar11[8];
            piVar11[0x1a] = uVar18;
            if (iVar12 != 0) {
              uVar17 = *(uint *)(*(int *)(iVar12 + 8) + 0x134) >> 5 & 1;
              if (uVar17 == 0) {
                uVar17 = *(uint *)(iVar12 + 0x8c) & 1;
              }
              piVar11[0x1a] = uVar17 << 3 | uVar18;
            }
            piVar11[0x22] = 0;
            piVar11[0x21] = (int)local_6c;
            iVar12 = *(int *)(iVar16 + 0x74);
            piVar11[0x24] = 0;
            piVar11[0x25] = 0;
            piVar11[0x26] = piVar11[0x10];
            piVar11[0x1f] = iVar12;
            piVar11[0x27] = piVar11[0x11];
            piVar11[0x28] = *(int *)(param_3 + 0x28);
            uVar18 = piVar11[0x30];
            piVar11[0x29] = *(int *)(param_3 + 0x2c);
            uVar17 = *(uint *)(param_3 + 0x10) >> 8 & 1 | uVar18 & 0xfffffffe;
            piVar11[0x30] = uVar17;
            uVar18 = CONCAT31((int3)((uVar18 & 0xfffffffe) >> 8),(char)uVar17) & 0xffffffcf;
            uVar17 = *(uint *)(param_3 + 0x10) >> 0x18 & 0x30 | uVar18;
            piVar11[0x30] = uVar17;
            uVar17 = (*(uint *)(param_3 + 0x10) ^ uVar17) & 2 ^ uVar17;
            piVar11[0x30] = uVar17;
            uVar18 = CONCAT22((short)(uVar18 >> 0x10),CONCAT11((char)(uVar18 >> 8),(char)uVar17));
            iVar12 = piVar11[0x1e];
            uVar17 = ((*(uint *)(param_3 + 0xfc) ^ *(uint *)(param_1 + 0x634)) & 1) << 9;
            piVar11[0x30] = uVar17 | uVar18 & 0xfffffdff;
            uVar18 = *(uint *)(param_3 + 0x10) >> 0x12 & 4 | uVar17 | uVar18 & 0xfffffdf3;
            piVar11[0x30] = uVar18;
            if (iVar12 != 0) {
              uVar17 = *(uint *)(*(int *)(iVar12 + 8) + 0x134) >> 5 & 1;
              if (uVar17 == 0) {
                uVar17 = *(uint *)(iVar12 + 0x8c) & 1;
              }
              piVar11[0x30] = uVar17 << 3 | uVar18;
            }
            *param_7 = uVar13;
            param_7[1] = uVar20;
            if (((int)local_a8 <= (int)uVar20) &&
               (((int)local_a8 < (int)uVar20 || (local_ac < uVar13)))) {
              *param_5 = *param_5 + -1;
              *param_7 = local_ac;
              param_7[1] = local_a8;
              local_b0 = iVar16;
              if (*(int *)(local_74 + 0x78) != 0 || *(int *)(local_74 + 0x7c) != 0)
              goto LAB_005ce6d4;
              goto LAB_005ce389;
            }
          }
          if (iVar9 < (int)local_a8) {
            return;
          }
          if ((iVar9 <= (int)local_a8) && (uVar8 <= local_ac)) {
            return;
          }
          goto LAB_005ce6d4;
        }
        iVar12 = *param_5;
        *param_5 = iVar12 + 1;
        iVar12 = *(int *)(param_2 + 4) * iVar12;
        iVar10 = *(int *)(param_2 + 8);
        *(undefined4 *)(iVar12 + 200 + iVar10) = 0;
        piVar11 = (int *)(iVar12 + iVar10);
        piVar11[4] = *param_7;
        piVar11[5] = param_7[1];
        piVar11[10] = 1000;
        piVar11[0x20] = 1000;
        piVar11[8] = 0;
        piVar11[0x1e] = 0;
        *piVar11 = iVar16;
        piVar11[1] = 0;
        piVar11[2] = param_3;
        piVar11[0x32] = ((uVar7 & 1) << 1 | param_4) << 2;
        if (local_8c != 0) {
          iVar12 = *(int *)(local_8c + 0x24) + *(int *)(local_8c + 0x1c) +
                   (uint)CARRY4(*(uint *)(local_8c + 0x20),*(uint *)(local_8c + 0x18));
          if (((int)param_7[1] <= iVar12) &&
             ((((int)param_7[1] < iVar12 ||
               (*param_7 < *(uint *)(local_8c + 0x20) + *(uint *)(local_8c + 0x18))) &&
              (param_4 == uVar7)))) {
            piVar11[2] = local_8c;
            piVar11[0x32] = (uint)(param_4 == 0) << 3 | param_4 << 2;
          }
        }
        if (*(int *)(iVar16 + 0x50) != 0) {
          if (*(int *)(*(int *)(iVar16 + 0x50) + 0x18) == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = FUN_005f13f0(iVar2);
          }
          piVar11[8] = iVar12;
          uVar18 = *(uint *)(*(int *)(iVar16 + 0x50) + 8);
          uVar17 = *(uint *)(iVar16 + 0x18);
          uVar15 = uVar18 - *(uint *)(iVar16 + 0x18);
          iVar12 = *(int *)(*(int *)(iVar16 + 0x50) + 0xc);
          iVar10 = *(int *)(iVar16 + 0x1c);
          uVar19 = *param_7;
          uVar14 = param_7[1];
          piVar11[6] = uVar15 + *param_7;
          piVar11[7] = ((iVar12 - iVar10) - (uint)(uVar18 < uVar17)) + uVar14 +
                       (uint)CARRY4(uVar15,uVar19);
          piVar11[10] = *(int *)(iVar16 + 0xf8);
        }
        piVar11[9] = 0;
        piVar11[0xb] = (int)local_70;
        piVar11[0x12] = *(int *)(iVar16 + 0x28);
        piVar11[0x13] = *(int *)(iVar16 + 0x2c);
        uVar18 = piVar11[0x1a];
        uVar17 = *(uint *)(iVar16 + 0x10) >> 8 & 1 | uVar18 & 0xfffffffe;
        piVar11[0x1a] = uVar17;
        uVar19 = *(uint *)(iVar16 + 0x10) >> 0x18 & 0x30;
        uVar18 = CONCAT31((int3)((uVar18 & 0xfffffffe) >> 8),(char)uVar17);
        piVar11[0x1a] = uVar19 | uVar18 & 0xffffffcf;
        uVar18 = uVar18 & 0xfffffe0f;
        uVar17 = *(uint *)(iVar16 + 0x10) >> 0x13 & 0x1c0 | uVar19 | uVar18;
        piVar11[0x1a] = uVar17;
        uVar19 = (*(uint *)(iVar16 + 0x10) ^ uVar17) & 2 ^ uVar17;
        piVar11[0x1a] = uVar19;
        uVar18 = CONCAT22((short)(uVar18 >> 0x10),CONCAT11((char)(uVar17 >> 8),(char)uVar19));
        uVar17 = ((*(uint *)(param_1 + 0x634) ^ *(uint *)(iVar16 + 0xfc)) & 1) << 9;
        piVar11[0x1a] = uVar17 | uVar18 & 0xfffffdff;
        uVar18 = *(uint *)(iVar16 + 0x10) >> 0x12 & 4 | uVar17 | uVar18 & 0xfffffdf3;
        iVar12 = piVar11[8];
        piVar11[0x1a] = uVar18;
        if (iVar12 != 0) {
          uVar17 = *(uint *)(*(int *)(iVar12 + 8) + 0x134) >> 5 & 1;
          if (uVar17 == 0) {
            uVar17 = *(uint *)(iVar12 + 0x8c) & 1;
          }
          piVar11[0x1a] = uVar17 << 3 | uVar18;
        }
        *param_7 = local_98;
        param_7[1] = local_94;
        if (((int)local_94 < (int)local_a8) ||
           (((int)local_94 <= (int)local_a8 && (local_98 <= local_ac)))) goto LAB_005ce396;
        if ((local_ac == piVar11[4]) && (local_a8 == piVar11[5])) {
          *param_5 = *param_5 + -1;
        }
        *param_7 = local_ac;
        param_7[1] = local_a8;
        if (bVar4) {
          FUN_005cd250(param_1,param_2,iVar16,param_4,param_5,param_6,param_7,param_8);
          local_ac = 0xffffffff;
          local_a8 = 0x7fffffff;
          if ((*param_6 + 1 < iVar3) &&
             (iVar12 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 8) + (*param_6 + 1) * 4),
             iVar12 != 0)) {
            local_ac = *(uint *)(iVar12 + 0x18);
            local_a8 = *(uint *)(iVar12 + 0x1c);
            bVar4 = false;
            local_74 = iVar12;
          }
          goto LAB_005ce08b;
        }
        local_b0 = iVar16;
        if ((*(int *)(local_74 + 0x78) == 0 && *(int *)(local_74 + 0x7c) == 0) && (iVar6 == 0)) {
LAB_005ce389:
          local_b0 = 0;
          local_8c = iVar16;
        }
      }
      else {
        iVar12 = *(int *)(iVar16 + 0x24);
        if ((iVar12 < local_58) || ((iVar12 <= local_58 && (*(uint *)(iVar16 + 0x20) <= local_5c))))
        {
          local_5c = *(uint *)(iVar16 + 0x20);
          local_58 = iVar12;
        }
        iVar12 = *param_5;
        *param_5 = iVar12 + 1;
        piVar11 = (int *)(*(int *)(param_2 + 4) * iVar12 + *(int *)(param_2 + 8));
        piVar11[0x32] = 0;
        piVar11[4] = *param_7;
        uVar18 = param_7[1];
        piVar11[8] = 0;
        piVar11[5] = uVar18;
        piVar11[0x1e] = local_88;
        uVar18 = *param_7;
        uVar17 = *(uint *)(param_3 + 0x18);
        iVar12 = *(int *)(param_3 + 0x1c);
        uVar14 = uVar18 - uVar17;
        uVar19 = param_7[1];
        piVar11[10] = 1000;
        piVar11[0x1c] = uVar14 + local_68;
        piVar11[0x1d] =
             ((uVar19 - iVar12) - (uint)(uVar18 < uVar17)) + local_64 +
             (uint)CARRY4(uVar14,local_68);
        piVar11[0x20] = *(int *)(param_3 + 0xf8);
        *piVar11 = iVar16;
        piVar11[1] = param_3;
        piVar11[2] = 0;
        piVar11[0x32] = ((uVar7 & 1) << 1 | param_4) << 2;
        if (*(int *)(iVar16 + 0x50) != 0) {
          if (*(int *)(*(int *)(iVar16 + 0x50) + 0x18) == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = FUN_005f13f0(iVar2);
          }
          piVar11[8] = iVar12;
          uVar18 = *(uint *)(*(int *)(iVar16 + 0x50) + 8);
          uVar17 = *(uint *)(iVar16 + 0x18);
          uVar15 = uVar18 - *(uint *)(iVar16 + 0x18);
          iVar12 = *(int *)(*(int *)(iVar16 + 0x50) + 0xc);
          iVar10 = *(int *)(iVar16 + 0x1c);
          uVar19 = *param_7;
          uVar14 = param_7[1];
          piVar11[6] = uVar15 + *param_7;
          piVar11[7] = ((iVar12 - iVar10) - (uint)(uVar18 < uVar17)) + uVar14 +
                       (uint)CARRY4(uVar15,uVar19);
          piVar11[10] = *(int *)(iVar16 + 0xf8);
        }
        iVar12 = *(int *)(iVar16 + 0x68);
        piVar11[0xe] = 0;
        piVar11[0xc] = 0;
        piVar11[0xf] = 0;
        piVar11[9] = iVar12;
        piVar11[0x10] = local_5c;
        piVar11[0xb] = (int)local_70;
        piVar11[0x11] = local_58;
        piVar11[0x12] = *(int *)(iVar16 + 0x28);
        uVar18 = piVar11[0x1a];
        piVar11[0x13] = *(int *)(iVar16 + 0x2c);
        uVar17 = *(uint *)(iVar16 + 0x10) >> 8 & 1 | uVar18 & 0xfffffffe;
        piVar11[0x1a] = uVar17;
        uVar19 = *(uint *)(iVar16 + 0x10) >> 0x18 & 0x30;
        uVar18 = CONCAT31((int3)((uVar18 & 0xfffffffe) >> 8),(char)uVar17);
        piVar11[0x1a] = uVar19 | uVar18 & 0xffffffcf;
        uVar18 = uVar18 & 0xfffffe0f;
        uVar17 = *(uint *)(iVar16 + 0x10) >> 0x13 & 0x1c0 | uVar19 | uVar18;
        piVar11[0x1a] = uVar17;
        uVar19 = (uVar17 ^ *(uint *)(iVar16 + 0x10)) & 2 ^ uVar17;
        piVar11[0x1a] = uVar19;
        uVar18 = CONCAT22((short)(uVar18 >> 0x10),CONCAT11((char)(uVar17 >> 8),(char)uVar19));
        uVar17 = ((*(uint *)(iVar16 + 0xfc) ^ *(uint *)(param_1 + 0x634)) & 1) << 9;
        piVar11[0x1a] = uVar17 | uVar18 & 0xfffffdff;
        uVar18 = *(uint *)(iVar16 + 0x10) >> 0x12 & 4 | uVar17 | uVar18 & 0xfffffdf3;
        iVar12 = piVar11[8];
        piVar11[0x1a] = uVar18;
        if (iVar12 != 0) {
          uVar17 = *(uint *)(*(int *)(iVar12 + 8) + 0x134) >> 5 & 1;
          if (uVar17 == 0) {
            uVar17 = *(uint *)(iVar12 + 0x8c) & 1;
          }
          piVar11[0x1a] = uVar17 << 3 | uVar18;
        }
        piVar11[0x21] = 0;
        piVar11[0x22] = (int)local_6c;
        iVar12 = *(int *)(iVar16 + 0x70);
        piVar11[0x24] = 0;
        piVar11[0x25] = 0;
        piVar11[0x26] = local_5c;
        piVar11[0x1f] = iVar12;
        piVar11[0x27] = local_58;
        piVar11[0x28] = *(int *)(param_3 + 0x28);
        uVar18 = piVar11[0x30];
        piVar11[0x29] = *(int *)(param_3 + 0x2c);
        uVar17 = *(uint *)(param_3 + 0x10) >> 8 & 1 | uVar18 & 0xfffffffe;
        piVar11[0x30] = uVar17;
        uVar19 = *(uint *)(param_3 + 0x10) >> 0x18 & 0x30;
        uVar18 = CONCAT31((int3)((uVar18 & 0xfffffffe) >> 8),(char)uVar17);
        piVar11[0x30] = uVar19 | uVar18 & 0xffffffcf;
        uVar18 = uVar18 & 0xfffffe0f;
        uVar17 = *(uint *)(param_3 + 0x10) >> 0x13 & 0x1c0 | uVar19 | uVar18;
        piVar11[0x30] = uVar17;
        uVar19 = (*(uint *)(param_3 + 0x10) ^ uVar17) & 2 ^ uVar17;
        piVar11[0x30] = uVar19;
        uVar18 = CONCAT22((short)(uVar18 >> 0x10),CONCAT11((char)(uVar17 >> 8),(char)uVar19));
        uVar17 = ((*(uint *)(param_3 + 0xfc) ^ *(uint *)(param_1 + 0x634)) & 1) << 9;
        piVar11[0x30] = uVar17 | uVar18 & 0xfffffdff;
        piVar11[0x30] = *(uint *)(param_3 + 0x10) >> 0x12 & 4 | uVar17 | uVar18 & 0xfffffdf3;
        uVar18 = *(uint *)(iVar16 + 0x18);
        iVar12 = *(int *)(iVar16 + 0x1c);
        *param_7 = uVar18 + local_5c;
        param_7[1] = iVar12 + local_58 + (uint)CARRY4(uVar18,local_5c);
        if (local_b0 != 0) {
          piVar11[1] = local_b0;
          iVar12 = 0;
          piVar11[0x32] = (uint)(param_4 == 0) << 3 | piVar11[0x32] & 0xfffffff7U;
          piVar11[0x1e] = 0;
          piVar11[0x20] = 1000;
          fVar1 = *(float *)(local_b0 + 0x60);
          piVar11[0x22] = (int)fVar1;
          if ((*(uint *)(local_b0 + 0x10) & 0x200) != 0) {
            piVar11[0x22] = (int)(fVar1 * *(float *)(local_b0 + 100));
          }
          if (*(int *)(local_b0 + 0x50) != 0) {
            if (*(int *)(*(int *)(local_b0 + 0x50) + 0x18) != 0) {
              iVar12 = FUN_005f13f0(iVar2);
            }
            piVar11[0x1e] = iVar12;
            uVar18 = *(uint *)(*(int *)(local_b0 + 0x50) + 8);
            uVar17 = *(uint *)(local_b0 + 0x18);
            uVar19 = uVar18 - *(uint *)(local_b0 + 0x18);
            iVar12 = *(int *)(*(int *)(local_b0 + 0x50) + 0xc);
            iVar10 = *(int *)(local_b0 + 0x1c);
            piVar11[0x1c] = uVar19 + piVar11[4];
            piVar11[0x1d] =
                 ((iVar12 - iVar10) - (uint)(uVar18 < uVar17)) + piVar11[5] +
                 (uint)CARRY4(uVar19,piVar11[4]);
            piVar11[0x20] = *(int *)(local_b0 + 0xf8);
          }
          iVar12 = piVar11[0x1e];
          if (iVar12 != 0) {
            uVar18 = *(uint *)(*(int *)(iVar12 + 8) + 0x134) >> 5 & 1;
            if (uVar18 == 0) {
              uVar18 = *(uint *)(iVar12 + 0x8c) & 1;
            }
            piVar11[0x30] = uVar18 << 3 | piVar11[0x30] & 0xfffffff7U;
          }
          if (param_8 != 0) {
            if (((*(uint *)(iVar16 + 0x10) ^ *(uint *)(local_b0 + 0x10)) & 0x800000) == 0) {
              *(undefined4 *)(iVar16 + 0x88) = 0;
              *(undefined4 *)(iVar16 + 0x8c) = 0;
              *(uint *)(iVar16 + 0x58) = *(uint *)(iVar16 + 0x58) & 0xfffffffc;
              *(undefined4 *)(local_b0 + 0x6c) = *(undefined4 *)(iVar16 + 0x70);
              *(int *)(local_b0 + 0x80) = piVar11[0x26];
              *(int *)(local_b0 + 0x84) = piVar11[0x27];
            }
            else {
              local_90 = *param_6 + -1;
              if (-1 < local_90) {
                local_a4 = (int *)(*(int *)(*(int *)(param_1 + 0x24) + 8) + local_90 * 4);
                do {
                  if (((*(uint *)(*local_a4 + 0x10) ^ *(uint *)(iVar16 + 0x10)) & 0x800000) == 0) {
                    iVar12 = *local_a4;
                    iVar10 = *(int *)(iVar12 + 0x24) + *(int *)(iVar12 + 0x1c) +
                             (uint)CARRY4(*(uint *)(iVar12 + 0x20),*(uint *)(iVar12 + 0x18));
                    if ((*(int *)(iVar16 + 0x1c) < iVar10) ||
                       ((*(int *)(iVar16 + 0x1c) <= iVar10 &&
                        (*(uint *)(iVar16 + 0x18) <
                         *(uint *)(iVar12 + 0x20) + *(uint *)(iVar12 + 0x18))))) goto LAB_005cdfb2;
                  }
                  local_90 = local_90 + -1;
                  local_a4 = local_a4 + -1;
                } while (-1 < local_90);
              }
              uVar21 = 0;
              uVar23 = 0;
              if (local_48 != 0) {
                iVar12 = *(int *)(iVar16 + 0x50);
                uVar21 = 0;
                if ((iVar12 != 0) &&
                   (uVar21 = 0, *(int *)(iVar12 + 8) != 0 || *(int *)(iVar12 + 0xc) != 0)) {
                  uVar21 = __allmul(local_84,local_80,2,0);
                  iVar12 = (int)((ulonglong)uVar21 >> 0x20);
                  if ((iVar12 < *(int *)(iVar16 + 0x24)) ||
                     ((iVar12 <= *(int *)(iVar16 + 0x24) &&
                      ((uint)uVar21 <= *(uint *)(iVar16 + 0x20))))) {
                    uVar21 = CONCAT44(local_80,local_84);
                  }
                  else {
                    uVar21 = __alldiv(*(undefined4 *)(iVar16 + 0x20),*(undefined4 *)(iVar16 + 0x24),
                                      2,0);
                  }
                }
                if ((*(int *)(local_b0 + 0x50) == 0) ||
                   (*(int *)(*(int *)(local_b0 + 0x50) + 0x18) == 0)) {
                  iVar12 = 0;
                }
                else {
                  iVar12 = FUN_005f13f0(iVar2);
                }
                uVar23 = 0;
                if (((iVar12 != 0) && (lVar22 = ftol(), uVar23 = 0, lVar22 != 0)) &&
                   (uVar18 = *(uint *)(*(int *)(local_b0 + 0x50) + 8),
                   lVar22 = __allrem(uVar18 + *(uint *)(local_b0 + 0x20),
                                     *(int *)(*(int *)(local_b0 + 0x50) + 0xc) +
                                     *(int *)(local_b0 + 0x24) +
                                     (uint)CARRY4(uVar18,*(uint *)(local_b0 + 0x20)),lVar22),
                   uVar23 = 0, lVar22 != 0)) {
                  uVar23 = __allmul(local_84,local_80,2,0);
                  iVar12 = (int)((ulonglong)uVar23 >> 0x20);
                  if ((iVar12 < *(int *)(local_b0 + 0x24)) ||
                     ((iVar12 <= *(int *)(local_b0 + 0x24) &&
                      ((uint)uVar23 <= *(uint *)(local_b0 + 0x20))))) {
                    uVar23 = CONCAT44(local_80,local_84);
                  }
                  else {
                    uVar23 = __alldiv(*(undefined4 *)(local_b0 + 0x20),
                                      *(undefined4 *)(local_b0 + 0x24),2,0);
                  }
                }
              }
              *(uint *)(iVar16 + 0x58) = *(uint *)(iVar16 + 0x58) | 3;
              *(undefined8 *)(iVar16 + 0x88) = uVar21;
              *(uint *)(local_b0 + 0x58) = *(uint *)(local_b0 + 0x58) | 4;
              *(undefined8 *)(local_b0 + 0x90) = uVar23;
            }
          }
LAB_005cdfb2:
          local_8c = local_b0;
          local_b0 = 0;
        }
        if (((int)param_7[1] < (int)local_a8) ||
           (((int)param_7[1] <= (int)local_a8 && (*param_7 <= local_ac)))) goto LAB_005ce08b;
        uVar18 = piVar11[5];
        if (((int)local_a8 < (int)uVar18) ||
           (((int)local_a8 <= (int)uVar18 && (local_ac <= (uint)piVar11[4])))) {
          *param_7 = piVar11[4];
          param_7[1] = uVar18;
          *param_5 = *param_5 + -1;
          goto LAB_005ce08b;
        }
        *param_7 = local_ac;
        param_7[1] = local_a8;
        uVar18 = *(uint *)(iVar16 + 0x18);
        iVar12 = *(int *)(iVar16 + 0x1c);
        piVar11[0x10] = local_ac - uVar18;
        piVar11[0x11] = (local_a8 - iVar12) - (uint)(local_ac < uVar18);
        piVar11[0x26] = piVar11[0x10];
        piVar11[0x27] = piVar11[0x11];
        iVar12 = *(int *)(local_74 + 0x24) + *(int *)(local_74 + 0x1c) +
                 (uint)CARRY4(*(uint *)(local_74 + 0x20),*(uint *)(local_74 + 0x18));
        if ((iVar12 < (int)uVar20) ||
           ((iVar12 <= (int)uVar20 &&
            (*(uint *)(local_74 + 0x20) + *(uint *)(local_74 + 0x18) < uVar13)))) goto LAB_005ce08b;
        local_b0 = iVar16;
        if (*(int *)(local_74 + 0x78) == 0 && *(int *)(local_74 + 0x7c) == 0) goto LAB_005ce389;
      }
LAB_005ce6d4:
      iVar16 = *param_6 + 1;
      *param_6 = iVar16;
      if (iVar3 <= iVar16) {
        return;
      }
    }
    *param_6 = *param_6 + -1;
  }
  return;
}


