/* Module: aifplug.dll
   Function: FUN_5fbdf2c0
   Address: 5fbdf2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbdf2c0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_5fc04198;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(&UNK_5fc0419c + iVar2 * 8);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x5fc047a8);
  return 0x80004005;
}


