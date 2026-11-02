/* Module: sftrans1.dll
   Function: FUN_004a7960
   Address: 004a7960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004a7cfe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a7960(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  float10 fVar13;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST1;
  int iStack_98;
  int local_84;
  int iStack_80;
  int local_78;
  int iStack_70;
  int iStack_64;
  int iStack_60;
  float fStack_5c;
  int local_58;
  float fStack_54;
  int local_50;
  float fStack_4c;
  int local_48;
  int local_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_58 = *(int *)(param_1 + 0x1c);
  local_44 = *(int *)(param_1 + 8);
  fVar1 = param_2[0xe6];
  fVar2 = _DAT_0055c008 - fVar1;
  local_48 = *(int *)(param_1 + 0x14);
  local_50 = *(int *)(param_1 + 0x18);
  local_84 = local_48;
  if (local_50 <= local_48) {
    local_84 = local_50;
  }
  local_38 = (float)local_84;
  local_c = -*param_2;
  local_8 = -param_2[1];
  local_78 = 0;
  if ((int)param_2[0xe3] < 1) {
    return 0;
  }
  fVar13 = (float10)fsin(-(float10)param_2[0xe8] * (float10)_DAT_005610e0);
  local_10 = (float)fVar13;
  local_24 = (float)local_48;
  local_28 = (float)local_50;
  do {
    local_1c = local_c * param_2[local_78 * 7 + 6] + *param_2;
    local_18 = local_8 * param_2[local_78 * 7 + 6] + param_2[1];
    local_14 = (param_2[local_78 * 7 + 6] - _DAT_0055c008) * local_10;
    _CIpow();
    uVar8 = ftol();
    fStack_20 = (float)(extraout_ST0 - (float10)(int)uVar8);
    uVar9 = ftol();
    iStack_70 = 0;
    iStack_98 = 0;
    fStack_30 = (float)(extraout_ST0_00 - (float10)(int)uVar9);
    iStack_80 = ftol();
    iStack_80 = iStack_80 - uVar8;
    iStack_64 = ftol();
    fStack_34 = param_2[0xe9] * param_2[0xea];
    iStack_64 = iStack_64 - uVar9;
    fStack_3c = param_2[0xeb] * param_2[0xe9];
    fStack_40 = param_2[0xec] * param_2[0xe9];
    fVar3 = _DAT_0055c008 - param_2[0xe9];
    if ((int)(((local_48 - iStack_80) - uVar8) - 1 | uVar8) < 0) {
      if ((int)uVar8 < 0) {
        iStack_70 = -uVar8;
        uVar8 = 0;
      }
      if (local_48 < (int)(iStack_80 + uVar8)) {
        iStack_80 = (iStack_70 - uVar8) + local_48;
      }
    }
    if ((int)(((local_50 - iStack_64) - uVar9) - 1 | uVar9) < 0) {
      if ((int)uVar9 < 0) {
        iStack_98 = -uVar9;
        uVar9 = 0;
      }
      if (local_50 < (int)(iStack_64 + uVar9)) {
        iStack_64 = (iStack_98 - uVar9) + local_50;
      }
    }
    local_84 = iStack_98;
    if (iStack_98 < iStack_64) {
      puVar11 = (undefined1 *)(uVar8 * param_3 + local_44 + uVar9 * local_58 + 1);
      do {
        iStack_60 = iStack_70;
        if (iStack_70 < iStack_80) {
          fVar4 = _DAT_0055c008 - ((float)local_84 - fStack_30) / (float)extraout_ST1;
          fStack_2c = fVar4 * fVar4;
          puVar12 = puVar11;
          do {
            fVar5 = _DAT_0055c008 - ((float)iStack_60 - fStack_20) / (float)extraout_ST0_01;
            iVar10 = (*(code *)(&PTR_LAB_0057579c)[(int)param_2[local_78 * 7 + 3]])
                               (&fStack_54,&fStack_5c,&fStack_4c,fVar5,fVar4,
                                SQRT(fVar5 * fVar5 + fStack_2c),
                                param_2[0xe5] * param_2[local_78 * 7 + 4],
                                fVar3 * param_2[(local_78 + 1) * 7] + fStack_34,
                                fVar3 * param_2[local_78 * 7 + 8] + fStack_3c,
                                fVar3 * param_2[local_78 * 7 + 9] + fStack_40);
            if (iVar10 == 1) {
              if (param_3 == 4) {
                uVar7 = ftol();
                puVar12[-1] = uVar7;
                uVar7 = ftol();
                *puVar12 = uVar7;
                uVar7 = ftol();
                puVar12[1] = uVar7;
              }
              else {
                fVar5 = _DAT_0055c008;
                if (*(float *)(puVar12 + 0xb) <= _DAT_0055c008) {
                  fVar5 = *(float *)(puVar12 + 0xb);
                }
                fVar6 = fStack_54 + *(float *)(puVar12 + -1);
                if (fVar5 < fStack_54 + *(float *)(puVar12 + -1)) {
                  fVar6 = fVar5;
                }
                *(float *)(puVar12 + -1) = fVar2 * *(float *)(puVar12 + -1) + fVar6 * fVar1;
                fVar6 = fStack_5c + *(float *)(puVar12 + 3);
                if (fVar5 < fStack_5c + *(float *)(puVar12 + 3)) {
                  fVar6 = fVar5;
                }
                *(float *)(puVar12 + 3) = fVar6 * fVar1 + fVar2 * *(float *)(puVar12 + 3);
                if (fStack_4c + *(float *)(puVar12 + 7) <= fVar5) {
                  fVar5 = fStack_4c + *(float *)(puVar12 + 7);
                }
                *(float *)(puVar12 + 7) = fVar5 * fVar1 + fVar2 * *(float *)(puVar12 + 7);
              }
            }
            puVar12 = puVar12 + param_3;
            iStack_60 = iStack_60 + 1;
          } while (iStack_60 < iStack_80);
        }
        puVar11 = puVar11 + local_58;
        local_84 = local_84 + 1;
      } while (local_84 < iStack_64);
    }
    local_78 = local_78 + 1;
  } while (local_78 < (int)param_2[0xe3]);
  return 0;
}


