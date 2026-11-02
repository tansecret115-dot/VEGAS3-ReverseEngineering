/* Module: sftrans1.dll
   Function: FUN_00464740
   Address: 00464740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00464740(int *param_1,int *param_2,int param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double *pdVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_cc;
  double local_c8;
  double local_c0;
  double local_b0;
  double local_50 [9];
  
  iVar10 = *param_2;
  dVar1 = *(double *)(param_2 + 0x2c);
  iVar12 = *param_1;
  dVar6 = *(double *)(param_2 + 0x40);
  dVar4 = _DAT_00555910;
  if (1 < iVar10) {
    local_cc = iVar10 + -1;
    pdVar8 = local_50;
    pdVar7 = (double *)(param_2 + 0x42);
    do {
      dVar2 = pdVar7[-10] - dVar1;
      dVar5 = *pdVar7 - dVar6;
      dVar3 = SQRT(dVar2 * dVar2 + dVar5 * dVar5);
      *pdVar8 = dVar3;
      if (dVar4 < dVar3) {
        local_c0 = dVar5;
        local_b0 = dVar2;
        dVar4 = dVar3;
      }
      pdVar7 = pdVar7 + 1;
      pdVar8 = pdVar8 + 1;
      local_cc = local_cc + -1;
    } while (local_cc != 0);
  }
  dVar1 = dVar1 - (local_b0 / dVar4) * _DAT_00560e80;
  dVar6 = dVar6 - (local_c0 / dVar4) * _DAT_00560e80;
  local_c8 = 0.0;
  if (1 < iVar10) {
    pdVar8 = local_50;
    pdVar7 = (double *)(param_2 + 0x42);
    iVar10 = iVar10 + -1;
    do {
      dVar3 = pdVar7[-10] - dVar1;
      dVar2 = *pdVar7 - dVar6;
      dVar2 = SQRT(dVar3 * dVar3 + dVar2 * dVar2);
      *pdVar8 = dVar2;
      if (local_c8 < dVar2) {
        local_c8 = dVar2;
      }
      pdVar7 = pdVar7 + 1;
      pdVar8 = pdVar8 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  iVar10 = param_1[3];
  iVar9 = param_1[2];
  iVar11 = 0;
  if (param_1[1] < 1) {
    return;
  }
  iVar12 = iVar12 + iVar9 * 4;
  do {
    FUN_004650e0(iVar12,((double)iVar9 / (double)param_3 - dVar1) * (local_b0 / dVar4) +
                        ((double)iVar10 / (double)param_4 - dVar6) * (local_c0 / dVar4));
    iVar11 = iVar11 + 1;
    iVar9 = iVar9 + 1;
    iVar12 = iVar12 + 4;
  } while (iVar11 < param_1[1]);
  return;
}


