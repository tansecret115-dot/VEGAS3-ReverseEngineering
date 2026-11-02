/* Module: sfppack2.dll
   Function: FUN_5ccf4720
   Address: 5ccf4720
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __thiscall FUN_5ccf4720(int param_1,double param_2,double param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  FUN_5ccf46c0(param_1);
  iVar3 = param_1 + 0x290;
  iVar4 = 0;
  dVar2 = *(double *)(param_1 + 0x290);
  while (dVar2 < param_2) {
    pdVar1 = (double *)(iVar3 + 8);
    iVar3 = iVar3 + 8;
    iVar4 = iVar4 + 1;
    dVar2 = *pdVar1;
  }
  fVar6 = (float10)param_3;
  iVar3 = 0;
  if ((float10)*(double *)(param_1 + 0x300 + iVar4 * 0x38) < fVar6) {
    iVar5 = param_1 + 0x300 + iVar4 * 0x38;
    do {
      pdVar1 = (double *)(iVar5 + 8);
      iVar5 = iVar5 + 8;
      iVar3 = iVar3 + 1;
    } while ((float10)*pdVar1 < fVar6);
  }
  if ((iVar4 != 0) && (iVar3 != 0)) {
    iVar5 = iVar4 * 7 + iVar3;
    fVar7 = (float10)*(double *)(param_1 + 0x300 + iVar5 * 8);
    fVar8 = (float10)*(double *)(param_1 + 0x2f8 + iVar5 * 8);
    fVar9 = (float10)*(double *)(param_1 + 0x2c0 + iVar3 * 8) / fVar8;
    fVar10 = (float10)*(double *)(param_1 + 0x2c8 + iVar5 * 8);
    fVar11 = (float10)*(double *)(param_1 + 0x2c0 + iVar5 * 8);
    fVar12 = (float10)*(double *)(param_1 + 0x2c0 + iVar3 * 8) / fVar11;
    fVar12 = ((float10)*(double *)(param_1 + 0x2c8 + iVar3 * 8) / fVar10 - fVar12) *
             ((fVar6 - fVar11) / (fVar10 - fVar11)) + fVar12;
    fVar10 = (float10)*(double *)(param_1 + 0x288 + iVar4 * 8);
    fVar6 = (((((float10)*(double *)(param_1 + 0x2c8 + iVar3 * 8) / fVar7 - fVar9) *
               ((fVar6 - fVar8) / (fVar7 - fVar8)) + fVar9) - fVar12) *
             (((float10)param_2 - fVar10) /
             ((float10)*(double *)(param_1 + 0x290 + iVar4 * 8) - fVar10)) + fVar12) * fVar6;
  }
  return fVar6;
}


