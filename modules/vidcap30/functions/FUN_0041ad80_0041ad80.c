/* Module: vidcap30.exe
   Function: FUN_0041ad80
   Address: 0041ad80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041ad80(double param_1)

{
  double *pdVar1;
  int iVar2;
  
  iVar2 = 0;
  pdVar1 = (double *)&DAT_00588ec8;
  do {
    if (param_1 == *pdVar1) {
      return iVar2;
    }
    pdVar1 = pdVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (pdVar1 < &DAT_00588f38);
  return -1;
}


