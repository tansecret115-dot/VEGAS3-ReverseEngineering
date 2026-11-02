/* Module: oggplug.dll
   Function: FUN_00424200
   Address: 00424200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00424200(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_0044ca40;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(&UNK_0044ca44 + iVar2 * 8);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_0044d050);
  return 0x80004005;
}


