/* Module: ednt3260.dll
   Function: FUN_630f9770
   Address: 630f9770
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_630f9770(double *param_1,short param_2,short param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  if (0 < param_3) {
    iVar3 = (int)param_3;
    dVar2 = _DAT_63102b78;
    do {
      dVar1 = *param_1;
      if (*param_1 < _DAT_63102b78) {
        dVar1 = -dVar1;
      }
      if ((dVar2 < dVar1) && (dVar2 = *param_1, *param_1 < _DAT_63102b78)) {
        dVar2 = -dVar2;
      }
      param_1 = param_1 + param_2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


