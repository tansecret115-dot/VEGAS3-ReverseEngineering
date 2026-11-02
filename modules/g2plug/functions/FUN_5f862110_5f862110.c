/* Module: g2plug.dll
   Function: FUN_5f862110
   Address: 5f862110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f862110(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_5f872408;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(&UNK_5f87240c + iVar2 * 8);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_5f872a18);
  return 0x80004005;
}


