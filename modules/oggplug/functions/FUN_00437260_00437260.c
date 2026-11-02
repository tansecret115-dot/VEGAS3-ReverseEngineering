/* Module: oggplug.dll
   Function: FUN_00437260
   Address: 00437260
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00437260(int *param_1,int param_2)

{
  float10 fVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  byte bVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  int local_10;
  int local_c;
  
  iVar11 = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
  piVar2 = malloc(iVar11 * 4);
  pfVar3 = malloc((iVar11 + param_2) * 4);
  fVar1 = (float10)log2((float10)param_2);
  fVar16 = (float10)log2((float10)_DAT_0044d710);
  floor((double)(((float10)0.6931471805599453 * fVar1) / ((float10)0.6931471805599453 * fVar16) +
                (float10)_DAT_00447a78));
  iVar4 = ftol();
  param_1[1] = iVar4;
  *param_1 = param_2;
  param_1[2] = (int)pfVar3;
  param_1[3] = (int)piVar2;
  if (0 < iVar11) {
    local_10 = 0;
    fVar1 = (float10)_DAT_0044d7c4;
    local_c = 1;
    fVar16 = (float10)_DAT_0044d7c4;
    pfVar5 = pfVar3;
    pfVar7 = pfVar3 + (param_2 >> 1);
    do {
      fVar14 = (float10)local_10;
      local_10 = local_10 + 4;
      fVar14 = fVar14 * (fVar1 / (float10)param_2);
      iVar11 = iVar11 + -1;
      fVar15 = (float10)fcos(fVar14);
      *pfVar5 = (float)fVar15;
      fVar14 = (float10)fsin(fVar14);
      pfVar5[1] = (float)-fVar14;
      fVar14 = (float10)local_c * (fVar16 / (float10)(param_2 * 2));
      fVar15 = (float10)fcos(fVar14);
      *pfVar7 = (float)fVar15;
      fVar14 = (float10)fsin(fVar14);
      pfVar7[1] = (float)fVar14;
      pfVar5 = pfVar5 + 2;
      pfVar7 = pfVar7 + 2;
      local_c = local_c + 2;
    } while (iVar11 != 0);
  }
  iVar11 = (int)((param_2 >> 0x1f & 7U) + param_2) >> 3;
  if (0 < iVar11) {
    local_c = 2;
    fVar1 = (float10)_DAT_0044d7c4;
    iVar8 = iVar11;
    pfVar3 = pfVar3 + param_2;
    do {
      fVar16 = (float10)local_c;
      local_c = local_c + 4;
      iVar8 = iVar8 + -1;
      fVar16 = fVar16 * (fVar1 / (float10)param_2);
      fVar14 = (float10)fcos(fVar16);
      *pfVar3 = (float)(fVar14 * (float10)_DAT_00447a78);
      fVar16 = (float10)fsin(fVar16);
      pfVar3[1] = (float)(fVar16 * (float10)_DAT_0044d7d0);
      pfVar3 = pfVar3 + 2;
    } while (iVar8 != 0);
  }
  uVar10 = 0;
  uVar12 = 1 << ((char)iVar4 - 2U & 0x1f);
  if (0 < iVar11) {
    do {
      uVar13 = 0;
      bVar6 = 0;
      uVar9 = uVar12;
      while (uVar9 != 0) {
        if ((uVar10 & uVar9) != 0) {
          uVar13 = uVar13 | 1 << (bVar6 & 0x1f);
        }
        bVar6 = bVar6 + 1;
        uVar9 = (int)uVar12 >> (bVar6 & 0x1f);
      }
      uVar10 = uVar10 + 1;
      *piVar2 = (~uVar13 & (1 << ((char)iVar4 - 1U & 0x1f)) - 1U) - 1;
      piVar2[1] = uVar13;
      piVar2 = piVar2 + 2;
    } while ((int)uVar10 < iVar11);
  }
  param_1[4] = (int)(_DAT_0044d7c8 / (float)param_2);
  return;
}


