/* Module: ednt3260.dll
   Function: FUN_630f4020
   Address: 630f4020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630f4020(double *param_1,short param_2,double *param_3,short param_4,short param_5,
                 double param_6,double param_7,double *param_8)

{
  double dVar1;
  int iVar2;
  
  iVar2 = (int)param_5;
  if (0 < iVar2) {
    do {
      dVar1 = *param_1;
      param_1 = param_1 + param_2;
      dVar1 = dVar1 * param_6 - *param_8;
      *param_3 = dVar1;
      param_3 = param_3 + param_4;
      iVar2 = iVar2 + -1;
      *param_8 = dVar1 * param_7 + *param_8;
    } while (iVar2 != 0);
  }
  return;
}


