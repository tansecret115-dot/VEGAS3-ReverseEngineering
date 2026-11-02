/* Module: sfppack2.dll
   Function: FUN_5cd37d40
   Address: 5cd37d40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5cd37d40(double *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
            int param_7,int param_8)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  LPCVOID pvVar8;
  double *pdVar9;
  double *pdVar10;
  HGLOBAL pvVar11;
  double *pdVar12;
  int iVar13;
  int *piVar14;
  double *pdVar15;
  short sVar16;
  double *pdVar17;
  double *pdVar18;
  short sVar19;
  int iVar20;
  ushort uVar21;
  uint uVar22;
  short sVar23;
  int iVar24;
  int iVar25;
  bool bVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  float10 fVar31;
  int local_8c;
  undefined4 local_88;
  int local_84;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_44;
  int local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  local_88 = 0;
  pvVar11 = GlobalAlloc(0x42,0x818);
  DAT_5cd70aac = GlobalLock(pvVar11);
  if (DAT_5cd70aac == (LPVOID)0x0) {
    local_88 = 8;
    goto LAB_5cd38b44;
  }
  pvVar11 = GlobalAlloc(0x42,0x818);
  DAT_5cd70ab0 = GlobalLock(pvVar11);
  if (DAT_5cd70ab0 == (double *)0x0) {
    local_88 = 8;
    goto LAB_5cd38b44;
  }
  pvVar11 = GlobalAlloc(0x42,0x818);
  DAT_5cd70ab4 = GlobalLock(pvVar11);
  if (DAT_5cd70ab4 == (double *)0x0) {
    local_88 = 8;
    goto LAB_5cd38b44;
  }
  pvVar11 = GlobalAlloc(0x42,0x818);
  DAT_5cd70ab8 = GlobalLock(pvVar11);
  if (DAT_5cd70ab8 == (double *)0x0) {
    local_88 = 8;
    goto LAB_5cd38b44;
  }
  pvVar11 = GlobalAlloc(0x42,0x818);
  DAT_5cd70abc = GlobalLock(pvVar11);
  if (DAT_5cd70abc == (double *)0x0) {
    local_88 = 8;
    goto LAB_5cd38b44;
  }
  pvVar11 = GlobalAlloc(0x42,0x818);
  pdVar12 = GlobalLock(pvVar11);
  pdVar18 = DAT_5cd70abc;
  pdVar15 = DAT_5cd70ab8;
  pdVar10 = DAT_5cd70ab4;
  pdVar9 = DAT_5cd70ab0;
  pvVar8 = DAT_5cd70aac;
  DAT_5cd70ac0 = pdVar12;
  if (pdVar12 == (double *)0x0) {
    local_88 = 8;
    goto LAB_5cd38b44;
  }
  iVar20 = 2;
  iVar1 = param_8 + 2;
  local_18 = -1.0;
  param_6[1] = 1;
  sVar19 = 2;
  if (1 < param_8) {
    do {
      iVar13 = ftol();
      param_6[iVar20] = iVar13;
      sVar19 = sVar19 + 1;
      iVar20 = (int)sVar19;
    } while (iVar20 <= param_8);
  }
  param_6[param_8 + 1] = param_5;
  param_6[iVar1] = param_5 + 1;
  local_44 = 1;
  while( true ) {
    sVar19 = (short)param_8;
    if (0 < (short)(sVar19 + 1)) {
      iVar20 = (int)(short)(sVar19 + 1);
      piVar14 = param_6;
      pdVar17 = pdVar15;
      do {
        pdVar17 = pdVar17 + 1;
        piVar14 = piVar14 + 1;
        iVar20 = iVar20 + -1;
        fVar27 = (float10)fcos((float10)*(double *)(param_3 + *piVar14 * 8) * (float10)_DAT_5cd525a0
                              );
        *pdVar17 = (double)fVar27;
      } while (iVar20 != 0);
    }
    sVar16 = 1;
    sVar23 = sVar19 + 1;
    if (0 < sVar23) {
      do {
        fVar27 = FUN_5cd38c20(sVar16,sVar23,(short)((param_8 + -1) / 0xf) + 1,(int)pdVar15);
        pdVar12[sVar16] = (double)fVar27;
        if (fVar27 == (float10)_DAT_5cd594e8) goto LAB_5cd38694;
        sVar16 = sVar16 + 1;
      } while (sVar16 <= sVar23);
    }
    local_6c = 1;
    dVar4 = _DAT_5cd51520;
    dVar3 = _DAT_5cd51520;
    if (0 < sVar23) {
      iVar20 = (int)sVar23;
      pdVar17 = pdVar12;
      piVar14 = param_6;
      do {
        piVar14 = piVar14 + 1;
        pdVar17 = pdVar17 + 1;
        iVar13 = (short)*piVar14 * 8;
        iVar20 = iVar20 + -1;
        dVar4 = *(double *)(iVar13 + param_2) * *pdVar17 + dVar4;
        dVar3 = ((double)local_6c * *pdVar17) / *(double *)(iVar13 + param_4) + dVar3;
        local_6c = -local_6c;
      } while (iVar20 != 0);
    }
    iVar20 = 1;
    dVar4 = dVar4 / dVar3;
    local_58 = 1;
    *param_1 = dVar4;
    if (_DAT_5cd51520 < dVar4) {
      iVar20 = -1;
      local_58 = -1;
    }
    *param_1 = -((double)local_58 * dVar4);
    iVar13 = iVar20;
    if (0 < (short)(sVar19 + 1)) {
      iVar24 = (int)(short)(sVar19 + 1);
      piVar14 = param_6;
      pdVar17 = pdVar18;
      do {
        pdVar17 = pdVar17 + 1;
        piVar14 = piVar14 + 1;
        dVar4 = (double)iVar20;
        iVar13 = (short)*piVar14 * 8;
        iVar20 = -iVar20;
        iVar24 = iVar24 + -1;
        *pdVar17 = (dVar4 * *param_1) / *(double *)(iVar13 + param_4) +
                   *(double *)(iVar13 + param_2);
        iVar13 = local_58;
      } while (iVar24 != 0);
    }
    if (*param_1 <= local_18) break;
    local_18 = *param_1;
    local_5c = param_6[1];
    local_68 = 0;
    local_6c = 0;
    iVar20 = (int)(short)(sVar19 + 1);
    local_8c = 1;
    local_58 = param_6[iVar20];
    iVar13 = -iVar13;
    local_84 = iVar13;
LAB_5cd380c0:
    sVar16 = (short)local_8c;
    iVar24 = (int)sVar16;
    if (iVar24 == iVar1) {
      local_10 = local_30;
    }
    if (iVar24 < iVar1) {
      local_64 = param_6[iVar24 + 1];
      uVar21 = (short)param_6[iVar24] + 1;
      uVar22 = (uint)uVar21;
      local_84 = -local_84;
      if (sVar16 == 2) {
        local_20 = local_30;
      }
      iVar24 = (int)(short)uVar21;
      local_30 = *param_1;
      if (iVar24 < local_64) {
        fVar27 = FUN_5cd38ca0(uVar21,sVar19 + 1,param_3,(int)pdVar15,(int)pdVar18,(int)pdVar12);
        if (fVar27 == (float10)_DAT_5cd594e8) goto LAB_5cd38694;
        local_28 = (double)local_84;
        fVar27 = (float10)local_84 *
                 (fVar27 - (float10)*(double *)(param_2 + iVar24 * 8)) *
                 (float10)*(double *)(param_4 + iVar24 * 8);
        if (fVar27 - (float10)local_30 <= (float10)_DAT_5cd51520) goto LAB_5cd3836d;
        local_30 = (double)fVar27;
LAB_5cd3855e:
        iVar24 = uVar22 + 1;
        uVar21 = (ushort)iVar24;
        while (iVar25 = (int)(short)uVar21, iVar25 < local_64) {
          uVar21 = (ushort)iVar24;
          fVar27 = FUN_5cd38ca0(uVar21,sVar19 + 1,param_3,(int)pdVar15,(int)pdVar18,(int)pdVar12);
          if (fVar27 == (float10)_DAT_5cd594e8) goto LAB_5cd38694;
          fVar27 = (fVar27 - (float10)*(double *)(param_2 + iVar25 * 8)) *
                   (float10)*(double *)(param_4 + iVar25 * 8) * (float10)local_28;
          if (fVar27 - (float10)local_30 <= (float10)_DAT_5cd51520) break;
          iVar24 = iVar24 + 1;
          local_30 = (double)fVar27;
          uVar21 = (ushort)iVar24;
        }
      }
      else {
LAB_5cd3836d:
        iVar24 = uVar22 - 2;
        sVar23 = (short)iVar24;
        while (iVar25 = (int)sVar23, local_6c < iVar25) {
          fVar27 = FUN_5cd38ca0((short)iVar24,sVar19 + 1,param_3,(int)pdVar15,(int)pdVar18,
                                (int)pdVar12);
          if (fVar27 == (float10)_DAT_5cd594e8) goto LAB_5cd38694;
          fVar27 = (fVar27 - (float10)*(double *)(param_2 + iVar25 * 8)) *
                   (float10)*(double *)(param_4 + iVar25 * 8);
          if ((float10)_DAT_5cd51520 < (float10)local_84 * fVar27 - (float10)local_30) {
            fVar27 = (float10)local_84 * fVar27;
            goto LAB_5cd384bb;
          }
          if (0 < local_68) goto LAB_5cd38479;
          iVar24 = iVar24 + -1;
          sVar23 = (short)iVar24;
        }
        uVar21 = (short)param_6[sVar16] + 1;
        if (local_68 < 1) {
          uVar22 = uVar21 + 1;
          sVar23 = (short)uVar22;
          while (iVar24 = (int)sVar23, iVar24 < local_64) {
            fVar27 = FUN_5cd38ca0((short)uVar22,sVar19 + 1,param_3,(int)pdVar15,(int)pdVar18,
                                  (int)pdVar12);
            if (fVar27 == (float10)_DAT_5cd594e8) goto LAB_5cd38694;
            fVar27 = (fVar27 - (float10)*(double *)(param_2 + iVar24 * 8)) *
                     (float10)*(double *)(param_4 + iVar24 * 8);
            if ((float10)_DAT_5cd51520 < (float10)local_84 * fVar27 - (float10)local_30) {
              local_28 = (double)local_84;
              local_30 = (double)((float10)local_84 * fVar27);
              goto LAB_5cd3855e;
            }
            uVar22 = uVar22 + 1;
            sVar23 = (short)uVar22;
          }
LAB_5cd38479:
          local_8c = local_8c + 1;
          local_6c = param_6[sVar16];
          goto LAB_5cd380c0;
        }
      }
      local_6c = (short)uVar21 + -1;
      sVar16 = (short)local_8c;
      local_8c = local_8c + 1;
      param_6[sVar16] = local_6c;
      local_68 = local_68 + 1;
      goto LAB_5cd380c0;
    }
    local_8c = iVar1;
    if (iVar24 <= iVar1) {
      if (param_6[1] < local_5c) {
        local_5c = param_6[1];
      }
      if (local_58 < param_6[iVar20]) {
        local_58 = param_6[iVar20];
      }
      dVar4 = local_10 * _DAT_5cd594e0;
      uVar22 = 1;
      local_38 = local_84;
      local_60 = 1;
      if (1 < local_5c) {
        do {
          fVar27 = FUN_5cd38ca0((short)uVar22,sVar19 + 1,param_3,(int)pdVar15,(int)pdVar18,
                                (int)pdVar12);
          if (fVar27 == (float10)_DAT_5cd594e8) goto LAB_5cd38694;
          iVar24 = (short)uVar22 * 8;
          fVar27 = (fVar27 - (float10)*(double *)(iVar24 + param_2)) *
                   (float10)*(double *)(iVar24 + param_4);
          if ((float10)_DAT_5cd51520 < (float10)iVar13 * fVar27 - (float10)dVar4) {
            local_28 = (double)iVar13;
            local_30 = (double)((float10)iVar13 * fVar27);
            local_84 = iVar13;
            local_64 = local_5c;
            goto LAB_5cd3855e;
          }
          uVar22 = uVar22 + 1;
        } while ((short)uVar22 < local_5c);
      }
      local_60 = 6;
LAB_5cd381f1:
      local_30 = local_20 * _DAT_5cd594e0;
      iVar24 = param_5 + 1;
      local_84 = -local_38;
      local_6c = local_58;
LAB_5cd3821b:
      iVar24 = iVar24 + -1;
      iVar25 = (int)(short)iVar24;
      if (local_58 < iVar25) {
        fVar27 = FUN_5cd38ca0((short)iVar24,sVar19 + 1,param_3,(int)pdVar15,(int)pdVar18,
                              (int)pdVar12);
        if (fVar27 != (float10)_DAT_5cd594e8) goto code_r0x5cd3825e;
        goto LAB_5cd38694;
      }
      if (local_60 != 6) {
        sVar16 = 1;
        if (0 < param_8) {
          iVar13 = 1;
          do {
            sVar16 = sVar16 + 1;
            param_6[-iVar13 + iVar1] = param_6[iVar20 + -iVar13];
            iVar13 = (int)sVar16;
          } while (iVar13 <= param_8);
        }
        param_6[1] = local_5c;
        goto LAB_5cd38677;
      }
      if (local_68 < 1) goto LAB_5cd386a9;
      goto LAB_5cd38677;
    }
    if (local_60 < 10) {
      if (local_20 < local_30) {
        local_20 = local_30;
      }
      local_5c = param_6[iVar1];
      goto LAB_5cd381f1;
    }
    iVar13 = param_6[iVar1];
    iVar24 = 1;
    sVar16 = 1;
    if (0 < param_8) {
      do {
        sVar16 = sVar16 + 1;
        param_6[iVar24] = param_6[iVar24 + 1];
        iVar24 = (int)sVar16;
      } while (iVar24 <= param_8);
    }
    param_6[iVar20] = iVar13;
LAB_5cd38677:
    param_6[iVar1] = param_5 + 1;
    local_44 = local_44 + 1;
    if (0x19 < local_44) goto LAB_5cd386a9;
  }
  local_88 = 0x13;
LAB_5cd386a9:
  iVar13 = 1;
  uVar5 = *(undefined4 *)(param_3 + 8);
  uVar6 = *(undefined4 *)(param_3 + 0xc);
  sVar16 = 1;
  *(undefined4 *)(pdVar15 + iVar1) = 0;
  *(undefined4 *)((int)pdVar15 + iVar1 * 8 + 4) = 0xc0000000;
  iVar20 = param_8 * 2 + -1;
  bVar26 = false;
  bVar7 = false;
  dVar4 = (double)iVar20;
  dVar3 = _DAT_5cd51510 / dVar4;
  if ((*(double *)(param_3 + 8) < _DAT_5cd51518) &&
     (_DAT_5cd528e0 < *(double *)(param_3 + param_5 * 8))) {
    bVar26 = true;
    bVar7 = true;
  }
  if (param_8 < 4) {
    bVar7 = true;
LAB_5cd38737:
    fVar28 = (float10)local_28;
    fVar27 = (float10)local_30;
  }
  else {
    if (bVar26) goto LAB_5cd38737;
    fVar27 = (float10)fcos((float10)*(double *)(param_3 + 8) * (float10)_DAT_5cd525a0);
    fVar29 = (float10)fcos((float10)*(double *)(param_3 + param_5 * 8) * (float10)_DAT_5cd525a0);
    fVar30 = (float10)(double)fVar27 - fVar29;
    fVar28 = (float10)_DAT_5cd514e0 / fVar30;
    local_28 = (double)fVar28;
    fVar27 = -(((float10)(double)fVar29 + (float10)(double)fVar27) / (float10)(double)fVar30);
    local_30 = (double)fVar27;
  }
  sVar23 = 1;
  if (0 < param_8) {
    do {
      fVar29 = (float10)(iVar13 + -1) * (float10)dVar3;
      fVar30 = (float10)fcos(fVar29 * (float10)_DAT_5cd525a0);
      if (!bVar7) {
        fVar30 = (fVar30 - fVar27) / fVar28;
        fVar29 = (float10)fpatan(SQRT((float10)_DAT_5cd51510 - fVar30 * fVar30),fVar30);
        fVar29 = fVar29 * (float10)_DAT_5cd594d8;
      }
      local_18 = (double)fVar29;
      dVar2 = pdVar15[sVar16];
      while (fVar29 = (float10)dVar2, fVar30 <= fVar29) {
        if (fVar29 - fVar30 < (float10)_DAT_5cd58668) goto LAB_5cd388ad;
        sVar16 = sVar16 + 1;
        dVar2 = pdVar15[sVar16];
      }
      if (fVar30 - fVar29 < (float10)_DAT_5cd58668) {
LAB_5cd388ad:
        *(undefined4 *)((int)pvVar8 + iVar13 * 8) = *(undefined4 *)(pdVar18 + sVar16);
        *(undefined4 *)((int)pvVar8 + iVar13 * 8 + 4) =
             *(undefined4 *)((int)pdVar18 + sVar16 * 8 + 4);
      }
      else {
        *(double *)(param_3 + 8) = local_18;
        fVar27 = FUN_5cd38ca0(1,sVar19 + 1,param_3,(int)pdVar15,(int)pdVar18,(int)pdVar12);
        *(double *)((int)pvVar8 + iVar13 * 8) = (double)fVar27;
        if (fVar27 == (float10)_DAT_5cd594e8) goto LAB_5cd38694;
        fVar28 = (float10)local_28;
        fVar27 = (float10)local_30;
      }
      if (1 < sVar16) {
        sVar16 = sVar16 + -1;
      }
      sVar23 = sVar23 + 1;
      iVar13 = (int)sVar23;
    } while (iVar13 <= param_8);
  }
  iVar13 = 1;
  fVar29 = (float10)_DAT_5cd525a0;
  *(undefined4 *)(param_3 + 8) = uVar5;
  *(undefined4 *)(param_3 + 0xc) = uVar6;
  sVar19 = 1;
  if (0 < param_8) {
    do {
      fVar30 = (float10)_DAT_5cd51520;
      iVar24 = param_8 + -1;
      if ((0 < iVar24) && (local_6c = 1, 0 < iVar24)) {
        pdVar15 = (double *)((int)pvVar8 + 0x10);
        do {
          fVar31 = (float10)local_6c;
          local_6c = local_6c + 1;
          fVar31 = (float10)fcos(fVar31 * (float10)(iVar13 + -1) * (fVar29 / (float10)iVar20));
          fVar30 = fVar31 * (float10)*pdVar15 + fVar30;
          pdVar15 = pdVar15 + 1;
        } while (local_6c <= iVar24);
      }
      sVar19 = sVar19 + 1;
      *(double *)(param_7 + iVar13 * 8) =
           (double)(fVar30 + fVar30 + (float10)*(double *)((int)pvVar8 + 8));
      iVar13 = (int)sVar19;
    } while (iVar13 <= param_8);
  }
  iVar20 = 2;
  sVar19 = 2;
  if (1 < param_8) {
    iVar13 = 2;
    do {
      dVar3 = *(double *)(param_7 + iVar13 * 8);
      sVar19 = sVar19 + 1;
      *(double *)(param_7 + iVar13 * 8) = (dVar3 + dVar3) / dVar4;
      iVar13 = (int)sVar19;
    } while (iVar13 <= param_8);
  }
  *(double *)(param_7 + 8) = *(double *)(param_7 + 8) / dVar4;
  if (!bVar7) {
    fVar29 = fVar27 * (float10)*(double *)(param_7 + param_8 * 8);
    iVar13 = param_8 + -1;
    sVar19 = 2;
    bVar26 = SBORROW4(2,iVar13);
    iVar24 = 2 - iVar13;
    pdVar9[1] = (double)(fVar29 + fVar29 + (float10)*(double *)(param_7 + iVar13 * 8));
    fVar29 = fVar28 * (float10)*(double *)(param_7 + param_8 * 8);
    pdVar9[2] = (double)(fVar29 + fVar29);
    pdVar10[1] = *(double *)(param_7 + -0x10 + param_8 * 8) - *(double *)(param_7 + param_8 * 8);
    if (1 < iVar13) {
      do {
        if (bVar26 == iVar24 < 0) {
          fVar28 = fVar28 * (float10)_DAT_5cd514e8;
          fVar27 = fVar27 * (float10)_DAT_5cd514e8;
        }
        *(undefined4 *)(pdVar9 + iVar20 + 1) = 0;
        *(undefined4 *)((int)pdVar9 + (iVar20 + 1) * 8 + 4) = 0;
        if (0 < iVar20) {
          iVar13 = iVar20;
          pdVar15 = pdVar9;
          do {
            pdVar15 = pdVar15 + 1;
            dVar4 = *pdVar15;
            *(double *)(((int)pvVar8 - (int)pdVar9) + (int)pdVar15) = dVar4;
            fVar29 = fVar27 * (float10)dVar4;
            iVar13 = iVar13 + -1;
            *pdVar15 = (double)(fVar29 + fVar29);
          } while (iVar13 != 0);
        }
        fVar29 = fVar28 * (float10)*(double *)((int)pvVar8 + 8);
        pdVar9[2] = (double)(fVar29 + fVar29 + (float10)pdVar9[2]);
        if (0 < iVar20 + -1) {
          pdVar18 = (double *)((int)pvVar8 + 0x10);
          iVar13 = iVar20 + -1;
          pdVar15 = pdVar9 + 1;
          do {
            dVar4 = *pdVar18;
            pdVar18 = pdVar18 + 1;
            iVar13 = iVar13 + -1;
            *pdVar15 = (double)(fVar28 * (float10)dVar4 +
                                (float10)*(double *)
                                          ((int)pdVar10 + (-8 - (int)pdVar9) + (int)(pdVar15 + 1)) +
                               (float10)*pdVar15);
            pdVar15 = pdVar15 + 1;
          } while (iVar13 != 0);
        }
        if (2 < iVar20 + 1) {
          pdVar18 = (double *)((int)pvVar8 + 0x10);
          iVar13 = iVar20 + -1;
          pdVar15 = pdVar9 + 3;
          do {
            dVar4 = *pdVar18;
            pdVar18 = pdVar18 + 1;
            iVar13 = iVar13 + -1;
            *pdVar15 = (double)(fVar28 * (float10)dVar4 + (float10)*pdVar15);
            pdVar15 = pdVar15 + 1;
          } while (iVar13 != 0);
        }
        if (iVar20 != param_8 + -1) {
          if (0 < iVar20) {
            iVar13 = iVar20;
            pdVar15 = pdVar10;
            do {
              pdVar15 = pdVar15 + 1;
              *pdVar15 = -*(double *)(((int)pvVar8 - (int)pdVar10) + (int)pdVar15);
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
          pdVar10[1] = *(double *)(param_7 + -8 + (param_8 - iVar20) * 8) + pdVar10[1];
        }
        sVar19 = sVar19 + 1;
        iVar20 = (int)sVar19;
        iVar13 = param_8 + -1;
        bVar26 = SBORROW4(iVar20,iVar13);
        iVar24 = iVar20 - iVar13;
      } while (iVar20 <= iVar13);
    }
    sVar19 = 1;
    if (0 < param_8) {
      iVar20 = 1;
      do {
        sVar19 = sVar19 + 1;
        *(undefined4 *)(param_7 + iVar20 * 8) = *(undefined4 *)(pdVar9 + iVar20);
        *(undefined4 *)(param_7 + 4 + iVar20 * 8) = *(undefined4 *)((int)pdVar9 + iVar20 * 8 + 4);
        iVar20 = (int)sVar19;
      } while (iVar20 <= param_8);
    }
  }
  if (param_8 < 4) {
    *(undefined4 *)(param_7 + 8 + param_8 * 8) = 0;
    *(undefined4 *)(param_7 + 0xc + param_8 * 8) = 0;
    *(undefined4 *)(param_7 + iVar1 * 8) = 0;
    *(undefined4 *)(param_7 + 4 + iVar1 * 8) = 0;
  }
LAB_5cd38b44:
  DAT_5cd70aa8 = DAT_5cd70aa8 + local_44;
  if (DAT_5cd70aac != (LPCVOID)0x0) {
    pvVar11 = GlobalHandle(DAT_5cd70aac);
    GlobalUnlock(pvVar11);
    pvVar11 = GlobalHandle(DAT_5cd70aac);
    GlobalFree(pvVar11);
  }
  if (DAT_5cd70ab0 != (double *)0x0) {
    pvVar11 = GlobalHandle(DAT_5cd70ab0);
    GlobalUnlock(pvVar11);
    pvVar11 = GlobalHandle(DAT_5cd70ab0);
    GlobalFree(pvVar11);
  }
  if (DAT_5cd70ab4 != (double *)0x0) {
    pvVar11 = GlobalHandle(DAT_5cd70ab4);
    GlobalUnlock(pvVar11);
    pvVar11 = GlobalHandle(DAT_5cd70ab4);
    GlobalFree(pvVar11);
  }
  if (DAT_5cd70ab8 != (double *)0x0) {
    pvVar11 = GlobalHandle(DAT_5cd70ab8);
    GlobalUnlock(pvVar11);
    pvVar11 = GlobalHandle(DAT_5cd70ab8);
    GlobalFree(pvVar11);
  }
  if (DAT_5cd70abc != (double *)0x0) {
    pvVar11 = GlobalHandle(DAT_5cd70abc);
    GlobalUnlock(pvVar11);
    pvVar11 = GlobalHandle(DAT_5cd70abc);
    GlobalFree(pvVar11);
  }
  if (DAT_5cd70ac0 != (double *)0x0) {
    pvVar11 = GlobalHandle(DAT_5cd70ac0);
    GlobalUnlock(pvVar11);
    pvVar11 = GlobalHandle(DAT_5cd70ac0);
    GlobalFree(pvVar11);
  }
  return local_88;
code_r0x5cd3825e:
  fVar27 = (fVar27 - (float10)*(double *)(param_2 + iVar25 * 8)) *
           (float10)*(double *)(param_4 + iVar25 * 8);
  if ((float10)_DAT_5cd51520 < (float10)local_84 * fVar27 - (float10)local_30)
  goto code_r0x5cd38281;
  goto LAB_5cd3821b;
code_r0x5cd38281:
  fVar27 = (float10)local_84 * fVar27;
  local_60 = local_60 + 10;
LAB_5cd384bb:
  local_28 = (double)local_84;
  iVar24 = iVar24 + -1;
  sVar16 = (short)iVar24;
  while( true ) {
    iVar25 = (int)sVar16;
    local_30 = (double)fVar27;
    if (iVar25 <= local_6c) break;
    sVar16 = (short)iVar24;
    fVar27 = FUN_5cd38ca0(sVar16,sVar19 + 1,param_3,(int)pdVar15,(int)pdVar18,(int)pdVar12);
    if (fVar27 == (float10)_DAT_5cd594e8) goto LAB_5cd38694;
    fVar27 = (fVar27 - (float10)*(double *)(param_2 + iVar25 * 8)) *
             (float10)*(double *)(param_4 + iVar25 * 8) * (float10)local_84;
    if (fVar27 - (float10)local_30 <= (float10)_DAT_5cd51520) break;
    iVar24 = iVar24 + -1;
    sVar16 = (short)iVar24;
  }
  sVar23 = (short)local_8c;
  local_6c = param_6[sVar23];
  local_8c = local_8c + 1;
  param_6[sVar23] = sVar16 + 1;
  local_68 = local_68 + 1;
  goto LAB_5cd380c0;
LAB_5cd38694:
  local_88 = 0x13;
  goto LAB_5cd38b44;
}


