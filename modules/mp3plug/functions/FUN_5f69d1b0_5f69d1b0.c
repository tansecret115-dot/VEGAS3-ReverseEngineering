/* Module: mp3plug.dll
   Function: FUN_5f69d1b0
   Address: 5f69d1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f69d1b0(int param_1,uchar *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_5f72d410;
  *param_2 = '\0';
  do {
    if (*piVar1 == param_1) {
      _mbscpy(param_2,(uchar *)("mp3limit" + iVar2 * 0x830));
      return 0;
    }
    piVar1 = piVar1 + 0x20c;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_5f730530);
  return 0;
}


