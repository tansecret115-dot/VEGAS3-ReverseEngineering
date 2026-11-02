/* Module: aviplug.dll
   Function: FUN_5f9c7a40
   Address: 5f9c7a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f9c7a40(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_5f9edd38;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(&UNK_5f9edd3c + iVar2 * 8);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_5f9ee348);
  return 0x80004005;
}


