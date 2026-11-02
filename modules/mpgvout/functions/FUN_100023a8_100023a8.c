/* Module: mpgvout.dll
   Function: FUN_100023a8
   Address: 100023a8
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_100023a8(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_10002470;
  if ((DAT_10002470 == -1) && (iVar1 = 0, DAT_10002474 != 0)) {
    piVar2 = &DAT_10002474;
    do {
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (*piVar2 != 0);
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    (*(code *)(&DAT_10002470)[iVar1])();
  }
  FUN_10001044();
  return;
}


