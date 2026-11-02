/* Module: qt4plug.dll
   Function: FUN_5f5222c0
   Address: 5f5222c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f5222c0(double param_1)

{
  double *pdVar1;
  int iVar2;
  
  iVar2 = 0;
  pdVar1 = (double *)&DAT_5f596bc0;
  do {
    if (param_1 == *pdVar1) {
      return iVar2;
    }
    pdVar1 = pdVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)pdVar1 < 0x5f596c40);
  return -1;
}


