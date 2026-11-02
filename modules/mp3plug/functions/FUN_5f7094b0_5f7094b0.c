/* Module: mp3plug.dll
   Function: FUN_5f7094b0
   Address: 5f7094b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_5f7094b0(uint *param_1,int param_2,int param_3,int param_4,undefined4 param_5,float *param_6,
            float *param_7,float *param_8)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  uint local_84;
  uint uStack_80;
  uint local_74;
  uint uStack_70;
  uint local_64;
  
  local_64 = param_1[0xee];
  iVar16 = 0;
  if (0 < (int)local_64) {
    do {
      uVar2 = param_1[0xeb];
      fVar1 = (float)*(int *)(param_1[2] + iVar16 * 4);
      uVar17 = param_1[3];
      fVar3 = fVar1 * (float)param_1[0xed] + _DAT_5f74b530;
      dVar19 = (double)(((float)*(int *)(param_1[1] + iVar16 * 4) + fVar1) * (float)param_1[0xed] +
                       _DAT_5f74b530);
      iVar14 = 0;
      iVar12 = iVar14;
      fVar1 = _DAT_5f7609b0;
      if (0 < (int)uVar17) {
        do {
          iVar12 = iVar14;
          if (((fVar3 <= (float)(int)param_1[iVar14 + 5]) ||
              (iVar12 = iVar14 + 1, (int)uVar17 <= iVar12)) ||
             (fVar3 <= (float)(int)param_1[iVar14 + 6])) break;
          iVar14 = iVar14 + 2;
          iVar12 = iVar14;
        } while (iVar14 < (int)uVar17);
      }
      while ((iVar12 < (int)uVar17 && ((double)(int)param_1[iVar12 + 4] < dVar19))) {
        fVar4 = *(float *)(param_2 + iVar12 * 4) / (float)(int)param_1[iVar12 + 0x78];
        if (fVar1 < fVar4) {
          fVar4 = fVar1;
        }
        iVar12 = iVar12 + 1;
        fVar1 = fVar4;
      }
      dVar18 = floor((double)fVar3);
      uStack_80 = (uint)((ulonglong)dVar18 >> 0x20);
      local_84 = SUB84(dVar18,0);
      uVar17 = uStack_80 >> 0x14 & 0x7ff;
      if (uVar17 < 0x3ff) {
        uVar17 = 0;
      }
      else {
        uVar17 = (uStack_80 << 0xb | local_84 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar17 & 0x1f)
        ;
        if ((longlong)dVar18 < 0) {
          uVar17 = -uVar17;
        }
      }
      dVar19 = ceil(dVar19);
      uStack_70 = (uint)((ulonglong)dVar19 >> 0x20);
      local_74 = SUB84(dVar19,0);
      uVar15 = uStack_70 >> 0x14 & 0x7ff;
      if (uVar15 < 0x3ff) {
        uVar15 = 0;
      }
      else {
        uVar15 = (uStack_70 << 0xb | local_74 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar15 & 0x1f)
        ;
        if ((longlong)dVar19 < 0) {
          uVar15 = -uVar15;
        }
      }
      if ((int)uVar2 <= (int)uVar15) {
        uVar15 = uVar2;
      }
      param_7[iVar16] = 0.0;
      param_6[iVar16] = 0.0;
      if ((int)uVar17 < (int)uVar15) {
        iVar12 = param_4 + uVar15 * 8;
        pfVar11 = (float *)(param_4 + uVar17 * 8);
        iVar14 = (iVar12 - (int)pfVar11 & 0xfffffff0U) + (int)pfVar11;
        for (; (int)pfVar11 < iVar14; pfVar11 = pfVar11 + 4) {
          param_6[iVar16] = param_6[iVar16] + fVar1;
          param_7[iVar16] = pfVar11[1] * pfVar11[1] + *pfVar11 * *pfVar11 + param_7[iVar16];
          param_6[iVar16] = param_6[iVar16] + fVar1;
          param_7[iVar16] = pfVar11[3] * pfVar11[3] + pfVar11[2] * pfVar11[2] + param_7[iVar16];
        }
        for (; (int)pfVar11 < iVar12; pfVar11 = pfVar11 + 2) {
          param_6[iVar16] = param_6[iVar16] + fVar1;
          param_7[iVar16] = pfVar11[1] * pfVar11[1] + *pfVar11 * *pfVar11 + param_7[iVar16];
        }
      }
      iVar16 = iVar16 + 1;
      local_64 = param_1[0xee];
    } while (iVar16 < (int)local_64);
  }
  fVar3 = _DAT_5f74b530;
  fVar1 = (float)param_1[0xed];
  uVar2 = param_1[2];
  uVar17 = param_1[1];
  uVar15 = param_1[3];
  iVar16 = 0;
  iVar12 = 0;
  uVar13 = *param_1;
  if (0 < (int)uVar13) {
    do {
      fVar4 = (float)*(int *)(uVar2 + iVar12 * 4);
      fVar5 = ((float)*(int *)(uVar17 + iVar12 * 4) + fVar4) * fVar1 + fVar3;
      fVar4 = fVar4 * fVar1 + fVar3;
      fVar6 = _DAT_5f7609bc;
      fVar8 = _DAT_5f7609c0;
      for (; iVar16 < (int)uVar15; iVar16 = iVar16 + 1) {
        fVar7 = (float)(int)param_1[iVar16 + 4];
        if ((float)(int)param_1[iVar16 + 4] < fVar4) {
          fVar7 = fVar4;
        }
        fVar10 = (float)(int)(param_1[iVar16 + 4] + param_1[iVar16 + 0x78]);
        fVar9 = fVar10;
        if (fVar5 < fVar10) {
          fVar9 = fVar5;
        }
        fVar7 = (fVar9 - fVar7) / (float)(int)param_1[iVar16 + 0x78];
        fVar6 = fVar6 + *(float *)(param_3 + iVar16 * 4) * fVar7;
        fVar8 = fVar7 * *(float *)(param_2 + iVar16 * 4) + fVar8;
        if (fVar5 <= fVar10) break;
      }
      if ((int)local_64 <= iVar12) {
        param_7[iVar12] = fVar6;
        param_6[iVar12] = fVar8;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)uVar13);
    uVar13 = *param_1;
  }
  iVar16 = 0;
  if (0 < (int)uVar13) {
    do {
      if (param_7[iVar16] <= _DAT_5f7609c8) {
        param_7[iVar16] = param_6[iVar16];
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)uVar13);
  }
  FUN_5f6d4e60(param_6,param_7,param_8,*param_1);
  return;
}


