/* Module: mpgaout.dll
   Function: FUN_100037d8
   Address: 100037d8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100037d8(double *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  double *pdVar12;
  double *pdVar13;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_14;
  uint local_10;
  
  dVar3 = param_1[0x10] * _DAT_100037d0;
  dVar2 = *param_1;
  *param_1 = dVar2 + dVar3;
  param_1[0x10] = dVar2 - dVar3;
  local_10 = 0x20;
  local_14 = 0x10;
  do {
    local_28 = 1;
    uVar4 = (int)local_14 >> 1;
    local_20 = 0;
    local_24 = 0;
    iVar9 = uVar4 * -2 + 0x20;
    do {
      iVar11 = local_20 + uVar4;
      iVar8 = local_24 + uVar4;
      local_20 = (&DAT_10020c90)[local_28];
      local_28 = local_28 + 1;
      dVar3 = (double)(&DAT_10020b00)[iVar11] * param_1[iVar8] +
              (double)(&DAT_10020b00)[0x20 - iVar11] * param_1[0x20 - iVar8];
      dVar2 = (double)(&DAT_10020b00)[iVar11] * param_1[0x20 - iVar8] -
              (double)(&DAT_10020b00)[0x20 - iVar11] * param_1[iVar8];
      param_1[0x20 - iVar8] = param_1[local_24] - dVar3;
      param_1[local_24] = dVar3 + param_1[local_24];
      param_1[iVar8] = param_1[iVar9] + dVar2;
      param_1[iVar9] = param_1[iVar9] - dVar2;
      local_24 = local_24 + local_10;
      iVar9 = iVar9 - local_10;
    } while (local_24 < 0x20);
    if (local_14 != 2) {
      local_20 = 0;
      local_28 = 1;
      local_1c = 0;
      do {
        iVar8 = 1;
        dVar2 = (double)(&DAT_10020b00)[(local_20 + uVar4) * 2];
        dVar3 = (double)(&DAT_10020b00)[(local_20 + uVar4) * -2 + 0x20];
        local_20 = (&DAT_10020c90)[local_28];
        iVar9 = local_1c + local_10;
        local_28 = local_28 + 1;
        if (1 < uVar4) {
          pdVar12 = param_1 + local_1c + 1;
          pdVar13 = param_1 + local_1c + local_14 + -1;
          do {
            iVar10 = local_1c + iVar8;
            iVar11 = 0x20 - ((local_1c + local_14) - iVar8);
            iVar8 = iVar8 + 1;
            iVar10 = 0x20 - iVar10;
            dVar6 = dVar2 * *pdVar13 + dVar3 * param_1[iVar11];
            dVar5 = dVar2 * param_1[iVar11] - dVar3 * *pdVar13;
            param_1[iVar11] = *pdVar12 - dVar6;
            *pdVar12 = dVar6 + *pdVar12;
            pdVar12 = pdVar12 + 1;
            *pdVar13 = -param_1[iVar10] - dVar5;
            pdVar13 = pdVar13 + -1;
            param_1[iVar10] = param_1[iVar10] - dVar5;
          } while (iVar8 < (int)uVar4);
        }
        local_1c = iVar9;
      } while (iVar9 < 0x20);
    }
    local_10 = local_14;
    local_14 = uVar4;
  } while (1 < uVar4);
  iVar9 = 0;
  if (0 < DAT_10020c80) {
    piVar7 = &DAT_10020c00;
    do {
      iVar8 = *piVar7;
      iVar9 = iVar9 + 1;
      piVar1 = piVar7 + 1;
      piVar7 = piVar7 + 2;
      dVar2 = param_1[*piVar1];
      param_1[*piVar1] = param_1[iVar8];
      param_1[iVar8] = dVar2;
    } while (iVar9 < DAT_10020c80);
  }
  return;
}


