/* Module: vidcap30.exe
   Function: _SfDib3x3Convolution@44
   Address: 004caad0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _SfDib3x3Convolution_44
              (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
              int param_6,int param_7,undefined4 param_8,int param_9,int *param_10,int param_11)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  uint uVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  int iVar26;
  float *pfVar27;
  float *pfVar28;
  float *local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined1 *local_34;
  float local_24 [4];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0xcaad0  290  _SfDib3x3Convolution@44 */
  iVar26 = param_7;
  iVar17 = _SfDibPrepareCopy_52
                     (&param_5,&local_38,&local_44,&local_40,param_1,param_2,param_3,param_4,param_5
                      ,param_6,param_7,param_8,param_9);
  if (-1 < iVar17) {
    local_3c = 0;
    if (0 < local_38) {
      do {
        if (param_9 == 4) {
          pfVar24 = (float *)((int)local_44 - iVar26);
          if (local_3c == 0) {
            pfVar24 = local_44;
          }
          pfVar25 = (float *)((int)local_44 + iVar26);
          if (local_38 + -1 == local_3c) {
            pfVar25 = local_44;
          }
          param_6 = 0;
          if (0 < param_5) {
            iVar17 = param_10[8];
            iVar4 = param_10[6];
            iVar5 = param_10[2];
            iVar6 = param_10[5];
            iVar7 = param_10[3];
            iVar8 = param_10[7];
            iVar9 = param_10[1];
            iVar10 = param_10[4];
            iVar11 = *param_10;
            local_34 = (undefined1 *)(local_40 + 2);
            pfVar23 = local_44;
            do {
              iVar26 = -1;
              if (param_6 == 0) {
                iVar26 = 0;
              }
              uVar22 = (uint)(param_5 + -1 != param_6);
              iVar18 = (int)((uint)*(byte *)pfVar23 * iVar10 +
                             (uint)*(byte *)(pfVar23 + iVar26) * iVar7 +
                             (uint)*(byte *)(pfVar25 + uVar22) * iVar17 +
                             (uint)*(byte *)(pfVar23 + uVar22) * iVar6 +
                             (uint)*(byte *)(pfVar24 + uVar22) * iVar5 +
                             (uint)*(byte *)pfVar25 * iVar8 + (uint)*(byte *)pfVar24 * iVar9 +
                             (uint)*(byte *)(pfVar24 + iVar26) * iVar11 +
                            (uint)*(byte *)(pfVar25 + iVar26) * iVar4) / param_11;
              iVar19 = (int)((uint)*(byte *)((int)pfVar24 + 1) * iVar9 +
                             (uint)*(byte *)((int)pfVar25 + 1) * iVar8 +
                             (uint)*(byte *)((int)pfVar23 + 1) * iVar10 +
                             (uint)*(byte *)((int)pfVar24 + iVar26 * 4 + 1) * iVar11 +
                             (uint)*(byte *)((int)pfVar23 + iVar26 * 4 + 1) * iVar7 +
                             (uint)*(byte *)((int)pfVar23 + uVar22 * 4 + 1) * iVar6 +
                             (uint)*(byte *)((int)pfVar24 + uVar22 * 4 + 1) * iVar5 +
                             (uint)*(byte *)((int)pfVar25 + iVar26 * 4 + 1) * iVar4 +
                            (uint)*(byte *)((int)pfVar25 + uVar22 * 4 + 1) * iVar17) / param_11;
              iVar20 = (int)((uint)*(byte *)((int)pfVar24 + 2) * iVar9 +
                             (uint)*(byte *)((int)pfVar25 + 2) * iVar8 +
                             (uint)*(byte *)((int)pfVar24 + iVar26 * 4 + 2) * iVar11 +
                             (uint)*(byte *)((int)pfVar23 + iVar26 * 4 + 2) * iVar7 +
                             (uint)*(byte *)((int)pfVar23 + uVar22 * 4 + 2) * iVar6 +
                             (uint)*(byte *)((int)pfVar24 + uVar22 * 4 + 2) * iVar5 +
                             (uint)*(byte *)((int)pfVar25 + iVar26 * 4 + 2) * iVar4 +
                             (uint)*(byte *)((int)pfVar25 + uVar22 * 4 + 2) * iVar17 +
                            (uint)*(byte *)((int)pfVar23 + 2) * iVar10) / param_11;
              pbVar1 = (byte *)((int)pfVar23 + 3);
              pbVar2 = (byte *)((int)pfVar23 + iVar26 * 4 + 3);
              pbVar3 = (byte *)((int)pfVar23 + uVar22 * 4 + 3);
              pfVar23 = pfVar23 + 1;
              iVar26 = (int)((uint)*(byte *)((int)pfVar24 + 3) * iVar9 +
                             (uint)*(byte *)((int)pfVar25 + 3) * iVar8 + (uint)*pbVar1 * iVar10 +
                             (uint)*(byte *)((int)pfVar24 + iVar26 * 4 + 3) * iVar11 +
                             (uint)*pbVar2 * iVar7 + (uint)*pbVar3 * iVar6 +
                             (uint)*(byte *)((int)pfVar24 + uVar22 * 4 + 3) * iVar5 +
                             (uint)*(byte *)((int)pfVar25 + iVar26 * 4 + 3) * iVar4 +
                            (uint)*(byte *)((int)pfVar25 + uVar22 * 4 + 3) * iVar17) / param_11;
              if (iVar18 < 0) {
                iVar18 = 0;
              }
              else if (0xff < iVar18) {
                iVar18 = 0xff;
              }
              local_34[-2] = (char)iVar18;
              if (iVar19 < 0) {
                iVar19 = 0;
              }
              else if (0xff < iVar19) {
                iVar19 = 0xff;
              }
              local_34[-1] = (char)iVar19;
              if (iVar20 < 0) {
                iVar20 = 0;
              }
              else if (0xff < iVar20) {
                iVar20 = 0xff;
              }
              *local_34 = (char)iVar20;
              if (iVar26 < 0) {
                iVar26 = 0;
              }
              else if (0xff < iVar26) {
                iVar26 = 0xff;
              }
              local_34[1] = (char)iVar26;
              local_34 = local_34 + 4;
              param_6 = param_6 + 1;
              iVar26 = param_7;
              pfVar25 = pfVar25 + 1;
              pfVar24 = pfVar24 + 1;
            } while (param_6 < param_5);
          }
        }
        else {
          fVar12 = (float)param_11;
          iVar17 = 3;
          piVar21 = param_10 + 2;
          pfVar24 = local_24 + 1;
          do {
            iVar17 = iVar17 + -1;
            pfVar24[-1] = (float)piVar21[-2] / fVar12;
            *pfVar24 = (float)piVar21[-1] / fVar12;
            *(float *)(&stack0xffffffd0 + -(int)param_10 + (int)(piVar21 + 3)) =
                 (float)*piVar21 / fVar12;
            piVar21 = piVar21 + 3;
            pfVar24 = pfVar24 + 3;
          } while (iVar17 != 0);
          pfVar24 = (float *)((int)local_44 - iVar26);
          if (local_3c == 0) {
            pfVar24 = local_44;
          }
          pfVar25 = (float *)((int)local_44 + iVar26);
          if (local_38 + -1 == local_3c) {
            pfVar25 = local_44;
          }
          param_6 = 0;
          if (0 < param_5) {
            pfVar23 = (float *)(local_40 + 8);
            pfVar27 = local_44;
            do {
              iVar26 = -1;
              if (param_6 == 0) {
                iVar26 = 0;
              }
              uVar22 = (uint)(param_5 + -1 != param_6);
              fVar15 = local_4 * pfVar25[uVar22 * 4] +
                       local_c * pfVar25[iVar26 * 4] +
                       local_14 * *pfVar27 +
                       local_24[1] * *pfVar24 +
                       local_24[2] * pfVar24[uVar22 * 4] +
                       local_10 * pfVar27[uVar22 * 4] +
                       local_8 * *pfVar25 +
                       local_24[0] * pfVar24[iVar26 * 4] + local_24[3] * pfVar27[iVar26 * 4];
              fVar12 = local_10 * pfVar27[uVar22 * 4 + 1] +
                       local_24[3] * pfVar27[iVar26 * 4 + 1] +
                       local_4 * pfVar25[uVar22 * 4 + 1] +
                       local_c * pfVar25[iVar26 * 4 + 1] +
                       local_24[2] * pfVar24[uVar22 * 4 + 1] +
                       local_24[0] * pfVar24[iVar26 * 4 + 1] +
                       local_14 * pfVar27[1] + local_24[1] * pfVar24[1] + local_8 * pfVar25[1];
              pfVar28 = pfVar27 + 4;
              fVar13 = local_14 * pfVar27[2] +
                       local_10 * pfVar27[uVar22 * 4 + 2] +
                       local_24[3] * pfVar27[iVar26 * 4 + 2] +
                       local_4 * pfVar25[uVar22 * 4 + 2] +
                       local_c * pfVar25[iVar26 * 4 + 2] +
                       local_24[2] * pfVar24[uVar22 * 4 + 2] +
                       local_24[0] * pfVar24[iVar26 * 4 + 2] +
                       local_24[1] * pfVar24[2] + local_8 * pfVar25[2];
              fVar14 = local_10 * pfVar28[uVar22 * 4 + -1] +
                       local_24[3] * pfVar28[iVar26 * 4 + -1] +
                       local_4 * pfVar25[uVar22 * 4 + 3] +
                       local_c * pfVar25[iVar26 * 4 + 3] +
                       local_24[2] * pfVar24[uVar22 * 4 + 3] +
                       local_24[0] * pfVar24[iVar26 * 4 + 3] +
                       local_14 * pfVar27[3] + local_24[1] * pfVar24[3] + local_8 * pfVar25[3];
              fVar16 = _DAT_00595424;
              if ((_DAT_00595424 <= fVar15) && (fVar16 = fVar15, _DAT_00595420 < fVar15)) {
                fVar16 = _DAT_00595420;
              }
              pfVar23[-2] = fVar16;
              fVar15 = _DAT_00595424;
              if ((_DAT_00595424 <= fVar12) && (fVar15 = fVar12, _DAT_00595420 < fVar12)) {
                fVar15 = _DAT_00595420;
              }
              pfVar23[-1] = fVar15;
              fVar12 = _DAT_00595424;
              if ((_DAT_00595424 <= fVar13) && (fVar12 = fVar13, _DAT_00595420 < fVar13)) {
                fVar12 = _DAT_00595420;
              }
              *pfVar23 = fVar12;
              fVar12 = _DAT_00595424;
              if ((_DAT_00595424 <= fVar14) && (fVar12 = fVar14, _DAT_00595420 < fVar14)) {
                fVar12 = _DAT_00595420;
              }
              pfVar23[1] = fVar12;
              pfVar23 = pfVar23 + 4;
              param_6 = param_6 + 1;
              pfVar24 = pfVar24 + 4;
              iVar26 = param_7;
              pfVar25 = pfVar25 + 4;
              pfVar27 = pfVar28;
            } while (param_6 < param_5);
          }
        }
        local_44 = (float *)((int)local_44 + iVar26);
        local_40 = local_40 + param_3;
        local_3c = local_3c + 1;
      } while (local_3c < local_38);
    }
    iVar17 = 0;
  }
  return iVar17;
}


