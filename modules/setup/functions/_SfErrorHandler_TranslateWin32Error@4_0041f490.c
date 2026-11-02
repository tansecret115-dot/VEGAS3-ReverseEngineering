/* Module: Setup.exe
   Function: _SfErrorHandler_TranslateWin32Error@4
   Address: 0041f490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfErrorHandler_TranslateWin32Error_4(int param_1)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x1f490  125  _SfErrorHandler_TranslateWin32Error@4 */
  iVar2 = 0;
  piVar1 = &DAT_00439e00;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(&UNK_00439e04 + iVar2 * 8);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_0043a410);
  return 0x80004005;
}


