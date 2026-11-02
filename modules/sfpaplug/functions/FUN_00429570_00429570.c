/* Module: sfpaplug.dll
   Function: FUN_00429570
   Address: 00429570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00429570(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_00453c38;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(&UNK_00453c3c + iVar2 * 8);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_00454248);
  return 0x80004005;
}


