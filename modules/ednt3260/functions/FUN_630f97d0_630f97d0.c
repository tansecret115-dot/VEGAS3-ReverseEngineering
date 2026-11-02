/* Module: ednt3260.dll
   Function: FUN_630f97d0
   Address: 630f97d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_630f97d0(double *param_1,short param_2,short param_3)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = (float10)_DAT_63102b78;
  if (0 < param_3) {
    iVar2 = (int)param_3;
    do {
      dVar1 = *param_1;
      param_1 = param_1 + param_2;
      iVar2 = iVar2 + -1;
      fVar3 = (float10)dVar1 * (float10)dVar1 + fVar3;
    } while (iVar2 != 0);
  }
  return fVar3 / (float10)(int)param_3;
}


