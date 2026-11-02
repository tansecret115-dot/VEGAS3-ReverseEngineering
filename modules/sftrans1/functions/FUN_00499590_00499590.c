/* Module: sftrans1.dll
   Function: FUN_00499590
   Address: 00499590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00499590(int *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double *pdVar10;
  int iVar11;
  double *pdVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  if ((((_DAT_0055c008 < param_2) || (param_2 < _DAT_00557840)) || (param_1 == (int *)0x0)) ||
     (iVar11 = *param_1, iVar11 < 2)) {
    return (float10)_DAT_00563e38;
  }
  pdVar10 = (double *)param_1[1];
  dVar1 = (double)(param_2 * (float)_DAT_00557830);
  if (dVar1 <= *pdVar10) {
    return (float10)_DAT_00557840;
  }
  iVar13 = 1;
  if (1 < iVar11) {
    do {
      pdVar12 = pdVar10 + 0xd;
      if (*pdVar12 == dVar1) {
        return (float10)pdVar10[0xe] * (float10)_DAT_0055f608;
      }
      if (dVar1 < *pdVar12) {
        dVar2 = *pdVar10;
        dVar4 = *pdVar10 + pdVar10[10];
        dVar5 = *pdVar12 + pdVar10[0x12];
        dVar3 = *pdVar12;
        iVar11 = 0;
        dVar7 = (dVar1 - dVar2) / (dVar3 - dVar2);
        goto LAB_004996e4;
      }
      iVar13 = iVar13 + 1;
      pdVar10 = pdVar12;
    } while (iVar13 < iVar11);
  }
  return (float10)_DAT_0055c008;
  while( true ) {
    dVar7 = _DAT_00555910;
    if ((_DAT_00555910 <= dVar6) && (dVar7 = dVar6, _DAT_00555908 < dVar6)) {
      dVar7 = _DAT_00555908;
    }
    iVar11 = iVar11 + 1;
    dVar6 = _DAT_00557828;
    if (99 < iVar11) break;
LAB_004996e4:
    dVar6 = dVar7 * dVar7;
    dVar8 = _DAT_00555908 - dVar7;
    dVar9 = dVar8 * dVar8;
    dVar6 = dVar7 - ((dVar6 * dVar7 * dVar3 +
                     dVar9 * dVar8 * dVar2 +
                     (dVar4 * dVar9 * dVar7 + dVar5 * dVar8 * dVar6) * _DAT_00563e48) - dVar1) /
                    ((dVar5 - dVar4) * dVar8 * dVar7 * _DAT_00563e40 +
                    ((dVar3 - dVar5) * dVar6 + (dVar4 - dVar2) * dVar9) * _DAT_00563e48);
    if (ABS(dVar6 - dVar7) < _DAT_00555908 / ((dVar2 + dVar4 + dVar5 + dVar3) * _DAT_005614f0))
    break;
  }
  fVar14 = (float10)dVar6;
  fVar15 = (float10)_DAT_00555908 - fVar14;
  fVar16 = (float10)(pdVar10[0xe] + pdVar10[0x13]) * fVar14 +
           (float10)(pdVar10[1] + pdVar10[0xb]) * fVar15;
  return ((fVar16 * fVar14 +
          ((float10)(pdVar10[1] + pdVar10[0xb]) * fVar14 + (float10)pdVar10[1] * fVar15) * fVar15) *
          fVar15 + (fVar15 * fVar16 +
                   ((float10)pdVar10[0xe] * fVar14 +
                   (float10)(pdVar10[0xe] + pdVar10[0x13]) * fVar15) * fVar14) * fVar14) *
         (float10)_DAT_0055f608;
}


