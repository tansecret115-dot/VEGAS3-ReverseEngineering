/* Module: vidpcore.dll
   Function: FUN_5de7e5b0
   Address: 5de7e5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5de7e5b0(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,int param_6)

{
  float fVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  float *pfVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte bVar19;
  float *pfVar20;
  byte bVar21;
  char cVar22;
  int iVar23;
  double *pdVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  uint local_154;
  uint local_150;
  int local_14c;
  int local_148;
  uint local_140;
  undefined1 local_13c [2];
  uint uStack_13a;
  uint local_124;
  double local_120;
  double local_118;
  double local_110;
  byte abStack_100 [256];
  
  if (param_5 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  dVar2 = *(double *)(param_5 + 10);
  fVar25 = (float10)_DAT_5df1fa70;
  if (_DAT_5df26680 < *(double *)(param_5 + 8)) {
    if (*(double *)(param_5 + 8) <= _DAT_5df26670) {
      fVar26 = (float10)*(double *)(param_5 + 8) * (float10)_DAT_5df26678;
      if (param_6 != 4) {
        dVar3 = *(double *)(param_5 + 8);
        fVar29 = (float10)_DAT_5df26680;
        fVar27 = (float10)_DAT_5df26678;
        pdVar24 = &local_120;
        for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
          *(undefined4 *)pdVar24 = *param_5;
          param_5 = param_5 + 1;
          pdVar24 = (double *)((int)pdVar24 + 4);
        }
        if (0 < param_4) {
          pfVar20 = (float *)(param_1 + 4);
          do {
            if (0 < param_3) {
              pfVar16 = pfVar20;
              iVar15 = param_3;
              do {
                fVar1 = pfVar16[1];
                fVar4 = *pfVar16;
                fVar5 = pfVar16[-1];
                iVar15 = iVar15 + -1;
                fVar28 = ((float10)fVar5 + (float10)fVar4 + (float10)fVar1) * (float10)_DAT_5df26680
                ;
                fVar1 = (float)((fVar28 - (float10)fVar1) * fVar26 + (float10)fVar1);
                fVar4 = (float)((fVar28 - (float10)fVar4) * fVar26 + (float10)fVar4);
                fVar5 = (float)((fVar28 - (float10)fVar5) * fVar26 + (float10)fVar5);
                fVar28 = fVar28 * (float10)dVar2 * fVar25 + ((float10)dVar3 - fVar29) * fVar27;
                pfVar16[1] = (float)(((float10)local_110 - (float10)fVar1) * fVar28 + (float10)fVar1
                                    );
                *pfVar16 = (float)(((float10)(float)local_118 - (float10)fVar4) * fVar28 +
                                  (float10)fVar4);
                pfVar16[-1] = (float)(((float10)(float)local_120 - (float10)fVar5) * fVar28 +
                                     (float10)fVar5);
                pfVar16 = pfVar16 + 4;
              } while (iVar15 != 0);
            }
            pfVar20 = (float *)((int)pfVar20 + param_2);
            param_4 = param_4 + -1;
          } while (param_4 != 0);
        }
        return 0;
      }
      bVar10 = ftol();
      ftol();
      bVar11 = ftol();
      bVar12 = ftol();
      bVar13 = ftol();
      iVar15 = 0;
      do {
        bVar14 = ftol();
        abStack_100[iVar15] = bVar14;
        iVar15 = iVar15 + 1;
      } while (iVar15 < 0x100);
      if (0 < param_4) {
        local_14c = param_4;
        pbVar17 = (byte *)(param_1 + 1);
        do {
          if (0 < param_3) {
            local_148 = param_3;
            uVar8 = (uint)bVar10;
            uStack_13a = (uint)bVar11;
            uVar7 = uStack_13a;
            stack0xfffffec5 = (uint)bVar12;
            uVar9 = stack0xfffffec5;
            _local_13c = (uint)bVar13;
            pbVar18 = pbVar17;
            do {
              bVar14 = pbVar18[1];
              bVar19 = *pbVar18;
              bVar21 = pbVar18[-1];
              uVar6 = ((uint)bVar19 + (uint)bVar14 + (uint)bVar21) / 3;
              iVar23 = (int)(short)uVar6;
              iVar15 = (iVar23 - (uint)bVar14) * uVar8;
              bVar14 = bVar14 + (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8);
              iVar15 = (iVar23 - (uint)bVar19) * uVar8;
              bVar19 = bVar19 + (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8);
              iVar15 = (iVar23 - (uint)bVar21) * uVar8;
              bVar21 = bVar21 + (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8);
              local_124 = (uint)abStack_100[uVar6];
              local_154 = (uint)bVar21;
              iVar15 = (uVar7 - bVar14) * local_124;
              pbVar18[1] = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + bVar14;
              iVar15 = (uVar9 - bVar19) * local_124;
              *pbVar18 = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + bVar19;
              iVar15 = (_local_13c - local_154) * local_124;
              pbVar18[-1] = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + bVar21;
              local_148 = local_148 + -1;
              pbVar18 = pbVar18 + 4;
            } while (local_148 != 0);
          }
          pbVar17 = pbVar17 + param_2;
          local_14c = local_14c + -1;
        } while (local_14c != 0);
        return 0;
      }
    }
    else {
      dVar3 = *(double *)(param_5 + 8);
      fVar27 = (float10)_DAT_5df26680;
      fVar26 = (float10)_DAT_5df26678;
      if (param_6 == 4) {
        ftol();
        bVar10 = ftol();
        bVar11 = ftol();
        bVar12 = ftol();
        iVar15 = 0;
        do {
          bVar13 = ftol();
          abStack_100[iVar15] = bVar13;
          iVar15 = iVar15 + 1;
        } while (iVar15 < 0x100);
        if (0 < param_4) {
          local_14c = param_4;
          pbVar17 = (byte *)(param_1 + 1);
          do {
            if (0 < param_3) {
              stack0xfffffec5 = (uint)bVar11;
              uVar8 = stack0xfffffec5;
              uStack_13a = (uint)bVar10;
              uVar9 = uStack_13a;
              _local_13c = (uint)bVar12;
              local_148 = param_3;
              pbVar18 = pbVar17;
              do {
                uVar7 = ((uint)*pbVar18 + (uint)pbVar18[-1] + (uint)pbVar18[1]) / 3;
                local_150 = (uint)abStack_100[uVar7];
                iVar23 = -uVar7;
                iVar15 = (iVar23 + uVar9) * local_150;
                cVar22 = (char)uVar7;
                pbVar18[1] = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + cVar22;
                iVar15 = (uVar8 + iVar23) * local_150;
                *pbVar18 = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + cVar22;
                iVar15 = (iVar23 + _local_13c) * local_150;
                pbVar18[-1] = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + cVar22;
                local_148 = local_148 + -1;
                pbVar18 = pbVar18 + 4;
              } while (local_148 != 0);
            }
            pbVar17 = pbVar17 + param_2;
            local_14c = local_14c + -1;
          } while (local_14c != 0);
          return 0;
        }
      }
      else {
        pdVar24 = &local_120;
        for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
          *(undefined4 *)pdVar24 = *param_5;
          param_5 = param_5 + 1;
          pdVar24 = (double *)((int)pdVar24 + 4);
        }
        if (0 < param_4) {
          pfVar20 = (float *)(param_1 + 4);
          do {
            if (0 < param_3) {
              pfVar16 = pfVar20;
              iVar15 = param_3;
              do {
                iVar15 = iVar15 + -1;
                fVar29 = ((float10)pfVar16[1] + (float10)*pfVar16 + (float10)pfVar16[-1]) *
                         (float10)_DAT_5df26680;
                fVar28 = fVar29 * (float10)dVar2 * fVar25 + ((float10)dVar3 - fVar27) * fVar26;
                pfVar16[1] = (float)(((float10)local_110 - fVar29) * fVar28 + fVar29);
                *pfVar16 = (float)(((float10)local_118 - fVar29) * fVar28 + fVar29);
                pfVar16[-1] = (float)(((float10)local_120 - fVar29) * fVar28 + fVar29);
                pfVar16 = pfVar16 + 4;
              } while (iVar15 != 0);
            }
            pfVar20 = (float *)((int)pfVar20 + param_2);
            param_4 = param_4 + -1;
          } while (param_4 != 0);
        }
      }
    }
  }
  else {
    fVar25 = (float10)*(double *)(param_5 + 8) * (float10)_DAT_5df26678;
    if (param_6 == 4) {
      bVar10 = ftol();
      local_140 = (uint)bVar10;
      if (0 < param_4) {
        local_148 = param_4;
        pbVar17 = (byte *)(param_1 + 1);
        do {
          if (0 < param_3) {
            local_14c = param_3;
            pbVar18 = pbVar17;
            do {
              bVar10 = pbVar18[1];
              bVar11 = *pbVar18;
              bVar12 = pbVar18[-1];
              iVar23 = (int)(short)((ulonglong)
                                    ((longlong)(int)((uint)bVar11 + (uint)bVar10 + (uint)bVar12) *
                                    0x55555556) >> 0x20);
              iVar15 = (iVar23 - (uint)bVar10) * local_140;
              pbVar18[1] = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + bVar10;
              iVar15 = (iVar23 - (uint)bVar11) * local_140;
              *pbVar18 = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + bVar11;
              iVar15 = (iVar23 - (uint)bVar12) * local_140;
              pbVar18[-1] = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + bVar12;
              local_14c = local_14c + -1;
              pbVar18 = pbVar18 + 4;
            } while (local_14c != 0);
          }
          pbVar17 = pbVar17 + param_2;
          local_148 = local_148 + -1;
        } while (local_148 != 0);
        return 0;
      }
    }
    else if (0 < param_4) {
      pfVar20 = (float *)(param_1 + 4);
      do {
        pfVar16 = pfVar20;
        iVar15 = param_3;
        if (0 < param_3) {
          do {
            fVar4 = *pfVar16;
            fVar26 = (float10)pfVar16[1];
            fVar5 = pfVar16[-1];
            iVar15 = iVar15 + -1;
            fVar27 = ((float10)fVar5 + (float10)fVar4 + fVar26) * (float10)_DAT_5df231d8;
            fVar1 = (float)fVar27;
            pfVar16[1] = (float)((fVar27 - fVar26) * fVar25 + fVar26);
            *pfVar16 = (float)(((float10)fVar1 - (float10)fVar4) * fVar25 + (float10)fVar4);
            pfVar16[-1] = (float)(((float10)fVar1 - (float10)fVar5) * fVar25 + (float10)fVar5);
            pfVar16 = pfVar16 + 4;
          } while (iVar15 != 0);
        }
        pfVar20 = (float *)((int)pfVar20 + param_2);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return 0;
    }
  }
  return 0;
}


