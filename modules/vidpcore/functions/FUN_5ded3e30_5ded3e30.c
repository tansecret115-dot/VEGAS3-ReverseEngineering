/* Module: vidpcore.dll
   Function: FUN_5ded3e30
   Address: 5ded3e30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5ded3e30(int param_1,uint param_2,uint param_3,double param_4,double param_5,double param_6
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
  double *pdVar16;
  double *pdVar17;
  double *pdVar18;
  uint uVar19;
  double *pdVar20;
  double *pdVar21;
  double *local_8c;
  uint local_88;
  double local_28;
  double local_20;
  
  param_4 = param_4 + _DAT_5df18830;
  param_6 = param_6 + _DAT_5df18830;
  pdVar20 = (double *)(param_1 + 0x10);
  local_8c = (double *)(param_1 + 8 + param_3 * 8);
  local_20 = 1.0;
  local_28 = 0.0;
  local_88 = 0;
  dVar10 = _DAT_5df18830;
  dVar11 = _DAT_5df18838;
  while( true ) {
    dVar15 = param_4 * dVar10 - dVar11 * param_5;
    dVar14 = dVar10 * param_5 + param_4 * dVar11;
    dVar13 = param_6 * local_20 - local_28 * param_7;
    dVar12 = local_20 * param_7 + param_6 * local_28;
    if (local_88 < param_2) {
      pdVar18 = (double *)(param_1 + 8 + (local_88 + param_3 * 3) * 8);
      pdVar16 = (double *)(param_1 + 8 + (local_88 + param_3 * 2) * 8);
      pdVar17 = local_8c;
      uVar19 = local_88;
      pdVar21 = pdVar20;
      do {
        dVar7 = dVar10 * pdVar17[-1] - dVar11 * *pdVar17;
        dVar2 = dVar10 * *pdVar17 + dVar11 * pdVar17[-1];
        dVar8 = dVar7 + pdVar21[-2];
        dVar1 = dVar2 + pdVar21[-1];
        dVar7 = pdVar21[-2] - dVar7;
        dVar2 = pdVar21[-1] - dVar2;
        dVar5 = dVar10 * pdVar18[-1] - dVar11 * *pdVar18;
        dVar4 = dVar11 * pdVar18[-1] + dVar10 * *pdVar18;
        dVar6 = dVar5 + pdVar16[-1];
        dVar3 = dVar4 + *pdVar16;
        dVar5 = pdVar16[-1] - dVar5;
        dVar4 = *pdVar16 - dVar4;
        dVar9 = dVar6 * local_20 - dVar3 * local_28;
        dVar3 = dVar3 * local_20 + dVar6 * local_28;
        pdVar21[-2] = dVar8 + dVar9;
        pdVar21[-1] = dVar1 + dVar3;
        pdVar16[-1] = dVar8 - dVar9;
        *pdVar16 = dVar1 - dVar3;
        dVar1 = dVar4 * local_20 + dVar5 * local_28;
        dVar3 = dVar4 * local_28 - dVar5 * local_20;
        pdVar17[-1] = dVar1 + dVar7;
        *pdVar17 = dVar3 + dVar2;
        pdVar18[-1] = dVar7 - dVar1;
        *pdVar18 = dVar2 - dVar3;
        dVar1 = dVar15 * pdVar17[1] - dVar14 * pdVar17[2];
        dVar3 = dVar15 * pdVar17[2] + dVar14 * pdVar17[1];
        dVar2 = dVar1 + *pdVar21;
        dVar4 = dVar3 + pdVar21[1];
        dVar1 = *pdVar21 - dVar1;
        dVar3 = pdVar21[1] - dVar3;
        dVar5 = dVar15 * pdVar18[1] - dVar14 * pdVar18[2];
        dVar7 = dVar14 * pdVar18[1] + dVar15 * pdVar18[2];
        dVar6 = dVar5 + pdVar16[1];
        dVar8 = dVar7 + pdVar16[2];
        dVar5 = pdVar16[1] - dVar5;
        dVar7 = pdVar16[2] - dVar7;
        dVar9 = dVar6 * dVar13 - dVar8 * dVar12;
        dVar6 = dVar8 * dVar13 + dVar6 * dVar12;
        *pdVar21 = dVar2 + dVar9;
        pdVar21[1] = dVar4 + dVar6;
        pdVar16[1] = dVar2 - dVar9;
        pdVar16[2] = dVar4 - dVar6;
        uVar19 = uVar19 + param_3 * 4;
        dVar2 = dVar7 * dVar13 + dVar5 * dVar12;
        pdVar16 = pdVar16 + param_3 * 4;
        pdVar21 = pdVar21 + param_3 * 4;
        dVar4 = dVar7 * dVar12 - dVar5 * dVar13;
        pdVar17[1] = dVar2 + dVar1;
        pdVar17[2] = dVar4 + dVar3;
        pdVar17 = pdVar17 + param_3 * 4;
        pdVar18[1] = dVar1 - dVar2;
        pdVar18[2] = dVar3 - dVar4;
        pdVar18 = pdVar18 + param_3 * 4;
      } while (uVar19 < param_2);
    }
    local_88 = local_88 + 4;
    pdVar20 = pdVar20 + 4;
    local_8c = local_8c + 4;
    if (param_3 <= local_88) break;
    dVar10 = param_4 * dVar15 - dVar14 * param_5;
    dVar11 = dVar15 * param_5 + param_4 * dVar14;
    local_20 = param_6 * dVar13 - dVar12 * param_7;
    local_28 = dVar13 * param_7 + param_6 * dVar12;
  }
  return;
}


