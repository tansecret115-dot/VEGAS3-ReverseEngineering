/* Module: wavplug.dll
   Function: FUN_5f3a72e0
   Address: 5f3a72e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f3a72e0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_5f3cfc50;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(&UNK_5f3cfc54 + iVar2 * 8);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x5f3d0260);
  return 0x80004005;
}


