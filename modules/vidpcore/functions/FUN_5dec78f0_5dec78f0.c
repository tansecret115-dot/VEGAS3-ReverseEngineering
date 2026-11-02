/* Module: vidpcore.dll
   Function: FUN_5dec78f0
   Address: 5dec78f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5dec78f0(double *param_1,undefined4 *param_2,double *param_3,double *param_4,int param_5,
                 double param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  double local_68 [4];
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  local_30 = param_6 * _DAT_5df34ad0;
  local_68[0] = _DAT_5df34ac8 / param_6;
  local_68[1] = _DAT_5df34ac0 / param_6;
  local_68[2] = _DAT_5df34ab8 / param_6;
  local_68[3] = _DAT_5df34ab0 / param_6;
  local_48 = _DAT_5df34aa8 / local_30;
  local_40 = _DAT_5df34aa0 / local_30;
  local_38 = _DAT_5df34a98 / local_30;
  local_30 = _DAT_5df34a90 / local_30;
  fVar12 = (float10)local_38 + (float10)local_48;
  *param_1 = (double)fVar12;
  fVar13 = (float10)fsin((float10)local_68[3]);
  fVar14 = (float10)fcos((float10)local_68[3]);
  fVar15 = ROUND((float10)1.4426950408889634 * (float10)local_68[1]);
  fVar16 = (float10)f2xm1((float10)1.4426950408889634 * (float10)local_68[1] - fVar15);
  fVar15 = (float10)fscale((float10)1 + fVar16,fVar15);
  local_28 = (double)fVar15;
  fVar15 = (float10)fsin((float10)local_68[2]);
  local_18 = (double)(fVar15 * (float10)local_40);
  fVar16 = (float10)fcos((float10)local_68[2]);
  fVar17 = ROUND((float10)1.4426950408889634 * (float10)local_68[0]);
  fVar18 = (float10)f2xm1((float10)1.4426950408889634 * (float10)local_68[0] - fVar17);
  fVar17 = (float10)fscale((float10)1 + fVar18,fVar17);
  param_1[1] = (double)((fVar13 * (float10)local_30 -
                        ((float10)local_48 + (float10)local_48 + (float10)local_38) * fVar14) *
                        (float10)local_28 +
                       ((float10)local_18 -
                       ((float10)local_38 + (float10)local_38 + (float10)local_48) * fVar16) *
                       fVar17);
  fVar20 = (float10)1.4426950408889634 * ((float10)local_68[1] + (float10)local_68[0]);
  fVar18 = ROUND(fVar20);
  fVar20 = (float10)f2xm1(fVar20 - fVar18);
  fVar18 = (float10)fscale((float10)1 + fVar20,fVar18);
  local_20 = (double)fVar18;
  fVar18 = (float10)local_68[0] + (float10)local_68[0];
  fVar21 = (float10)1.4426950408889634 * fVar18;
  fVar20 = ROUND(fVar21);
  fVar21 = (float10)f2xm1(fVar21 - fVar20);
  fVar20 = (float10)fscale((float10)1 + fVar21,fVar20);
  fVar21 = (float10)local_68[1] + (float10)local_68[1];
  fVar22 = (float10)1.4426950408889634 * fVar21;
  fVar19 = ROUND(fVar22);
  fVar22 = (float10)f2xm1(fVar22 - fVar19);
  fVar19 = (float10)fscale((float10)1 + fVar22,fVar19);
  local_10 = (double)fVar19;
  fVar15 = ((fVar16 * fVar14 * fVar12 - (float10)(double)fVar15 * fVar14 * (float10)local_40) -
           fVar16 * (float10)(double)fVar13 * (float10)local_30) * (float10)local_20;
  param_1[2] = (double)((float10)(double)fVar20 * (float10)local_38 +
                       (float10)local_10 * (float10)local_48 + fVar15 + fVar15);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  fVar18 = (float10)1.4426950408889634 * ((float10)(double)fVar18 + (float10)local_68[1]);
  fVar15 = ROUND(fVar18);
  fVar18 = (float10)f2xm1(fVar18 - fVar15);
  fVar15 = (float10)fscale((float10)1 + fVar18,fVar15);
  fVar21 = (float10)1.4426950408889634 * ((float10)(double)fVar21 + (float10)local_68[0]);
  fVar18 = ROUND(fVar21);
  fVar21 = (float10)f2xm1(fVar21 - fVar18);
  fVar18 = (float10)fscale((float10)1 + fVar21,fVar18);
  param_1[3] = (double)((fVar13 * (float10)local_30 - fVar14 * (float10)local_38) *
                        (float10)(double)fVar15 +
                       ((float10)local_18 - fVar16 * (float10)local_48) * (float10)(double)fVar18);
  *(double *)(param_2 + 2) =
       (double)((float10)local_28 * fVar14 * (float10)_DAT_5df248a8 -
               (fVar17 * fVar16 + fVar17 * fVar16));
  *(double *)(param_2 + 4) =
       (double)((float10)local_20 * fVar16 * fVar14 * (float10)_DAT_5df291f0 + (float10)local_10 +
               (float10)(double)fVar20);
  fVar14 = (float10)(double)fVar15 * fVar14;
  *(double *)(param_2 + 6) =
       (double)((float10)(double)fVar18 * fVar16 * (float10)_DAT_5df248a8 - (fVar14 + fVar14));
  fVar13 = (float10)(double)((float10)local_68[1] + (float10)local_68[0]);
  fVar15 = (float10)1.4426950408889634 * (fVar13 + fVar13);
  fVar13 = ROUND(fVar15);
  iVar7 = 10;
  iVar9 = 4;
  fVar15 = (float10)f2xm1(fVar15 - fVar13);
  fVar13 = (float10)fscale((float10)1 + fVar15,fVar13);
  *(double *)(param_2 + 8) = (double)fVar13;
  puVar10 = param_2;
  pdVar6 = local_68;
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pdVar6 = *puVar10;
    puVar10 = puVar10 + 1;
    pdVar6 = (double *)((int)pdVar6 + 4);
  }
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)((int)param_3 + 4) = 0;
  pdVar6 = (double *)(param_2 + 2);
  do {
    pdVar8 = pdVar6 + 1;
    *(double *)((int)param_3 + (-8 - (int)param_2) + (int)pdVar8) =
         (double)((float10)*(double *)((int)param_1 + (-8 - (int)param_2) + (int)pdVar8) -
                 fVar12 * (float10)*pdVar6);
    iVar9 = iVar9 + -1;
    pdVar6 = pdVar8;
  } while (iVar9 != 0);
  iVar9 = (int)param_1 - (int)param_3;
  iVar11 = (int)param_2 - (int)param_3;
  iVar7 = 5;
  dVar1 = _DAT_5df18838;
  dVar3 = _DAT_5df18838;
  dVar4 = _DAT_5df18838;
  do {
    dVar1 = dVar1 + *(double *)(iVar9 + (int)param_3);
    dVar4 = dVar4 + *param_3;
    dVar3 = dVar3 + *(double *)(iVar11 + (int)param_3);
    param_3 = param_3 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  dVar3 = dVar3 + _DAT_5df18830;
  if ((_DAT_5df34a88 < dVar3) ||
     (dVar2 = _DAT_5df18830, dVar5 = _DAT_5df18830, _DAT_5df34a88 < -dVar3)) {
    dVar2 = dVar1 / dVar3;
    dVar5 = dVar4 / dVar3;
  }
  iVar9 = 5;
  pdVar6 = param_4;
  do {
    pdVar8 = pdVar6 + 1;
    iVar9 = iVar9 + -1;
    *pdVar6 = dVar2 * *(double *)(((int)param_2 - (int)param_4) + (int)pdVar6);
    *(double *)((param_5 - (int)param_4) + -8 + (int)pdVar8) =
         dVar5 * *(double *)(&stack0xffffff90 + -(int)param_4 + (int)pdVar8);
    pdVar6 = pdVar8;
  } while (iVar9 != 0);
  return;
}


