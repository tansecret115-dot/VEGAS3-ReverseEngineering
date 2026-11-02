/* Module: vegas30.exe
   Function: FUN_004e8320
   Address: 004e8320
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e8320(HWND param_1)

{
  if (param_1 != (HWND)0x0) {
    DestroyWindow(param_1);
  }
  _SfUnregisterClass_8("SfStatusBar",DAT_006471fc);
  return;
}


