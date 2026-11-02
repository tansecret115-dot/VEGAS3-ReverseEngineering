/* Module: ednt3260.dll
   Function: FUN_630faba0
   Address: 630faba0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_630faba0(double *param_1,double param_2,double *param_3,double *param_4,short *param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  
  dVar2 = _DAT_63102c30;
  if (param_1 != (double *)0x0) {
    dVar3 = param_2 - *param_3;
    if (_DAT_63102bf8 <= dVar3) {
      if (*param_5 == 0) {
        if (param_2 <= param_1[7]) {
          if (param_1[5] <= dVar3) {
            dVar2 = param_1[3];
          }
          else {
            dVar2 = param_1[4];
          }
        }
        else {
          dVar2 = param_1[6];
        }
      }
      else {
        *param_5 = *param_5 + -1;
      }
    }
    else {
      *param_5 = *(short *)(param_1 + 8);
      if (param_1[2] <= -dVar3) {
        dVar2 = *param_1;
      }
      else {
        dVar2 = param_1[1];
      }
    }
    dVar4 = _DAT_63102c20 - dVar2;
    pdVar5 = (double *)((int)param_1 + 0x42);
    *param_3 = dVar2 * *param_3 + param_2 * dVar4;
    dVar3 = *pdVar5;
    while (param_2 < dVar3) {
      pdVar1 = pdVar5 + 2;
      pdVar5 = pdVar5 + 2;
      dVar3 = *pdVar1;
    }
    *param_4 = dVar2 * *param_4 +
               (((param_2 - pdVar5[-2]) * (pdVar5[1] - pdVar5[-1])) / (*pdVar5 - pdVar5[-2]) +
               pdVar5[-1]) * dVar4;
    return;
  }
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)((int)param_3 + 4) = 0x3ff00000;
  *(undefined4 *)param_4 = 0;
  *(undefined4 *)((int)param_4 + 4) = 0;
  *param_5 = 0;
  return;
}


