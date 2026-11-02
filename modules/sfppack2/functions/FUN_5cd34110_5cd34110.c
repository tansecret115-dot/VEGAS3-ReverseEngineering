/* Module: sfppack2.dll
   Function: FUN_5cd34110
   Address: 5cd34110
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cd34110(undefined4 *param_1,float *param_2,uint param_3,int param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  float10 fVar16;
  float10 fVar17;
  uint local_14;
  
  uVar13 = param_3;
  if ((param_4 == 0) && (iVar7 = FUN_5cd264b0(param_1,1), iVar7 == 0)) {
    return 0;
  }
  if (param_3 == 0x1000) {
    FUN_5cd3ae50((int)param_2);
  }
  else if (param_3 == 0x800) {
    FUN_5cd3ae00((int)param_2);
  }
  else if (param_3 == 0x400) {
    FUN_5cd3adb0((int)param_2);
  }
  else if (param_3 == 0x200) {
    FUN_5cd3ad60((int)param_2);
  }
  else {
    uVar8 = 0;
    bVar15 = param_3 != 0;
    param_3 = 0;
    pfVar12 = param_2;
    if (bVar15) {
      do {
        uVar6 = uVar13;
        if (param_3 < uVar8) {
          fVar1 = param_2[uVar8 * 2];
          fVar2 = param_2[uVar8 * 2 + 1];
          param_2[uVar8 * 2] = *pfVar12;
          param_2[uVar8 * 2 + 1] = pfVar12[1];
          *pfVar12 = fVar1;
          pfVar12[1] = fVar2;
        }
        while ((uVar6 = uVar6 >> 1, uVar6 != 0 && (uVar6 <= uVar8))) {
          uVar8 = uVar8 - uVar6;
        }
        param_3 = param_3 + 1;
        pfVar12 = pfVar12 + 2;
        uVar8 = uVar8 + uVar6;
      } while (param_3 < uVar13);
    }
  }
  iVar7 = FUN_5cd264b0(param_1,1);
  if (iVar7 != 0) {
    uVar8 = 1;
    if (1 < uVar13) {
      do {
        uVar6 = uVar8 * 2;
        fVar16 = (float10)_DAT_5cd525a0 / (float10)uVar6;
        if (param_4 == 0) {
          fVar16 = -fVar16;
        }
        local_14 = 0;
        fVar17 = (float10)fsin(fVar16 * (float10)_DAT_5cd514e8);
        fVar1 = (float)(fVar17 * fVar17 * (float10)_DAT_5cd59434);
        fVar16 = (float10)fsin(fVar16);
        if (uVar8 != 0) {
          pfVar12 = param_2 + uVar8 * 2;
          pfVar11 = param_2;
          uVar14 = local_14;
          fVar5 = _DAT_5cd53450;
          fVar2 = _DAT_5cd5344c;
          pfVar10 = param_2;
          pfVar9 = pfVar12;
          do {
            for (; uVar14 < uVar13; uVar14 = uVar14 + uVar6) {
              fVar4 = fVar2 * *pfVar12 - fVar5 * pfVar12[1];
              fVar3 = fVar2 * pfVar12[1] + fVar5 * *pfVar12;
              *pfVar12 = *pfVar11 - fVar4;
              pfVar12[1] = pfVar11[1] - fVar3;
              pfVar12 = pfVar12 + uVar8 * 4;
              *pfVar11 = fVar4 + *pfVar11;
              pfVar11[1] = fVar3 + pfVar11[1];
              pfVar11 = pfVar11 + uVar8 * 4;
            }
            fVar3 = fVar5 * (float)fVar16;
            uVar14 = local_14 + 1;
            pfVar11 = pfVar10 + 2;
            pfVar12 = pfVar9 + 2;
            fVar5 = fVar2 * (float)fVar16 + (fVar1 + _DAT_5cd5344c) * fVar5;
            fVar2 = (fVar2 * fVar1 - fVar3) + fVar2;
            local_14 = uVar14;
            pfVar10 = pfVar11;
            pfVar9 = pfVar12;
          } while (uVar14 < uVar8);
        }
        iVar7 = FUN_5cd264b0(param_1,1);
        if (iVar7 == 0) {
          return 0;
        }
        uVar8 = uVar6;
      } while (uVar6 < uVar13);
    }
    fVar1 = _DAT_5cd59430;
    if (param_4 != 0) {
      fVar1 = _DAT_5cd5344c / (float)(uVar13 * 2);
    }
    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
      *param_2 = fVar1 * param_5 * *param_2;
      param_2[1] = fVar1 * param_5 * param_2[1];
      param_2 = param_2 + 2;
    }
    if ((param_4 != 0) && (iVar7 = FUN_5cd264b0(param_1,1), iVar7 == 0)) {
      return 0;
    }
    return 1;
  }
  return 0;
}


