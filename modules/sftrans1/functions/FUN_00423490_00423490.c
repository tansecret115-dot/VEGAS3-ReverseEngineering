/* Module: sftrans1.dll
   Function: FUN_00423490
   Address: 00423490
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00423490(int *param_1,uint *param_2,int *param_3,double param_4)

{
  double dVar1;
  float fVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  HGLOBAL pvVar10;
  int *pMem;
  int *piVar11;
  double *pdVar12;
  double *pdVar13;
  uint uVar14;
  int iVar15;
  double *pdVar16;
  int iVar17;
  double *pdVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  double *pdVar22;
  float10 fVar23;
  float local_22c;
  int local_228;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  undefined1 local_1c0;
  char local_1bf;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  char local_197;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  char local_16f;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  char local_147;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  char local_11f;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  char local_f7;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  char local_cf;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  char local_a7;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  iVar19 = *param_2 - *param_3;
  pvVar10 = GlobalAlloc(0x40,*param_2 << 2);
  pMem = GlobalLock(pvVar10);
  if (pMem == (int *)0x0) {
    return 0x8007000e;
  }
  piVar11 = pMem;
  for (uVar14 = *param_2 & 0x3fffffff; uVar14 != 0; uVar14 = uVar14 - 1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  local_228 = 0;
  for (iVar15 = 0; iVar15 != 0; iVar15 = iVar15 + -1) {
    *(undefined1 *)piVar11 = 0;
    piVar11 = (int *)((int)piVar11 + 1);
  }
  fVar9 = 255.0;
  if (0 < iVar19) {
    do {
      iVar21 = 1;
      iVar15 = 0;
      fVar2 = _DAT_00557840;
      if (1 < (int)(*param_2 - 1)) {
        iVar20 = 0x68;
        do {
          local_22c = 255.0;
          if (0 < *param_3) {
            pdVar16 = (double *)param_3[1];
            iVar17 = *param_3;
            do {
              fVar23 = (float10)*(double *)(param_2[1] + iVar20) - (float10)*pdVar16;
              if (fVar23 < (float10)_DAT_00555910) {
                fVar23 = -fVar23;
              }
              if (fVar23 < (float10)local_22c) {
                local_22c = (float)fVar23;
              }
              pdVar16 = pdVar16 + 0xd;
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
          }
          if ((fVar2 < local_22c) && (local_22c <= fVar9)) {
            bVar3 = false;
            if (-1 < local_228) {
              iVar17 = local_228 + 1;
              piVar11 = pMem;
              do {
                if (*piVar11 == iVar21) {
                  bVar3 = true;
                }
                piVar11 = piVar11 + 1;
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
              if (bVar3) goto LAB_004235d5;
            }
            fVar2 = local_22c;
            iVar15 = iVar21;
          }
LAB_004235d5:
          iVar21 = iVar21 + 1;
          iVar20 = iVar20 + 0x68;
        } while (iVar21 < (int)(*param_2 - 1));
      }
      pMem[local_228] = iVar15;
      local_228 = local_228 + 1;
      fVar9 = fVar2;
    } while (local_228 < iVar19);
  }
  local_228 = 1;
  if (1 < *param_1 + -1) {
    local_22c = 1.45735e-43;
    iVar15 = 0;
    do {
      bVar3 = false;
      piVar11 = pMem;
      iVar21 = iVar19;
      if (iVar19 < 1) {
LAB_00423652:
        iVar15 = iVar15 + 0x68;
        pdVar12 = (double *)(param_3[1] + iVar15);
        pdVar13 = (double *)(param_2[1] + (int)local_22c);
        pdVar18 = (double *)(param_1[1] + (int)local_22c);
        pdVar16 = pdVar13 + 3;
        pdVar22 = &local_140;
        for (iVar21 = 10; iVar21 != 0; iVar21 = iVar21 + -1) {
          *(undefined4 *)pdVar22 = *(undefined4 *)pdVar16;
          pdVar16 = (double *)((int)pdVar16 + 4);
          pdVar22 = (double *)((int)pdVar22 + 4);
        }
        pdVar16 = pdVar12 + 3;
        pdVar22 = &local_f0;
        for (iVar21 = 10; iVar21 != 0; iVar21 = iVar21 + -1) {
          *(undefined4 *)pdVar22 = *(undefined4 *)pdVar16;
          pdVar16 = (double *)((int)pdVar16 + 4);
          pdVar22 = (double *)((int)pdVar22 + 4);
        }
        pdVar16 = pdVar13 + 8;
        pdVar22 = &local_190;
        for (iVar21 = 10; iVar21 != 0; iVar21 = iVar21 + -1) {
          *(undefined4 *)pdVar22 = *(undefined4 *)pdVar16;
          pdVar16 = (double *)((int)pdVar16 + 4);
          pdVar22 = (double *)((int)pdVar22 + 4);
        }
        pdVar16 = pdVar12 + 8;
        pdVar22 = &local_118;
        for (iVar21 = 10; iVar21 != 0; iVar21 = iVar21 + -1) {
          *(undefined4 *)pdVar22 = *(undefined4 *)pdVar16;
          pdVar16 = (double *)((int)pdVar16 + 4);
          pdVar22 = (double *)((int)pdVar22 + 4);
        }
        if (local_11f != '\0') {
          local_128 = local_130 * local_178;
        }
        if (local_cf != '\0') {
          local_d8 = local_e0 * local_100;
        }
        if (local_16f != '\0') {
          local_178 = -(local_180 * local_128);
        }
        if (local_f7 != '\0') {
          local_100 = -(local_108 * local_d8);
        }
        dVar1 = _DAT_00555908 - param_4;
        pdVar16 = pdVar13;
        pdVar22 = pdVar18;
        for (iVar21 = 0x1a; iVar21 != 0; iVar21 = iVar21 + -1) {
          *(undefined4 *)pdVar22 = *(undefined4 *)pdVar16;
          pdVar16 = (double *)((int)pdVar16 + 4);
          pdVar22 = (double *)((int)pdVar22 + 4);
        }
        *(undefined1 *)((int)pdVar18 + 0x61) = 0;
        *(undefined1 *)((int)pdVar18 + 0x39) = 0;
        *pdVar18 = param_4 * *pdVar12 + dVar1 * *pdVar13;
        pdVar18[1] = param_4 * pdVar12[1] + dVar1 * pdVar13[1];
        pdVar18[5] = local_e0 * param_4 + local_130 * dVar1;
        pdVar18[6] = local_d8 * param_4 + local_128 * dVar1;
        pdVar18[10] = local_108 * param_4 + local_180 * dVar1;
        pdVar18[0xb] = local_100 * param_4 + local_178 * dVar1;
        dVar4 = local_118 * param_4 + local_190 * dVar1;
        dVar5 = _DAT_00557828;
        if ((_DAT_00557828 <= dVar4) && (dVar5 = dVar4, _DAT_00555908 < dVar4)) {
          dVar5 = _DAT_00555908;
        }
        pdVar18[8] = dVar5;
        dVar4 = local_f0 * param_4 + local_140 * dVar1;
        dVar5 = _DAT_00557828;
        if ((_DAT_00557828 <= dVar4) && (dVar5 = dVar4, _DAT_00555908 < dVar4)) {
          dVar5 = _DAT_00555908;
        }
        pdVar18[3] = dVar5;
        pdVar18[9] = local_110 * param_4 + local_188 * dVar1;
        pdVar18[4] = local_e8 * param_4 + local_138 * dVar1;
      }
      else {
        do {
          if (*piVar11 == local_228) {
            bVar3 = true;
          }
          iVar21 = iVar21 + -1;
          piVar11 = piVar11 + 1;
        } while (iVar21 != 0);
        if (!bVar3) goto LAB_00423652;
        iVar21 = param_3[1];
        local_78 = *(double *)(iVar21 + 8 + iVar15);
        dVar1 = *(double *)(iVar21 + iVar15) + *(double *)(iVar21 + 0x50 + iVar15);
        local_70 = *(double *)(iVar21 + 8 + iVar15) + *(double *)(iVar21 + 0x58 + iVar15);
        local_88 = *(double *)(iVar21 + 0x68 + iVar15) + *(double *)(iVar21 + 0x90 + iVar15);
        local_68 = *(double *)(iVar21 + 0x70 + iVar15) + *(double *)(iVar21 + 0x98 + iVar15);
        local_80 = *(double *)(iVar21 + 0x68 + iVar15);
        local_60 = *(double *)(iVar21 + 0x70 + iVar15);
        dVar4 = (dVar1 + local_88) * _DAT_00557838;
        dVar5 = (local_68 + local_70) * _DAT_00557838;
        dVar1 = ((dVar1 + *(double *)(iVar21 + iVar15)) * _DAT_00557838 + dVar4) * _DAT_00557838;
        dVar6 = ((local_78 + local_70) * _DAT_00557838 + dVar5) * _DAT_00557838;
        dVar4 = ((local_80 + local_88) * _DAT_00557838 + dVar4) * _DAT_00557838;
        local_1e0 = 0.0;
        local_1d8 = 0.0;
        local_1d0 = 0.0;
        local_1c8 = 0.0;
        local_1c0 = 0;
        local_1bf = '\0';
        dVar5 = ((local_60 + local_68) * _DAT_00557838 + dVar5) * _DAT_00557838;
        FUN_00423e10();
        FUN_00423e40();
        dVar7 = (dVar1 + dVar4) * _DAT_00557838;
        dVar8 = (dVar6 + dVar5) * _DAT_00557838;
        local_1d0 = dVar1 - dVar7;
        local_1d8 = dVar6 - dVar8;
        local_1c8 = local_1d8;
        local_1a8 = dVar4 - dVar7;
        local_1a0 = dVar5 - dVar8;
        local_1e0 = -(local_1d0 / (dVar7 - *(double *)(iVar21 + iVar15)));
        local_1b8 = local_1a8 / (*(double *)(iVar21 + 0x68 + iVar15) - dVar7);
        if (local_1d0 != _DAT_00555910) {
          local_1d8 = local_1d8 / local_1d0;
        }
        if (local_1a8 == _DAT_00555910) {
          local_1b0 = local_1a0;
        }
        else {
          local_1b0 = local_1a0 / local_1a8;
        }
        pdVar12 = (double *)(param_2[1] + (int)local_22c);
        pdVar13 = (double *)((int)local_22c + param_1[1]);
        pdVar16 = pdVar12 + 3;
        pdVar22 = &local_168;
        for (iVar21 = 10; iVar21 != 0; iVar21 = iVar21 + -1) {
          *(undefined4 *)pdVar22 = *(undefined4 *)pdVar16;
          pdVar16 = (double *)((int)pdVar16 + 4);
          pdVar22 = (double *)((int)pdVar22 + 4);
        }
        pdVar16 = &local_1e0;
        pdVar22 = &local_58;
        for (iVar21 = 10; iVar21 != 0; iVar21 = iVar21 + -1) {
          *(undefined4 *)pdVar22 = *(undefined4 *)pdVar16;
          pdVar16 = (double *)((int)pdVar16 + 4);
          pdVar22 = (double *)((int)pdVar22 + 4);
        }
        pdVar16 = pdVar12 + 8;
        pdVar22 = &local_c8;
        for (iVar21 = 10; iVar21 != 0; iVar21 = iVar21 + -1) {
          *(undefined4 *)pdVar22 = *(undefined4 *)pdVar16;
          pdVar16 = (double *)((int)pdVar16 + 4);
          pdVar22 = (double *)((int)pdVar22 + 4);
        }
        pdVar16 = &local_1b8;
        pdVar22 = &local_30;
        for (iVar21 = 10; iVar21 != 0; iVar21 = iVar21 + -1) {
          *(undefined4 *)pdVar22 = *(undefined4 *)pdVar16;
          pdVar16 = (double *)((int)pdVar16 + 4);
          pdVar22 = (double *)((int)pdVar22 + 4);
        }
        if (local_147 != '\0') {
          local_150 = local_158 * local_b0;
        }
        if (local_1bf != '\0') {
          local_40 = local_1a0 * local_1d0;
        }
        if (local_a7 != '\0') {
          local_b0 = -(local_b8 * local_150);
        }
        if (local_197 != '\0') {
          local_18 = -(local_40 * local_1a8);
        }
        dVar1 = _DAT_00555908 - param_4;
        pdVar16 = pdVar12;
        pdVar22 = pdVar13;
        for (iVar21 = 0x1a; iVar21 != 0; iVar21 = iVar21 + -1) {
          *(undefined4 *)pdVar22 = *(undefined4 *)pdVar16;
          pdVar16 = (double *)((int)pdVar16 + 4);
          pdVar22 = (double *)((int)pdVar22 + 4);
        }
        *(undefined1 *)((int)pdVar13 + 0x61) = 0;
        *(undefined1 *)((int)pdVar13 + 0x39) = 0;
        *pdVar13 = dVar7 * param_4 + dVar1 * *pdVar12;
        pdVar13[1] = dVar8 * param_4 + dVar1 * pdVar12[1];
        pdVar13[5] = local_48 * param_4 + local_158 * dVar1;
        pdVar13[6] = local_40 * param_4 + local_150 * dVar1;
        pdVar13[10] = local_b8 * dVar1 + local_20 * param_4;
        pdVar13[0xb] = local_18 * param_4 + local_b0 * dVar1;
        dVar4 = local_30 * param_4 + local_c8 * dVar1;
        dVar5 = _DAT_00557828;
        if ((_DAT_00557828 <= dVar4) && (dVar5 = dVar4, _DAT_00555908 < dVar4)) {
          dVar5 = _DAT_00555908;
        }
        pdVar13[8] = dVar5;
        dVar4 = local_58 * param_4 + local_168 * dVar1;
        dVar5 = _DAT_00557828;
        if ((_DAT_00557828 <= dVar4) && (dVar5 = dVar4, _DAT_00555908 < dVar4)) {
          dVar5 = _DAT_00555908;
        }
        pdVar13[3] = dVar5;
        pdVar13[9] = local_28 * param_4 + local_c0 * dVar1;
        pdVar13[4] = local_50 * param_4 + local_160 * dVar1;
        pdVar16 = (double *)((int)local_22c + 8 + param_1[1]);
        dVar1 = _DAT_00555910;
        if ((_DAT_00555910 <= *(double *)((int)local_22c + 8 + param_1[1])) &&
           (dVar1 = _DAT_00557830, *pdVar16 <= _DAT_00557830)) {
          dVar1 = *pdVar16;
        }
        *pdVar16 = dVar1;
      }
      local_228 = local_228 + 1;
      local_22c = (float)((int)local_22c + 0x68);
    } while (local_228 < *param_1 + -1);
  }
  pvVar10 = GlobalHandle(pMem);
  GlobalUnlock(pvVar10);
  pvVar10 = GlobalHandle(pMem);
  GlobalFree(pvVar10);
  iVar19 = 1;
  if (1 < *param_1 + -2) {
    iVar15 = 0x68;
    do {
      iVar21 = param_1[1];
      dVar1 = *(double *)(iVar21 + 0x68 + iVar15) - *(double *)(iVar21 + iVar15);
      *(double *)(iVar21 + 0x50 + iVar15) = dVar1 * *(double *)(iVar21 + 0x40 + iVar15);
      iVar21 = param_1[1] + iVar15;
      *(double *)(iVar21 + 0x58) = *(double *)(iVar21 + 0x50) * *(double *)(iVar21 + 0x48);
      *(double *)(param_1[1] + iVar15 + 0x90) = -(dVar1 * *(double *)(param_1[1] + iVar15 + 0x80));
      iVar21 = param_1[1] + iVar15;
      iVar19 = iVar19 + 1;
      iVar15 = iVar15 + 0x68;
      *(double *)(iVar21 + 0x98) = *(double *)(iVar21 + 0x90) * *(double *)(iVar21 + 0x88);
    } while (iVar19 < *param_1 + -2);
  }
  return 0;
}


