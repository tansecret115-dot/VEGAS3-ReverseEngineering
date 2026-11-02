/* Module: mp3plug.dll
   Function: FUN_5f6fabf0
   Address: 5f6fabf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_5f6fabf0(int param_1,int param_2,int param_3,int param_4,int param_5,uint *param_6,
            float *param_7,int param_8,int param_9,int param_10,int param_11)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  double dVar13;
  uint local_ac;
  uint uStack_a8;
  uint local_9c;
  uint uStack_98;
  double local_84;
  double local_44;
  
  iVar8 = 0;
  local_84 = (double)_DAT_5f75e47c;
  if (0 < param_3) {
    fVar3 = (_DAT_5f75e484 / (float)param_1) * (float)param_2;
    do {
      fVar9 = (float10)*(int *)(param_4 + iVar8 * 4) * (float10)fVar3;
      fVar10 = (float10)fpatan((float10)_DAT_5f75e488 * fVar9,(float10)1);
      fVar11 = (float10)fpatan((float10)_DAT_5f75e48c * (float10)(double)fVar9,(float10)1);
      fVar9 = (float10)*(int *)(param_4 + 4 + iVar8 * 4) * (float10)fVar3;
      fVar12 = (float10)fpatan((float10)_DAT_5f75e49c * fVar9,(float10)1);
      fVar9 = (float10)fpatan((float10)_DAT_5f75e4a0 * (float10)(double)fVar9,(float10)1);
      if (((float10)_DAT_5f75e4b0 * (float10)(double)fVar12 * (float10)(double)fVar12 +
           fVar9 * (float10)_DAT_5f75e4a8 +
          (float10)(double)((float10)_DAT_5f75e498 * (float10)(double)fVar10 *
                            (float10)(double)fVar10 + fVar11 * (float10)_DAT_5f75e490)) *
          (float10)_DAT_5f75e4b4 < (float10)_DAT_5f75e478) {
        fVar9 = (float10)*(int *)(param_4 + iVar8 * 4) * (float10)fVar3;
        fVar10 = (float10)fpatan((float10)_DAT_5f75e4b8 * fVar9,(float10)1);
        fVar11 = (float10)fpatan((float10)_DAT_5f75e4bc * (float10)(double)fVar9,(float10)1);
        fVar9 = (float10)*(int *)(param_4 + 4 + iVar8 * 4) * (float10)fVar3;
        fVar12 = (float10)fpatan((float10)_DAT_5f75e4cc * fVar9,(float10)1);
        fVar9 = (float10)fpatan((float10)_DAT_5f75e4d0 * (float10)(double)fVar9,(float10)1);
        local_44 = (double)(((float10)_DAT_5f75e4e0 * (float10)(double)fVar12 *
                             (float10)(double)fVar12 + fVar9 * (float10)_DAT_5f75e4d8 +
                            (float10)(double)((float10)_DAT_5f75e4c8 * (float10)(double)fVar10 *
                                              (float10)(double)fVar10 +
                                             fVar11 * (float10)_DAT_5f75e4c0)) *
                           (float10)_DAT_5f75e4e4);
      }
      else {
        local_44 = (double)_DAT_5f75e478;
      }
      dVar13 = (double)((_DAT_5f75e4ec / (_DAT_5f75e418 - _DAT_5f75e41c)) * (float)local_44);
      uStack_a8 = (uint)((ulonglong)dVar13 >> 0x20);
      local_ac = SUB84(dVar13,0);
      uVar6 = uStack_a8 >> 0x14 & 0x7ff;
      if (uVar6 < 0x3ff) {
        uVar6 = 0;
      }
      else {
        uVar6 = (uStack_a8 << 0xb | local_ac >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar6 & 0x1f);
        if ((longlong)dVar13 < 0) {
          uVar6 = -uVar6;
        }
      }
      *(uint *)(param_5 + iVar8 * 4) = uVar6;
      *(undefined4 *)(param_8 + iVar8 * 4) = 0x3f800000;
      if (iVar8 < 1) {
        *(undefined4 *)(param_11 + iVar8 * 4) = 0;
        *(undefined4 *)(param_10 + -4 + param_3 * 4) = 0;
      }
      else {
        dVar13 = pow(_DAT_5f75e4f8,
                     -((double)_DAT_5f75e474 * (local_44 - local_84)) * (double)_DAT_5f75e500);
        *(float *)(param_11 + iVar8 * 4) = (float)dVar13;
        dVar13 = pow(_DAT_5f75e508,
                     -((local_44 - local_84) * (double)_DAT_5f75e470) * (double)_DAT_5f75e510);
        *(float *)(param_10 + -4 + iVar8 * 4) = (float)dVar13;
      }
      iVar8 = iVar8 + 1;
      local_84 = local_44;
    } while (iVar8 < param_3);
  }
  dVar13 = (double)(_DAT_5f75e518 / (_DAT_5f75e418 - _DAT_5f75e41c));
  uStack_98 = (uint)((ulonglong)dVar13 >> 0x20);
  local_9c = SUB84(dVar13,0);
  uVar6 = uStack_98 >> 0x14 & 0x7ff;
  if (uVar6 < 0x3ff) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uStack_98 << 0xb | local_9c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar6 & 0x1f);
    if ((longlong)dVar13 < 0) {
      uVar6 = -uVar6;
    }
  }
  *param_6 = uVar6;
  iVar8 = 0;
  if (0 < param_3) {
    do {
      iVar7 = 0;
      iVar2 = *(int *)(param_5 + iVar8 * 4);
      iVar4 = iVar8;
      fVar3 = _DAT_5f75e400;
      if (-1 < iVar8) {
        do {
          fVar3 = *(float *)(param_8 + iVar4 * 4) * *(float *)(param_9 + 600 + iVar7 * 4) + fVar3;
          iVar7 = iVar2 - *(int *)(param_5 + -4 + iVar4 * 4);
          if (iVar4 + -1 < 0) break;
          iVar4 = iVar4 + -1;
        } while (iVar7 < 500);
      }
      iVar4 = iVar8 + 1;
      iVar5 = iVar4;
      for (iVar7 = *(int *)(param_5 + 4 + iVar8 * 4);
          (iVar5 < param_3 && (iVar7 = iVar2 - iVar7, -0x96 < iVar7));
          iVar7 = *(int *)(param_5 + 4 + iVar7)) {
        fVar3 = *(float *)(param_8 + iVar5 * 4) * *(float *)(param_9 + 600 + iVar7 * 4) + fVar3;
        iVar7 = iVar5 * 4;
        iVar5 = iVar5 + 1;
      }
      param_7[iVar8] = fVar3;
      iVar8 = iVar4;
    } while (iVar4 < param_3);
  }
  if (0 < param_3) {
    pfVar1 = param_7 + param_3;
    iVar8 = ((int)pfVar1 - (int)param_7 & 0xfffffff8U) + (int)param_7;
    for (; (int)param_7 < iVar8; param_7 = param_7 + 2) {
      *param_7 = _DAT_5f75e520 / *param_7;
      param_7[1] = _DAT_5f75e520 / param_7[1];
    }
    if ((int)param_7 < (int)pfVar1) {
      while( true ) {
        if ((int)pfVar1 <= (int)(param_7 + 1)) break;
        *param_7 = _DAT_5f75e520 / *param_7;
        param_7 = param_7 + 1;
      }
      *param_7 = _DAT_5f75e520 / *param_7;
    }
  }
  return;
}


