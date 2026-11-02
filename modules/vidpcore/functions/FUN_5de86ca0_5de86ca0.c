/* Module: vidpcore.dll
   Function: FUN_5de86ca0
   Address: 5de86ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_5de86ca0(undefined4 param_1,undefined4 param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (_DAT_5df18838 < param_3) {
    fVar5 = (float10)FUN_5de86c30(param_1,param_2);
    iVar4 = 0;
    dVar1 = (double)CONCAT44(param_2,param_1);
    dVar3 = _DAT_5df18830 / (double)CONCAT44(param_2,param_1);
    dVar2 = dVar3;
    do {
      dVar1 = dVar1 + _DAT_5df18830;
      dVar2 = (param_3 / dVar1) * dVar2;
      dVar3 = dVar3 + dVar2;
      if (ABS(dVar2) < ABS(dVar3) * _DAT_5df2b508) {
        fVar6 = (float10)log2((float10)param_3);
        fVar6 = (float10)1.4426950408889634 *
                (((float10)0.6931471805599453 * fVar6 * (float10)(double)CONCAT44(param_2,param_1) -
                 (float10)param_3) - fVar5);
        fVar5 = ROUND(fVar6);
        fVar6 = (float10)f2xm1(fVar6 - fVar5);
        fVar5 = (float10)fscale((float10)1 + fVar6,fVar5);
        return fVar5 * (float10)dVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 100);
  }
  return (float10)_DAT_5df18838;
}


