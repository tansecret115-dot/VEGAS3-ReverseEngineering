/* Module: vidpcore.dll
   Function: FUN_5ded3ac0
   Address: 5ded3ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5ded3ac0(int param_1,uint param_2,uint param_3,double param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  double *pdVar10;
  uint uVar11;
  uint uVar12;
  double *local_40;
  double *local_3c;
  
  if (param_3 == 2) {
    if (param_2 != 0) {
      uVar11 = param_2 + 3 >> 2;
      pdVar9 = (double *)(param_1 + 0x18);
      do {
        dVar1 = pdVar9[-1];
        dVar2 = *pdVar9;
        uVar11 = uVar11 - 1;
        pdVar9[-1] = pdVar9[-3] - dVar1;
        *pdVar9 = pdVar9[-2] - dVar2;
        pdVar9[-3] = dVar1 + pdVar9[-3];
        pdVar9[-2] = dVar2 + pdVar9[-2];
        pdVar9 = pdVar9 + 4;
      } while (uVar11 != 0);
    }
  }
  else {
    param_4 = param_4 + _DAT_5df18830;
    local_40 = (double *)(param_1 + 0x10);
    local_3c = (double *)(param_1 + 8 + param_3 * 8);
    uVar11 = 0;
    dVar1 = _DAT_5df18830;
    dVar2 = _DAT_5df18838;
    while( true ) {
      dVar7 = param_4 * dVar1 - dVar2 * param_5;
      dVar5 = dVar1 * param_5 + param_4 * dVar2;
      pdVar9 = local_40;
      pdVar10 = local_3c;
      for (uVar12 = uVar11; uVar12 < param_2; uVar12 = uVar12 + param_3 * 2) {
        dVar4 = dVar1 * pdVar10[-1] - dVar2 * *pdVar10;
        dVar3 = dVar1 * *pdVar10 + dVar2 * pdVar10[-1];
        pdVar10[-1] = pdVar9[-2] - dVar4;
        *pdVar10 = pdVar9[-1] - dVar3;
        dVar8 = dVar7 * pdVar10[1] - dVar5 * pdVar10[2];
        dVar6 = dVar5 * pdVar10[1] + dVar7 * pdVar10[2];
        pdVar10[1] = *pdVar9 - dVar8;
        pdVar10[2] = pdVar9[1] - dVar6;
        pdVar10 = pdVar10 + param_3 * 2;
        pdVar9[-2] = dVar4 + pdVar9[-2];
        pdVar9[-1] = dVar3 + pdVar9[-1];
        *pdVar9 = dVar8 + *pdVar9;
        pdVar9[1] = dVar6 + pdVar9[1];
        pdVar9 = pdVar9 + param_3 * 2;
      }
      uVar11 = uVar11 + 4;
      local_40 = local_40 + 4;
      local_3c = local_3c + 4;
      if (param_3 <= uVar11) break;
      dVar1 = param_4 * dVar7 - dVar5 * param_5;
      dVar2 = dVar7 * param_5 + param_4 * dVar5;
    }
  }
  return;
}


