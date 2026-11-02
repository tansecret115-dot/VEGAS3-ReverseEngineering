/* Module: mcplug.dll
   Function: FUN_0041e1b0
   Address: 0041e1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041e1b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_0047ed08;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(&UNK_0047ed0c + iVar2 * 8);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_0047f318);
  return 0x80004005;
}


