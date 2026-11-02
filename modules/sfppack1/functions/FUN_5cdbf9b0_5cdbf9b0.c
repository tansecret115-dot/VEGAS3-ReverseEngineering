/* Module: sfppack1.dll
   Function: FUN_5cdbf9b0
   Address: 5cdbf9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cdbf9b0(double *param_1,double param_2,double param_3,double param_4,double param_5)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = SQRT((float10)param_2 * (float10)param_2 + (float10)param_3 * (float10)param_3) /
          SQRT((float10)param_4 * (float10)param_4 + (float10)param_5 * (float10)param_5);
  if ((param_2 == _DAT_5ce12bf0) || (param_4 == _DAT_5ce12bf0)) {
    fVar2 = (float10)_DAT_5ce12bf0;
  }
  else {
    fVar2 = (float10)fpatan((float10)param_3,(float10)param_2);
    fVar3 = (float10)fpatan((float10)param_5,(float10)param_4);
    fVar2 = fVar2 - fVar3;
  }
  fVar3 = (float10)fcos(fVar2);
  fVar2 = (float10)fsin(fVar2);
  *param_1 = (double)(fVar3 * fVar1);
  param_1[1] = (double)(fVar2 * fVar1);
  return;
}


