/* Module: vegas30.exe
   Function: FUN_005d6780
   Address: 005d6780
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005d6780(double param_1)

{
  double *pdVar1;
  int iVar2;
  
  iVar2 = 0;
  pdVar1 = (double *)&DAT_00646b68;
  do {
    if (param_1 == *pdVar1) {
      return iVar2;
    }
    pdVar1 = pdVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (pdVar1 < s___0_0_0000_00000_0_0_00646bce + 10);
  return -1;
}


