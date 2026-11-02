/* Module: sfppack2.dll
   Function: FUN_5cd279d0
   Address: 5cd279d0
   Source: Ghidra pseudocode (Stage 10 batch) */


double * FUN_5cd279d0(double *param_1,int param_2,int param_3)

{
  double *pdVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 1) {
    do {
      iVar2 = iVar2 + 1;
    } while (1 << ((byte)iVar2 & 0x1f) != param_2);
  }
  if (param_3 == 1) {
    pdVar1 = (double *)FUN_5cd27e40(param_1,iVar2);
    return pdVar1;
  }
  if (param_3 == -1) {
    pdVar1 = (double *)FUN_5cd27a20(param_1,iVar2);
    return pdVar1;
  }
  return param_1;
}


