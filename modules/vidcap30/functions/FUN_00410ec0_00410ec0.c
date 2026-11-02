/* Module: vidcap30.exe
   Function: FUN_00410ec0
   Address: 00410ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00410ec0(HWND param_1)

{
  if (param_1 != (HWND)0x0) {
    DestroyWindow(param_1);
  }
  _SfUnregisterClass_8("SfStatusBar",DAT_005ba298);
  return;
}


