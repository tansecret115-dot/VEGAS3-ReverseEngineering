/* Module: vidpcore.dll
   Function: FUN_5df08030
   Address: 5df08030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5df08030(int *param_1,int *param_2,int param_3,double param_4,double param_5,double param_6
                 )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  if (param_1[3] == 1) {
    iVar6 = 0;
    if (0 < param_3) {
      param_4 = param_4 - param_5;
      param_6 = param_6 - param_5;
      do {
        dVar1 = _DAT_5df1fa70;
        if (param_6 != _DAT_5df18838) {
          dVar5 = param_6 * param_6;
          dVar1 = param_4 + param_4;
          dVar2 = param_4 * param_4 * _DAT_5df2bd20;
          dVar3 = (dVar2 + dVar2) / (dVar5 * param_6);
          dVar4 = (dVar1 * _DAT_5df2bd20) / dVar5;
          dVar1 = (dVar4 - dVar3) * *(double *)(*param_2 + iVar6 * 8) +
                  (dVar3 - dVar4) * *(double *)(*param_1 + iVar6 * 8) +
                  (dVar2 / dVar5 - dVar1 / param_6) * *(double *)(param_2[1] + iVar6 * 8) +
                  ((dVar2 / dVar5 - (dVar1 + dVar1) / param_6) + _DAT_5df18830) *
                  *(double *)(param_1[1] + iVar6 * 8);
        }
        iVar6 = iVar6 + 1;
        *(double *)(param_1[2] + -8 + iVar6 * 8) = dVar1;
      } while (iVar6 < param_3);
      return;
    }
  }
  else {
    iVar6 = 0;
    if (0 < param_3) {
      fVar7 = (float10)param_4 - (float10)param_5;
      fVar8 = (float10)param_6 - (float10)param_5;
      do {
        if (fVar8 == (float10)_DAT_5df18838) {
          fVar9 = (float10)_DAT_5df1fa70;
        }
        else {
          fVar9 = fVar8 * fVar8;
          dVar1 = (double)(fVar7 + fVar7);
          fVar10 = fVar7 * fVar7 * (float10)_DAT_5df2bd20;
          dVar2 = (double)(fVar10 / fVar9);
          fVar11 = ((float10)dVar1 * (float10)_DAT_5df2bd20) / fVar9;
          fVar10 = (float10)(double)fVar10;
          fVar9 = (fVar10 + fVar10) / (float10)(double)(fVar9 * fVar8);
          fVar9 = (fVar11 - fVar9) * (float10)*(float *)(*param_2 + iVar6 * 4) +
                  (fVar9 - fVar11) * (float10)*(float *)(*param_1 + iVar6 * 4) +
                  ((float10)dVar2 - (float10)dVar1 / fVar8) *
                  (float10)*(float *)(param_2[1] + iVar6 * 4) +
                  (((float10)dVar2 - ((float10)dVar1 + (float10)dVar1) / fVar8) +
                  (float10)_DAT_5df18830) * (float10)*(float *)(param_1[1] + iVar6 * 4);
        }
        iVar6 = iVar6 + 1;
        *(float *)(param_1[2] + -4 + iVar6 * 4) = (float)fVar9;
      } while (iVar6 < param_3);
    }
  }
  return;
}


