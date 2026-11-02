/* Module: 28_83260.dll
   Function: FUN_10001f20
   Address: 10001f20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10001f20(float *param_1,undefined4 *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  
  if ((*param_1 <= _DAT_1000709c) || (param_1[param_3] == _DAT_1000709c)) {
    return 0;
  }
  *param_2 = 0x3f800000;
  pfVar1 = (float *)(param_2 + 1);
  fVar2 = param_1[1];
  fVar3 = *param_1;
  *pfVar1 = -(fVar2 / fVar3);
  fVar2 = -(fVar2 / fVar3) * param_1[1] + *param_1;
  if (fVar2 <= _DAT_1000709c) {
    return 0;
  }
  iVar12 = 2;
  if (1 < param_3) {
    iVar8 = (int)param_1 + (-4 - (int)(param_2 + -1));
    pfVar11 = (float *)(param_2 + 2);
    do {
      fVar3 = *(float *)(iVar8 + (int)pfVar11);
      pfVar9 = (float *)(iVar8 + -4 + (int)pfVar11);
      if (1 < iVar12) {
        iVar10 = iVar12 + -1;
        pfVar7 = pfVar1;
        do {
          fVar4 = *pfVar9;
          fVar5 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          pfVar9 = pfVar9 + -1;
          iVar10 = iVar10 + -1;
          fVar3 = fVar4 * fVar5 + fVar3;
        } while (iVar10 != 0);
      }
      iVar10 = iVar12 >> 1;
      fVar4 = -(fVar3 / fVar2);
      *pfVar11 = fVar4;
      pfVar7 = pfVar1;
      pfVar9 = pfVar11;
      if (1 < iVar10 + 1) {
        do {
          pfVar9 = pfVar9 + -1;
          fVar5 = *pfVar9;
          fVar6 = *pfVar7;
          iVar10 = iVar10 + -1;
          *pfVar9 = *pfVar7 * fVar4 + *pfVar9;
          *pfVar7 = fVar5 * fVar4 + fVar6;
          pfVar7 = pfVar7 + 1;
        } while (iVar10 != 0);
      }
      fVar2 = fVar4 * fVar3 + fVar2;
      if (fVar2 <= _DAT_1000709c) {
        return 0;
      }
      iVar12 = iVar12 + 1;
      pfVar11 = pfVar11 + 1;
    } while (iVar12 <= param_3);
  }
  return 1;
}


