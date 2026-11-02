/* Module: vfplugs.dll
   Function: FUN_004433d0
   Address: 004433d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004433d0(undefined1 *param_1,int param_2,float *param_3,int param_4,int param_5,
                 uint param_6,double *param_7,undefined4 param_8,undefined4 param_9,double *param_10
                 ,double *param_11)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float *pfVar6;
  double *pdVar7;
  uint uVar8;
  double *pdVar9;
  double *pdVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double *pdVar14;
  float *pfVar15;
  float *pfVar16;
  double *pdVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float local_68 [4];
  float local_58 [4];
  double local_48;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  double *local_24;
  float *local_20;
  int local_1c;
  int local_18;
  float *local_14;
  double *local_10;
  double *local_c;
  int local_8;
  
  local_c = param_10;
  pfVar6 = (float *)((param_5 + -1) * param_4 + (int)param_3);
  local_10 = param_11;
  local_14 = pfVar6;
  if (0 < (int)param_6) {
    pfVar15 = pfVar6;
    pfVar16 = local_68;
    for (uVar8 = param_6 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pfVar16 = *pfVar15;
      pfVar15 = pfVar15 + 1;
      pfVar16 = pfVar16 + 1;
    }
    pfVar15 = param_3;
    pfVar16 = local_58;
    for (uVar8 = param_6 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pfVar16 = *pfVar15;
      pfVar15 = pfVar15 + 1;
      pfVar16 = pfVar16 + 1;
    }
  }
  local_2c = param_5;
  if (4 < param_5) {
    local_2c = 5;
  }
  local_38 = 0;
  if (0 < local_2c) {
    local_28 = -(int)param_3;
    local_40 = -param_4;
    pdVar9 = param_11;
    do {
      local_8 = local_38;
      if (4 < local_38) {
        local_8 = 5;
      }
      pfVar15 = pfVar6;
      pdVar7 = pdVar9;
      if (0 < (int)param_6) {
        local_1c = (int)local_c - (int)pdVar9;
        local_34 = param_6;
        local_24 = pdVar9;
        local_20 = param_3;
        local_3c = (int)pfVar6 - (int)param_3;
        do {
          dVar18 = _DAT_00487598;
          *(undefined4 *)(local_1c + (int)pdVar9) = 0;
          *(undefined4 *)(local_1c + 4 + (int)pdVar9) = 0;
          *(undefined4 *)pdVar9 = 0;
          local_48 = 0.0;
          *(undefined4 *)((int)pdVar9 + 4) = 0;
          local_18 = 0;
          if (local_8 < 1) {
LAB_00443526:
            iVar13 = 5 - local_18;
            pdVar7 = param_7 + (local_18 + 0x14) * 2;
            do {
              iVar13 = iVar13 + -1;
              local_48 = pdVar7[-10] * (double)*(float *)((int)local_58 + local_28 + (int)local_20)
                         + local_48;
              dVar18 = (double)*(float *)((int)local_68 + local_28 + (int)local_20) * *pdVar7 +
                       dVar18;
              pdVar7 = pdVar7 + 2;
            } while (iVar13 != 0);
          }
          else {
            pfVar16 = (float *)(((int)pfVar6 - (int)param_3) + (int)local_20);
            local_30 = local_8;
            local_18 = local_8;
            pdVar7 = param_7 + 10;
            pdVar10 = pdVar9;
            pfVar15 = local_20;
            do {
              fVar1 = *pfVar15;
              pfVar15 = (float *)((int)pfVar15 - param_4);
              local_48 = ((double)fVar1 * pdVar7[-10] -
                         *(double *)(local_1c + (int)pdVar10) * *pdVar7) + local_48;
              fVar1 = *pfVar16;
              pfVar16 = (float *)((int)pfVar16 + param_4);
              local_30 = local_30 + -1;
              dVar18 = ((double)fVar1 * pdVar7[10] - *pdVar7 * *pdVar10) + dVar18;
              pdVar7 = pdVar7 + 2;
              pdVar10 = pdVar10 + -4;
            } while (local_30 != 0);
            if (local_8 < 5) goto LAB_00443526;
          }
          if ((local_48 < _DAT_0048cd20) && (_DAT_0048cd78 < local_48)) {
            local_48 = _DAT_00487598;
          }
          if ((dVar18 < _DAT_0048cd20) && (_DAT_0048cd78 < dVar18)) {
            dVar18 = _DAT_00487598;
          }
          local_20 = local_20 + 1;
          *(double *)(local_1c + (int)pdVar9) = local_48;
          *pdVar9 = dVar18;
          pdVar9 = pdVar9 + 1;
          local_34 = local_34 - 1;
          local_24 = pdVar9;
          pfVar15 = local_14;
          pdVar7 = local_10;
        } while (local_34 != 0);
      }
      pdVar9 = pdVar7 + 4;
      local_28 = local_28 + -param_4;
      local_c = local_c + 4;
      param_3 = (float *)((int)param_3 + param_4);
      pfVar6 = (float *)((int)pfVar15 - param_4);
      local_38 = local_38 + 1;
      local_10 = pdVar9;
      local_14 = pfVar6;
    } while (local_38 < local_2c);
  }
  local_38 = param_4 * 5;
  if (5 < param_5) {
    iVar13 = param_5 + -5;
    pdVar9 = local_10;
    pfVar6 = local_14;
    pdVar7 = local_c;
    do {
      iVar11 = 2;
      do {
        dVar18 = 0.0;
        dVar19 = 0.0;
        dVar20 = 0.0;
        dVar21 = 0.0;
        iVar12 = 5;
        *(undefined4 *)pdVar7 = 0;
        *(undefined4 *)((int)pdVar7 + 4) = 0;
        *(undefined4 *)(pdVar7 + 1) = 0;
        *(undefined4 *)((int)pdVar7 + 0xc) = 0;
        *(undefined4 *)pdVar9 = 0;
        *(undefined4 *)((int)pdVar9 + 4) = 0;
        *(undefined4 *)(pdVar9 + 1) = 0;
        *(undefined4 *)((int)pdVar9 + 0xc) = 0;
        do {
          pdVar17 = pdVar7;
          pdVar14 = pdVar9;
          pdVar10 = param_7;
          dVar18 = (dVar18 - *pdVar17 * pdVar10[10]) + *pdVar10 * (double)*param_3;
          dVar19 = (dVar19 - pdVar17[1] * pdVar10[0xb]) + pdVar10[1] * (double)param_3[1];
          dVar20 = (dVar20 - *pdVar14 * pdVar10[10]) + pdVar10[0x14] * (double)*pfVar6;
          dVar21 = (dVar21 - pdVar14[1] * pdVar10[0xb]) + pdVar10[0x15] * (double)pfVar6[1];
          param_3 = (float *)((int)param_3 - param_4);
          pfVar6 = (float *)((int)pfVar6 + param_4);
          iVar12 = iVar12 + -1;
          param_7 = pdVar10 + 2;
          pdVar9 = pdVar14 + -4;
          pdVar7 = pdVar17 + -4;
        } while (iVar12 != 0);
        param_7 = pdVar10 + -8;
        pdVar7 = pdVar17 + 0x12;
        pdVar9 = pdVar14 + 0x12;
        dVar2 = pdVar10[0x2a];
        dVar3 = pdVar10[0x2b];
        dVar4 = pdVar10[0x2c];
        dVar5 = pdVar10[0x2d];
        pdVar17[0x10] =
             (double)((ulonglong)dVar18 &
                     -(ulonglong)(dVar4 < (double)((ulonglong)dVar2 & (ulonglong)dVar18)));
        pdVar17[0x11] =
             (double)((ulonglong)dVar19 &
                     -(ulonglong)(dVar5 < (double)((ulonglong)dVar3 & (ulonglong)dVar19)));
        pdVar14[0x10] =
             (double)((ulonglong)dVar20 &
                     -(ulonglong)(dVar4 < (double)((ulonglong)dVar2 & (ulonglong)dVar20)));
        pdVar14[0x11] =
             (double)((ulonglong)dVar21 &
                     -(ulonglong)(dVar5 < (double)((ulonglong)dVar3 & (ulonglong)dVar21)));
        param_3 = (float *)((int)param_3 + local_38 + 8);
        pfVar6 = (float *)((int)pfVar6 + param_4 * -5 + 8);
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      param_3 = (float *)((int)param_3 + param_4 + -0x10);
      pfVar6 = (float *)((int)pfVar6 + (-0x10 - param_4));
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  if (param_6 != 4) {
    FUN_00443310((int)param_1,param_5,param_2,param_6,(int)param_10,(int)param_11);
    return;
  }
  FUN_004431f0(param_1,param_5,param_2,(int)param_10,(int)param_11);
  return;
}


