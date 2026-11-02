/* Module: qt4plug.dll
   Function: FUN_5f518080
   Address: 5f518080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f518080(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_5f5963d4;
  do {
    if (*piVar1 == param_1) {
      return (&DAT_5f5963d0)[iVar2 * 2];
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x5f59641c);
  return 0xac44;
}


