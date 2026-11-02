/* Module: sftrans1.dll
   Function: FUN_00465050
   Address: 00465050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00465050(int param_1,double param_2,double param_3)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = (float10)param_2 - (float10)*(double *)(param_1 + 0xb0);
  fVar2 = (float10)param_3 - (float10)*(double *)(param_1 + 0x100);
  fVar3 = (float10)fcos((float10)*(double *)(param_1 + 8));
  fVar4 = (float10)fsin((float10)*(double *)(param_1 + 8));
  fVar5 = (float10)_DAT_00555908;
  if (ABS((double)fVar3) <= ABS((double)fVar4)) {
    if ((float10)_DAT_00555910 <= (float10)(double)fVar4 * fVar2) goto LAB_004650c4;
  }
  else if ((float10)_DAT_00555910 <= (float10)(double)fVar3 * fVar1) goto LAB_004650c4;
  fVar5 = (float10)_DAT_00557828;
LAB_004650c4:
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1) * fVar5;
}


