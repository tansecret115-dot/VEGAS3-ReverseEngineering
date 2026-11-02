/* Module: mpgaout.dll
   Function: FUN_1000b580
   Address: 1000b580
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_1000b580(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_1000b680;
  if ((DAT_1000b680 == -1) && (iVar1 = 0, DAT_1000b684 != 0)) {
    piVar2 = &DAT_1000b684;
    do {
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (*piVar2 != 0);
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    (*(code *)(&DAT_1000b680)[iVar1])();
  }
  FUN_10001044();
  return;
}


