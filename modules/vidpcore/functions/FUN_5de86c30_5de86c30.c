/* Module: vidpcore.dll
   Function: FUN_5de86c30
   Address: 5de86c30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_5de86c30(double param_1)

{
  double dVar1;
  float10 fVar2;
  double *pdVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar4 = (float10)_DAT_5df2b500;
  fVar5 = (float10)param_1;
  pdVar3 = (double *)&DAT_5df2b4c0;
  fVar2 = (float10)log2(fVar5 + (float10)_DAT_5df2b4f8);
  fVar6 = fVar5;
  do {
    fVar6 = fVar6 + (float10)_DAT_5df18830;
    dVar1 = *pdVar3;
    pdVar3 = pdVar3 + 1;
    fVar4 = (float10)dVar1 / fVar6 + fVar4;
  } while ((int)pdVar3 < 0x5df2b4f0);
  fVar6 = (float10)log2((fVar4 * (float10)_DAT_5df2b4f0) / fVar5);
  return (float10)0.6931471805599453 * fVar6 -
         (float10)(double)((fVar5 + (float10)_DAT_5df2b4f8) -
                          (fVar5 + (float10)_DAT_5df1eec0) * (float10)0.6931471805599453 * fVar2);
}


