/* Module: vegas30k.dll
   Function: _SfDropShadow_Pixel@44
   Address: 010f5000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _SfDropShadow_Pixel_44
              (int param_1,int param_2,undefined4 param_3,LONG *param_4,int param_5,int param_6,
              undefined4 param_7,undefined4 param_8,int *param_9,int *param_10,int *param_11)

{
  float *pfVar1;
  float fVar2;
  double dVar3;
  ushort uVar4;
  float fVar5;
  bool bVar6;
  uint3 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  byte *pbVar22;
  byte bVar23;
  uint uVar24;
  int iVar25;
  undefined1 local_28 [2];
  undefined1 auStack_26 [6];
  tagRECT local_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
                    /* 0xf5000  908  _SfDropShadow_Pixel@44 */
  iVar25 = (int)param_11;
  if ((((param_2 == 0) || (param_6 == 0)) || (param_11 == (int *)0x0)) ||
     ((param_1 == 0 || (param_5 == 0)))) {
    return -0x7fffbffd;
  }
  iVar20 = *(int *)(param_1 + 4);
  iVar21 = *(int *)(param_1 + 8);
  param_11 = (int *)0x0;
  iVar12 = ftol();
  iVar13 = ftol();
  iVar14 = ftol();
  iVar15 = ftol();
  bVar6 = false;
  if (param_9 == (int *)0x0) {
    bVar6 = true;
    iVar16 = _SfDibAlloc_28(&param_11,(-(uint)(param_10 != (int *)0x10) & 0xfffffffd) + 0x20,iVar20,
                            iVar21,0,0,0);
    if (iVar16 < 0) {
      if (param_11 != (int *)0x0) {
        _SfDibFree_8(param_11,0);
      }
      return iVar16;
    }
    if (param_11[4] == 0) {
      if (((param_11[8] == 0) && (uVar4 = *(ushort *)((int)param_11 + 0xe), uVar4 != 0)) &&
         (uVar4 < 9)) {
        param_9 = (int *)(*param_11 + (1 << ((byte)uVar4 & 0x1f)) * 4 + (int)param_11);
        goto LAB_010f5282;
      }
    }
    else if (param_11[4] == 3) {
      param_9 = param_11 + 0xd;
      goto LAB_010f5282;
    }
    param_9 = (int *)(*param_11 + param_11[8] * 4 + (int)param_11);
  }
LAB_010f5282:
  if (param_4 == (LONG *)0x0) {
    local_20.right = iVar20 << 0xe;
    local_20.bottom = iVar21 << 0xe;
    local_20.left = 0;
    local_20.top = 0;
  }
  else {
    local_20.left = *param_4;
    local_20.top = param_4[1];
    local_20.right = param_4[2];
    local_20.bottom = param_4[3];
  }
  iVar16 = ftol();
  iVar17 = ftol();
  OffsetRect(&local_20,iVar17,iVar16);
  _SfDibSet_36(param_11,param_9,0,0,0,0,0,0,3);
  _SfDibCopy_36(param_11,param_9,&local_20,0,param_5,param_6,0,0,0x1000003);
  dVar3 = *(double *)(iVar25 + 0x28);
  uVar18 = (uint)*(ushort *)((int)param_11 + 0xe) * param_11[1] + 0x1f;
  uVar19 = (uint)*(ushort *)(param_1 + 0xe) * *(int *)(param_1 + 4) + 0x1f;
  iVar16 = (int)((uVar19 & 0xffffffe0) + ((int)uVar19 >> 0x1f & 7U)) >> 3;
  iVar17 = (int)((uVar18 & 0xffffffe0) + ((int)uVar18 >> 0x1f & 7U)) >> 3;
  if (_DAT_011db3f0 < dVar3) {
    auStack_26._2_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
    _local_28 = SUB84(dVar3,0);
    local_10 = 0;
    local_c = 0;
    local_8 = iVar20;
    local_4 = iVar21;
    iVar20 = _SfDibGaussianChannelBlur_56
                       (param_9,&local_10,iVar17,0,param_9,&local_10,iVar17,0,_local_28,
                        auStack_26._2_4_,_local_28,auStack_26._2_4_,3,param_10);
    if (iVar20 < 0) {
      _SfDibFree_8(param_11,0);
      return iVar20;
    }
  }
  if (param_10 == (int *)0x10) {
    if (iVar12 < iVar15) {
      param_10 = (int *)(iVar15 - iVar12);
      do {
        iVar20 = iVar12;
        if (iVar12 < iVar13) {
          iVar20 = iVar13;
        }
        iVar21 = iVar20 * 0x10;
        fVar2 = *(float *)(iVar21 + 0xc + param_2) + (float)param_9[iVar20 * 4 + 3];
        pfVar1 = (float *)(iVar21 + 0xc + param_2);
        fVar5 = _DAT_011dd160;
        if ((_DAT_011dd160 <= fVar2) && (fVar5 = fVar2, _DAT_011dad68 < fVar2)) {
          fVar5 = _DAT_011dad68;
        }
        *pfVar1 = fVar5;
        fVar2 = (*(float *)(iVar25 + 0x10) - *(float *)(iVar21 + param_2)) *
                (float)param_9[iVar20 * 4 + 3] + *(float *)(iVar21 + param_2);
        if (fVar2 < fVar5) {
          fVar5 = fVar2;
        }
        *(float *)(iVar21 + param_2) = fVar5;
        fVar2 = *(float *)(iVar21 + 4 + param_2);
        fVar2 = (*(float *)(iVar25 + 0x14) - fVar2) * (float)param_9[iVar20 * 4 + 3] + fVar2;
        if (*pfVar1 <= fVar2) {
          fVar2 = *pfVar1;
        }
        *(float *)(iVar21 + 4 + param_2) = fVar2;
        fVar2 = *(float *)(iVar21 + 8 + param_2);
        fVar2 = (*(float *)(iVar25 + 0x18) - fVar2) * (float)param_9[iVar20 * 4 + 3] + fVar2;
        if (*pfVar1 <= fVar2) {
          fVar2 = *pfVar1;
        }
        param_9 = (int *)((int)param_9 + iVar17);
        *(float *)(iVar21 + 8 + param_2) = fVar2;
        param_2 = param_2 + iVar16;
        param_10 = (int *)((int)param_10 + -1);
      } while (param_10 != (int *)0x0);
    }
  }
  else {
    uVar8 = ftol();
    uVar9 = ftol();
    bVar10 = ftol();
    _local_28 = CONCAT12(bVar10,CONCAT11(uVar9,uVar8));
    uVar7 = _local_28;
    if (iVar14 < iVar15) {
      iVar25 = iVar15 - iVar14;
      param_10 = param_9;
      do {
        param_9 = (int *)iVar25;
        if (iVar12 < iVar13) {
          _local_28 = (uint)uVar7;
          uVar18 = _local_28;
          stack0xffffffd9 = (uint)(ushort)(uVar7 >> 8);
          uVar19 = stack0xffffffd9;
          auStack_26._1_3_ = 0;
          auStack_26[0] = bVar10;
          iVar25 = (int)param_10 - param_2;
          iVar20 = iVar13 - iVar12;
          pbVar22 = (byte *)(param_2 + 3 + iVar12 * 4);
          do {
            uVar24 = (uint)*pbVar22 + (uint)pbVar22[iVar25];
            if ((int)uVar24 < 0) {
              uVar24 = 0;
            }
            else if (0xff < uVar24) {
              uVar24 = 0xff;
            }
            bVar23 = (byte)uVar24;
            *pbVar22 = bVar23;
            iVar21 = ((uVar18 & 0xff) - (uint)pbVar22[-3]) * (uint)pbVar22[iVar25];
            bVar11 = (char)(iVar21 + (iVar21 >> 0x1f & 0xffU) >> 8) + pbVar22[-3];
            if (bVar23 <= bVar11) {
              bVar11 = bVar23;
            }
            pbVar22[-3] = bVar11;
            iVar21 = ((uVar19 & 0xff) - (uint)pbVar22[-2]) * (uint)pbVar22[iVar25];
            bVar11 = (char)(iVar21 + (iVar21 >> 0x1f & 0xffU) >> 8) + pbVar22[-2];
            if (*pbVar22 <= bVar11) {
              bVar11 = *pbVar22;
            }
            pbVar22[-2] = bVar11;
            iVar21 = (auStack_26._0_4_ - (uint)pbVar22[-1]) * (uint)pbVar22[iVar25];
            bVar11 = (char)(iVar21 + (iVar21 >> 0x1f & 0xffU) >> 8) + pbVar22[-1];
            if (*pbVar22 <= bVar11) {
              bVar11 = *pbVar22;
            }
            pbVar22[-1] = bVar11;
            pbVar22 = pbVar22 + 4;
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
        }
        param_10 = (int *)((int)param_10 + iVar17);
        param_2 = param_2 + iVar16;
        iVar25 = (int)param_9 + -1;
      } while ((int)param_9 + -1 != 0);
    }
  }
  if (bVar6) {
    _SfDibFree_8(param_11,0);
  }
  return 0;
}


