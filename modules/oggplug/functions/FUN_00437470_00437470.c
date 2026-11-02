/* Module: oggplug.dll
   Function: FUN_00437470
   Address: 00437470
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00437470(int *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  byte bVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  int *piVar17;
  int iVar18;
  uint uVar19;
  int local_1c;
  
  iVar18 = *param_1 >> 1;
  iVar6 = *param_1 >> 2;
  iVar7 = iVar6 * 4;
  pfVar10 = (float *)(param_3 + (iVar6 + iVar18) * 4);
  pfVar9 = (float *)(iVar7 + param_1[2]);
  pfVar16 = param_2 + iVar18 + -7;
  pfVar12 = pfVar10;
  do {
    pfVar8 = pfVar16 + -8;
    pfVar12[-4] = -(pfVar16[2] * pfVar9[3]) - *pfVar16 * pfVar9[2];
    pfVar12[-3] = *pfVar16 * pfVar9[3] - pfVar16[2] * pfVar9[2];
    pfVar12[-2] = -(pfVar9[1] * pfVar16[6]) - pfVar16[4] * *pfVar9;
    pfVar12[-1] = pfVar9[1] * pfVar16[4] - *pfVar9 * pfVar16[6];
    pfVar9 = pfVar9 + 4;
    pfVar16 = pfVar8;
    pfVar12 = pfVar12 + -4;
  } while (param_2 <= pfVar8);
  pfVar9 = (float *)(iVar7 + param_1[2]);
  pfVar16 = param_2 + iVar18 + -8;
  pfVar12 = pfVar10;
  do {
    pfVar8 = pfVar9 + -4;
    pfVar14 = pfVar16 + -8;
    *pfVar12 = pfVar9[-2] * pfVar16[6] + pfVar16[4] * pfVar9[-1];
    pfVar12[1] = pfVar16[4] * pfVar9[-2] - pfVar9[-1] * pfVar16[6];
    pfVar12[2] = *pfVar16 * pfVar9[-3] + pfVar16[2] * *pfVar8;
    pfVar12[3] = *pfVar16 * *pfVar8 - pfVar9[-3] * pfVar16[2];
    pfVar9 = pfVar8;
    pfVar16 = pfVar14;
    pfVar12 = pfVar12 + 4;
  } while (param_2 <= pfVar14);
  pfVar9 = (float *)param_1[2];
  pfVar16 = (float *)(iVar18 * 4 + param_3);
  local_1c = param_1[1];
  if (0 < local_1c + -6) {
    pfVar12 = pfVar16 + iVar6 + -8 + (iVar18 - iVar6) + 7;
    pfVar8 = pfVar16 + iVar6 + -8;
    pfVar14 = pfVar9 + 4;
    do {
      fVar1 = pfVar12[-1];
      fVar2 = pfVar8[6];
      fVar3 = *pfVar12;
      fVar4 = pfVar8[7];
      pfVar12[-1] = pfVar12[-1] + pfVar8[6];
      *pfVar12 = pfVar8[7] + *pfVar12;
      pfVar8[6] = (fVar1 - fVar2) * pfVar14[-4] + (fVar3 - fVar4) * pfVar14[-3];
      pfVar8[7] = (fVar3 - fVar4) * pfVar14[-4] - (fVar1 - fVar2) * pfVar14[-3];
      fVar1 = pfVar12[-3];
      fVar2 = pfVar8[4];
      fVar3 = pfVar12[-2];
      fVar4 = pfVar8[5];
      pfVar12[-3] = pfVar8[4] + pfVar12[-3];
      pfVar12[-2] = pfVar12[-2] + pfVar8[5];
      pfVar8[4] = (fVar1 - fVar2) * *pfVar14 + (fVar3 - fVar4) * pfVar14[1];
      pfVar8[5] = (fVar3 - fVar4) * *pfVar14 - (fVar1 - fVar2) * pfVar14[1];
      fVar1 = pfVar12[-5];
      fVar2 = pfVar8[2];
      fVar3 = pfVar12[-4];
      fVar4 = pfVar8[3];
      pfVar12[-5] = pfVar8[2] + pfVar12[-5];
      pfVar12[-4] = pfVar12[-4] + pfVar8[3];
      pfVar8[2] = (fVar1 - fVar2) * pfVar14[4] + (fVar3 - fVar4) * pfVar14[5];
      pfVar8[3] = (fVar3 - fVar4) * pfVar14[4] - (fVar1 - fVar2) * pfVar14[5];
      fVar1 = pfVar12[-7];
      fVar2 = *pfVar8;
      fVar3 = pfVar12[-6];
      fVar4 = pfVar8[1];
      pfVar12[-7] = pfVar12[-7] + *pfVar8;
      pfVar12[-6] = pfVar8[1] + pfVar12[-6];
      pfVar13 = pfVar8 + -8;
      pfVar12 = pfVar12 + -8;
      *pfVar8 = (fVar1 - fVar2) * pfVar14[8] + (fVar3 - fVar4) * pfVar14[9];
      pfVar8[1] = (fVar3 - fVar4) * pfVar14[8] - (fVar1 - fVar2) * pfVar14[9];
      pfVar8 = pfVar13;
      pfVar14 = pfVar14 + 0x10;
    } while (pfVar16 <= pfVar13);
  }
  local_1c = local_1c + -7;
  bVar11 = 1;
  if (0 < local_1c) {
    do {
      param_2 = (float *)(1 << (bVar11 & 0x1f));
      if (0 < (int)param_2) {
        iVar6 = iVar18 >> (bVar11 & 0x1f);
        pfVar12 = pfVar16;
        do {
          FUN_00437e90(pfVar9,pfVar12,iVar6,4 << (bVar11 & 0x1f));
          pfVar12 = pfVar12 + iVar6;
          param_2 = (float *)((int)param_2 + -1);
        } while (param_2 != (float *)0x0);
      }
      bVar11 = bVar11 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  if (0 < iVar18) {
    uVar19 = iVar18 + 0x1fU >> 5;
    pfVar9 = pfVar16;
    do {
      FUN_00437980(pfVar9);
      pfVar9 = pfVar9 + 0x20;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  piVar17 = (int *)param_1[3];
  iVar6 = param_3 + (*param_1 >> 1) * 4;
  pfVar9 = (float *)(param_1[2] + *param_1 * 4);
  pfVar12 = (float *)(iVar6 + 0xc);
  pfVar8 = (float *)(param_3 + 8);
  do {
    iVar5 = piVar17[1];
    fVar1 = *(float *)(iVar6 + 4 + *piVar17 * 4) - *(float *)(iVar6 + 4 + iVar5 * 4);
    pfVar14 = (float *)(iVar6 + *piVar17 * 4);
    pfVar13 = (float *)(iVar6 + iVar5 * 4);
    fVar2 = *(float *)(iVar6 + iVar5 * 4) + *pfVar14;
    fVar3 = fVar1 * pfVar9[1] + fVar2 * *pfVar9;
    fVar1 = fVar2 * pfVar9[1] - fVar1 * *pfVar9;
    fVar2 = (pfVar13[1] + pfVar14[1]) * _DAT_0044d71c;
    fVar4 = (*pfVar14 - *pfVar13) * _DAT_0044d71c;
    pfVar8[-2] = fVar3 + fVar2;
    pfVar12[-5] = fVar2 - fVar3;
    pfVar8[-1] = fVar1 + fVar4;
    pfVar12[-4] = fVar1 - fVar4;
    iVar5 = piVar17[3];
    fVar1 = *(float *)(iVar6 + 4 + piVar17[2] * 4) - *(float *)(iVar6 + 4 + iVar5 * 4);
    pfVar14 = (float *)(iVar6 + piVar17[2] * 4);
    pfVar13 = (float *)(iVar6 + iVar5 * 4);
    fVar2 = *(float *)(iVar6 + iVar5 * 4) + *pfVar14;
    fVar3 = fVar1 * pfVar9[3] + fVar2 * pfVar9[2];
    fVar1 = fVar2 * pfVar9[3] - fVar1 * pfVar9[2];
    fVar2 = (pfVar13[1] + pfVar14[1]) * _DAT_0044d71c;
    fVar4 = (*pfVar14 - *pfVar13) * _DAT_0044d71c;
    *pfVar8 = fVar3 + fVar2;
    pfVar12[-7] = fVar2 - fVar3;
    pfVar8[1] = fVar1 + fVar4;
    pfVar14 = pfVar12 + -7;
    pfVar9 = pfVar9 + 4;
    piVar17 = piVar17 + 4;
    pfVar13 = pfVar8 + 2;
    pfVar12[-6] = fVar1 - fVar4;
    pfVar12 = pfVar12 + -4;
    pfVar8 = pfVar8 + 4;
  } while (pfVar13 < pfVar14);
  pfVar9 = (float *)(param_3 + 0xc);
  pfVar12 = (float *)(iVar18 * 4 + param_1[2]);
  pfVar8 = pfVar10;
  pfVar14 = pfVar10;
  do {
    pfVar15 = pfVar8 + -4;
    pfVar13 = pfVar9 + 5;
    pfVar8[-1] = pfVar12[1] * pfVar9[-3] - pfVar9[-2] * *pfVar12;
    *pfVar14 = -(pfVar9[-3] * *pfVar12 + pfVar12[1] * pfVar9[-2]);
    pfVar8[-2] = pfVar9[-1] * pfVar12[3] - *pfVar9 * pfVar12[2];
    pfVar14[1] = -(pfVar9[-1] * pfVar12[2] + *pfVar9 * pfVar12[3]);
    pfVar8[-3] = pfVar9[1] * pfVar12[5] - pfVar9[2] * pfVar12[4];
    pfVar14[2] = -(pfVar9[1] * pfVar12[4] + pfVar9[2] * pfVar12[5]);
    *pfVar15 = pfVar9[3] * pfVar12[7] - pfVar9[4] * pfVar12[6];
    pfVar14[3] = -(pfVar9[3] * pfVar12[6] + pfVar9[4] * pfVar12[7]);
    pfVar9 = pfVar9 + 8;
    pfVar12 = pfVar12 + 8;
    pfVar8 = pfVar15;
    pfVar14 = pfVar14 + 4;
  } while (pfVar13 < pfVar15);
  pfVar9 = pfVar10;
  pfVar12 = (float *)(iVar7 + 8 + param_3);
  pfVar8 = pfVar10 + (2 - iVar18);
  do {
    fVar1 = pfVar9[-1];
    pfVar15 = pfVar9 + -4;
    pfVar8[-3] = fVar1;
    pfVar12[-2] = -fVar1;
    fVar1 = pfVar9[-2];
    pfVar14 = pfVar12 + 2;
    pfVar8[-4] = fVar1;
    pfVar12[-1] = -fVar1;
    fVar1 = pfVar9[-3];
    pfVar8[-5] = fVar1;
    *pfVar12 = -fVar1;
    fVar1 = *pfVar15;
    pfVar8[-6] = fVar1;
    pfVar12[1] = -fVar1;
    pfVar9 = pfVar15;
    pfVar13 = pfVar10;
    pfVar12 = pfVar12 + 4;
    pfVar8 = pfVar8 + -4;
  } while (pfVar14 < pfVar15);
  do {
    pfVar9 = pfVar10 + -4;
    *pfVar9 = pfVar13[3];
    pfVar10[-3] = pfVar13[2];
    pfVar10[-2] = pfVar13[1];
    pfVar10[-1] = *pfVar13;
    pfVar10 = pfVar9;
    pfVar13 = pfVar13 + 4;
  } while (pfVar16 < pfVar9);
  return;
}


