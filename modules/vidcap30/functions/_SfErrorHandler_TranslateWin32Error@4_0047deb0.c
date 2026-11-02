/* Module: vidcap30.exe
   Function: _SfErrorHandler_TranslateWin32Error@4
   Address: 0047deb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfErrorHandler_TranslateWin32Error_4(int param_1)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x7deb0  376  _SfErrorHandler_TranslateWin32Error@4 */
  iVar2 = 0;
  piVar1 = &DAT_00593ea0;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(&UNK_00593ea4 + iVar2 * 8);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_005944b0);
  return 0x80004005;
}


