/* Module: qt4plug.dll
   Function: FUN_5f5214e0
   Address: 5f5214e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f5214e0(double param_1)

{
  double *pdVar1;
  int iVar2;
  
  iVar2 = 0;
  pdVar1 = (double *)&DAT_5f5a2ae8;
  do {
    if (*pdVar1 == param_1) {
      return iVar2;
    }
    pdVar1 = pdVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)pdVar1 < 0x5f5a2b10);
  return -1;
}


