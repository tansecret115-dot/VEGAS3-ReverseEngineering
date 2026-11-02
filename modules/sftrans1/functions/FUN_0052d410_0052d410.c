/* Module: sftrans1.dll
   Function: FUN_0052d410
   Address: 0052d410
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052d410(int *param_1,int *param_2,int param_3,double param_4)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  
  if (param_1[3] == 1) {
    iVar8 = 0;
    if (0 < param_3) {
      dVar4 = param_4 * param_4;
      dVar5 = dVar4 * param_4;
      dVar6 = dVar4 * _DAT_00563e48;
      dVar7 = ((dVar5 + dVar5) - dVar6) + _DAT_00555908;
      do {
        iVar1 = iVar8 * 8;
        iVar8 = iVar8 + 1;
        *(double *)(param_1[2] + iVar1) =
             (dVar6 - (dVar5 + dVar5)) * *(double *)(*param_2 + iVar1) +
             dVar7 * *(double *)(*param_1 + iVar1) +
             ((dVar5 - (dVar4 + dVar4)) + param_4) * *(double *)(param_1[1] + iVar1) +
             (dVar5 - dVar4) * *(double *)(iVar1 + param_2[1]);
      } while (iVar8 < param_3);
      return;
    }
  }
  else {
    iVar8 = 0;
    if (0 < param_3) {
      fVar9 = (float10)param_4 * (float10)param_4;
      fVar10 = fVar9 * (float10)param_4;
      fVar3 = (float10)_DAT_00563e48;
      fVar2 = (float10)_DAT_00555908;
      do {
        iVar8 = iVar8 + 1;
        *(float *)(param_1[2] + -4 + iVar8 * 4) =
             (float)((float10)*(float *)(*param_2 + -4 + iVar8 * 4) *
                     (float10)(double)(fVar9 * fVar3 - (fVar10 + fVar10)) +
                    (float10)*(float *)(*param_1 + -4 + iVar8 * 4) *
                    (float10)(double)(((fVar10 + fVar10) - fVar9 * fVar3) + fVar2) +
                    (float10)*(float *)(param_1[1] + -4 + iVar8 * 4) *
                    (float10)(double)((fVar10 - (fVar9 + fVar9)) + (float10)param_4) +
                    (float10)*(float *)(param_2[1] + -4 + iVar8 * 4) * (fVar10 - fVar9));
      } while (iVar8 < param_3);
    }
  }
  return;
}


