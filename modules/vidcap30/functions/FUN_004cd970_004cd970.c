/* Module: vidcap30.exe
   Function: FUN_004cd970
   Address: 004cd970
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cd970(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  uint3 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  int iVar18;
  uint uVar19;
  byte *pbVar20;
  int iVar21;
  float *pfVar22;
  uint uVar23;
  int iStack0000002c;
  int in_stack_00000034;
  int local_24;
  undefined1 local_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  byte bStack_15;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar6 = param_4;
  uVar7 = ftol();
  uVar8 = ftol();
  iVar9 = ftol();
  if (0 < param_6) {
    pfVar14 = (float *)(param_1 + 8);
    local_24 = param_6;
    do {
      if (in_stack_00000034 == 4) {
        if (0 < param_5) {
          pbVar15 = (byte *)((int)pfVar14 + -6);
          iStack0000002c = param_5;
          uVar13 = uVar7;
          do {
            if (-1 < (int)(uVar13 | uVar8)) {
              uVar16 = (int)(uVar13 + ((int)uVar13 >> 0x1f & 0x3fffU)) >> 0xe;
              uVar10 = (int)(uVar8 + ((int)uVar8 >> 0x1f & 0x3fffU)) >> 0xe;
              uVar23 = uVar13 & 0x80003fff;
              if ((int)uVar23 < 0) {
                uVar23 = (uVar23 - 1 | 0xffffc000) + 1;
              }
              uVar19 = uVar8 & 0x80003fff;
              if ((int)uVar19 < 0) {
                uVar19 = (uVar19 - 1 | 0xffffc000) + 1;
              }
              if (-1 < (int)((param_5 - uVar16) - 1 | (param_6 - uVar10) - 1 | uVar10 | uVar16)) {
                if ((int)((param_5 - uVar16) - 2 | (param_6 - uVar10) - 2) < 0) {
                  if ((int)(uVar10 + 1) < param_6) {
                    pbVar17 = (byte *)(uVar10 * iVar6 + uVar16 * 4 + param_3);
                    pbVar20 = (byte *)((uVar10 + 1) * iVar6 + uVar16 * 4 + param_3);
                    iVar18 = 0x4000 - uVar19;
                    iVar12 = (uint)pbVar17[2] * iVar18 + pbVar20[2] * uVar19;
                    uStack_16 = (undefined1)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
                    iVar12 = (uint)pbVar17[1] * iVar18 + pbVar20[1] * uVar19;
                    uStack_17 = (undefined1)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
                    iVar12 = *pbVar20 * uVar19 + (uint)*pbVar17 * iVar18;
                    local_18 = (undefined1)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
                    iVar12 = (uint)pbVar17[3] * iVar18 + pbVar20[3] * uVar19;
                    bStack_15 = (byte)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
                  }
                  else if ((int)(uVar16 + 1) < param_5) {
                    pbVar17 = (byte *)(uVar10 * iVar6 + uVar16 * 4 + param_3);
                    pbVar20 = (byte *)(uVar10 * iVar6 + (uVar16 + 1) * 4 + param_3);
                    iVar18 = 0x4000 - uVar23;
                    iVar12 = (uint)pbVar17[2] * iVar18 + pbVar20[2] * uVar23;
                    uStack_16 = (undefined1)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
                    iVar12 = (uint)pbVar17[1] * iVar18 + pbVar20[1] * uVar23;
                    uStack_17 = (undefined1)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
                    iVar12 = *pbVar20 * uVar23 + (uint)*pbVar17 * iVar18;
                    local_18 = (undefined1)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
                    iVar12 = (uint)pbVar17[3] * iVar18 + pbVar20[3] * uVar23;
                    bStack_15 = (byte)((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
                  }
                  else {
                    uVar1 = *(undefined4 *)(param_3 + uVar10 * iVar6 + uVar16 * 4);
                    local_18 = (undefined1)uVar1;
                    uStack_17 = (undefined1)((uint)uVar1 >> 8);
                    uStack_16 = (undefined1)((uint)uVar1 >> 0x10);
                    bStack_15 = (byte)((uint)uVar1 >> 0x18);
                  }
                }
                else {
                  pbVar17 = (byte *)(param_3 + uVar10 * iVar6 + uVar16 * 4);
                  iVar12 = (0x4000 - uVar19) * (0x4000 - uVar23);
                  iVar18 = (0x4000 - uVar19) * uVar23;
                  iVar18 = (int)(iVar18 + (iVar18 >> 0x1f & 0x3fffU)) >> 0xe;
                  iVar11 = (0x4000 - uVar23) * uVar19;
                  iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
                  iVar21 = (int)(uVar19 * uVar23 + ((int)(uVar19 * uVar23) >> 0x1f & 0x3fffU)) >>
                           0xe;
                  iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
                  uStack_16 = (undefined1)
                              ((uint)pbVar17[iVar6 + 6] * iVar21 + (uint)pbVar17[iVar6 + 2] * iVar11
                               + (uint)pbVar17[6] * iVar18 + (uint)pbVar17[2] * iVar12 >> 0xe);
                  uStack_17 = (undefined1)
                              ((uint)pbVar17[iVar6 + 5] * iVar21 + (uint)pbVar17[iVar6 + 1] * iVar11
                               + (uint)pbVar17[5] * iVar18 + (uint)pbVar17[1] * iVar12 >> 0xe);
                  local_18 = (undefined1)
                             ((uint)pbVar17[iVar6 + 4] * iVar21 + (uint)pbVar17[iVar6] * iVar11 +
                              (uint)pbVar17[4] * iVar18 + (uint)*pbVar17 * iVar12 >> 0xe);
                  bStack_15 = (byte)((uint)pbVar17[iVar6 + 7] * iVar21 +
                                     (uint)pbVar17[iVar6 + 3] * iVar11 + (uint)pbVar17[7] * iVar18 +
                                     (uint)pbVar17[3] * iVar12 >> 0xe);
                }
                uVar2 = CONCAT12(uStack_16,CONCAT11(uStack_17,local_18));
                if (CONCAT13(bStack_15,uVar2) != 0) {
                  iVar12 = (uVar2 & 0xff) * iVar9;
                  iVar12 = ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe) + (uint)pbVar15[-2];
                  if (iVar12 < 0) {
                    iVar12 = 0;
                  }
                  else if (0xff < iVar12) {
                    iVar12 = 0xff;
                  }
                  pbVar15[-2] = (byte)iVar12;
                  iVar12 = (CONCAT12(bStack_15,CONCAT11(uStack_16,uStack_17)) & 0xff) * iVar9;
                  iVar12 = ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe) + (uint)pbVar15[-1];
                  if (iVar12 < 0) {
                    iVar12 = 0;
                  }
                  else if (0xff < iVar12) {
                    iVar12 = 0xff;
                  }
                  pbVar15[-1] = (byte)iVar12;
                  iVar12 = (CONCAT11(bStack_15,uStack_16) & 0xff) * iVar9;
                  iVar12 = ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe) + (uint)*pbVar15;
                  if (iVar12 < 0) {
                    iVar12 = 0;
                  }
                  else if (0xff < iVar12) {
                    iVar12 = 0xff;
                  }
                  *pbVar15 = (byte)iVar12;
                  iVar12 = ((int)((uint)bStack_15 * iVar9 +
                                 ((int)((uint)bStack_15 * iVar9) >> 0x1f & 0x3fffU)) >> 0xe) +
                           (uint)pbVar15[1];
                  if (iVar12 < 0) {
                    iVar12 = 0;
                  }
                  else if (0xff < iVar12) {
                    iVar12 = 0xff;
                  }
                  pbVar15[1] = (byte)iVar12;
                }
              }
            }
            pbVar15 = pbVar15 + 4;
            uVar13 = uVar13 + 0x4000;
            iStack0000002c = iStack0000002c + -1;
          } while (iStack0000002c != 0);
        }
      }
      else {
        fVar3 = (float)iVar9 * _DAT_00595428;
        iVar12 = param_5;
        pfVar22 = pfVar14;
        param_4 = uVar7;
        if (0 < param_5) {
          do {
            FUN_004cf3e0(&local_10,param_3,param_5,param_6,iVar6,param_4,uVar8);
            fVar4 = local_10 * fVar3 + pfVar22[-2];
            fVar5 = _DAT_00595424;
            if ((_DAT_00595424 <= fVar4) && (fVar5 = fVar4, _DAT_00595420 < fVar4)) {
              fVar5 = _DAT_00595420;
            }
            pfVar22[-2] = fVar5;
            fVar4 = local_c * fVar3 + pfVar22[-1];
            fVar5 = _DAT_00595424;
            if ((_DAT_00595424 <= fVar4) && (fVar5 = fVar4, _DAT_00595420 < fVar4)) {
              fVar5 = _DAT_00595420;
            }
            pfVar22[-1] = fVar5;
            fVar4 = local_8 * fVar3 + *pfVar22;
            fVar5 = _DAT_00595424;
            if ((_DAT_00595424 <= fVar4) && (fVar5 = fVar4, _DAT_00595420 < fVar4)) {
              fVar5 = _DAT_00595420;
            }
            *pfVar22 = fVar5;
            fVar4 = local_4 * fVar3 + pfVar22[1];
            fVar5 = _DAT_00595424;
            if ((_DAT_00595424 <= fVar4) && (fVar5 = fVar4, _DAT_00595420 < fVar4)) {
              fVar5 = _DAT_00595420;
            }
            pfVar22[1] = fVar5;
            iVar12 = iVar12 + -1;
            pfVar22 = pfVar22 + 4;
            param_4 = param_4 + 0x4000;
          } while (iVar12 != 0);
        }
      }
      pfVar14 = (float *)((int)pfVar14 + param_2);
      uVar8 = uVar8 + 0x4000;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  return;
}


