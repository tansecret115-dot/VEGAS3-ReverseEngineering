/* Module: vegas30k.dll
   Function: _SfDibCopyBiCubic@36
   Address: 0109f5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _SfDibCopyBiCubic_36
              (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,int param_9)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  uint uVar20;
  float *pfVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int *local_114;
  int local_110;
  int local_10c;
  int *local_108;
  int local_100;
  int local_fc;
  uint local_f8;
  int local_f4;
  uint local_f0;
  int local_ec;
  int local_d8;
  int local_d4 [4];
  int local_c4 [4];
  int local_b4 [2];
  int local_ac;
  uint local_a8;
  int local_a4 [2];
  int local_9c [2];
  int local_94;
  float afStack_90 [4];
  float afStack_80 [4];
  float afStack_70 [4];
  float afStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  int aiStack_30 [4];
  int aiStack_20 [7];
  int local_4;
  
                    /* 0x9f5e0  840  _SfDibCopyBiCubic@36 */
  iVar10 = _SfDibPrepareSet_32(&local_fc,local_9c,&local_94,param_5,param_6,param_7,param_8,param_9)
  ;
  if ((-1 < iVar10) &&
     (iVar10 = _SfDibPrepareSet_32(&local_d8,local_a4,local_b4,param_1,param_2,param_3,param_4,
                                   param_9), -1 < iVar10)) {
    FUN_010a0280();
    iVar10 = (local_fc << 0xe) / local_d8;
    local_a8 = 0x2000;
    local_ac = 0;
    if (0 < local_a4[0]) {
      do {
        local_f0 = 0x2000;
        iVar11 = (int)(local_a8 + ((int)local_a8 >> 0x1f & 0x3fffU)) >> 0xe;
        uVar24 = local_a8 & 0x80003fff;
        if ((int)uVar24 < 0) {
          uVar24 = (uVar24 - 1 | 0xffffc000) + 1;
        }
        local_114 = (int *)0x0;
        iVar12 = iVar11;
        if (local_9c[0] <= iVar11) {
          iVar12 = local_9c[0] + -1;
          local_114 = (int *)((iVar11 - local_9c[0]) + 1);
        }
        if (iVar12 + -2 + (int)local_114 < 0) {
          if (iVar12 + -1 + (int)local_114 < 0) {
            iVar11 = -(int)local_114;
          }
          else {
            iVar11 = (int)local_114 + -1;
          }
        }
        else {
          iVar11 = (int)local_114 + -2;
        }
        if (iVar12 + -1 + (int)local_114 < 0) {
          iVar22 = -(int)local_114;
        }
        else {
          iVar22 = (int)local_114 + -1;
        }
        if (iVar12 - (int)local_114 < local_9c[0]) {
          iVar17 = 0;
        }
        else {
          iVar17 = -(int)local_114;
        }
        if ((iVar12 - (int)local_114) + 1 < local_9c[0]) {
          local_4 = 1 - (int)local_114;
        }
        else {
          local_4 = -(int)local_114;
        }
        iVar12 = iVar12 * param_7 + local_94;
        iVar17 = iVar17 * param_7 + iVar12;
        iVar11 = iVar11 * param_7 + iVar12;
        iVar22 = iVar22 * param_7 + iVar12;
        iVar12 = local_4 * param_7 + iVar12;
        local_f8 = 0;
        if (param_9 == 4) {
          local_f4 = 0;
          local_110 = -100;
          if (0 < local_d8) {
            do {
              iVar13 = (int)(local_f0 + ((int)local_f0 >> 0x1f & 0x3fffU)) >> 0xe;
              uVar20 = local_f0 & 0x80003fff;
              if ((int)uVar20 < 0) {
                uVar20 = (uVar20 - 1 | 0xffffc000) + 1;
              }
              local_110 = iVar13 - local_110;
              if (local_110 < 4) {
                local_100 = 4 - local_110;
                if (local_110 != 0) goto LAB_0109f925;
              }
              else {
                local_f8 = 0;
                local_110 = 0;
                local_100 = 0;
LAB_0109f925:
                if (0 < local_110) {
                  local_114 = local_c4 + local_100;
                  uVar26 = local_f8;
                  local_100 = local_110;
                  do {
                    uVar25 = uVar26 & 3;
                    iVar18 = *local_114;
                    iVar16 = (uint)*(byte *)(iVar18 + iVar17) * (&DAT_0124e8f8)[uVar24 * 4] +
                             (uint)*(byte *)(iVar18 + iVar22) * (&DAT_0124e8f4)[uVar24 * 4] +
                             (uint)*(byte *)(iVar18 + iVar11) * (&DAT_0124e8f0)[uVar24 * 4] + 0x2000
                             + (uint)*(byte *)(iVar18 + iVar12) * (&DAT_0124e8fc)[uVar24 * 4];
                    aiStack_50[uVar25] = (int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe;
                    iVar16 = (uint)*(byte *)(iVar18 + 1 + iVar11) * (&DAT_0124e8f0)[uVar24 * 4] +
                             (uint)*(byte *)(iVar18 + 1 + iVar17) * (&DAT_0124e8f8)[uVar24 * 4] +
                             (uint)*(byte *)(iVar18 + 1 + iVar12) * (&DAT_0124e8fc)[uVar24 * 4] +
                             0x2000 + (uint)*(byte *)(iVar18 + 1 + iVar22) *
                                      (&DAT_0124e8f4)[uVar24 * 4];
                    aiStack_40[uVar25] = (int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe;
                    iVar16 = (uint)*(byte *)(iVar18 + 2 + iVar11) * (&DAT_0124e8f0)[uVar24 * 4] +
                             (uint)*(byte *)(iVar18 + 2 + iVar17) * (&DAT_0124e8f8)[uVar24 * 4] +
                             (uint)*(byte *)(iVar18 + 2 + iVar12) * (&DAT_0124e8fc)[uVar24 * 4] +
                             0x2000 + (uint)*(byte *)(iVar18 + 2 + iVar22) *
                                      (&DAT_0124e8f4)[uVar24 * 4];
                    aiStack_30[uVar25] = (int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe;
                    iVar16 = (uint)*(byte *)(iVar18 + 3 + iVar11) * (&DAT_0124e8f0)[uVar24 * 4] +
                             (uint)*(byte *)(iVar18 + 3 + iVar17) * (&DAT_0124e8f8)[uVar24 * 4] +
                             (uint)*(byte *)(iVar18 + 3 + iVar12) * (&DAT_0124e8fc)[uVar24 * 4] +
                             0x2000 + (uint)*(byte *)(iVar18 + 3 + iVar22) *
                                      (&DAT_0124e8f4)[uVar24 * 4];
                    aiStack_20[uVar25] = (int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe;
                    local_114 = local_114 + 1;
                    uVar26 = uVar26 + 1;
                    local_100 = local_100 + -1;
                  } while (local_100 != 0);
                }
              }
              iVar18 = (&DAT_0124e8fc)[uVar20 * 4];
              iVar2 = (&DAT_0124e8f8)[uVar20 * 4];
              iVar3 = (&DAT_0124e8f4)[uVar20 * 4];
              iVar4 = (&DAT_0124e8f0)[uVar20 * 4];
              local_f8 = local_f8 + local_110;
              uVar27 = local_f8 - 2 & 3;
              uVar25 = local_f8 + 1 & 3;
              uVar20 = local_f8 & 3;
              uVar26 = local_f8 - 1 & 3;
              iVar16 = aiStack_50[uVar25] * iVar3 + aiStack_50[uVar27] * iVar2 +
                       aiStack_50[uVar26] * iVar18 + 0x2000 + aiStack_50[uVar20] * iVar4;
              iVar14 = (int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe;
              iVar16 = aiStack_40[uVar25] * iVar3 + aiStack_40[uVar27] * iVar2 +
                       aiStack_40[uVar26] * iVar18 + 0x2000 + aiStack_40[uVar20] * iVar4;
              iVar15 = (int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe;
              iVar16 = aiStack_30[uVar25] * iVar3 + aiStack_30[uVar27] * iVar2 +
                       aiStack_30[uVar26] * iVar18 + 0x2000 + aiStack_30[uVar20] * iVar4;
              iVar23 = (int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe;
              iVar16 = aiStack_20[uVar25] * iVar3 + aiStack_20[uVar27] * iVar2 +
                       aiStack_20[uVar26] * iVar18 + 0x2000 + aiStack_20[uVar20] * iVar4;
              iVar16 = (int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe;
              puVar1 = (undefined1 *)(local_b4[0] + local_f4 * 4);
              if (iVar14 < 0) {
                iVar14 = 0;
              }
              else if (0xff < iVar14) {
                iVar14 = 0xff;
              }
              *puVar1 = (char)iVar14;
              if (iVar15 < 0) {
                iVar15 = 0;
              }
              else if (0xff < iVar15) {
                iVar15 = 0xff;
              }
              puVar1[1] = (char)iVar15;
              if (iVar23 < 0) {
                iVar18 = 0;
              }
              else {
                iVar18 = 0xff;
                if (iVar23 < 0x100) {
                  iVar18 = iVar23;
                }
              }
              puVar1[2] = (char)iVar18;
              if (iVar16 < 0) {
                iVar16 = 0;
              }
              else if (0xff < iVar16) {
                iVar16 = 0xff;
              }
              puVar1[3] = (char)iVar16;
              local_f0 = local_f0 + iVar10;
              local_f4 = local_f4 + 1;
              local_110 = iVar13;
            } while (local_f4 < local_d8);
          }
        }
        else {
          local_ec = 0;
          if (0 < local_d8) {
            local_100 = 0;
            local_10c = -100;
            do {
              iVar13 = (int)(local_f0 + ((int)local_f0 >> 0x1f & 0x3fffU)) >> 0xe;
              uVar20 = local_f0 & 0x80003fff;
              if ((int)uVar20 < 0) {
                uVar20 = (uVar20 - 1 | 0xffffc000) + 1;
              }
              local_10c = iVar13 - local_10c;
              pfVar21 = (float *)(&DAT_0120e8f0 + uVar20 * 4);
              if (local_10c < 4) {
                local_f4 = 4 - local_10c;
              }
              else {
                local_10c = 4;
                local_f8 = 0;
                local_f4 = 0;
              }
              if (0 < local_10c) {
                local_108 = local_d4 + local_f4;
                local_114 = (int *)local_f8;
                local_f4 = local_10c;
                do {
                  iVar16 = *local_108;
                  uVar26 = (uint)local_114 & 3;
                  afStack_90[uVar26] =
                       (float)(&DAT_0120e8f0)[uVar24 * 4] * *(float *)(iVar16 + iVar11) +
                       (float)(&DAT_0120e8f8)[uVar24 * 4] * *(float *)(iVar16 + iVar17) +
                       (float)(&DAT_0120e8f4)[uVar24 * 4] * *(float *)(iVar16 + iVar22) +
                       *(float *)(iVar16 + iVar12) * (float)(&DAT_0120e8fc)[uVar24 * 4];
                  afStack_80[uVar26] =
                       *(float *)(iVar16 + 4 + iVar11) * (float)(&DAT_0120e8f0)[uVar24 * 4] +
                       *(float *)(iVar16 + 4 + iVar22) * (float)(&DAT_0120e8f4)[uVar24 * 4] +
                       *(float *)(iVar16 + 4 + iVar17) * (float)(&DAT_0120e8f8)[uVar24 * 4] +
                       *(float *)(iVar16 + 4 + iVar12) * (float)(&DAT_0120e8fc)[uVar24 * 4];
                  afStack_70[uVar26] =
                       *(float *)(iVar16 + 8 + iVar11) * (float)(&DAT_0120e8f0)[uVar24 * 4] +
                       *(float *)(iVar16 + 8 + iVar22) * (float)(&DAT_0120e8f4)[uVar24 * 4] +
                       *(float *)(iVar16 + 8 + iVar17) * (float)(&DAT_0120e8f8)[uVar24 * 4] +
                       *(float *)(iVar16 + 8 + iVar12) * (float)(&DAT_0120e8fc)[uVar24 * 4];
                  local_108 = local_108 + 1;
                  local_114 = (int *)((int)local_114 + 1);
                  local_f4 = local_f4 + -1;
                  afStack_60[uVar26] =
                       *(float *)(iVar16 + 0xc + iVar11) * (float)(&DAT_0120e8f0)[uVar24 * 4] +
                       *(float *)(iVar16 + 0xc + iVar22) * (float)(&DAT_0120e8f4)[uVar24 * 4] +
                       *(float *)(iVar16 + 0xc + iVar17) * (float)(&DAT_0120e8f8)[uVar24 * 4] +
                       *(float *)(iVar16 + 0xc + iVar12) * (float)(&DAT_0120e8fc)[uVar24 * 4];
                } while (local_f4 != 0);
              }
              local_f8 = local_f8 + local_10c;
              uVar26 = local_f8 - 1 & 3;
              uVar25 = local_f8 - 2 & 3;
              uVar27 = local_f8 + 1 & 3;
              uVar28 = local_f8 & 3;
              fVar8 = afStack_90[uVar25] * (float)(&DAT_0120e8f8)[uVar20 * 4] +
                      afStack_90[uVar27] * (float)(&DAT_0120e8f4)[uVar20 * 4] +
                      afStack_90[uVar26] * (float)(&DAT_0120e8fc)[uVar20 * 4] +
                      afStack_90[uVar28] * *pfVar21;
              fVar5 = afStack_80[uVar25] * (float)(&DAT_0120e8f8)[uVar20 * 4] +
                      afStack_80[uVar27] * (float)(&DAT_0120e8f4)[uVar20 * 4] +
                      afStack_80[uVar26] * (float)(&DAT_0120e8fc)[uVar20 * 4] +
                      afStack_80[uVar28] * *pfVar21;
              fVar6 = afStack_70[uVar25] * (float)(&DAT_0120e8f8)[uVar20 * 4] +
                      afStack_70[uVar27] * (float)(&DAT_0120e8f4)[uVar20 * 4] +
                      afStack_70[uVar26] * (float)(&DAT_0120e8fc)[uVar20 * 4] +
                      afStack_70[uVar28] * *pfVar21;
              pfVar19 = (float *)(local_b4[0] + local_100);
              fVar7 = afStack_60[uVar25] * (float)(&DAT_0120e8f8)[uVar20 * 4] +
                      afStack_60[uVar27] * (float)(&DAT_0120e8f4)[uVar20 * 4] +
                      afStack_60[uVar26] * (float)(&DAT_0120e8fc)[uVar20 * 4] +
                      afStack_60[uVar28] * *pfVar21;
              fVar9 = _DAT_011dd160;
              if ((_DAT_011dd160 <= fVar8) && (fVar9 = fVar8, _DAT_011dad68 < fVar8)) {
                fVar9 = _DAT_011dad68;
              }
              *pfVar19 = fVar9;
              fVar8 = _DAT_011dd160;
              if ((_DAT_011dd160 <= fVar5) && (fVar8 = fVar5, _DAT_011dad68 < fVar5)) {
                fVar8 = _DAT_011dad68;
              }
              pfVar19[1] = fVar8;
              fVar5 = _DAT_011dd160;
              if ((_DAT_011dd160 <= fVar6) && (fVar5 = fVar6, _DAT_011dad68 < fVar6)) {
                fVar5 = _DAT_011dad68;
              }
              pfVar19[2] = fVar5;
              fVar5 = _DAT_011dd160;
              if ((_DAT_011dd160 <= fVar7) && (fVar5 = fVar7, _DAT_011dad68 < fVar7)) {
                fVar5 = _DAT_011dad68;
              }
              pfVar19[3] = fVar5;
              local_f0 = local_f0 + iVar10;
              local_ec = local_ec + 1;
              local_100 = local_100 + 0x10;
              local_10c = iVar13;
            } while (local_ec < local_d8);
          }
        }
        local_b4[0] = local_b4[0] + param_3;
        local_a8 = local_a8 + (local_9c[0] << 0xe) / local_a4[0];
        local_ac = local_ac + 1;
      } while (local_ac < local_a4[0]);
    }
    iVar10 = 0;
  }
  return iVar10;
}


