/* Module: 14_43260.dll
   Function: FUN_100039e0
   Address: 100039e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100039e0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float *pfVar14;
  float10 fVar15;
  float afStackY_6f0 [4];
  undefined4 uStackY_6e0;
  float local_6c4 [99];
  float afStack_538 [89];
  float afStack_3d4 [11];
  float fStack_3a8;
  float local_3a4 [120];
  float local_1c4 [100];
  float local_34;
  float *local_30;
  float local_2c;
  int local_28;
  int local_24;
  float local_20;
  float *local_1c;
  float local_18;
  float *local_14;
  float *local_10;
  float local_c;
  float local_8;
  
  pfVar7 = (float *)(*(int *)(param_1 + 0x9aa) +
                    (*(int *)(param_1 + 0x99a) - *(size_t *)(param_1 + 0x992)) * 4);
  local_28 = param_1;
  pfVar5 = calloc(*(size_t *)(param_1 + 0x992),4);
  local_30 = pfVar5;
  pfVar14 = pfVar7 + *(int *)(param_1 + 0x992);
  if (pfVar7 < pfVar14) {
    iVar9 = (int)&DAT_10012630 - (int)pfVar5;
    pfVar6 = pfVar5;
    do {
      fVar1 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar5 = pfVar6 + 1;
      *pfVar6 = *(float *)((int)pfVar6 + iVar9) * fVar1;
      pfVar6 = pfVar5;
    } while (pfVar7 < pfVar14);
  }
  iVar9 = *(int *)(param_1 + 0x992);
  local_20 = (float)(iVar9 * 4);
  local_c = (float)(iVar9 * 4);
  local_1c = (float *)0x0;
  local_10 = pfVar5 + (10 - iVar9);
  local_8 = 1.4013e-44;
  local_24 = 0x30 - (int)local_3a4;
  do {
    pfVar14 = local_1c;
    iVar12 = *(int *)(param_1 + 0x992);
    pfVar7 = (float *)((int)local_3a4 + (int)local_1c);
    *pfVar7 = 0.0;
    if (10 < iVar12) {
      iVar12 = iVar12 + -10;
      iVar11 = 0x28;
      do {
        iVar12 = iVar12 + -1;
        *pfVar7 = *(float *)((int)pfVar5 + (iVar11 - (int)pfVar14) + iVar9 * -4) *
                  *(float *)((int)pfVar5 + iVar11 + 4 + iVar9 * -4 + -4) + *pfVar7;
        param_1 = local_28;
        iVar11 = iVar11 + 4;
      } while (iVar12 != 0);
    }
    if (0 < (int)local_8) {
      local_14 = pfVar5 + (9 - iVar9);
      local_18 = local_8;
      pfVar6 = (float *)((int)pfVar5 + (int)local_20 + iVar9 * -4 + -4);
      pfVar10 = (float *)((int)pfVar5 + (int)local_c + iVar9 * -4 + -4);
      iVar12 = local_24 + (int)pfVar7;
      pfVar7 = local_10;
      do {
        pfVar7 = pfVar7 + -1;
        fVar1 = *pfVar6;
        fVar2 = *pfVar10;
        pfVar10 = pfVar10 + -1;
        pfVar6 = pfVar6 + -1;
        fVar3 = *local_14;
        local_14 = local_14 + -1;
        fVar13 = (float)((int)local_18 + -1);
        local_18 = fVar13;
        *(float *)((int)local_3a4 + iVar12) =
             fVar3 * *pfVar7 + (*(float *)((int)afStack_3d4 + iVar12) - fVar1 * fVar2);
        iVar12 = iVar12 + 0x30;
        param_1 = local_28;
        pfVar14 = local_1c;
      } while (fVar13 != 0.0);
    }
    local_8 = (float)((int)local_8 + -1);
    local_1c = (float *)((int)pfVar14 + 4);
    local_10 = local_10 + -1;
    local_c = (float)((int)local_c + -4);
  } while (-1 < (int)local_8);
  local_14 = (float *)(*(int *)(param_1 + 0x992) + -10);
  fVar15 = FUN_10003ee0(param_1,SQRT(((float)*(int *)(param_1 + 0x996) *
                                     (local_3a4[0] + local_1c4[0])) /
                                     ((float)(int)local_14 + (float)(int)local_14)),0);
  *(float *)(param_1 + 0x9c6) = (float)fVar15;
  local_14 = (float *)0x0;
  local_c = 0.0;
  local_18 = 1.4013e-44;
  do {
    iVar9 = 0;
    if (-1 < (int)local_18) {
      local_10 = (float *)local_c;
      local_1c = (float *)(*(int *)(param_1 + 0xa4a) + (int)local_14 * 4);
      iVar11 = 0;
      iVar12 = 0;
      pfVar7 = local_14;
      do {
        local_8 = local_3a4[(int)pfVar7 + iVar12] * *local_1c;
        if ((iVar12 < 0x6e) && ((int)pfVar7 < 10)) {
          afStack_538[(int)pfVar7 + iVar11 + 1] = local_3a4[(int)pfVar7 + iVar12] * *local_1c;
        }
        if ((0 < iVar12) && (0 < (int)pfVar7)) {
          afStackY_6f0[(int)pfVar7 + iVar11] = local_8;
        }
        if ((((iVar12 < 0x6e) && (0 < (int)pfVar7)) &&
            (local_1c4[(int)pfVar7 + iVar11] = local_8, (int)pfVar7 < 10)) && (0 < iVar12)) {
          local_1c4[(int)local_10 + iVar9] = local_8;
        }
        iVar9 = iVar9 + 1;
        pfVar7 = (float *)((int)pfVar7 + 1);
        local_10 = (float *)((int)local_10 + 10);
        iVar12 = iVar12 + 0xb;
        iVar11 = iVar11 + 10;
      } while (iVar9 <= (int)local_18);
    }
    local_18 = (float)((int)local_18 + -1);
    local_14 = (float *)((int)local_14 + 1);
    local_c = (float)((int)local_c + 10);
  } while (-1 < (int)local_18);
  pfVar7 = *(float **)(param_1 + 0x9ca);
  local_14 = &local_34;
  local_1c = pfVar7;
  local_18 = 1.4013e-45;
  iVar9 = 8;
  local_10 = (float *)0x0;
  while( true ) {
    fVar1 = *(float *)((int)&fStack_3a8 + (int)local_10) +
            *(float *)((int)afStack_538 + (int)local_10) + local_6c4[0] + afStack_538[1];
    local_1c = pfVar7;
    if (fVar1 == (float)_DAT_10010c48) {
      *(undefined4 *)(param_1 + 0x9a2) = *(undefined4 *)(param_1 + 0x9a6);
      fVar15 = FUN_10003ee0(param_1,0.0,0);
      *(float *)(param_1 + 0x9c6) = (float)fVar15;
      *(int *)(param_1 + 0x9a2) = *(int *)(param_1 + 0x9a6) + 0x2c;
      free(local_30);
      return;
    }
    fVar2 = (*local_14 + local_1c4[1]) * _DAT_10010c50;
    if (fVar1 <= ABS(fVar2)) break;
    fVar15 = FUN_10003ee0(param_1,fVar2 / fVar1,(int)local_18);
    local_c = (float)fVar15;
    *pfVar7 = (float)fVar15;
    if (local_10 == (float *)0xfffffe74) goto LAB_10003ec5;
    iVar12 = 0;
    if (-1 < iVar9 + 1) {
      local_24 = 0;
      do {
        if (iVar12 <= iVar9 + 1) {
          fVar1 = local_c * local_c;
          pfVar7 = (float *)((int)local_1c4 + local_24 + 4);
          iVar11 = local_24;
          iVar8 = iVar12;
          do {
            local_20 = *pfVar7;
            local_2c = *(float *)((int)local_1c4 + iVar11 + 4);
            fVar2 = *(float *)((int)afStack_538 + iVar11 + 4);
            fVar3 = *(float *)((int)local_6c4 + iVar11);
            local_8 = (*pfVar7 + local_2c) * local_c;
            if ((iVar12 <= iVar9) && (iVar8 <= iVar9)) {
              *(float *)((int)afStack_538 + iVar11 + 4) = fVar1 * fVar3 + local_8 + fVar2;
            }
            iVar4 = local_24;
            if ((0 < local_24) && (0 < iVar8)) {
              *(float *)((int)afStackY_6f0 + iVar11) = fVar1 * fVar2 + local_8 + fVar3;
            }
            local_8 = (fVar3 + fVar2) * local_c;
            if ((iVar12 <= iVar9) && (0 < iVar8)) {
              *(float *)((int)local_1c4 + iVar11) = fVar1 * local_20 + local_8 + local_2c;
            }
            if ((iVar8 <= iVar9) && (0 < iVar4)) {
              pfVar7[-1] = fVar1 * local_2c + local_8 + local_20;
            }
            iVar8 = iVar8 + 1;
            iVar11 = iVar11 + 4;
            pfVar7 = pfVar7 + 10;
          } while (iVar8 <= iVar9 + 1);
        }
        iVar12 = iVar12 + 1;
        local_24 = local_24 + 0x2c;
      } while (iVar12 <= iVar9 + 1);
    }
    pfVar7 = local_1c + 1;
    local_18 = (float)((int)local_18 + 1);
    local_10 = (float *)((int)local_10 + -0x2c);
    iVar9 = iVar9 + -1;
    local_1c = pfVar7;
    local_14 = local_14 + -0xb;
    param_1 = local_28;
    if ((int)local_10 < -0x18c) {
      free(local_30);
      return;
    }
  }
  if (*(uint *)(param_1 + 0x9a2) < *(int *)(param_1 + 0x9a6) + 0x2cU) {
    do {
      fVar15 = FUN_10003ee0(param_1,0.0,((int)pfVar7 - *(int *)(param_1 + 0x9ca) >> 2) + 1);
      *pfVar7 = (float)fVar15;
      pfVar7 = pfVar7 + 1;
    } while (*(uint *)(param_1 + 0x9a2) < *(int *)(param_1 + 0x9a6) + 0x2cU);
  }
  uStackY_6e0 = 0x10003ec2;
  fprintf((FILE *)(_iob_exref + 0x40),s__WARNING_FROM_FLATV__k_s_unstabl_100128d7 + 1);
LAB_10003ec5:
  free(local_30);
  return;
}


