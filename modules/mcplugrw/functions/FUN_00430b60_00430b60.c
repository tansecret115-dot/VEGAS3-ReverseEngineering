/* Module: mcplugrw.dll
   Function: FUN_00430b60
   Address: 00430b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00430b60(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_0049b0b8;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(&UNK_0049b0bc + iVar2 * 8);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_0049b6c8);
  return 0x80004005;
}


