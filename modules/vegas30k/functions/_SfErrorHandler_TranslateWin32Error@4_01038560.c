/* Module: vegas30k.dll
   Function: _SfErrorHandler_TranslateWin32Error@4
   Address: 01038560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfErrorHandler_TranslateWin32Error_4(int param_1)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x38560  924  _SfErrorHandler_TranslateWin32Error@4 */
  iVar2 = 0;
  piVar1 = &DAT_011dc0b8;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(&UNK_011dc0bc + iVar2 * 8);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_011dc6c8);
  return 0x80004005;
}


