/* Module: sctplug.dll
   Function: FUN_004185d0
   Address: 004185d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004185d0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_00437450;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(&UNK_00437454 + iVar2 * 8);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_00437a60);
  return 0x80004005;
}


