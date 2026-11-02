/* Module: sfppack2.dll
   Function: FUN_5cd25d30
   Address: 5cd25d30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cd25d30(int param_1,uint param_2,uint param_3,double param_4,double param_5)

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
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  double *local_40;
  double *local_3c;
  
  if (param_3 == 2) {
    if (param_2 != 0) {
      uVar12 = param_2 + 3 >> 2;
      pdVar10 = (double *)(param_1 + 0x18);
      do {
        dVar1 = pdVar10[-1];
        dVar2 = *pdVar10;
        uVar12 = uVar12 - 1;
        pdVar10[-1] = pdVar10[-3] - dVar1;
        *pdVar10 = pdVar10[-2] - dVar2;
        pdVar10[-3] = dVar1 + pdVar10[-3];
        pdVar10[-2] = dVar2 + pdVar10[-2];
        pdVar10 = pdVar10 + 4;
      } while (uVar12 != 0);
    }
  }
  else {
    dVar9 = param_4 + _DAT_5cd51510;
    local_40 = (double *)(param_1 + 0x10);
    local_3c = (double *)(param_1 + 8 + param_3 * 8);
    uVar12 = 0;
    dVar1 = _DAT_5cd51510;
    dVar2 = _DAT_5cd51520;
    while( true ) {
      dVar7 = dVar9 * dVar1 - dVar2 * param_5;
      dVar5 = dVar1 * param_5 + dVar9 * dVar2;
      pdVar10 = local_40;
      pdVar11 = local_3c;
      for (uVar13 = uVar12; uVar13 < param_2; uVar13 = uVar13 + param_3 * 2) {
        dVar4 = dVar1 * pdVar11[-1] - dVar2 * *pdVar11;
        dVar3 = dVar1 * *pdVar11 + dVar2 * pdVar11[-1];
        pdVar11[-1] = pdVar10[-2] - dVar4;
        *pdVar11 = pdVar10[-1] - dVar3;
        dVar8 = dVar7 * pdVar11[1] - dVar5 * pdVar11[2];
        dVar6 = dVar5 * pdVar11[1] + dVar7 * pdVar11[2];
        pdVar11[1] = *pdVar10 - dVar8;
        pdVar11[2] = pdVar10[1] - dVar6;
        pdVar11 = pdVar11 + param_3 * 2;
        pdVar10[-2] = dVar4 + pdVar10[-2];
        pdVar10[-1] = dVar3 + pdVar10[-1];
        *pdVar10 = dVar8 + *pdVar10;
        pdVar10[1] = dVar6 + pdVar10[1];
        pdVar10 = pdVar10 + param_3 * 2;
      }
      uVar12 = uVar12 + 4;
      local_40 = local_40 + 4;
      local_3c = local_3c + 4;
      if (param_3 <= uVar12) break;
      dVar1 = dVar9 * dVar7 - dVar5 * param_5;
      dVar2 = dVar7 * param_5 + dVar9 * dVar5;
    }
  }
  return;
}


