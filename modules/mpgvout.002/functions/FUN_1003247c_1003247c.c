/* Module: mpgvout.002
   Function: FUN_1003247c
   Address: 1003247c
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_1003247c(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_10032ba8;
  if ((DAT_10032ba8 == -1) && (iVar1 = 0, DAT_10032bac != 0)) {
    piVar2 = &DAT_10032bac;
    do {
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (*piVar2 != 0);
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    (*(code *)(&DAT_10032ba8)[iVar1])();
  }
  FUN_10001044();
  return;
}


