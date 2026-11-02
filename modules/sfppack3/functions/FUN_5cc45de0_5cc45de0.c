/* Module: sfppack3.dll
   Function: FUN_5cc45de0
   Address: 5cc45de0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_5cc45de0(double param_1,int param_2,int param_3)

{
  int iVar1;
  double *pdVar2;
  float10 extraout_ST0;
  
  if ((float10)_DAT_5cc88ee8 <= ABS((float10)param_1)) {
    log2(ABS((float10)param_1));
  }
  iVar1 = ftol();
  pdVar2 = (double *)(param_2 + iVar1 * -8);
  if ((float10)param_3 < extraout_ST0) {
    return ((float10)pdVar2[1] - (float10)*pdVar2) * ((float10)iVar1 - extraout_ST0) +
           (float10)*pdVar2;
  }
  return (float10)*pdVar2;
}


