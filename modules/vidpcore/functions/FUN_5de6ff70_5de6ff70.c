/* Module: vidpcore.dll
   Function: FUN_5de6ff70
   Address: 5de6ff70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5de6ff70(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5,tagRECT *param_6,int param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,int param_11,undefined4 param_12,int param_13
                ,undefined4 param_14,uint param_15,int param_16,undefined4 param_17,
                undefined4 param_18,int param_19)

{
  byte *pbVar1;
  float fVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int iVar7;
  HGLOBAL pvVar8;
  uchar *pMem;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  float *pfVar15;
  uchar *puVar16;
  int iVar17;
  uchar *puVar18;
  byte *pbVar19;
  uint uVar20;
  tIRISINFO *unaff_EDI;
  int iVar21;
  int iVar22;
  float *pfVar23;
  int local_110;
  float *local_10c;
  float *local_104;
  uchar *local_fc;
  uchar *local_f8;
  float *local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  undefined1 local_e4;
  undefined1 uStack_e3;
  undefined1 uStack_e2;
  byte bStack_e1;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  uint local_cc;
  int local_c8;
  int local_c4;
  byte local_c0;
  undefined3 uStack_bf;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  uchar *local_a4;
  int local_a0;
  char local_9b;
  char local_9a;
  byte local_99;
  undefined3 uStack_98;
  byte local_94;
  undefined3 uStack_93;
  byte local_90;
  undefined3 uStack_8f;
  int local_8c;
  byte local_88;
  undefined3 uStack_87;
  uchar *local_84;
  byte local_80;
  undefined3 uStack_7f;
  float *local_7c;
  byte local_78;
  undefined3 uStack_77;
  byte local_74;
  undefined3 uStack_73;
  byte local_70;
  undefined3 uStack_6f;
  byte local_6c;
  undefined3 uStack_6b;
  byte local_68;
  undefined3 uStack_67;
  byte local_64;
  undefined3 uStack_63;
  byte local_60;
  undefined3 uStack_5f;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  tagRECT local_4c;
  byte local_3c;
  undefined3 uStack_3b;
  byte local_38;
  undefined3 uStack_37;
  byte local_34;
  undefined3 uStack_33;
  tagRECT local_30;
  tagRECT local_20;
  float local_c;
  float local_8;
  
  puVar16 = (uchar *)0x0;
  local_a4 = (uchar *)0x0;
  iVar7 = FUN_5debc1e0(&local_30,&local_ec,&local_e8,&local_8c,&local_a0,param_1,param_2,param_3,
                       param_4,param_5,param_6,param_7,param_8,param_13);
  if (iVar7 < 0) {
    return iVar7;
  }
  iVar7 = FUN_5debc1e0(&local_30,&local_ec,&local_e8,&local_7c,&local_a0,param_1,param_2,param_3,
                       param_4,param_9,param_10,param_11,param_12,param_13);
  if (iVar7 < 0) {
    return iVar7;
  }
  if (local_30.right == local_30.left) {
    return iVar7;
  }
  if (local_30.bottom == local_30.top) {
    return iVar7;
  }
  if (local_ec == 0) {
    return iVar7;
  }
  if (local_e8 == 0) {
    return iVar7;
  }
  local_4c.right = local_ec;
  iVar7 = local_ec * param_13;
  local_4c.left = 0;
  local_4c.top = 0;
  local_4c.bottom = local_e8;
  pvVar8 = GlobalAlloc(0,iVar7 * local_e8);
  pMem = GlobalLock(pvVar8);
  local_84 = pMem;
  if (pMem == (uchar *)0x0) {
    iVar7 = -0x7ff8fff2;
  }
  else {
    local_20.right = local_4c.right;
    local_20.left = local_4c.left;
    local_20.top = local_4c.top;
    local_20.bottom = local_4c.bottom;
    puVar18 = puVar16;
    if (_DAT_5df205cc < *(float *)(param_19 + 0xc)) {
      pvVar8 = GlobalAlloc(0,(local_4c.bottom - local_4c.top) * iVar7);
      puVar16 = GlobalLock(pvVar8);
      puVar18 = puVar16;
      local_a4 = puVar16;
      if (puVar16 == (uchar *)0x0) {
        iVar7 = -0x7ff8fff2;
        goto LAB_5de710cc;
      }
    }
    CreateMaskBorder(param_6,&local_30,pMem,&local_4c,iVar7,puVar18,&local_20,iVar7,param_13,
                     (double)CONCAT44(param_14,param_18),(double)(ulonglong)param_15,param_19,
                     unaff_EDI);
    puVar16 = puVar18;
    if (param_13 == 4) {
      local_d0 = local_a0;
      local_bc = (int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2;
      local_b4 = (int)(param_7 + (param_7 >> 0x1f & 3U)) >> 2;
      local_ac = (int)(param_11 + (param_11 >> 0x1f & 3U)) >> 2;
      local_d8 = (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
      local_f8 = (uchar *)local_8c;
      local_f4 = local_7c;
      uStack_e2 = ftol();
      uStack_e3 = ftol();
      local_e4 = ftol();
      bStack_e1 = ftol();
      local_d4 = 0;
      local_fc = pMem;
      if (0 < local_e8) {
        do {
          local_110 = 0;
          if (param_16 == 0) {
            if (0 < local_ec) {
              local_c8 = (int)local_fc - (int)puVar18;
              local_b0 = (int)local_f8 - (int)puVar18;
              pbVar11 = puVar18 + 3;
              local_c4 = (int)local_f4 - (int)puVar18;
              local_10c = local_f4;
              iVar7 = local_d0 - (int)puVar18;
              pbVar19 = (byte *)(local_d0 + 1);
              local_b8 = (int)local_f8 - local_d0;
              iVar17 = (int)local_f8 - (int)local_f4;
              do {
                uVar20 = local_cc >> 8;
                local_cc = local_cc & 0xffffff00;
                bVar6 = pbVar11[local_c8];
                _local_74 = CONCAT31(uStack_73,bVar6);
                if (_DAT_5df205cc < *(float *)(param_19 + 0xc)) {
                  iVar21 = (0xff - (uint)bVar6) * (uint)*pbVar11;
                  local_cc = CONCAT31((int3)uVar20,
                                      ((char)(iVar21 / 0xff) + (char)(iVar21 >> 0x1f)) -
                                      (char)((longlong)iVar21 * 0x80808081 >> 0x3f));
                }
                if (bVar6 == 0) {
                  fVar14 = *(float *)((int)local_10c + iVar17);
LAB_5de7096e:
                  *(float *)(pbVar19 + -1) = fVar14;
                }
                else {
                  if ((bVar6 == 0xff) || (((char)local_cc != '\0' && (*pbVar11 == 0xff)))) {
                    fVar14 = *local_10c;
                    goto LAB_5de7096e;
                  }
                  uVar20 = (uint)bVar6;
                  bVar6 = *(byte *)(iVar17 + (int)local_10c);
                  _local_64 = CONCAT31(uStack_63,bVar6);
                  iVar21 = ((uint)*(byte *)local_10c - (uint)bVar6) * uVar20;
                  pbVar19[-1] = (char)(iVar21 + (iVar21 >> 0x1f & 0xffU) >> 8) + bVar6;
                  pbVar1 = pbVar19 + ((int)local_f4 - local_d0);
                  bVar6 = pbVar1[iVar17];
                  _local_6c = CONCAT31(uStack_6b,bVar6);
                  iVar21 = ((uint)*pbVar1 - (uint)bVar6) * uVar20;
                  *pbVar19 = (char)(iVar21 + (iVar21 >> 0x1f & 0xffU) >> 8) + bVar6;
                  bVar6 = pbVar19[local_b8 + 1];
                  _local_94 = CONCAT31(uStack_93,bVar6);
                  iVar21 = ((uint)pbVar1[1] - (uint)bVar6) * uVar20;
                  pbVar19[1] = (char)(iVar21 + (iVar21 >> 0x1f & 0xffU) >> 8) + bVar6;
                  bVar6 = pbVar11[local_b0];
                  _local_88 = CONCAT31(uStack_87,bVar6);
                  iVar21 = ((uint)pbVar11[local_c4] - (uint)bVar6) * uVar20;
                  pbVar11[iVar7] = (char)(iVar21 + (iVar21 >> 0x1f & 0xffU) >> 8) + bVar6;
                }
                if ((char)local_cc != '\0') {
                  bVar6 = pbVar19[-1];
                  _local_80 = CONCAT31(uStack_7f,bVar6);
                  uVar20 = local_cc & 0xff;
                  iVar21 = ((CONCAT12(uStack_e2,CONCAT11(uStack_e3,local_e4)) & 0xff) - (uint)bVar6)
                           * uVar20;
                  pbVar19[-1] = (char)(iVar21 + (iVar21 >> 0x1f & 0xffU) >> 8) + bVar6;
                  bVar6 = *pbVar19;
                  _local_70 = CONCAT31(uStack_6f,bVar6);
                  iVar21 = ((CONCAT12(bStack_e1,CONCAT11(uStack_e2,uStack_e3)) & 0xff) - (uint)bVar6
                           ) * uVar20;
                  *pbVar19 = (char)(iVar21 + (iVar21 >> 0x1f & 0xffU) >> 8) + bVar6;
                  bVar6 = pbVar19[1];
                  local_dc = CONCAT31(local_dc._1_3_,bVar6);
                  iVar21 = ((CONCAT11(bStack_e1,uStack_e2) & 0xff) - (uint)bVar6) * uVar20;
                  pbVar19[1] = (char)(iVar21 + (iVar21 >> 0x1f & 0xffU) >> 8) + bVar6;
                  iVar21 = ((uint)bStack_e1 - (uint)pbVar11[iVar7]) * uVar20;
                  pbVar11[iVar7] = (char)(iVar21 + (iVar21 >> 0x1f & 0xffU) >> 8) + pbVar11[iVar7];
                }
                local_10c = local_10c + 1;
                local_110 = local_110 + 1;
                pbVar11 = pbVar11 + 4;
                pbVar19 = pbVar19 + 4;
              } while (local_110 < local_ec);
            }
          }
          else if (0 < local_ec) {
            local_c8 = (int)local_fc - (int)puVar18;
            local_b8 = (int)puVar18 - (int)local_f8;
            local_10c = local_f4;
            iVar7 = (int)local_f4 - (int)local_f8;
            iVar17 = local_d0 - (int)local_f8;
            iVar21 = (int)local_f4 - local_d0;
            pbVar11 = (byte *)(local_d0 + 2);
            pbVar19 = (byte *)((int)local_f8 + 3);
            do {
              local_104 = (float *)0x0;
              pbVar1 = pbVar19 + local_b8;
              bVar6 = pbVar1[local_c8];
              _local_c0 = CONCAT31(uStack_bf,bVar6);
              if (_DAT_5df205cc < *(float *)(param_19 + 0xc)) {
                local_104 = (float *)((int)((0xff - (uint)bVar6) * (uint)*pbVar1) / 0xff & 0xff);
              }
              if (bVar6 == 0) {
                iVar9 = (0xff - (uint)*pbVar19) * (uint)pbVar11[-2] + 0x7f;
                pbVar11[-2] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar19[-3];
                iVar9 = (0xff - (uint)*pbVar19) * (uint)pbVar11[-1] + 0x7f;
                pbVar11[-1] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar19[-2];
                iVar9 = (0xff - (uint)*pbVar19) * (uint)*pbVar11 + 0x7f;
                *pbVar11 = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar19[-1];
                bVar6 = *pbVar19;
LAB_5de70638:
                iVar9 = (0xff - (uint)bVar6) * (uint)pbVar19[iVar17] + 0x7f;
                bVar6 = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + bVar6;
              }
              else {
                if ((bVar6 == 0xff) || (((char)local_104 != '\0' && (*pbVar1 == 0xff)))) {
                  iVar9 = (0xff - (uint)pbVar19[iVar7]) * (uint)pbVar11[-2] + 0x7f;
                  pbVar11[-2] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + *(char *)local_10c;
                  iVar9 = (0xff - (uint)pbVar19[iVar7]) * (uint)pbVar11[-1] + 0x7f;
                  pbVar11[-1] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar11[iVar21 + -1];
                  iVar9 = (0xff - (uint)pbVar19[iVar7]) * (uint)*pbVar11 + 0x7f;
                  *pbVar11 = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar11[iVar21];
                  bVar6 = pbVar19[iVar7];
                  goto LAB_5de70638;
                }
                bVar3 = pbVar19[-3];
                _local_90 = CONCAT31(uStack_8f,bVar3);
                uVar20 = (uint)bVar6;
                iVar9 = ((uint)*(byte *)local_10c - (uint)bVar3) * uVar20;
                bVar6 = pbVar19[-2];
                _local_68 = CONCAT31(uStack_67,bVar6);
                iVar10 = ((uint)pbVar11[iVar21 + -1] - (uint)bVar6) * uVar20;
                local_9b = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + bVar6;
                bVar6 = pbVar19[-1];
                _local_60 = CONCAT31(uStack_5f,bVar6);
                iVar10 = ((uint)pbVar11[iVar21] - (uint)bVar6) * uVar20;
                local_9a = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + bVar6;
                bVar6 = *pbVar19;
                _local_78 = CONCAT31(uStack_77,bVar6);
                iVar10 = ((uint)pbVar19[iVar7] - (uint)bVar6) * uVar20;
                bVar6 = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + bVar6;
                _local_99 = CONCAT31(uStack_98,bVar6);
                iVar22 = 0xff - (uint)bVar6;
                iVar10 = (uint)pbVar11[-2] * iVar22 + 0x7f;
                pbVar11[-2] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) +
                              (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + bVar3;
                iVar9 = (uint)pbVar11[-1] * iVar22 + 0x7f;
                pbVar11[-1] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + local_9b;
                iVar9 = (uint)*pbVar11 * iVar22 + 0x7f;
                *pbVar11 = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + local_9a;
                iVar9 = (uint)pbVar19[iVar17] * iVar22 + 0x7f;
                bVar6 = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + bVar6;
              }
              pbVar19[iVar17] = bVar6;
              if ((char)local_104 != '\0') {
                bVar6 = pbVar11[-2];
                _local_3c = CONCAT31(uStack_3b,bVar6);
                iVar9 = ((CONCAT12(uStack_e2,CONCAT11(uStack_e3,local_e4)) & 0xff) - (uint)bVar6) *
                        (int)local_104;
                pbVar11[-2] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + bVar6;
                bVar6 = pbVar11[-1];
                _local_38 = CONCAT31(uStack_37,bVar6);
                iVar9 = ((CONCAT12(bStack_e1,CONCAT11(uStack_e2,uStack_e3)) & 0xff) - (uint)bVar6) *
                        (int)local_104;
                pbVar11[-1] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + bVar6;
                bVar6 = *pbVar11;
                _local_34 = CONCAT31(uStack_33,bVar6);
                iVar9 = ((CONCAT11(bStack_e1,uStack_e2) & 0xff) - (uint)bVar6) * (int)local_104;
                *pbVar11 = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + bVar6;
                bVar6 = pbVar19[iVar17];
                local_a8 = CONCAT31(local_a8._1_3_,bVar6);
                iVar9 = ((uint)bStack_e1 - (uint)bVar6) * (int)local_104;
                pbVar19[iVar17] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + bVar6;
              }
              local_10c = local_10c + 1;
              local_110 = local_110 + 1;
              pbVar19 = pbVar19 + 4;
              pbVar11 = pbVar11 + 4;
            } while (local_110 < local_ec);
          }
          local_d0 = local_d0 + local_bc * 4;
          local_f8 = (uchar *)((int)local_f8 + local_b4 * 4);
          local_f4 = local_f4 + local_ac;
          puVar18 = puVar18 + local_d8 * 4;
          local_d4 = local_d4 + 1;
          pMem = local_84;
          puVar16 = local_a4;
          local_fc = local_fc + local_d8 * 4;
        } while (local_d4 < local_e8);
      }
    }
    else if (param_13 == 0x10) {
      local_104 = local_7c;
      local_bc = (int)(param_3 + (param_3 >> 0x1f & 0xfU)) >> 4;
      local_c4 = (int)(param_7 + (param_7 >> 0x1f & 0xfU)) >> 4;
      local_d4 = 0;
      local_b0 = (int)(param_11 + (param_11 >> 0x1f & 0xfU)) >> 4;
      local_a8 = (int)(iVar7 + (iVar7 >> 0x1f & 0xfU)) >> 4;
      local_f4 = (float *)local_a0;
      local_5c = *(float *)(param_19 + 0x14);
      local_10c = (float *)local_8c;
      local_58 = *(float *)(param_19 + 0x18);
      local_54 = *(float *)(param_19 + 0x1c);
      local_50 = *(float *)(param_19 + 0x20);
      local_f8 = pMem;
      if (0 < local_e8) {
        do {
          if (param_16 == 0) {
            local_110 = 0;
            if (0 < local_ec) {
              local_ac = (int)local_10c - (int)puVar18;
              local_b4 = (int)local_104 - (int)puVar18;
              pfVar13 = (float *)((int)local_f4 + 4);
              local_dc = (int)local_f4 - (int)puVar18;
              pfVar12 = (float *)(puVar18 + 0xc);
              local_d8 = (int)local_10c - (int)local_f4;
              iVar7 = (int)local_10c - (int)local_104;
              pfVar23 = local_104;
              do {
                fVar14 = *(float *)(((int)local_f8 - (int)puVar18) + (int)pfVar12);
                fVar4 = _DAT_5df205cc;
                if (_DAT_5df205cc < *(float *)(param_19 + 0xc)) {
                  fVar4 = (_DAT_5df205c8 - fVar14) * *pfVar12;
                }
                if (_DAT_5df205cc == fVar14) {
                  pfVar15 = (float *)(iVar7 + (int)pfVar23);
                  pfVar13[-1] = *pfVar15;
                  *pfVar13 = pfVar15[1];
                  pfVar13[1] = pfVar15[2];
                  pfVar13[2] = pfVar15[3];
                }
                else if ((_DAT_5df205c8 == fVar14) ||
                        ((_DAT_5df205cc < fVar4 && (_DAT_5df205c8 <= *pfVar12)))) {
                  pfVar13[-1] = *pfVar23;
                  *pfVar13 = pfVar23[1];
                  pfVar13[1] = pfVar23[2];
                  pfVar13[2] = pfVar23[3];
                }
                else {
                  pfVar15 = (float *)(((int)local_104 - (int)local_f4) + (int)pfVar13);
                  pfVar13[-1] = (*pfVar23 - *(float *)(iVar7 + (int)pfVar23)) * fVar14 +
                                *(float *)(iVar7 + (int)pfVar23);
                  *pfVar13 = (*pfVar15 - *(float *)((int)pfVar15 + iVar7)) * fVar14 +
                             *(float *)((int)pfVar15 + iVar7);
                  fVar2 = *(float *)((int)pfVar13 + local_d8 + 4);
                  pfVar13[1] = (pfVar15[1] - fVar2) * fVar14 + fVar2;
                  *(float *)(local_dc + (int)pfVar12) =
                       (*(float *)(local_b4 + (int)pfVar12) - *(float *)(local_ac + (int)pfVar12)) *
                       fVar14 + *(float *)(local_ac + (int)pfVar12);
                }
                if (_DAT_5df205cc < fVar4) {
                  fVar14 = pfVar13[-1];
                  pfVar13[-1] = fVar4 * (local_5c - fVar14) + fVar14;
                  *pfVar13 = fVar4 * (local_58 - *pfVar13) + *pfVar13;
                  pfVar13[1] = fVar4 * (local_54 - pfVar13[1]) + pfVar13[1];
                  *(float *)(local_dc + (int)pfVar12) =
                       fVar4 * (local_50 - *(float *)(local_dc + (int)pfVar12)) +
                       *(float *)(local_dc + (int)pfVar12);
                }
                local_110 = local_110 + 1;
                pfVar12 = pfVar12 + 4;
                pfVar23 = pfVar23 + 4;
                pfVar13 = pfVar13 + 4;
              } while (local_110 < local_ec);
            }
          }
          else {
            local_f0 = 0;
            if (0 < local_ec) {
              local_d8 = (int)puVar18 - (int)local_10c;
              pfVar13 = (float *)((int)local_10c + 0xc);
              iVar21 = (int)local_104 - (int)local_10c;
              iVar17 = (int)local_f4 - (int)local_10c;
              pfVar12 = (float *)((int)local_f4 + 8);
              iVar7 = (int)local_104 - (int)local_f4;
              pfVar23 = local_104;
              do {
                pfVar15 = (float *)(local_d8 + (int)pfVar13);
                fVar14 = *(float *)((int)pfVar15 + ((int)local_f8 - (int)puVar18));
                fVar4 = _DAT_5df205cc;
                if (_DAT_5df205cc < *(float *)(param_19 + 0xc)) {
                  fVar4 = (_DAT_5df205c8 - fVar14) * *pfVar15;
                }
                if (_DAT_5df205cc == fVar14) {
                  pfVar12[-2] = ((float)_DAT_5df18830 - *pfVar13) * pfVar12[-2] + pfVar13[-3];
                  pfVar12[-1] = ((float)_DAT_5df18830 - *pfVar13) * pfVar12[-1] + pfVar13[-2];
                  *pfVar12 = ((float)_DAT_5df18830 - *pfVar13) * *pfVar12 + pfVar13[-1];
                  fVar14 = ((float)_DAT_5df18830 - *pfVar13) * *(float *)(iVar17 + (int)pfVar13) +
                           *pfVar13;
LAB_5de70dad:
                  *(float *)(iVar17 + (int)pfVar13) = fVar14;
                }
                else {
                  if ((_DAT_5df205c8 == fVar14) ||
                     ((_DAT_5df205cc < fVar4 && (_DAT_5df205c8 <= *pfVar15)))) {
                    pfVar12[-2] = ((float)_DAT_5df18830 - *(float *)(iVar21 + (int)pfVar13)) *
                                  pfVar12[-2] + *pfVar23;
                    pfVar12[-1] = ((float)_DAT_5df18830 - *(float *)(iVar21 + (int)pfVar13)) *
                                  pfVar12[-1] + *(float *)(iVar7 + -4 + (int)pfVar12);
                    *pfVar12 = ((float)_DAT_5df18830 - *(float *)(iVar21 + (int)pfVar13)) * *pfVar12
                               + *(float *)(iVar7 + (int)pfVar12);
                    fVar14 = ((float)_DAT_5df18830 - *(float *)(iVar21 + (int)pfVar13)) *
                             *(float *)(iVar17 + (int)pfVar13) + *(float *)(iVar21 + (int)pfVar13);
                    goto LAB_5de70dad;
                  }
                  local_c = (*(float *)(iVar7 + -4 + (int)pfVar12) - pfVar13[-2]) * fVar14 +
                            pfVar13[-2];
                  local_8 = (*(float *)(iVar7 + (int)pfVar12) - pfVar13[-1]) * fVar14 + pfVar13[-1];
                  fVar5 = (*(float *)(iVar21 + (int)pfVar13) - *pfVar13) * fVar14 + *pfVar13;
                  fVar2 = (float)_DAT_5df18830 - fVar5;
                  pfVar12[-2] = (*pfVar23 - pfVar13[-3]) * fVar14 + pfVar13[-3] +
                                pfVar12[-2] * fVar2;
                  pfVar12[-1] = pfVar12[-1] * fVar2 + local_c;
                  *pfVar12 = *pfVar12 * fVar2 + local_8;
                  *(float *)(iVar17 + (int)pfVar13) =
                       fVar5 + *(float *)(iVar17 + (int)pfVar13) * fVar2;
                }
                if (_DAT_5df205cc < fVar4) {
                  pfVar12[-2] = fVar4 * (local_5c - pfVar12[-2]) + pfVar12[-2];
                  pfVar12[-1] = fVar4 * (local_58 - pfVar12[-1]) + pfVar12[-1];
                  *pfVar12 = fVar4 * (local_54 - *pfVar12) + *pfVar12;
                  *(float *)(iVar17 + (int)pfVar13) =
                       fVar4 * (local_50 - *(float *)(iVar17 + (int)pfVar13)) +
                       *(float *)(iVar17 + (int)pfVar13);
                }
                pfVar23 = pfVar23 + 4;
                local_f0 = local_f0 + 1;
                pfVar13 = pfVar13 + 4;
                pfVar12 = pfVar12 + 4;
              } while (local_f0 < local_ec);
            }
          }
          local_f4 = (float *)((int)local_f4 + local_bc * 0x10);
          local_104 = local_104 + local_b0 * 4;
          local_10c = (float *)((int)local_10c + local_c4 * 0x10);
          puVar18 = puVar18 + local_a8 * 0x10;
          local_d4 = local_d4 + 1;
          pMem = local_84;
          puVar16 = local_a4;
          local_f8 = local_f8 + local_a8 * 0x10;
        } while (local_d4 < local_e8);
      }
    }
    iVar7 = 0;
  }
LAB_5de710cc:
  if (pMem != (uchar *)0x0) {
    pvVar8 = GlobalHandle(pMem);
    GlobalUnlock(pvVar8);
    pvVar8 = GlobalHandle(pMem);
    GlobalFree(pvVar8);
  }
  if (puVar16 != (uchar *)0x0) {
    pvVar8 = GlobalHandle(puVar16);
    GlobalUnlock(pvVar8);
    pvVar8 = GlobalHandle(puVar16);
    GlobalFree(pvVar8);
  }
  return iVar7;
}


