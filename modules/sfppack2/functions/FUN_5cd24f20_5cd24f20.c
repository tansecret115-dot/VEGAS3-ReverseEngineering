/* Module: sfppack2.dll
   Function: FUN_5cd24f20
   Address: 5cd24f20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cd24f20(undefined4 *param_1,double *param_2,uint param_3,int param_4,double param_5)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  uint local_24;
  
  if ((param_4 == 0) && (iVar2 = FUN_5cd264b0(param_1,1), iVar2 == 0)) {
    return 0;
  }
  FUN_5cd25110(param_2,param_3);
  iVar2 = FUN_5cd264b0(param_1,1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar8 = 2;
  if (2 < param_3) {
    do {
      fVar9 = (float10)_DAT_5cd525a0 / (float10)uVar8;
      if (param_4 == 0) {
        fVar9 = -fVar9;
      }
      fVar10 = (float10)fsin(fVar9 * (float10)_DAT_5cd514e8);
      local_24 = 0;
      fVar9 = (float10)fsin(fVar9);
      fVar11 = (float10)_DAT_5cd51520;
      if (uVar8 != 0) {
        fVar12 = (float10)(double)(fVar10 * fVar10 * (float10)_DAT_5cd58948);
        pdVar4 = param_2 + uVar8;
        pdVar6 = param_2;
        uVar7 = local_24;
        fVar10 = (float10)_DAT_5cd51510;
        pdVar5 = param_2;
        pdVar3 = pdVar4;
        do {
          for (; uVar7 < param_3; uVar7 = uVar7 + uVar8 * 2) {
            fVar13 = fVar10 * (float10)*pdVar4 - fVar11 * (float10)pdVar4[1];
            fVar14 = fVar11 * (float10)*pdVar4 + fVar10 * (float10)pdVar4[1];
            *pdVar4 = (double)((float10)*pdVar6 - fVar13);
            pdVar4[1] = (double)((float10)pdVar6[1] - fVar14);
            pdVar4 = pdVar4 + uVar8 * 2;
            *pdVar6 = (double)(fVar13 + (float10)*pdVar6);
            pdVar6[1] = (double)fVar14 + pdVar6[1];
            pdVar6 = pdVar6 + uVar8 * 2;
          }
          fVar13 = fVar11 * fVar9;
          uVar7 = local_24 + 2;
          pdVar6 = pdVar5 + 2;
          pdVar4 = pdVar3 + 2;
          fVar11 = fVar10 * fVar9 + (fVar12 + (float10)_DAT_5cd51510) * fVar11;
          local_24 = uVar7;
          fVar10 = (fVar10 * fVar12 - fVar13) + fVar10;
          pdVar5 = pdVar6;
          pdVar3 = pdVar4;
        } while (uVar7 < uVar8);
      }
      iVar2 = FUN_5cd264b0(param_1,1);
      if (iVar2 == 0) {
        return 0;
      }
      uVar8 = uVar8 * 2;
    } while (uVar8 < param_3);
  }
  dVar1 = _DAT_5cd514e0;
  if (param_4 != 0) {
    dVar1 = _DAT_5cd51510 / (double)param_3;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *param_2 = dVar1 * param_5 * *param_2;
    param_2 = param_2 + 1;
  }
  if ((param_4 != 0) && (iVar2 = FUN_5cd264b0(param_1,1), iVar2 == 0)) {
    return 0;
  }
  return 1;
}


