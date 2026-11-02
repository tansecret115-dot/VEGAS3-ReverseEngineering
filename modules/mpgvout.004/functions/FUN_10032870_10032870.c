/* Module: mpgvout.004
   Function: FUN_10032870
   Address: 10032870
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_10032870(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_10032f9c;
  if ((DAT_10032f9c == -1) && (iVar1 = 0, DAT_10032fa0 != 0)) {
    piVar2 = &DAT_10032fa0;
    do {
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (*piVar2 != 0);
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    (*(code *)(&DAT_10032f9c)[iVar1])();
  }
  FUN_10001044();
  return;
}


