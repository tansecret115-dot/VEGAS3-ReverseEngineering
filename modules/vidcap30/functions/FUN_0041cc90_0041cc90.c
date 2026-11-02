/* Module: vidcap30.exe
   Function: FUN_0041cc90
   Address: 0041cc90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041cc90(double param_1)

{
  double *pdVar1;
  int iVar2;
  
  iVar2 = 0;
  pdVar1 = (double *)&DAT_00588f50;
  do {
    if (*pdVar1 == param_1) {
      return iVar2;
    }
    pdVar1 = pdVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (pdVar1 < &DAT_00588fa0);
  return -1;
}


