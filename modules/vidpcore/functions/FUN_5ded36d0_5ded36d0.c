/* Module: vidpcore.dll
   Function: FUN_5ded36d0
   Address: 5ded36d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5ded36d0(int param_1,uint param_2,uint param_3,double param_4,double param_5,double param_6
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
  double *pdVar19;
  uint uVar20;
  double *pdVar21;
  double *pdVar22;
  uint local_8c;
  double local_70;
  double local_68;
  
  param_4 = param_4 + _DAT_5df18830;
  param_6 = param_6 + _DAT_5df18830;
  pdVar21 = (double *)(param_1 + 0x10);
  pdVar18 = (double *)(param_1 + 8 + param_3 * 8);
  local_70 = 1.0;
  local_68 = 0.0;
  local_8c = 0;
  dVar10 = _DAT_5df18830;
  dVar11 = _DAT_5df18838;
  while( true ) {
    dVar13 = param_4 * dVar10 - dVar11 * param_5;
    dVar12 = dVar10 * param_5 + param_4 * dVar11;
    dVar15 = param_6 * local_70 - local_68 * param_7;
    dVar14 = local_70 * param_7 + param_6 * local_68;
    if (local_8c < param_2) {
      pdVar17 = (double *)(param_1 + 8 + (local_8c + param_3 * 3) * 8);
      pdVar16 = (double *)(param_1 + 8 + (local_8c + param_3 * 2) * 8);
      pdVar19 = pdVar18;
      uVar20 = local_8c;
      pdVar22 = pdVar21;
      do {
        dVar8 = dVar10 * pdVar19[-1] - dVar11 * *pdVar19;
        dVar2 = dVar10 * *pdVar19 + dVar11 * pdVar19[-1];
        dVar9 = dVar8 + pdVar22[-2];
        dVar1 = dVar2 + pdVar22[-1];
        dVar8 = pdVar22[-2] - dVar8;
        dVar2 = pdVar22[-1] - dVar2;
        dVar6 = dVar10 * pdVar17[-1] - dVar11 * *pdVar17;
        dVar5 = dVar10 * *pdVar17 + dVar11 * pdVar17[-1];
        dVar7 = dVar6 + pdVar16[-1];
        dVar3 = dVar5 + *pdVar16;
        dVar6 = pdVar16[-1] - dVar6;
        dVar5 = *pdVar16 - dVar5;
        dVar4 = dVar7 * local_70 - dVar3 * local_68;
        dVar3 = dVar3 * local_70 + dVar7 * local_68;
        pdVar22[-2] = dVar9 + dVar4;
        pdVar22[-1] = dVar1 + dVar3;
        pdVar16[-1] = dVar9 - dVar4;
        *pdVar16 = dVar1 - dVar3;
        dVar3 = -(dVar6 * local_68) - dVar5 * local_70;
        dVar1 = dVar6 * local_70 - dVar5 * local_68;
        pdVar17[-1] = dVar8 - dVar3;
        *pdVar17 = dVar2 - dVar1;
        pdVar19[-1] = dVar3 + dVar8;
        *pdVar19 = dVar1 + dVar2;
        dVar1 = dVar13 * pdVar19[1] - dVar12 * pdVar19[2];
        dVar3 = dVar12 * pdVar19[1] + dVar13 * pdVar19[2];
        dVar2 = dVar1 + *pdVar22;
        dVar4 = dVar3 + pdVar22[1];
        dVar1 = *pdVar22 - dVar1;
        dVar3 = pdVar22[1] - dVar3;
        dVar5 = dVar13 * pdVar17[1] - dVar12 * pdVar17[2];
        dVar6 = dVar12 * pdVar17[1] + dVar13 * pdVar17[2];
        dVar7 = dVar5 + pdVar16[1];
        dVar8 = dVar6 + pdVar16[2];
        dVar5 = pdVar16[1] - dVar5;
        dVar6 = pdVar16[2] - dVar6;
        dVar9 = dVar7 * dVar15 - dVar8 * dVar14;
        dVar7 = dVar8 * dVar15 + dVar7 * dVar14;
        *pdVar22 = dVar2 + dVar9;
        pdVar22[1] = dVar4 + dVar7;
        pdVar16[1] = dVar2 - dVar9;
        pdVar16[2] = dVar4 - dVar7;
        dVar4 = -(dVar5 * dVar14) - dVar6 * dVar15;
        uVar20 = uVar20 + param_3 * 4;
        pdVar16 = pdVar16 + param_3 * 4;
        pdVar22 = pdVar22 + param_3 * 4;
        dVar2 = dVar5 * dVar15 - dVar6 * dVar14;
        pdVar17[1] = dVar1 - dVar4;
        pdVar17[2] = dVar3 - dVar2;
        pdVar17 = pdVar17 + param_3 * 4;
        pdVar19[1] = dVar4 + dVar1;
        pdVar19[2] = dVar2 + dVar3;
        pdVar19 = pdVar19 + param_3 * 4;
      } while (uVar20 < param_2);
    }
    local_8c = local_8c + 4;
    pdVar21 = pdVar21 + 4;
    pdVar18 = pdVar18 + 4;
    if (param_3 <= local_8c) break;
    dVar10 = param_4 * dVar13 - dVar12 * param_5;
    dVar11 = dVar13 * param_5 + param_4 * dVar12;
    local_70 = param_6 * dVar15 - dVar14 * param_7;
    local_68 = dVar15 * param_7 + param_6 * dVar14;
  }
  return;
}


