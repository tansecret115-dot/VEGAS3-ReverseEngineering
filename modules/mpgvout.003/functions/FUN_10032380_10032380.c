/* Module: mpgvout.003
   Function: FUN_10032380
   Address: 10032380
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_10032380(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_10032aac;
  if ((DAT_10032aac == -1) && (iVar1 = 0, DAT_10032ab0 != 0)) {
    piVar2 = &DAT_10032ab0;
    do {
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (*piVar2 != 0);
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    (*(code *)(&DAT_10032aac)[iVar1])();
  }
  FUN_10001044();
  return;
}


