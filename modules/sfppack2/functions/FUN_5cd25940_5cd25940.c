/* Module: sfppack2.dll
   Function: FUN_5cd25940
   Address: 5cd25940
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cd25940(int param_1,uint param_2,uint param_3,double param_4,double param_5,double param_6
                 ,double param_7)

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
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double *pdVar18;
  double *pdVar19;
  double *pdVar20;
  double *pdVar21;
  uint uVar22;
  double *pdVar23;
  double *pdVar24;
  uint local_8c;
  double local_70;
  double local_68;
  
  dVar14 = param_4 + _DAT_5cd51510;
  dVar15 = param_6 + _DAT_5cd51510;
  pdVar23 = (double *)(param_1 + 0x10);
  pdVar20 = (double *)(param_1 + 8 + param_3 * 8);
  local_70 = 1.0;
  local_68 = 0.0;
  local_8c = 0;
  dVar10 = _DAT_5cd51510;
  dVar11 = _DAT_5cd51520;
  while( true ) {
    dVar13 = dVar14 * dVar10 - dVar11 * param_5;
    dVar12 = dVar10 * param_5 + dVar14 * dVar11;
    dVar17 = dVar15 * local_70 - local_68 * param_7;
    dVar16 = local_70 * param_7 + dVar15 * local_68;
    if (local_8c < param_2) {
      pdVar19 = (double *)(param_1 + 8 + (local_8c + param_3 * 3) * 8);
      pdVar18 = (double *)(param_1 + 8 + (local_8c + param_3 * 2) * 8);
      pdVar21 = pdVar20;
      uVar22 = local_8c;
      pdVar24 = pdVar23;
      do {
        dVar8 = dVar10 * pdVar21[-1] - dVar11 * *pdVar21;
        dVar2 = dVar10 * *pdVar21 + dVar11 * pdVar21[-1];
        dVar9 = dVar8 + pdVar24[-2];
        dVar1 = dVar2 + pdVar24[-1];
        dVar8 = pdVar24[-2] - dVar8;
        dVar2 = pdVar24[-1] - dVar2;
        dVar6 = dVar10 * pdVar19[-1] - dVar11 * *pdVar19;
        dVar5 = dVar10 * *pdVar19 + dVar11 * pdVar19[-1];
        dVar7 = dVar6 + pdVar18[-1];
        dVar3 = dVar5 + *pdVar18;
        dVar6 = pdVar18[-1] - dVar6;
        dVar5 = *pdVar18 - dVar5;
        dVar4 = dVar7 * local_70 - dVar3 * local_68;
        dVar3 = dVar3 * local_70 + dVar7 * local_68;
        pdVar24[-2] = dVar9 + dVar4;
        pdVar24[-1] = dVar1 + dVar3;
        pdVar18[-1] = dVar9 - dVar4;
        *pdVar18 = dVar1 - dVar3;
        dVar3 = -(dVar6 * local_68) - dVar5 * local_70;
        dVar1 = dVar6 * local_70 - dVar5 * local_68;
        pdVar19[-1] = dVar8 - dVar3;
        *pdVar19 = dVar2 - dVar1;
        pdVar21[-1] = dVar3 + dVar8;
        *pdVar21 = dVar1 + dVar2;
        dVar1 = dVar13 * pdVar21[1] - dVar12 * pdVar21[2];
        dVar3 = dVar12 * pdVar21[1] + dVar13 * pdVar21[2];
        dVar2 = dVar1 + *pdVar24;
        dVar4 = dVar3 + pdVar24[1];
        dVar1 = *pdVar24 - dVar1;
        dVar3 = pdVar24[1] - dVar3;
        dVar5 = dVar13 * pdVar19[1] - dVar12 * pdVar19[2];
        dVar6 = dVar12 * pdVar19[1] + dVar13 * pdVar19[2];
        dVar7 = dVar5 + pdVar18[1];
        dVar8 = dVar6 + pdVar18[2];
        dVar5 = pdVar18[1] - dVar5;
        dVar6 = pdVar18[2] - dVar6;
        dVar9 = dVar7 * dVar17 - dVar8 * dVar16;
        dVar7 = dVar8 * dVar17 + dVar7 * dVar16;
        *pdVar24 = dVar2 + dVar9;
        pdVar24[1] = dVar4 + dVar7;
        pdVar18[1] = dVar2 - dVar9;
        pdVar18[2] = dVar4 - dVar7;
        dVar4 = -(dVar5 * dVar16) - dVar6 * dVar17;
        uVar22 = uVar22 + param_3 * 4;
        pdVar18 = pdVar18 + param_3 * 4;
        pdVar24 = pdVar24 + param_3 * 4;
        dVar2 = dVar5 * dVar17 - dVar6 * dVar16;
        pdVar19[1] = dVar1 - dVar4;
        pdVar19[2] = dVar3 - dVar2;
        pdVar19 = pdVar19 + param_3 * 4;
        pdVar21[1] = dVar4 + dVar1;
        pdVar21[2] = dVar2 + dVar3;
        pdVar21 = pdVar21 + param_3 * 4;
      } while (uVar22 < param_2);
    }
    local_8c = local_8c + 4;
    pdVar23 = pdVar23 + 4;
    pdVar20 = pdVar20 + 4;
    if (param_3 <= local_8c) break;
    dVar10 = dVar14 * dVar13 - dVar12 * param_5;
    dVar11 = dVar13 * param_5 + dVar14 * dVar12;
    local_70 = dVar15 * dVar17 - dVar16 * param_7;
    local_68 = dVar17 * param_7 + dVar15 * dVar16;
  }
  return;
}


