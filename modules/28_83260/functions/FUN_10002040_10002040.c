/* Module: 28_83260.dll
   Function: FUN_10002040
   Address: 10002040
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10002040(float *param_1,undefined4 *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  
  if (param_1[param_3] == _DAT_1000709c) {
    return 0;
  }
  fVar2 = *param_1;
  if (_DAT_1000709c < fVar2) {
    iVar10 = 1;
    *param_2 = 0x3f800000;
    if (param_3 < 1) {
      return 1;
    }
    pfVar1 = (float *)(param_2 + 1);
    pfVar9 = pfVar1;
    while( true ) {
      fVar5 = -*(float *)(((int)param_1 - (int)param_2) + (int)pfVar9);
      if (1 < iVar10) {
        pfVar6 = (float *)(((int)param_1 - (int)param_2) + -4 + (int)pfVar9);
        iVar8 = iVar10 + -1;
        pfVar7 = pfVar1;
        do {
          fVar3 = *pfVar7;
          fVar4 = *pfVar6;
          pfVar6 = pfVar6 + -1;
          pfVar7 = pfVar7 + 1;
          iVar8 = iVar8 + -1;
          fVar5 = fVar5 - fVar3 * fVar4;
        } while (iVar8 != 0);
      }
      fVar5 = fVar5 / fVar2;
      iVar8 = iVar10 >> 1;
      *pfVar9 = fVar5;
      if ((0 < iVar8) && (pfVar7 = pfVar1, pfVar6 = pfVar9, 0 < iVar8)) {
        do {
          pfVar6 = pfVar6 + -1;
          fVar3 = *pfVar6;
          fVar4 = *pfVar7;
          iVar8 = iVar8 + -1;
          *pfVar6 = *pfVar7 * fVar5 + *pfVar6;
          *pfVar7 = fVar3 * fVar5 + fVar4;
          pfVar7 = pfVar7 + 1;
        } while (iVar8 != 0);
      }
      fVar2 = (_DAT_10007094 - fVar5 * fVar5) * fVar2;
      if (fVar2 < _DAT_1000709c) break;
      iVar10 = iVar10 + 1;
      pfVar9 = pfVar9 + 1;
      if (param_3 < iVar10) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}


