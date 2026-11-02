/* Module: vegas30.exe
   Function: FUN_00512d80
   Address: 00512d80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00512d80(int *param_1,int param_2,int param_3,int param_4)

{
  double *pdVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  float fVar9;
  SHORT SVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  float10 fVar21;
  float10 fVar22;
  float local_160;
  float local_154;
  float fStack_150;
  uint local_14c;
  float local_148;
  float local_144;
  int local_140;
  int local_13c;
  float *local_138;
  float local_134;
  float local_130;
  float local_12c;
  undefined8 local_128;
  float fStack_120;
  float fStack_11c;
  int local_118;
  float *local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float fStack_f4;
  undefined4 local_f0;
  float local_ec;
  undefined8 local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_b8 [16];
  float local_78;
  float local_74;
  float local_5c;
  float fStack_58;
  float local_3c;
  float fStack_38;
  
  iVar11 = *(int *)(*param_1 + 0x98);
  iVar14 = *(int *)(iVar11 + 4);
  local_114 = (float *)((iVar14 << 0x18) >> 0x1f);
  local_14c = (iVar14 << 0x17) >> 0x1f;
  iVar19 = *(int *)(iVar11 + 0x1c) << 0x1f;
  uVar20 = iVar19 >> 0x1f;
  local_118 = iVar11;
  SVar10 = GetKeyState(0x11);
  if (SVar10 < 0) {
    local_114 = (float *)(uint)(local_114 == (float *)0x0);
  }
  SVar10 = GetKeyState(0x10);
  if (SVar10 < 0) {
    uVar20 = (uint)(-1 < iVar19);
  }
  SVar10 = GetKeyState(0x12);
  if (SVar10 < 0) {
    local_14c = (uint)(-1 < iVar14 << 0x17);
  }
  fVar21 = (float10)FUN_005a5f80(iVar11 + 0x24);
  fVar13 = (float)fVar21;
  fVar21 = (float10)FUN_005a5ff0(iVar11 + 0x24);
  fVar2 = (float)fVar21;
  local_108 = fVar13 * _DAT_0061a4fc;
  local_10c = fVar13 * _DAT_0061a4a0;
  local_110 = fVar2 * _DAT_0061a4fc;
  local_12c = fVar2 * _DAT_0061a4a0;
  if (iVar14 << 0x19 < 0) {
    local_108 = *(float *)(iVar11 + 0x24);
    local_110 = *(float *)(iVar11 + 0x28);
    local_10c = *(float *)(iVar11 + 0x44);
    local_12c = *(float *)(iVar11 + 0x48);
  }
  local_d4 = 0x15;
  local_d0 = 0x15;
  FUN_0050d680(&local_148,&param_2,iVar11,&local_d4);
  piVar4 = param_1 + 4;
  FUN_0050d680(&local_c8,piVar4,iVar11,&local_d4);
  if (param_4 == 0xc) {
    *(float *)(iVar11 + 0x10) = (local_144 - local_c4) + *(float *)(iVar11 + 0x10);
    *piVar4 = param_2;
    param_1[5] = param_3;
    return;
  }
  if (param_4 == 0xb) {
    *(float *)(iVar11 + 0xc) = (local_148 - local_c8) + *(float *)(iVar11 + 0xc);
    *piVar4 = param_2;
    param_1[5] = param_3;
    return;
  }
  if (param_4 == 0xd) {
    return;
  }
  if (param_4 == 0xf) {
    if (param_2 - *piVar4 < 3) {
      return;
    }
    local_f0 = 0;
    local_ec = local_148;
    iVar11 = FUN_0050d360(iVar11 + 0x94,&local_f0);
    uVar20 = param_1[3] & 0xfff8008fU | 0x88;
LAB_00512fff:
    param_1[3] = uVar20;
    param_1[0x34] = iVar11;
    param_1[0x35] = (int)local_148;
    param_1[0x36] = (int)local_144;
    param_1[0x37] = local_140;
    param_1[0x38] = local_13c;
    *piVar4 = param_2;
    param_1[5] = param_3;
    return;
  }
  if (param_4 == 0xe) {
    if (param_3 - param_1[5] < 3) {
      return;
    }
    local_f0 = 0;
    local_ec = local_144;
    iVar11 = FUN_0050d360(iVar11 + 0x98,&local_f0);
    uVar20 = param_1[3] & 0xfff80087U | 0x80;
    goto LAB_00512fff;
  }
  if (param_4 == 0x11) {
    iVar14 = *(int *)(*(int *)(iVar11 + 0x94) + 4);
    iVar19 = *(int *)(*(int *)(iVar11 + 0x94) + 8);
    iVar3 = param_1[0x34];
    if (uVar20 != 0) {
      fVar2 = fVar13 * *(float *)(iVar11 + 0x20) * _DAT_0061a460;
      fVar7 = local_148 - (float)param_1[6];
      if (fVar7 < _DAT_00610f20) {
        fVar7 = -fVar7;
      }
      if (fVar2 <= fVar7) {
        local_148 = local_148 - (float)param_1[0xe];
        if (local_148 < _DAT_00610f20) {
          local_148 = -local_148;
        }
        if (fVar2 <= local_148) {
          local_138 = (float *)(*(float *)(iVar11 + 0x20) * fVar13);
          iVar11 = ftol();
          fVar21 = (float10)_CIfmod();
          if ((float10)(float)local_138 * (float10)_DAT_0061a460 <= fVar21) {
            iVar11 = iVar11 + 1;
          }
          local_148 = (float)iVar11 * (float)local_138;
        }
        else {
          local_148 = (float)param_1[0xe];
        }
      }
      else {
        local_148 = (float)param_1[6];
      }
    }
    param_1[0x35] = (int)local_148;
    param_1[0x36] = (int)local_144;
    param_1[0x37] = local_140;
    param_1[0x38] = local_13c;
    *(float *)(iVar14 * iVar3 + iVar19 + 4) = local_148;
    return;
  }
  if (param_4 == 0x10) {
    iVar14 = *(int *)(*(int *)(iVar11 + 0x98) + 4);
    iVar19 = *(int *)(*(int *)(iVar11 + 0x98) + 8);
    iVar3 = param_1[0x34];
    if (uVar20 != 0) {
      fVar13 = fVar2 * *(float *)(iVar11 + 0x20) * _DAT_0061a460;
      fVar7 = local_144 - (float)param_1[7];
      if (fVar7 < _DAT_00610f20) {
        fVar7 = -fVar7;
      }
      if (fVar13 <= fVar7) {
        local_144 = local_144 - (float)param_1[0xf];
        if (local_144 < _DAT_00610f20) {
          local_144 = -local_144;
        }
        if (fVar13 <= local_144) {
          local_138 = (float *)(*(float *)(iVar11 + 0x20) * fVar2);
          iVar11 = ftol();
          fVar21 = (float10)_CIfmod();
          if ((float10)(float)local_138 * (float10)_DAT_0061a460 <= fVar21) {
            iVar11 = iVar11 + 1;
          }
          local_144 = (float)iVar11 * (float)local_138;
        }
        else {
          local_144 = (float)param_1[0xf];
        }
      }
      else {
        local_144 = (float)param_1[7];
      }
    }
    param_1[0x35] = (int)local_148;
    param_1[0x36] = (int)local_144;
    param_1[0x37] = local_140;
    param_1[0x38] = local_13c;
    *(float *)(iVar14 * iVar3 + iVar19 + 4) = local_144;
    return;
  }
  if (param_4 == 0x13) {
    *(float *)(iVar11 + 0xc) = (local_148 - local_c8) + *(float *)(iVar11 + 0xc);
    *(float *)(iVar11 + 0x10) = (local_144 - local_c4) + *(float *)(iVar11 + 0x10);
    *piVar4 = param_2;
    param_1[5] = param_3;
    return;
  }
  if (param_4 == 0x12) {
    return;
  }
  pfVar15 = (float *)(param_1 + 0x1d);
  local_fc = 0.0;
  local_138 = pfVar15;
  FUN_0050db20(local_b8,iVar11,*(undefined4 *)(iVar11 + 0x88),*(undefined4 *)(iVar11 + 0x8c),
               *(undefined4 *)(iVar11 + 0x9c),0,0,0,0,0);
  FUN_005a61e0(&local_5c,local_b8);
  iVar14 = *(int *)(*(int *)(*param_1 + 0x98) + 0x9c);
  if (iVar14 == 0) {
    iVar11 = FUN_00522a00(0);
    local_fc = (float)(*(int *)(iVar11 + 4) * param_1[0x34] + *(int *)(iVar11 + 8));
    pfVar16 = (float *)((int)local_fc + 0x18);
    pfVar17 = local_b8;
    for (iVar14 = 0x17; pfVar15 = local_138, iVar11 = local_118, iVar14 != 0; iVar14 = iVar14 + -1)
    {
      *pfVar17 = *pfVar16;
      pfVar16 = pfVar16 + 1;
      pfVar17 = pfVar17 + 1;
    }
  }
  else {
    uVar18 = *(uint *)(*(int *)(*param_1 + 0x98) + 4);
    if (((uVar18 & 4) != 0) && (iVar14 == 1)) {
      return;
    }
    if (((uVar18 & 8) != 0) && (iVar14 == 2)) {
      return;
    }
  }
  local_134 = 1.0;
  fVar21 = (float10)FUN_005a5ff0(pfVar15);
  if ((float10)_DAT_00610f20 <= fVar21) {
    fVar21 = (float10)FUN_005a5ff0(pfVar15);
  }
  else {
    fVar21 = (float10)FUN_005a5ff0(pfVar15);
    fVar21 = -fVar21;
  }
  if (fVar21 <= (float10)_DAT_0061a3b8) {
    fVar7 = fVar2;
    if (fVar2 < _DAT_00610f20) {
      fVar7 = -fVar2;
    }
    if ((float)_DAT_0061a3b8 < fVar7) {
      fVar21 = (float10)fVar13 / (float10)fVar2;
      goto LAB_005133eb;
    }
  }
  else {
    fVar22 = (float10)FUN_005a5f80(pfVar15);
    fVar21 = (float10)FUN_005a5ff0(pfVar15);
    fVar21 = (float10)(float)fVar22 / fVar21;
LAB_005133eb:
    local_134 = (float)fVar21;
  }
  iVar14 = param_4;
  if (param_4 == 10) {
    local_134 = local_148 - local_c8;
    fVar7 = local_144 - local_c4;
    if (uVar20 != 0) {
      fVar12 = *(float *)(iVar11 + 0x20) * fVar13;
      piVar4 = *(int **)(iVar11 + 0x94);
      local_dc = 1e+08;
      local_d8 = 1e+08;
      local_f8 = 0.0;
      local_130 = 0.0;
      local_cc = fVar12 * _DAT_0061a460;
      iVar11 = 0;
      local_114 = local_138;
      local_fc = fVar13 * _DAT_0061a4f8;
      local_e0 = local_fc;
      local_128._0_4_ = fVar12;
      do {
        fVar13 = local_134 + *local_114;
        local_104 = fVar13;
        iVar14 = ftol();
        local_100 = (float)iVar14;
        fVar21 = (float10)_CIfmod();
        if ((float10)local_cc <= fVar21) {
          local_100 = (float)(iVar14 + 1);
        }
        local_154 = (float)(int)local_100 * fVar12;
        fStack_f4 = ABS(local_154 - fVar13);
        if (fStack_f4 < local_e0) {
          fStack_f4 = local_e0;
        }
        if ((piVar4 != (int *)0x0) && (iVar14 = *piVar4, 0 < iVar14)) {
          pfVar15 = (float *)(piVar4[2] + 4);
          do {
            if (ABS(*pfVar15 - fVar13) < fStack_f4) {
              local_154 = *pfVar15;
              fStack_f4 = ABS(*pfVar15 - fVar13);
            }
            pfVar15 = (float *)((int)pfVar15 + piVar4[1]);
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        local_100 = local_104 - local_154;
        piVar5 = *(int **)(local_118 + 0x98);
        fVar13 = fVar7 + local_114[1];
        local_e8 = (double)CONCAT44(local_e8._4_4_,fVar13);
        fVar6 = *(float *)(local_118 + 0x20) * fVar2;
        iVar14 = ftol();
        local_104 = (float)iVar14;
        fVar21 = (float10)_CIfmod();
        fVar9 = (float)local_128;
        pfVar15 = local_138;
        if ((float10)fVar6 * (float10)_DAT_0061a460 <= fVar21) {
          local_104 = (float)(iVar14 + 1);
        }
        local_104 = (float)(int)local_104 * fVar6;
        fStack_150 = ABS(local_104 - fVar13);
        if (fStack_150 < fVar2 * _DAT_0061a4f8) {
          fStack_150 = fVar2 * _DAT_0061a4f8;
        }
        if ((piVar5 != (int *)0x0) && (iVar14 = *piVar5, 0 < iVar14)) {
          pfVar16 = (float *)(piVar5[2] + 4);
          do {
            if (ABS(*pfVar16 - fVar13) < fStack_150) {
              local_104 = *pfVar16;
              fStack_150 = ABS(*pfVar16 - fVar13);
            }
            pfVar16 = (float *)((int)pfVar16 + piVar5[1]);
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
        }
        if (ABS(local_100) < ABS(local_dc)) {
          local_dc = local_100;
          local_f8 = (float)iVar11;
        }
        if (ABS((float)local_e8 - local_104) < ABS(local_d8)) {
          local_130 = (float)iVar11;
          local_d8 = (float)local_e8 - local_104;
        }
        iVar11 = iVar11 + 1;
        local_114 = local_114 + 4;
      } while (iVar11 < 4);
      pfVar16 = local_138 + (int)local_f8 * 4;
      fVar13 = local_134 + *pfVar16;
      iVar11 = ftol();
      local_128._0_4_ = (float)iVar11;
      fVar21 = (float10)_CIfmod();
      if ((float10)fVar9 * (float10)_DAT_0061a460 <= fVar21) {
        local_128._0_4_ = (float)(iVar11 + 1);
      }
      local_f8 = (float)(int)(float)local_128 * fVar9;
      local_128._0_4_ = local_fc;
      fStack_150 = ABS(local_f8 - fVar13);
      if (fStack_150 < local_fc) {
        fStack_150 = local_fc;
      }
      if (piVar4 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *piVar4;
      }
      if (0 < iVar11) {
        pfVar17 = (float *)(piVar4[2] + 4);
        do {
          fVar12 = ABS(*pfVar17 - fVar13);
          if (fVar12 < fStack_150) {
            local_f8 = *pfVar17;
            fStack_150 = fVar12;
          }
          pfVar17 = (float *)((int)pfVar17 + piVar4[1]);
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      local_134 = local_f8 - *pfVar16;
      piVar4 = *(int **)(local_118 + 0x98);
      iVar14 = (int)local_130 * 4;
      fVar7 = fVar7 + pfVar15[iVar14 + 1];
      fVar13 = *(float *)(local_118 + 0x20) * fVar2;
      iVar11 = ftol();
      local_128 = (double)CONCAT44(local_128._4_4_,iVar11);
      fVar21 = (float10)_CIfmod();
      if ((float10)fVar13 * (float10)_DAT_0061a460 <= fVar21) {
        iVar11 = iVar11 + 1;
        local_128 = (double)CONCAT44(local_128._4_4_,iVar11);
      }
      else {
        iVar11 = (int)(float)local_128;
      }
      local_130 = (float)iVar11 * fVar13;
      fStack_150 = ABS(local_130 - fVar7);
      if (fStack_150 < fVar2 * _DAT_0061a4f8) {
        fStack_150 = fVar2 * _DAT_0061a4f8;
      }
      if (piVar4 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *piVar4;
      }
      if (0 < iVar11) {
        pfVar16 = (float *)(piVar4[2] + 4);
        do {
          fVar13 = ABS(*pfVar16 - fVar7);
          if (fVar13 < fStack_150) {
            local_130 = *pfVar16;
            fStack_150 = fVar13;
          }
          pfVar16 = (float *)((int)pfVar16 + piVar4[1]);
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      fVar7 = local_130 - pfVar15[iVar14 + 1];
      iVar11 = local_118;
    }
    if ((*(uint *)(iVar11 + 4) & 0x400) != 0) {
      local_134 = 0.0;
    }
    if ((*(uint *)(iVar11 + 4) & 0x800) != 0) {
      fVar7 = _DAT_00610f20;
    }
    if (local_108 <= local_134 + *local_138) {
      if (local_10c < local_134 + local_138[8]) {
        local_134 = local_10c - local_138[8];
      }
    }
    else {
      local_134 = local_108 - *local_138;
    }
    if (local_110 <= fVar7 + local_138[1]) {
      if (local_12c < fVar7 + local_138[9]) {
        fVar7 = local_12c - local_138[9];
      }
    }
    else {
      fVar7 = local_110 - local_138[1];
    }
    fVar13 = local_138[0x10];
    local_128 = (double)CONCAT44(local_128._4_4_,local_134 + fVar13);
    fVar2 = local_138[0x11];
    iVar14 = 5;
    pfVar15 = local_b8 + 1;
    do {
      iVar14 = iVar14 + -1;
      pfVar15[-1] = (pfVar15[-1] - local_78) + local_134 + fVar13;
      *pfVar15 = (*pfVar15 - local_74) + fVar7 + fVar2;
      pfVar15 = pfVar15 + 4;
    } while (iVar14 != 0);
    goto LAB_005143ca;
  }
  if (param_4 == 8) {
    fVar21 = (float10)fpatan((float10)local_144 - (float10)local_74,
                             (float10)local_148 - (float10)local_78);
    local_e8 = (double)fVar21;
    fVar21 = fVar21 - (float10)*(double *)(param_1 + 0x3a);
    if (fVar21 <= (float10)_DAT_0061a4f0) {
      if (fVar21 < (float10)_DAT_0061a4e0) {
        fVar21 = fVar21 + (float10)_DAT_0061a4e8;
      }
    }
    else {
      fVar21 = fVar21 - (float10)_DAT_0061a4e8;
    }
    local_128 = (double)fVar21;
    if (uVar20 != 0) {
      iVar14 = ftol();
      fVar21 = (float10)(iVar14 * 5) * (float10)_DAT_0061a4d0 - (float10)*(double *)(param_1 + 0x1a)
      ;
      local_128 = (double)fVar21;
    }
    if ((fVar21 + (float10)*(double *)(param_1 + 0x1a) < (float10)_DAT_0061a4c8) ||
       ((float10)_DAT_0061a4c0 < fVar21 + (float10)*(double *)(param_1 + 0x1a))) {
      return;
    }
    FUN_005a6120(local_b8,param_1 + 6,(float)local_128,local_128._4_4_,0);
    if ((*(int *)(*(int *)(*param_1 + 0x98) + 0x9c) == 0) &&
       (((_DAT_00613628 <= ABS(local_128) || (_DAT_0061a4b8 < local_128)) ||
        (local_128 < _DAT_0061a4b0)))) {
      param_1[0x3a] = (int)(float)local_e8;
      pfVar15 = local_b8;
      pfVar16 = (float *)(param_1 + 6);
      for (iVar11 = 0x17; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pfVar16 = *pfVar15;
        pfVar15 = pfVar15 + 1;
        pfVar16 = pfVar16 + 1;
      }
      param_1[0x3b] = local_e8._4_4_;
      iVar11 = local_118;
    }
    goto LAB_005143ca;
  }
  if (param_4 == 9) {
    if (uVar20 != 0) {
      fVar7 = *(float *)(iVar11 + 0x20) * fVar13;
      piVar4 = *(int **)(iVar11 + 0x94);
      iVar14 = ftol();
      local_128._0_4_ = (float)iVar14;
      fVar21 = (float10)_CIfmod();
      if ((float10)fVar7 * (float10)_DAT_0061a460 <= fVar21) {
        local_128._0_4_ = (float)(iVar14 + 1);
      }
      local_130 = (float)(int)(float)local_128 * fVar7;
      fStack_150 = ABS(local_130 - local_148);
      if (fStack_150 < fVar13 * _DAT_0061a4f8) {
        fStack_150 = fVar13 * _DAT_0061a4f8;
      }
      if (piVar4 == (int *)0x0) {
        iVar14 = 0;
      }
      else {
        iVar14 = *piVar4;
      }
      if (0 < iVar14) {
        pfVar15 = (float *)(piVar4[2] + 4);
        do {
          if (ABS(*pfVar15 - local_148) < fStack_150) {
            local_130 = *pfVar15;
            fStack_150 = ABS(*pfVar15 - local_148);
          }
          pfVar15 = (float *)((int)pfVar15 + piVar4[1]);
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      local_148 = local_130;
      fVar13 = *(float *)(iVar11 + 0x20) * fVar2;
      piVar4 = *(int **)(iVar11 + 0x98);
      iVar11 = ftol();
      local_128 = (double)CONCAT44(local_128._4_4_,iVar11);
      fVar21 = (float10)_CIfmod();
      if ((float10)fVar13 * (float10)_DAT_0061a460 <= fVar21) {
        local_128._0_4_ = (float)(iVar11 + 1);
      }
      else {
      }
      local_130 = (float)(int)(float)local_128 * fVar13;
      fStack_150 = ABS(local_130 - local_144);
      if (fStack_150 < fVar2 * _DAT_0061a4f8) {
        fStack_150 = fVar2 * _DAT_0061a4f8;
      }
      if (piVar4 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *piVar4;
      }
      if (0 < iVar11) {
        pfVar15 = (float *)(piVar4[2] + 4);
        do {
          if (ABS(*pfVar15 - local_144) < fStack_150) {
            local_130 = *pfVar15;
            fStack_150 = ABS(*pfVar15 - local_144);
          }
          pfVar15 = (float *)((int)pfVar15 + piVar4[1]);
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      local_144 = local_130;
    }
    if (local_108 <= local_148) {
      if (local_10c < local_148) {
        local_148 = local_10c;
      }
    }
    else {
      local_148 = local_108;
    }
    if (local_110 <= local_144) {
      if (local_12c < local_144) {
        local_144 = local_12c;
      }
    }
    else {
      local_144 = local_110;
    }
    *(float *)((int)local_fc + 0x58) = local_148;
    *(float *)((int)local_fc + 0x5c) = local_144;
    *(int *)((int)local_fc + 0x60) = local_140;
    *(int *)((int)local_fc + 100) = local_13c;
    return;
  }
  if (uVar20 != 0) {
    fVar7 = *(float *)(iVar11 + 0x20) * fVar13;
    piVar4 = *(int **)(iVar11 + 0x94);
    iVar19 = ftol();
    fVar21 = (float10)_CIfmod();
    if ((float10)fVar7 * (float10)_DAT_0061a460 <= fVar21) {
      iVar19 = iVar19 + 1;
      local_128 = (double)CONCAT44(local_128._4_4_,iVar19);
    }
    local_130 = (float)iVar19 * fVar7;
    fStack_150 = ABS(local_130 - local_148);
    if (fStack_150 < fVar13 * _DAT_0061a4f8) {
      fStack_150 = fVar13 * _DAT_0061a4f8;
    }
    if (piVar4 == (int *)0x0) {
      iVar19 = 0;
    }
    else {
      iVar19 = *piVar4;
    }
    if (0 < iVar19) {
      pfVar15 = (float *)(piVar4[2] + 4);
      do {
        if (ABS(*pfVar15 - local_148) < fStack_150) {
          local_130 = *pfVar15;
          fStack_150 = ABS(*pfVar15 - local_148);
        }
        pfVar15 = (float *)((int)pfVar15 + piVar4[1]);
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    local_148 = local_130;
    fVar13 = *(float *)(iVar11 + 0x20) * fVar2;
    piVar4 = *(int **)(iVar11 + 0x98);
    iVar19 = ftol();
    fVar21 = (float10)_CIfmod();
    if ((float10)fVar13 * (float10)_DAT_0061a460 <= fVar21) {
      iVar19 = iVar19 + 1;
      local_128 = (double)CONCAT44(local_128._4_4_,iVar19);
    }
    local_130 = (float)iVar19 * fVar13;
    fStack_150 = ABS(local_130 - local_144);
    if (fStack_150 < fVar2 * _DAT_0061a4f8) {
      fStack_150 = fVar2 * _DAT_0061a4f8;
    }
    if (piVar4 == (int *)0x0) {
      iVar19 = 0;
    }
    else {
      iVar19 = *piVar4;
    }
    if (0 < iVar19) {
      pfVar15 = (float *)(piVar4[2] + 4);
      do {
        if (ABS(*pfVar15 - local_144) < fStack_150) {
          local_130 = *pfVar15;
          fStack_150 = ABS(*pfVar15 - local_144);
        }
        pfVar15 = (float *)((int)pfVar15 + piVar4[1]);
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    local_144 = local_130;
  }
  bVar8 = false;
  local_118 = 0;
  if (iVar14 == 1) {
    iVar14 = 0;
    local_148 = local_5c;
    local_118 = 1;
    goto LAB_00513f54;
  }
  if (iVar14 == 5) {
LAB_00513ee1:
    iVar14 = 4;
    local_148 = local_3c;
    local_118 = 1;
  }
  else if ((iVar14 == 7) || (iVar14 == 3)) {
    if (iVar14 == 5) goto LAB_00513ee1;
    if (iVar14 == 3) {
      iVar14 = 4;
      local_144 = fStack_38;
      bVar8 = true;
    }
    else {
      if (iVar14 != 7) goto LAB_00513f3d;
      iVar14 = 0;
      local_144 = fStack_58;
      bVar8 = true;
    }
  }
  else {
LAB_00513f3d:
    if (((iVar14 != 0) && (iVar14 != 2)) && ((iVar14 != 6 && (iVar14 != 4)))) goto LAB_005143ca;
  }
LAB_00513f54:
  uVar20 = iVar14 / 2;
  uVar18 = uVar20 + 2 & 0x80000003;
  if ((int)uVar18 < 0) {
    uVar18 = (uVar18 - 1 | 0xfffffffc) + 1;
  }
  pdVar1 = (double *)(local_138 + uVar18 * 4);
  if (local_14c == 0) {
    local_128 = *pdVar1;
    fStack_120 = *(float *)(pdVar1 + 1);
    fStack_11c = *(float *)((int)pdVar1 + 0xc);
  }
  else {
    local_128 = (double)CONCAT44((local_138[9] + local_138[1]) * _DAT_0061a460,
                                 (local_138[8] + *local_138) * _DAT_0061a460);
  }
  fVar7 = local_148 - (float)local_128;
  fVar13 = local_144 - local_128._4_4_;
  fVar2 = local_138[uVar20 * 4] - (float)local_128;
  local_138 = (float *)(local_138[uVar20 * 4 + 1] - local_128._4_4_);
  if (local_114 == (float *)0x0) {
    fVar13 = local_108;
    if ((local_148 < local_108) || (fVar13 = local_10c, local_10c < local_148)) {
      local_148 = fVar13;
    }
    if (local_110 <= local_144) {
      if (local_12c < local_144) {
        local_144 = local_12c;
      }
    }
    else {
      local_144 = local_110;
    }
  }
  else {
    if (local_118 == 0) {
      fVar12 = local_134;
      if (local_134 < _DAT_00610f20) {
        fVar12 = -local_134;
      }
      if (fVar12 <= (float)_DAT_0061a3b8) goto LAB_00514099;
      fVar12 = fVar7;
      if (fVar7 < _DAT_00610f20) {
        fVar12 = -fVar7;
      }
      if ((fVar12 <= (float)_DAT_0061a3b8) && (!bVar8)) goto LAB_00514099;
      local_160 = -NAN;
      if (_DAT_00610f20 <= fVar13) {
        local_160 = 1.4013e-45;
      }
      fVar12 = fVar7;
      if (fVar7 < _DAT_00610f20) {
        fVar12 = -fVar7;
      }
      local_144 = ((float)(int)local_160 * fVar12) / local_134 + local_128._4_4_;
    }
    else {
LAB_00514099:
      local_160 = -NAN;
      if (_DAT_00610f20 <= fVar7) {
        local_160 = 1.4013e-45;
      }
      fVar12 = fVar13;
      if (fVar13 < _DAT_00610f20) {
        fVar12 = -fVar13;
      }
      local_148 = (float)(int)local_160 * fVar12 * local_134 + (float)local_128;
    }
    fVar12 = local_134;
    if (local_134 < _DAT_00610f20) {
      fVar12 = -local_134;
    }
    if ((fVar12 <= (float)_DAT_0061a3b8) ||
       ((fVar12 = local_108, local_108 <= local_148 && (fVar12 = local_10c, local_148 <= local_10c))
       )) {
      fVar12 = local_110;
      if ((local_144 < local_110) || (fVar12 = local_12c, local_12c < local_144)) {
        local_160 = -NAN;
        if (_DAT_00610f20 <= fVar7) {
          local_160 = 1.4013e-45;
        }
        if (fVar13 < _DAT_00610f20) {
          fVar13 = -fVar13;
        }
        local_148 = (float)(int)local_160 * fVar13 * local_134 + (float)local_128;
        local_144 = fVar12;
      }
    }
    else {
      local_160 = -NAN;
      if (_DAT_00610f20 <= fVar13) {
        local_160 = 1.4013e-45;
      }
      if (fVar7 < _DAT_00610f20) {
        fVar7 = -fVar7;
      }
      local_148 = fVar12;
      local_144 = ((float)(int)local_160 * fVar7) / local_134 + local_128._4_4_;
    }
  }
  local_12c = local_148 - (float)local_128;
  local_130 = 1.0;
  local_160 = 1.0;
  fVar13 = local_144 - local_128._4_4_;
  fVar7 = fVar2;
  if (fVar2 < _DAT_00610f20) {
    fVar7 = -fVar2;
  }
  if (((float)_DAT_0061a3b8 < fVar7) && ((local_118 == 0 || (local_114 != (float *)0x0)))) {
    local_130 = local_12c / fVar2;
  }
  pfVar15 = local_138;
  if ((float)local_138 < _DAT_00610f20) {
    pfVar15 = (float *)-(float)local_138;
  }
  if (((float)_DAT_0061a3b8 < (float)pfVar15) && ((!bVar8 || (local_114 != (float *)0x0)))) {
    local_160 = fVar13 / (float)local_138;
  }
  if ((_DAT_00610f20 == fVar2) && (local_12c != _DAT_00610f20)) {
    param_1[uVar20 * 4 + 6] = (int)(local_12c + (float)local_128);
    param_1[(uVar20 ^ 3) * 4 + 6] = (int)(local_12c + (float)local_128);
    if (local_14c != 0) {
      param_1[uVar18 * 4 + 6] = (int)((float)local_128 - local_12c);
      param_1[(uVar18 ^ 3) * 4 + 6] = (int)((float)local_128 - local_12c);
    }
  }
  if ((_DAT_00610f20 == (float)local_138) && (fVar13 != _DAT_00610f20)) {
    param_1[uVar20 * 4 + 7] = (int)(fVar13 + local_128._4_4_);
    param_1[(uVar20 ^ 1) * 4 + 7] = (int)(fVar13 + local_128._4_4_);
    if (local_14c != 0) {
      param_1[uVar18 * 4 + 7] = (int)(local_128._4_4_ - fVar13);
      param_1[(uVar18 ^ 1) * 4 + 7] = (int)(local_128._4_4_ - fVar13);
    }
  }
  FUN_005a6440(local_b8,param_1 + 6,&local_128,local_130,local_160);
LAB_005143ca:
  FUN_0050e180(local_b8,iVar11,*(undefined4 *)(iVar11 + 0x88),*(undefined4 *)(iVar11 + 0x8c),
               *(undefined4 *)(iVar11 + 0x9c));
  return;
}


