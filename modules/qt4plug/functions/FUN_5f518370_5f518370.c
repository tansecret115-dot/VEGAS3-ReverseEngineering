/* Module: qt4plug.dll
   Function: FUN_5f518370
   Address: 5f518370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f518370(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_5f5963d0;
  do {
    if (*piVar1 == param_1) {
      return (&DAT_5f5963d4)[iVar2 * 2];
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x5f596418);
  return 0xac440000;
}


