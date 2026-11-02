/* Module: vidpcore.dll
   Function: FUN_5de6d260
   Address: 5de6d260
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5de6d260(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  double local_38;
  double local_28;
  
  if (param_1 != (int *)0x0) {
    local_28 = 0.0;
    iVar6 = 1;
    fVar10 = (float10)_DAT_5df18830 / (float10)param_5;
    piVar7 = param_1;
    if ((float10)*param_1 <= (float10)_DAT_5df18838) {
      do {
        piVar7 = piVar7 + 1;
        iVar6 = iVar6 + 1;
      } while ((double)*piVar7 <= _DAT_5df18838);
    }
    iVar9 = 0xfe;
    if ((double)param_1[0xff] <= _DAT_5df18838) {
      piVar7 = param_1 + 0xfe;
      do {
        iVar8 = *piVar7;
        iVar9 = iVar9 + -1;
        piVar7 = piVar7 + -1;
      } while ((double)iVar8 <= _DAT_5df18838);
    }
    fVar11 = (float10)*param_1 * fVar10;
    fVar12 = (float10)_DAT_5df18830 - fVar11;
    if (1 < iVar6) {
      iVar8 = iVar6 + -1;
      piVar7 = param_1;
      do {
        piVar7 = piVar7 + 1;
        fVar12 = (float10)_DAT_5df18830 - fVar11;
        iVar8 = iVar8 + -1;
        fVar11 = (float10)*piVar7 * fVar10 + fVar11;
      } while (iVar8 != 0);
    }
    local_38 = (double)fVar12;
    bVar4 = true;
    if (iVar6 < iVar9) {
      param_1 = param_1 + iVar6;
      do {
        fVar12 = (float10)*param_1 * fVar10;
        dVar1 = (double)((float10)_DAT_5df18830 - fVar11);
        dVar2 = (double)(fVar12 + fVar11);
        if ((float10)_DAT_5df18838 < fVar12) {
          fVar13 = (float10)log2(fVar12);
          dVar3 = (double)-((float10)0.6931471805599453 * fVar13 * fVar12);
          if (fVar11 <= (float10)_DAT_5df18838) {
            fVar13 = (float10)_DAT_5df18838;
          }
          else {
            fVar13 = (float10)log2(fVar11);
            fVar13 = -((float10)0.6931471805599453 * fVar13 * fVar11);
          }
          if (local_38 <= _DAT_5df18838) {
            fVar14 = (float10)_DAT_5df18838;
          }
          else {
            fVar14 = (float10)log2((float10)local_38);
            fVar14 = -((float10)0.6931471805599453 * fVar14 * (float10)local_38);
          }
          fVar13 = (float10)log2(((float10)_DAT_5df18830 / (float10)dVar2) *
                                 (fVar13 + (float10)dVar3) + (float10)dVar2);
          fVar14 = (float10)log2(((float10)_DAT_5df18830 / (float10)dVar1) *
                                 (fVar14 + (float10)dVar3) + (float10)dVar1);
          fVar13 = (float10)0.6931471805599453 * fVar14 + (float10)0.6931471805599453 * fVar13;
          if ((fVar13 < (float10)local_28) || (bVar4)) {
            local_28 = (double)fVar13;
          }
          fVar11 = (float10)(double)(fVar12 + fVar11);
          bVar4 = false;
          local_38 = dVar1;
        }
        iVar6 = iVar6 + 1;
        param_1 = param_1 + 1;
      } while (iVar6 < iVar9);
    }
    uVar5 = ftol();
    *param_2 = uVar5;
    uVar5 = ftol();
    *param_3 = uVar5;
  }
  return;
}


