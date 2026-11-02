/* Module: mpgvout.001
   Function: FUN_10032500
   Address: 10032500
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_10032500(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_10032c2c;
  if ((DAT_10032c2c == -1) && (iVar1 = 0, DAT_10032c30 != 0)) {
    piVar2 = &DAT_10032c30;
    do {
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (*piVar2 != 0);
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    (*(code *)(&DAT_10032c2c)[iVar1])();
  }
  FUN_10001044();
  return;
}


