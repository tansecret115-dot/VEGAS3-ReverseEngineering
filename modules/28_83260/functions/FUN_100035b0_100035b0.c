/* Module: 28_83260.dll
   Function: FUN_100035b0
   Address: 100035b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100035b0(float *param_1,undefined4 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  
  if (param_1[0x24] == _DAT_100070b4) {
    return 0;
  }
  fVar2 = *param_1;
  if (_DAT_100070b4 < fVar2) {
    iVar10 = 1;
    pfVar1 = (float *)(param_2 + 1);
    *param_2 = 0x3f800000;
    pfVar11 = pfVar1;
    while( true ) {
      fVar5 = -*(float *)(((int)param_1 - (int)param_2) + (int)pfVar11);
      pfVar6 = (float *)(((int)param_1 - (int)param_2) + -4 + (int)pfVar11);
      if (iVar10 < 0x14) {
        if (1 < iVar10) {
          iVar9 = iVar10 + -1;
          pfVar7 = pfVar1;
          do {
            fVar3 = *pfVar6;
            fVar4 = *pfVar7;
            pfVar6 = pfVar6 + -1;
            pfVar7 = pfVar7 + 1;
            iVar9 = iVar9 + -1;
            fVar5 = fVar5 - fVar3 * fVar4;
          } while (iVar9 != 0);
        }
      }
      else {
        pfVar8 = (float *)(param_2 + 0x14);
        pfVar7 = pfVar6 + -0x13;
        fVar5 = fVar5 - (*pfVar6 * *pfVar1 +
                        pfVar6[-0x10] * (float)param_2[0x11] +
                        pfVar6[-0x11] * (float)param_2[0x12] +
                        pfVar6[-0xf] * (float)param_2[0x10] +
                        pfVar6[-0xd] * (float)param_2[0xe] +
                        pfVar6[-0xb] * (float)param_2[0xc] +
                        pfVar6[-9] * (float)param_2[10] +
                        pfVar6[-7] * (float)param_2[8] +
                        pfVar6[-5] * (float)param_2[6] +
                        pfVar6[-3] * (float)param_2[4] +
                        pfVar6[-1] * (float)param_2[2] +
                        pfVar6[-0x12] * (float)param_2[0x13] +
                        pfVar6[-0xe] * (float)param_2[0xf] +
                        pfVar6[-10] * (float)param_2[0xb] +
                        pfVar6[-6] * (float)param_2[7] +
                        pfVar6[-2] * (float)param_2[3] +
                        pfVar6[-0xc] * (float)param_2[0xd] +
                        pfVar6[-4] * (float)param_2[5] + pfVar6[-8] * (float)param_2[9]);
        if (0x14 < iVar10) {
          iVar9 = iVar10 + -0x14;
          do {
            fVar3 = *pfVar7;
            fVar4 = *pfVar8;
            pfVar7 = pfVar7 + -1;
            pfVar8 = pfVar8 + 1;
            iVar9 = iVar9 + -1;
            fVar5 = fVar5 - fVar3 * fVar4;
          } while (iVar9 != 0);
        }
      }
      fVar5 = fVar5 / fVar2;
      iVar9 = iVar10 >> 1;
      *pfVar11 = fVar5;
      if ((0 < iVar9) && (pfVar7 = pfVar1, pfVar6 = pfVar11, 0 < iVar9)) {
        do {
          pfVar6 = pfVar6 + -1;
          fVar3 = *pfVar6;
          fVar4 = *pfVar7;
          iVar9 = iVar9 + -1;
          *pfVar6 = *pfVar7 * fVar5 + *pfVar6;
          *pfVar7 = fVar3 * fVar5 + fVar4;
          pfVar7 = pfVar7 + 1;
        } while (iVar9 != 0);
      }
      fVar2 = (_DAT_100070a0 - fVar5 * fVar5) * fVar2;
      if (fVar2 < _DAT_100070b4) break;
      iVar10 = iVar10 + 1;
      pfVar11 = pfVar11 + 1;
      if (0x24 < iVar10) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}


