/* Module: ednt3260.dll
   Function: FUN_630f2820
   Address: 630f2820
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_630f2820(double *param_1,short param_2,double param_3)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = (int)param_2;
  fVar2 = (float10)_DAT_630fe028;
  if (0 < iVar1) {
    do {
      fVar2 = fVar2 + (float10)*param_1;
      param_1 = param_1 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return fVar2 * (float10)param_3;
}


