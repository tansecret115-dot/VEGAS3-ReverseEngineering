/* Module: aviplug.dll
   Function: FUN_5f95e410
   Address: 5f95e410
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f95e410(double param_1)

{
  double *pdVar1;
  int iVar2;
  
  iVar2 = 0;
  pdVar1 = (double *)&DAT_5f9f2c08;
  do {
    if (*pdVar1 == param_1) {
      return iVar2;
    }
    pdVar1 = pdVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (pdVar1 < &DAT_5f9f2c30);
  return -1;
}


