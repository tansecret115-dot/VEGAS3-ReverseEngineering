/* Module: mcmpgdec.dll
   Function: FUN_100265ac
   Address: 100265ac
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_100265ac(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_1002669c;
  if ((DAT_1002669c == -1) && (iVar1 = 0, DAT_100266a0 != 0)) {
    piVar2 = &DAT_100266a0;
    do {
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (*piVar2 != 0);
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    (*(code *)(&DAT_1002669c)[iVar1])();
  }
  FUN_10001044();
  return;
}


