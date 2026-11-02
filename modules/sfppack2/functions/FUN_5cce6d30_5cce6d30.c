/* Module: sfppack2.dll
   Function: FUN_5cce6d30
   Address: 5cce6d30
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __thiscall FUN_5cce6d30(int param_1,double param_2,double param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  
  FUN_5cce6cd0(param_1);
  iVar3 = param_1 + 0x498;
  iVar5 = 0;
  dVar2 = *(double *)(param_1 + 0x498);
  while (dVar2 < param_2) {
    pdVar1 = (double *)(iVar3 + 8);
    iVar3 = iVar3 + 8;
    iVar5 = iVar5 + 1;
    dVar2 = *pdVar1;
  }
  fVar7 = (float10)param_3;
  iVar3 = iVar5 + 0x17;
  iVar4 = 0;
  if ((float10)*(double *)(param_1 + iVar3 * 0x38) < fVar7) {
    iVar6 = param_1 + iVar3 * 0x38;
    do {
      pdVar1 = (double *)(iVar6 + 8);
      iVar6 = iVar6 + 8;
      iVar4 = iVar4 + 1;
    } while ((float10)*pdVar1 < fVar7);
  }
  if ((iVar5 != 0) && (iVar4 != 0)) {
    fVar8 = (float10)*(double *)(param_1 + (iVar3 * 7 + iVar4) * 8);
    iVar3 = iVar5 * 7 + iVar4;
    fVar9 = (float10)*(double *)(param_1 + 0x500 + iVar3 * 8);
    fVar10 = (float10)*(double *)(param_1 + 0x4c8 + iVar4 * 8) / fVar9;
    fVar11 = (float10)*(double *)(param_1 + ((iVar5 + 0x16) * 7 + iVar4) * 8);
    fVar12 = (float10)*(double *)(param_1 + 0x4c8 + iVar3 * 8);
    fVar13 = (float10)*(double *)(param_1 + 0x4c8 + iVar4 * 8) / fVar12;
    fVar13 = ((float10)*(double *)(param_1 + 0x4d0 + iVar4 * 8) / fVar11 - fVar13) *
             ((fVar7 - fVar12) / (fVar11 - fVar12)) + fVar13;
    fVar11 = (float10)*(double *)(param_1 + 0x490 + iVar5 * 8);
    fVar7 = (((((float10)*(double *)(param_1 + 0x4d0 + iVar4 * 8) / fVar8 - fVar10) *
               ((fVar7 - fVar9) / (fVar8 - fVar9)) + fVar10) - fVar13) *
             (((float10)param_2 - fVar11) /
             ((float10)*(double *)(param_1 + 0x498 + iVar5 * 8) - fVar11)) + fVar13) * fVar7;
  }
  return fVar7;
}


