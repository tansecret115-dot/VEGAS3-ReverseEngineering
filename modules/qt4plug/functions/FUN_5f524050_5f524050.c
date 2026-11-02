/* Module: qt4plug.dll
   Function: FUN_5f524050
   Address: 5f524050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f524050(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_5f596ce0;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(&UNK_5f596ce4 + iVar2 * 8);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x5f596d28);
  return 0xac440000;
}


