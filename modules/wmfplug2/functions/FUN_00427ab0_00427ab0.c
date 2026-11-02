/* Module: wmfplug2.dll
   Function: FUN_00427ab0
   Address: 00427ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00427ab0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_004821a8;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(&UNK_004821ac + iVar2 * 8);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_004827b8);
  return 0x80004005;
}


