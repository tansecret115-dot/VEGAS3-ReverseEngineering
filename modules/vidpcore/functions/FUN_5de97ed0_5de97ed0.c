/* Module: vidpcore.dll
   Function: FUN_5de97ed0
   Address: 5de97ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5de97ed0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5,tagRECT *param_6,int param_7,undefined4 param_8,int param_9,
                undefined4 param_10,undefined4 param_11,int param_12,undefined4 param_13,
                undefined4 param_14,int param_15,int param_16)

{
  byte *pbVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int iVar7;
  HGLOBAL pvVar8;
  uchar *pMem;
  byte *pbVar9;
  float *pfVar10;
  float *pfVar11;
  char cVar12;
  tIRISINFO *unaff_EBX;
  uchar *pMem_00;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uchar *puVar17;
  float local_d8;
  uchar *local_d4;
  float *local_d0;
  uchar *local_cc;
  int local_c8;
  uchar *local_c4;
  float *local_c0;
  int local_bc;
  uint local_b8;
  undefined1 local_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  byte bStack_b1;
  int local_ac;
  int local_a8;
  int local_a4;
  uchar *local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  char local_8b;
  char local_8a;
  byte local_89;
  undefined3 uStack_88;
  uchar *local_84;
  float *local_80;
  int local_7c;
  byte local_78;
  undefined3 uStack_77;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  byte local_64;
  undefined3 uStack_63;
  tagRECT local_60;
  byte local_50;
  undefined3 uStack_4f;
  byte local_4c;
  undefined3 uStack_4b;
  byte local_48;
  undefined3 uStack_47;
  byte local_44;
  undefined3 uStack_43;
  int local_40;
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
  
  pMem_00 = (uchar *)0x0;
  local_a0 = (uchar *)0x0;
  iVar7 = FUN_5debc1e0(&local_30,&local_c8,&local_ac,&local_80,&local_7c,param_1,param_2,param_3,
                       param_4,param_5,param_6,param_7,param_8,param_9);
  if (iVar7 < 0) {
    return iVar7;
  }
  if (local_30.right == local_30.left) {
    return iVar7;
  }
  if (local_30.bottom == local_30.top) {
    return iVar7;
  }
  if (local_c8 == 0) {
    return iVar7;
  }
  if (local_ac == 0) {
    return iVar7;
  }
  local_60.right = local_c8;
  iVar7 = local_c8 * param_9;
  local_60.left = 0;
  local_60.top = 0;
  local_60.bottom = local_ac;
  pvVar8 = GlobalAlloc(0,iVar7 * local_ac);
  pMem = GlobalLock(pvVar8);
  local_84 = pMem;
  if (pMem == (uchar *)0x0) {
    iVar7 = -0x7ff8fff2;
  }
  else {
    local_20.right = local_60.right;
    local_20.left = local_60.left;
    local_20.top = local_60.top;
    local_20.bottom = local_60.bottom;
    if (_DAT_5df205cc < *(float *)(param_16 + 0xc)) {
      pvVar8 = GlobalAlloc(0,(local_60.bottom - local_60.top) * iVar7);
      pMem_00 = GlobalLock(pvVar8);
      local_a0 = pMem_00;
      if (pMem_00 == (uchar *)0x0) {
        iVar7 = -0x7ff8fff2;
        goto LAB_5de98cdc;
      }
    }
    CreateMaskBorder(param_6,&local_30,pMem,&local_60,iVar7,pMem_00,&local_20,iVar7,param_9,
                     (double)CONCAT44(param_10,param_14),(double)CONCAT44(1,param_11),param_16,
                     unaff_EBX);
    if (param_9 == 4) {
      local_cc = (uchar *)local_7c;
      local_90 = (int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2;
      local_9c = (int)(param_7 + (param_7 >> 0x1f & 3U)) >> 2;
      local_94 = (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
      local_d0 = local_80;
      uStack_b2 = ftol();
      uStack_b3 = ftol();
      local_b4 = ftol();
      bStack_b1 = ftol();
      local_a8 = 0;
      puVar17 = pMem_00;
      local_d4 = pMem;
      if (0 < local_ac) {
        do {
          local_bc = 0;
          if (param_12 == 0) {
            if (0 < local_c8) {
              local_c0 = local_d0;
              local_40 = (int)local_d0 - (int)local_d4;
              iVar7 = (int)local_cc - (int)local_d4;
              local_a4 = (int)local_d0 - (int)local_cc;
              pbVar13 = (byte *)((int)local_cc + 2);
              pbVar9 = local_d4 + 3;
              do {
                cVar12 = '\0';
                uVar16 = local_b8 >> 8;
                local_b8 = local_b8 & 0xffffff00;
                if (_DAT_5df205cc < *(float *)(param_16 + 0xc)) {
                  cVar12 = (char)((int)((uint)pbVar9[(int)puVar17 - (int)local_d4] *
                                       (0xff - (uint)*pbVar9)) / 0xff);
                  local_b8 = CONCAT31((int3)uVar16,cVar12);
                }
                if (param_15 == 0) {
                  bVar6 = -*pbVar9 - 1;
                }
                else {
                  bVar6 = *pbVar9;
                }
                _local_78 = CONCAT31(uStack_77,bVar6);
                if (bVar6 == 0) {
LAB_5de985af:
                  pbVar13[-2] = 0;
                  pbVar13[-1] = 0;
                  *pbVar13 = 0;
                  pbVar9[iVar7] = 0;
                }
                else if (bVar6 == 0xff) {
                  *(float *)(pbVar13 + -2) = *local_c0;
                }
                else if ((cVar12 == '\0') || (pbVar9[(int)puVar17 - (int)local_d4] != 0xff)) {
                  uVar16 = (uint)bVar6;
                  pbVar13[-2] = (byte)(*(byte *)local_c0 * uVar16 >> 8);
                  pbVar13[-1] = (byte)(pbVar13[local_a4 + -1] * uVar16 >> 8);
                  *pbVar13 = (byte)(pbVar13[local_a4] * uVar16 >> 8);
                  pbVar9[iVar7] = (byte)(pbVar9[local_40] * uVar16 >> 8);
                }
                else {
                  if (param_15 == 0) goto LAB_5de985af;
                  *(float *)(pbVar13 + -2) = *local_c0;
                }
                if (cVar12 != '\0') {
                  bVar6 = pbVar13[-2];
                  _local_34 = CONCAT31(uStack_33,bVar6);
                  uVar16 = local_b8 & 0xff;
                  iVar14 = ((CONCAT12(uStack_b2,CONCAT11(uStack_b3,local_b4)) & 0xff) - (uint)bVar6)
                           * uVar16;
                  pbVar13[-2] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + bVar6;
                  bVar6 = pbVar13[-1];
                  _local_38 = CONCAT31(uStack_37,bVar6);
                  iVar14 = ((CONCAT12(bStack_b1,CONCAT11(uStack_b2,uStack_b3)) & 0xff) - (uint)bVar6
                           ) * uVar16;
                  pbVar13[-1] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + bVar6;
                  bVar6 = *pbVar13;
                  _local_48 = CONCAT31(uStack_47,bVar6);
                  iVar14 = ((CONCAT11(bStack_b1,uStack_b2) & 0xff) - (uint)bVar6) * uVar16;
                  *pbVar13 = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + bVar6;
                  bVar6 = pbVar9[iVar7];
                  local_98 = CONCAT31(local_98._1_3_,bVar6);
                  iVar14 = ((uint)bStack_b1 - (uint)bVar6) * uVar16;
                  pbVar9[iVar7] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + bVar6;
                }
                local_bc = local_bc + 1;
                pbVar9 = pbVar9 + 4;
                local_c0 = local_c0 + 1;
                pbVar13 = pbVar13 + 4;
              } while (local_bc < local_c8);
            }
          }
          else if (0 < local_c8) {
            local_a4 = (int)local_d4 - (int)local_d0;
            pbVar13 = (byte *)((int)local_cc + 2);
            pbVar9 = (byte *)((int)local_d0 + 3);
            iVar7 = (int)local_cc - (int)local_d0;
            do {
              uVar16 = (uint)local_c4 >> 8;
              local_c4 = (uchar *)((uint)local_c4 & 0xffffff00);
              if (_DAT_5df205cc < *(float *)(param_16 + 0xc)) {
                iVar14 = (uint)(pbVar9 + local_a4)[(int)puVar17 - (int)local_d4] *
                         (0xff - (uint)pbVar9[local_a4]);
                local_c4 = (uchar *)CONCAT31((int3)uVar16,
                                             ((char)(iVar14 / 0xff) + (char)(iVar14 >> 0x1f)) -
                                             (char)((longlong)iVar14 * 0x80808081 >> 0x3f));
              }
              pbVar1 = pbVar9 + local_a4;
              if (param_15 == 0) {
                bVar6 = -*pbVar1 - 1;
              }
              else {
                bVar6 = *pbVar1;
              }
              _local_64 = CONCAT31(uStack_63,bVar6);
              if (bVar6 != 0) {
                if (bVar6 == 0xff) {
LAB_5de98259:
                  iVar14 = (0xff - (uint)*pbVar9) * (uint)pbVar13[-2] + 0x7f;
                  pbVar13[-2] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + pbVar9[-3];
                  iVar14 = (0xff - (uint)*pbVar9) * (uint)pbVar13[-1] + 0x7f;
                  pbVar13[-1] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + pbVar9[-2];
                  iVar14 = (0xff - (uint)*pbVar9) * (uint)*pbVar13 + 0x7f;
                  *pbVar13 = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + pbVar9[-1];
                  iVar14 = (0xff - (uint)*pbVar9) * (uint)pbVar9[iVar7] + 0x7f;
                  bVar6 = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + *pbVar9;
                }
                else {
                  if (((char)local_c4 != '\0') && (pbVar1[(int)puVar17 - (int)local_d4] == 0xff)) {
                    if (param_15 == 0) goto LAB_5de983fc;
                    goto LAB_5de98259;
                  }
                  uVar16 = (uint)bVar6;
                  local_8b = (char)(pbVar9[-2] * uVar16 >> 8);
                  local_8a = (char)(pbVar9[-1] * uVar16 >> 8);
                  bVar6 = (byte)(*pbVar9 * uVar16 >> 8);
                  _local_89 = CONCAT31(uStack_88,bVar6);
                  iVar15 = 0xff - (uint)bVar6;
                  iVar14 = (uint)pbVar13[-2] * iVar15 + 0x7f;
                  pbVar13[-2] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) +
                                (char)(pbVar9[-3] * uVar16 >> 8);
                  iVar14 = (uint)pbVar13[-1] * iVar15 + 0x7f;
                  pbVar13[-1] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + local_8b;
                  iVar14 = (uint)*pbVar13 * iVar15 + 0x7f;
                  *pbVar13 = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + local_8a;
                  iVar14 = (uint)pbVar9[iVar7] * iVar15 + 0x7f;
                  bVar6 = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + bVar6;
                }
                pbVar9[iVar7] = bVar6;
              }
LAB_5de983fc:
              if ((char)local_c4 != '\0') {
                bVar6 = pbVar13[-2];
                _local_3c = CONCAT31(uStack_3b,bVar6);
                uVar16 = (uint)local_c4 & 0xff;
                iVar14 = ((CONCAT12(uStack_b2,CONCAT11(uStack_b3,local_b4)) & 0xff) - (uint)bVar6) *
                         uVar16;
                pbVar13[-2] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + bVar6;
                bVar6 = pbVar13[-1];
                _local_4c = CONCAT31(uStack_4b,bVar6);
                iVar14 = ((CONCAT12(bStack_b1,CONCAT11(uStack_b2,uStack_b3)) & 0xff) - (uint)bVar6)
                         * uVar16;
                pbVar13[-1] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + bVar6;
                bVar6 = *pbVar13;
                _local_50 = CONCAT31(uStack_4f,bVar6);
                iVar14 = ((CONCAT11(bStack_b1,uStack_b2) & 0xff) - (uint)bVar6) * uVar16;
                *pbVar13 = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + bVar6;
                bVar6 = pbVar9[iVar7];
                _local_44 = CONCAT31(uStack_43,bVar6);
                iVar14 = ((uint)bStack_b1 - (uint)bVar6) * uVar16;
                pbVar9[iVar7] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + bVar6;
              }
              local_bc = local_bc + 1;
              pbVar9 = pbVar9 + 4;
              pbVar13 = pbVar13 + 4;
            } while (local_bc < local_c8);
          }
          local_cc = (uchar *)((int)local_cc + local_90 * 4);
          local_d0 = local_d0 + local_9c;
          local_d4 = local_d4 + local_94 * 4;
          puVar17 = puVar17 + local_94 * 4;
          local_a8 = local_a8 + 1;
          pMem = local_84;
          pMem_00 = local_a0;
        } while (local_a8 < local_ac);
      }
    }
    else if (param_9 == 0x10) {
      local_d0 = local_80;
      local_9c = (int)(param_3 + (param_3 >> 0x1f & 0xfU)) >> 4;
      local_90 = (int)(param_7 + (param_7 >> 0x1f & 0xfU)) >> 4;
      local_a8 = 0;
      local_74 = *(float *)(param_16 + 0x14);
      local_98 = (int)(iVar7 + (iVar7 >> 0x1f & 0xfU)) >> 4;
      local_d4 = (uchar *)local_7c;
      local_70 = *(float *)(param_16 + 0x18);
      local_6c = *(float *)(param_16 + 0x1c);
      local_68 = *(float *)(param_16 + 0x20);
      local_cc = pMem;
      local_c4 = pMem_00;
      if (0 < local_ac) {
        do {
          if (param_12 == 0) {
            local_bc = 0;
            if (0 < local_c8) {
              local_94 = (int)local_d0 - (int)local_cc;
              iVar7 = (int)local_d4 - (int)local_cc;
              local_b8 = (int)local_d0 - (int)local_d4;
              pfVar11 = (float *)((int)local_d4 + 8);
              pfVar10 = (float *)(local_cc + 0xc);
              local_c0 = local_d0;
              do {
                fVar4 = _DAT_5df205cc;
                if (_DAT_5df205cc < *(float *)(param_16 + 0xc)) {
                  fVar4 = (_DAT_5df205c8 - *pfVar10) *
                          *(float *)(((int)local_c4 - (int)local_cc) + (int)pfVar10);
                }
                if (param_15 == 0) {
                  fVar3 = _DAT_5df205c8 - *pfVar10;
                }
                else {
                  fVar3 = *pfVar10;
                }
                if (_DAT_5df205cc == fVar3) {
LAB_5de98b36:
                  pfVar11[-2] = 0.0;
                  pfVar11[-1] = 0.0;
                  *pfVar11 = 0.0;
                  *(undefined4 *)(iVar7 + (int)pfVar10) = 0;
                }
                else {
                  if (_DAT_5df205c8 != fVar3) {
                    if ((fVar4 <= (float)_DAT_5df1f300) ||
                       (*(float *)(((int)local_c4 - (int)local_cc) + (int)pfVar10) < _DAT_5df205c8))
                    {
                      pfVar11[-2] = fVar3 * *local_c0;
                      pfVar11[-1] = fVar3 * *(float *)((local_b8 - 4) + (int)pfVar11);
                      *pfVar11 = fVar3 * *(float *)(local_b8 + (int)pfVar11);
                      *(float *)(iVar7 + (int)pfVar10) = fVar3 * *(float *)(local_94 + (int)pfVar10)
                      ;
                      goto LAB_5de98bec;
                    }
                    if (param_15 == 0) goto LAB_5de98b36;
                  }
                  pfVar11[-2] = *local_c0;
                  pfVar11[-1] = local_c0[1];
                  *pfVar11 = local_c0[2];
                  pfVar11[1] = local_c0[3];
                }
LAB_5de98bec:
                if (_DAT_5df205cc < fVar4) {
                  fVar3 = pfVar11[-2];
                  pfVar11[-2] = fVar4 * (local_74 - fVar3) + fVar3;
                  pfVar11[-1] = fVar4 * (local_70 - pfVar11[-1]) + pfVar11[-1];
                  *pfVar11 = fVar4 * (local_6c - *pfVar11) + *pfVar11;
                  *(float *)(iVar7 + (int)pfVar10) =
                       fVar4 * (local_68 - *(float *)(iVar7 + (int)pfVar10)) +
                       *(float *)(iVar7 + (int)pfVar10);
                }
                pfVar10 = pfVar10 + 4;
                local_bc = local_bc + 1;
                local_c0 = local_c0 + 4;
                pfVar11 = pfVar11 + 4;
              } while (local_bc < local_c8);
            }
          }
          else {
            local_b8 = 0;
            if (0 < local_c8) {
              pfVar11 = (float *)((int)local_d4 + 8);
              pfVar10 = local_d0 + 3;
              iVar7 = (int)local_d4 - (int)local_d0;
              do {
                fVar4 = _DAT_5df205cc;
                if (_DAT_5df205cc < *(float *)(param_16 + 0xc)) {
                  pfVar2 = (float *)(((int)local_cc - (int)local_d0) + (int)pfVar10);
                  fVar4 = (_DAT_5df205c8 - *pfVar2) *
                          *(float *)((int)pfVar2 + ((int)local_c4 - (int)local_cc));
                }
                pfVar2 = (float *)(((int)local_cc - (int)local_d0) + (int)pfVar10);
                if (param_15 == 0) {
                  local_d8 = _DAT_5df205c8 - *pfVar2;
                }
                else {
                  local_d8 = *pfVar2;
                }
                if (_DAT_5df205cc != local_d8) {
                  if (_DAT_5df205c8 == local_d8) {
                    pfVar11[-2] = ((float)_DAT_5df18830 - *pfVar10) * pfVar11[-2] + pfVar10[-3];
                    pfVar11[-1] = ((float)_DAT_5df18830 - *pfVar10) * pfVar11[-1] + pfVar10[-2];
                    *pfVar11 = ((float)_DAT_5df18830 - *pfVar10) * *pfVar11 + pfVar10[-1];
                    *(float *)(iVar7 + (int)pfVar10) =
                         ((float)_DAT_5df18830 - *pfVar10) * *(float *)(iVar7 + (int)pfVar10) +
                         *pfVar10;
                  }
                  else if ((fVar4 <= (float)_DAT_5df1f300) ||
                          (*(float *)((int)pfVar2 + ((int)local_c4 - (int)local_cc)) < _DAT_5df205c8
                          )) {
                    local_c = pfVar10[-2] * local_d8;
                    local_8 = pfVar10[-1] * local_d8;
                    fVar3 = *pfVar10;
                    fVar5 = (float)_DAT_5df18830 - fVar3 * local_d8;
                    pfVar11[-2] = pfVar10[-3] * local_d8 + pfVar11[-2] * fVar5;
                    pfVar11[-1] = pfVar11[-1] * fVar5 + local_c;
                    *pfVar11 = *pfVar11 * fVar5 + local_8;
                    *(float *)(iVar7 + (int)pfVar10) =
                         fVar3 * local_d8 + *(float *)(iVar7 + (int)pfVar10) * fVar5;
                  }
                  else if (param_15 != 0) {
                    pfVar11[-2] = pfVar10[-3];
                    pfVar11[-1] = pfVar10[-2];
                    *pfVar11 = pfVar10[-1];
                    pfVar11[1] = *pfVar10;
                  }
                }
                if (_DAT_5df205cc < fVar4) {
                  pfVar11[-2] = fVar4 * (local_74 - pfVar11[-2]) + pfVar11[-2];
                  pfVar11[-1] = fVar4 * (local_70 - pfVar11[-1]) + pfVar11[-1];
                  *pfVar11 = fVar4 * (local_6c - *pfVar11) + *pfVar11;
                  *(float *)(iVar7 + (int)pfVar10) =
                       fVar4 * (local_68 - *(float *)(iVar7 + (int)pfVar10)) +
                       *(float *)(iVar7 + (int)pfVar10);
                }
                local_b8 = local_b8 + 1;
                pfVar10 = pfVar10 + 4;
                pfVar11 = pfVar11 + 4;
              } while ((int)local_b8 < local_c8);
            }
          }
          local_d4 = (uchar *)((int)local_d4 + local_9c * 0x10);
          local_d0 = local_d0 + local_90 * 4;
          local_c4 = local_c4 + local_98 * 0x10;
          local_cc = local_cc + local_98 * 0x10;
          local_a8 = local_a8 + 1;
          pMem = local_84;
          pMem_00 = local_a0;
        } while (local_a8 < local_ac);
      }
    }
    iVar7 = 0;
  }
LAB_5de98cdc:
  if (pMem != (uchar *)0x0) {
    pvVar8 = GlobalHandle(pMem);
    GlobalUnlock(pvVar8);
    pvVar8 = GlobalHandle(pMem);
    GlobalFree(pvVar8);
  }
  if (pMem_00 != (uchar *)0x0) {
    pvVar8 = GlobalHandle(pMem_00);
    GlobalUnlock(pvVar8);
    pvVar8 = GlobalHandle(pMem_00);
    GlobalFree(pvVar8);
  }
  return iVar7;
}


