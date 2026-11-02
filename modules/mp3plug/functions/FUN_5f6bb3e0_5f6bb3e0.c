/* Module: mp3plug.dll
   Function: FUN_5f6bb3e0
   Address: 5f6bb3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6bb3e0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_5f735270;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(&UNK_5f735274 + iVar2 * 8);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_5f735880);
  return 0x80004005;
}


