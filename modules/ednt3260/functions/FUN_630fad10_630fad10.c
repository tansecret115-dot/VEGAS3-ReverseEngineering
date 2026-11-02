/* Module: ednt3260.dll
   Function: FUN_630fad10
   Address: 630fad10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_630fad10(double param_1,double *param_2,double *param_3,short *param_4)

{
  float10 fVar1;
  
  if (param_1 <= _DAT_63102bf0) {
    fVar1 = FUN_630f96e0(SUB84(param_1 * _DAT_63102c50,0),
                         (int)((ulonglong)(param_1 * _DAT_63102c50) >> 0x20),0x30);
    fVar1 = fVar1 * (float10)_DAT_63102c58;
  }
  else {
    fVar1 = FUN_630f96e0(SUB84(_DAT_63102bf0 / param_1,0),
                         (int)((ulonglong)(_DAT_63102bf0 / param_1) >> 0x20),0x30);
    fVar1 = fVar1 * (float10)_DAT_63102c48;
  }
  if ((float10)(*param_3 - _DAT_63102c68) <= fVar1 - (float10)_DAT_63102c60) {
    if (*param_4 == 0) {
      *param_3 = *param_3 - _DAT_63102c68;
    }
    else {
      *param_4 = *param_4 + -1;
    }
  }
  else {
    *param_3 = (double)(fVar1 - (float10)_DAT_63102c60);
    *param_4 = 0x1e;
  }
  if (*param_3 < *param_2) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)((int)param_3 + 4);
  }
  return;
}


