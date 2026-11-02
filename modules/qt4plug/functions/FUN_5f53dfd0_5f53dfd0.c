/* Module: qt4plug.dll
   Function: FUN_5f53dfd0
   Address: 5f53dfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f53dfd0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_5f59ba68;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(&UNK_5f59ba6c + iVar2 * 8);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x5f59c078);
  return 0x80004005;
}


