/* Module: aviplug.dll
   Function: FUN_5f95e5a0
   Address: 5f95e5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f95e5a0(double param_1)

{
  double *pdVar1;
  int iVar2;
  
  iVar2 = 0;
  pdVar1 = (double *)&DAT_5f9d9298;
  do {
    if (param_1 == *pdVar1) {
      return iVar2;
    }
    pdVar1 = pdVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (pdVar1 < &DAT_5f9d9318);
  return -1;
}


