/* Module: mp3plug.dll
   Function: FUN_5f707c30
   Address: 5f707c30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_5f707c30(uint param_1,uint param_2,float *param_3,uint param_4,undefined4 param_5,float param_6,
            int param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float afStack_f4 [10];
  undefined4 local_cc;
  undefined4 uStack_c8;
  int local_c4;
  undefined4 uStack_c0;
  
  if (param_7 == 0) {
    if ((DAT_5f7529a4 != 0) && ((((uint)param_3 | (uint)param_8 | param_2 | param_1) & 0xf) == 0)) {
      FUN_5f708360((int)param_3,param_2);
      return;
    }
    iVar13 = 0;
    if (0 < (int)param_4) {
      do {
        fVar1 = *(float *)(param_2 + 4 + iVar13 * 8);
        fVar2 = *(float *)(param_2 + iVar13 * 8);
        fVar6 = fVar2 * fVar2 + fVar1 * fVar1;
        fVar1 = *(float *)(param_2 + 4 + iVar13 * 8);
        fVar2 = *(float *)(param_2 + iVar13 * 8);
        fVar3 = param_3[iVar13 * 2];
        fVar4 = *(float *)(param_1 + 4 + iVar13 * 8);
        fVar5 = *(float *)(param_1 + iVar13 * 8);
        iVar14 = iVar13 + 1;
        fVar8 = fVar3 * fVar3 + param_3[iVar13 * 2 + 1] * param_3[iVar13 * 2 + 1];
        fVar9 = fVar5 * fVar5 + fVar4 * fVar4;
        if (((fVar6 < _DAT_5f7607a8) || (fVar9 < _DAT_5f7607a8)) || (fVar8 < _DAT_5f7607a8)) {
          param_8[iVar13] = param_6;
        }
        else {
          fVar7 = (_DAT_5f7607b0 / fVar6) *
                  (*(float *)(param_1 + iVar13 * 8) * fVar2 +
                  *(float *)(param_1 + 4 + iVar13 * 8) * fVar1);
          fVar6 = SQRT(fVar6 / fVar9);
          fVar1 = (_DAT_5f7607c0 * fVar6 - _DAT_5f7607c4) * (fVar1 * fVar7 - fVar4);
          fVar5 = (fVar6 * _DAT_5f7607b8 - _DAT_5f7607bc) * (fVar2 * fVar7 - fVar5);
          fVar2 = fVar5 * fVar5 + fVar1 * fVar1;
          fVar4 = SQRT(fVar8 * fVar2);
          param_8[iVar13] =
               SQRT(((fVar3 - fVar5) * (fVar3 - fVar5) +
                    (param_3[iVar13 * 2 + 1] - fVar1) * (param_3[iVar13 * 2 + 1] - fVar1)) /
                    (fVar4 + fVar4 + fVar8 + fVar2));
        }
        iVar13 = iVar14;
      } while (iVar14 < (int)param_4);
    }
  }
  else if (param_7 == 3) {
    FUN_5f6d8830(param_3,param_8,param_4);
    FUN_5f6d8280(param_8,param_8,param_4);
    iVar13 = 0;
    do {
      if (iVar13 + 2 < (int)(param_4 - 2)) {
        pfVar12 = param_8 + iVar13 + 2;
        fVar1 = param_8[iVar13];
        do {
          fVar2 = *pfVar12;
          fVar3 = _DAT_5f7607cc;
          if ((_DAT_5f7607c8 != fVar2) &&
             (fVar1 = fVar2 - (fVar1 + pfVar12[2]) * _DAT_5f7607d8, fVar3 = _DAT_5f7607e0,
             _DAT_5f7607dc <= fVar1)) {
            fVar1 = fVar1 / fVar2;
            fVar3 = fVar1 * (fVar1 - _DAT_5f7607e8) + _DAT_5f7607ec;
          }
          *pfVar12 = fVar3;
          pfVar12 = pfVar12 + 2;
          fVar1 = fVar2;
        } while ((int)pfVar12 < (int)(param_8 + (param_4 - 2)));
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 2);
    *param_8 = param_8[2];
    param_8[1] = param_8[2];
    iVar13 = param_4 - 6;
    fVar1 = _DAT_5f7607d0;
    do {
      fVar1 = fVar1 + param_8[iVar13];
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)(param_4 - 3));
    fVar1 = fVar1 * _DAT_5f7607d4;
    if (iVar13 < (int)param_4) {
      iVar14 = (param_4 - iVar13 & 0xfffffffe) + iVar13;
      for (; iVar13 < iVar14; iVar13 = iVar13 + 2) {
        param_8[iVar13] = fVar1;
        param_8[iVar13 + 1] = fVar1;
      }
      for (; iVar13 < (int)param_4; iVar13 = iVar13 + 1) {
        param_8[iVar13] = fVar1;
      }
      return;
    }
  }
  else if (param_7 == 2) {
    iVar14 = 0;
    afStack_f4[0] = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1]);
    afStack_f4[1] = SQRT(param_3[2] * param_3[2] + param_3[3] * param_3[3]);
    afStack_f4[2] = SQRT(param_3[4] * param_3[4] + param_3[5] * param_3[5]);
    afStack_f4[3] = SQRT(param_3[6] * param_3[6] + param_3[7] * param_3[7]);
    iVar13 = 0;
    _local_c4 = CONCAT44(uStack_c0,param_4 - 5);
    if (0 < (int)(param_4 - 5)) {
      do {
        afStack_f4[(iVar14 + 4) % 5] =
             SQRT(param_3[iVar13 * 2 + 8] * param_3[iVar13 * 2 + 8] +
                  param_3[iVar13 * 2 + 9] * param_3[iVar13 * 2 + 9]);
        iVar10 = -0x14;
        _local_cc = CONCAT44(uStack_c8,0xffffffec);
        iVar11 = iVar14;
        fVar1 = _DAT_5f7607f0;
        fVar2 = _DAT_5f7607f4;
        do {
          fVar1 = *(float *)(&DAT_5f7607a8 + iVar10) * afStack_f4[iVar11] + fVar1;
          fVar2 = afStack_f4[iVar11] * *(float *)((int)&DAT_5f760794 + iVar10) + fVar2;
          iVar11 = iVar11 + 1;
          if (iVar11 == 5) {
            iVar11 = 0;
          }
          iVar10 = iVar10 + 4;
        } while (iVar10 != 0);
        iVar14 = iVar14 + 1;
        if (iVar14 == 5) {
          iVar14 = 0;
        }
        if (fVar2 <= _DAT_5f7607f8) {
          fVar2 = _DAT_5f760828;
        }
        fVar3 = fVar1 / fVar2;
        if (fVar1 / fVar2 < _DAT_5f760800) {
          fVar3 = _DAT_5f760804;
        }
        fVar1 = (fVar3 - _DAT_5f760808) * fVar3 + _DAT_5f76080c;
        if (_DAT_5f760810 < fVar1) {
          fVar1 = _DAT_5f760814;
        }
        if (fVar1 < _DAT_5f760818) {
          fVar1 = _DAT_5f76081c;
        }
        param_8[iVar13 + 2] = fVar1;
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_c4);
    }
    *param_8 = param_8[2];
    param_8[1] = param_8[2];
    iVar13 = local_c4 + -1;
    fVar1 = _DAT_5f760820;
    do {
      fVar1 = fVar1 + param_8[iVar13];
      iVar13 = iVar13 + 1;
    } while (iVar13 < local_c4 + 2);
    fVar1 = fVar1 * _DAT_5f760824;
    if (iVar13 < (int)param_4) {
      iVar14 = (param_4 - iVar13 & 0xfffffffe) + iVar13;
      for (; iVar13 < iVar14; iVar13 = iVar13 + 2) {
        param_8[iVar13] = fVar1;
        param_8[iVar13 + 1] = fVar1;
      }
      for (; iVar13 < (int)param_4; iVar13 = iVar13 + 1) {
        param_8[iVar13] = fVar1;
      }
      return;
    }
  }
  else if (param_7 == 1) {
    iVar13 = 0;
    if (0 < (int)param_4) {
      do {
        fVar1 = *(float *)(param_2 + 4 + iVar13 * 8);
        fVar2 = *(float *)(param_2 + iVar13 * 8);
        fVar6 = fVar2 * fVar2 + fVar1 * fVar1;
        fVar1 = *(float *)(param_2 + 4 + iVar13 * 8);
        fVar2 = *(float *)(param_2 + iVar13 * 8);
        fVar3 = param_3[iVar13 * 2];
        fVar4 = *(float *)(param_1 + 4 + iVar13 * 8);
        fVar5 = *(float *)(param_1 + iVar13 * 8);
        iVar14 = iVar13 + 1;
        fVar8 = fVar3 * fVar3 + param_3[iVar13 * 2 + 1] * param_3[iVar13 * 2 + 1];
        fVar9 = fVar5 * fVar5 + fVar4 * fVar4;
        if (((fVar6 < _DAT_5f7607a8) || (fVar9 < _DAT_5f7607a8)) || (fVar8 < _DAT_5f7607a8)) {
          param_8[iVar13] = param_6;
        }
        else {
          fVar7 = _DAT_5f76082c *
                  (*(float *)(param_1 + iVar13 * 8) * fVar2 +
                  *(float *)(param_1 + 4 + iVar13 * 8) * fVar1);
          fVar9 = _DAT_5f760830 / fVar9;
          fVar1 = (fVar1 * fVar7 - fVar4 * fVar6) * fVar9 * _DAT_5f760838;
          fVar4 = fVar9 * (fVar7 * fVar2 - fVar5 * fVar6) * _DAT_5f760834;
          fVar2 = (fVar3 - fVar4) * (fVar3 - fVar4) +
                  (param_3[iVar13 * 2 + 1] - fVar1) * (param_3[iVar13 * 2 + 1] - fVar1);
          fVar1 = fVar4 * fVar4 + fVar1 * fVar1;
          param_8[iVar13] = (SQRT(fVar8 * fVar2) - SQRT(fVar2 * fVar1)) / (fVar8 - fVar1);
        }
        iVar13 = iVar14;
      } while (iVar14 < (int)param_4);
    }
  }
  else {
    if (param_7 != 4) {
      FUN_5f6d9620(s_CalculateChaosMeasure___called_w_5f7608b0,
                   s_U__mp3_uptodate_ciEncoder_l3Enc__5f7608f0,0x8f);
      return;
    }
    FUN_5f708510(param_3,param_2);
  }
  return;
}


